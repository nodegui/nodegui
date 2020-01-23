const https = require('https');

const data = JSON.stringify({
    event_type: 'on-demand-build',
    client_payload: {},
    branch: 'master',
});

const options = {
    hostname: 'api.github.com',
    port: 443,
    path: '/repos/master-atul/nodegui/dispatches',
    method: 'POST',
    headers: {
        'User-Agent': 'NodeGui github action',
        'Content-Type': 'application/json',
        'Content-Length': data.length,
    },
};

const req = https.request(options, res => {
    console.log(`statusCode: ${res.statusCode}`);
    res.on('data', d => {
        process.stdout.write(d);
    });
});

req.on('error', error => {
    console.error(error);
});

req.write(data);
req.end();
