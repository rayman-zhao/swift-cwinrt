# swift-cwinrt
Modeled after https://github.com/thebrowsercompany/swift-cwinrt

## Workflow

1. swift-winrt 0.5.0 shoud be used for now. 0.6.0 has problems.
2. Modify the "dependencies" in projections.json as needed;
3. Modify the "include" and "exclude" in projections.json as needed;
4. Add or remove any namespace/component must modify this projections.json file;
5. run generate-bingdings.ps1 in Terminal;
6. run swift build.
