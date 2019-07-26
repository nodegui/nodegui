{
    "includes": [
        "./config/application.gypi",
        "./config/common.gypi",
        "./config/qt.gypi",
        "./config/deps.gypi",
        "./config/moc.gypi",
    ],
    "targets": [{
        "target_name": "qtnode",
        # 'type': 'shared_library',
        'include_dirs': ['.']
    }]
}
