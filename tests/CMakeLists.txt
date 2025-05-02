add_executable(tests tests.cpp raspi_stock_reporter_t.cpp)
target_link_libraries(tests PUBLIC raspi_stock_reporter Catch2::Catch2)

# allow user to run tests with `make test` or `ctest`
catch_discover_tests(tests)
