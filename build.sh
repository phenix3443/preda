#!/bin/bash
# cmake -S ./ -B ./build -G "Xcode" -DDOWNLOAD_IPP=ON -DDOWNLOAD_3RDPARTY=ON -DBUNDLE_OPS=ON
cmake --build ./build --config Release
