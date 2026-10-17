// swift-tools-version: 6.4

import PackageDescription

let package = Package(
    name: "swift-cwinrt",
    products: [
        .library(name: "CWinRT", type: .dynamic, targets: ["CWinRT"])
    ],
    targets: [
        .target(
            name: "CWinRT"
        )
    ]
)
