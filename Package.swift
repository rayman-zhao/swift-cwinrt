// swift-tools-version: 5.10

import PackageDescription

let package = Package(
    name: "swift-cwinrt",
    products: [
        .library(name: "CWinRT", type: .dynamic, targets: ["CWinRT"]),
    ],
    targets: [
        .target(
            name: "CWinRT",
            linkerSettings: [
                .unsafeFlags(["-nostartfiles"]),
            ]
        ),
    ]
)
