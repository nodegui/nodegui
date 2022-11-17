#!/usr/bin/env node

var os = require('os');
var path = require('path');
var qodeConfig = require('@nodegui/qode');
var managePath = require('manage-path');
var qtConfig = require('../config/qtConfig');

var proc = require('child_process');

// Add Qt's bin to the path of Qode so that it can find the dll's
var alterPath = managePath(process.env);
alterPath.unshift(path.join(qtConfig.qtHome, 'bin'));

// Add Qt's lib to LD_LIBRARY_PATH so linux can find the libs when bundled with webpack
if(os.platform == 'linux') {
    var oldLD_PATH = process.env.LD_LIBRARY_PATH ?? "";
    process.env.LD_LIBRARY_PATH = oldLD_PATH + ":" + path.join(qtConfig.qtHome, 'lib');
}

var child = proc.spawn(qodeConfig.qodePath, process.argv.slice(2), {
    stdio: 'inherit',
    windowsHide: false,
    env: process.env,
});

child.on('close', function(code) {
    process.exit(code);
});

const handleTerminationSignal = function(signal) {
    process.on(signal, function signalHandler() {
        if (!child.killed) {
            child.kill(signal);
        }
    });
};

handleTerminationSignal('SIGINT');
handleTerminationSignal('SIGTERM');
