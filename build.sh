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
echo "  - Library: build/libnaval.a (or .so)"
echo "  - CLI tool: build/naval_cli"
echo "  - Python module: build/naval*.so"
echo ""
echo "To install:"
echo "  sudo make install -C build     # Install C++ library and CLI"
echo "  pip install .                  # Install Python bindings"
echo ""
echo "To run examples:"
echo "  ./build/naval_cli A C2 N1 1.338"
echo "  python3 examples/example.py"
