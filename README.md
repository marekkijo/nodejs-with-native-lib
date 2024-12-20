# nodejs-with-native-lib

Integration of node.js with native library.

## Basics

### Run

#### native_lib

- on Linux
```bash
cmake -Bbuild -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

- on Windows
```bash
cmake -Bbuild
cmake --build build --config Release
```

#### nodejs

```bash
cd nodejs_app
npm install

npm start
# or
npm run start_koffi_get_started
```
