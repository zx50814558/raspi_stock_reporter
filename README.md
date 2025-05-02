# Welcome to Raspi Stock Reporter

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![GitHub Workflow Status](https://img.shields.io/github/actions/workflow/status/zx50814558/raspi_stock_reporter/ci.yml?branch=main)](https://github.com/zx50814558/raspi_stock_reporter/actions/workflows/ci.yml)
[![codecov](https://codecov.io/gh/zx50814558/raspi_stock_reporter/branch/main/graph/badge.svg)](https://codecov.io/gh/zx50814558/raspi_stock_reporter)

# Prerequisites

Building Raspi Stock Reporter requires the following software installed:

* A C++17-compliant compiler
* CMake `>= 3.9`
* libcurl
* Doxygen (optional, documentation building is skipped if missing)
* The testing framework [Catch2](https://github.com/catchorg/Catch2) for building the test suite

# Building Raspi Stock Reporter

The following sequence of commands builds Raspi Stock Reporter.
It assumes that your current working directory is the top-level directory
of the freshly cloned repository:

```
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build .
```

The build process can be customized with the following CMake variables,
which can be set by adding `-D<var>={ON, OFF}` to the `cmake` call:

* `BUILD_TESTING`: Enable building of the test suite (default: `ON`)
* `BUILD_DOCS`: Enable building the documentation (default: `ON`)



# Testing Raspi Stock Reporter

When built according to the above explanation (with `-DBUILD_TESTING=ON`),
the C++ test suite of `Raspi Stock Reporter` can be run using
`ctest` from the build directory:

```
cd build
ctest
```


# Documentation

Raspi Stock Reporter provides a Doxygen documentation. You can build
the documentation locally by making sure that `Doxygen` is installed on your system
and running this command from the top-level build directory:

```
cmake --build . --target doxygen
```

The web documentation can then be browsed by opening `doc/html/index.html` in your browser.
