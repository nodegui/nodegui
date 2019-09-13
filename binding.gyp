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
        },
    ]
}
