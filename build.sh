#!/bin/bash
# cmake -S ./ -B ./build -G "Xcode" -DDOWNLOAD_IPP=ON -DDOWNLOAD_3RDPARTY=ON -DBUNDLE_OPS=ON
# cmake -S ./ -B ./build -G "Visual Studio 17 2022" -DDOWNLOAD_IPP=ON -DDOWNLOAD_3RDPARTY=ON -DBUNDLE_OPS=ON
cmake --build ./build --config Release
