# swift-cwinrt
Modeled after https://github.com/thebrowsercompany/swift-cwinrt

Projections for Windows SDK 10.0.18362 and up to date Windows App SDK.

## Workflow

1. Modify the "dependencies" in projections.json as needed;
2. Modify the "include" and "exclude" in projections.json as needed;
3. Add or remove any namespace/component must modify this projections.json file first, then other dependent modules;
4. Run generate-bingdings.ps1 in Terminal;
5. Run swift build.
