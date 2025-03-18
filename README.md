# swift-cwinrt
Modeled after https://github.com/thebrowsercompany/swift-cwinrt

Projections for Windows SDK 10.0.18362 and up to date Windows App SDK.

## Workflow

1. swift-winrt 0.5.0 shoud be used for now. 0.6.0 has problems.
2. Modify the "dependencies" in projections.json as needed;
3. Modify the "include" and "exclude" in projections.json as needed;
4. Add or remove any namespace/component must modify this projections.json file first, then other dependent modules;
5. Run generate-bingdings.ps1 in Terminal;
6. Run swift build.
