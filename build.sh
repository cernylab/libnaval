#!/bin/bash

set -e

echo ""
echo "Building C++ library and tools..."
mkdir -p build
cd build
cmake .. "$@"
make -j$(nproc 2>/dev/null || echo 4)
cd ..

echo ""
echo "Build complete!"
echo ""
echo "Outputs:"
if [ -f build/libnaval.so ] || [ -f build/libnaval.a ]; then
    echo "  - Library: build/libnaval.so"
fi
if [ -f build/naval_cli ]; then
    echo "  - CLI tool: build/naval_cli"
else
    echo "  - CLI tool: NOT built (CLI11 missing? Run: git submodule update --init --recursive)"
fi
if ls build/naval*.so 2>/dev/null | grep -q "naval.*\.so"; then
    echo "  - Python module: $(ls build/naval*.so 2>/dev/null | head -1 | xargs basename)"
else
    echo "  - Python module: NOT built (pybind11 missing?)"
fi
echo ""

if [ -f build/libnaval.so ] || [ -f build/naval_cli ]; then
    echo "To install:"
    echo "  sudo make install -C build     # Install C++ library and CLI"
fi
if ls build/naval*.so 2>/dev/null | grep -q "naval.*\.so"; then
    echo "  pip install .                  # Install Python bindings"
fi

if [ -f build/naval_cli ]; then
    echo ""
    echo "To run CLI example:"
    echo "  ./build/naval_cli --bond A C2 N1 1.338"
fi
if ls build/naval*.so 2>/dev/null | grep -q "naval.*\.so"; then
    echo ""
    echo "To run Python example:"
    echo "  python3 examples/example.py"
fi
