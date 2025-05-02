cmake_minimum_required(VERSION 3.9)

# Set a name and a version number for your project:
project(raspi_stock_reporter VERSION 0.0.1 LANGUAGES CXX)

# Set CMake policies for this project

# We allow <Package>_ROOT (env) variables for locating dependencies
cmake_policy(SET CMP0074 NEW)

# Initialize some default paths
include(GNUInstallDirs)

# Define the minimum C++ standard that is required
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



# Compilation options
option(BUILD_DOCS "Enable building of documentation" ON)

# Find external dependencies
find_package(libcurl)

# compile the library
add_subdirectory(src)


# compile the application
add_subdirectory(app)

# compile the tests
include(CTest)
if(BUILD_TESTING)
  find_package(Catch2 REQUIRED)
  include(Catch)
  add_subdirectory(tests)
endif()

if(BUILD_DOCS)
  # Add the documentation
  add_subdirectory(doc)
endif()

# Add an alias target for use if this project is included as a subproject in another project
add_library(raspi_stock_reporter::raspi_stock_reporter ALIAS raspi_stock_reporter)

# Install targets and configuration
install(
  TARGETS raspi_stock_reporter
  EXPORT raspi_stock_reporter-targets
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})

install(
  EXPORT raspi_stock_reporter-targets
  FILE raspi_stock_reporterTargets.cmake
  NAMESPACE raspi_stock_reporter::
  DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/raspi_stock_reporter)

include(CMakePackageConfigHelpers)
configure_package_config_file(
  ${CMAKE_CURRENT_LIST_DIR}/raspi_stock_reporterConfig.cmake.in
  ${CMAKE_CURRENT_BINARY_DIR}/raspi_stock_reporterConfig.cmake
  INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/raspi_stock_reporter)

install(
  FILES ${CMAKE_CURRENT_BINARY_DIR}/raspi_stock_reporterConfig.cmake
  DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/raspi_stock_reporter)

export(
  EXPORT raspi_stock_reporter-targets
  FILE ${CMAKE_CURRENT_BINARY_DIR}/raspi_stock_reporterTargets.cmake
  NAMESPACE raspi_stock_reporter::)

install(
  DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/include/
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

# This prints a summary of found dependencies
include(FeatureSummary)
feature_summary(WHAT ALL)
