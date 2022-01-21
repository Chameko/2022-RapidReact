#!/bin/bash

echo "Building doxygen docs"
./gradlew doxygen

echo "Building sphinx docs"
sphinx-build -b html ./4788/src/docs/ ./build/docs/sphinx/
