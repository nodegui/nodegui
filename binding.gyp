{
    "includes": [],
    "targets": [
        {
            "target_name": "qtnode",
            'include_dirs': ['.', './deps/'],
            "includes": [
                "./config/application.gypi",
                "./config/moc.gypi",
                "./config/common.gypi",
                "./config/qt.gypi",
                "./config/deps.gypi",
            ],
            'dependencies': [
                # './config/deps.gypi:nodeguidep',
            ],
            'conditions':[
                ['OS=="mac"', {
                    'xcode_settings': {
                        'OTHER_LDFLAGS': ['-Wl,-rpath,@loader_path'],
                    },
                }]
            ]
        },
    ]
}
