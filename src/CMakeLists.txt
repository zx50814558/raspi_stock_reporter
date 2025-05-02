add_library(raspi_stock_reporter raspi_stock_reporter.cpp)
target_include_directories(raspi_stock_reporter PUBLIC
  $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/>
  $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
