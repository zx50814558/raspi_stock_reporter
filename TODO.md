This TODO list is automatically generated from the cookiecutter-cpp-project template.
The following tasks need to be done to get a fully working project:


* Push to your remote repository for the first time by doing `git push origin main`.
* Make sure that the following software is installed on your computer:
  * A C++-17-compliant C++ compiler
  * CMake `>= 3.9`
  * The testing framework [Catch2](https://github.com/catchorg/Catch2)
  * Adapt your list of external dependencies in `CMakeLists.txt` and `raspi_stock_reporterConfig.cmake.in`.
    You can e.g.
    * Link your library or applications to your dependency. For this to work, you need
      to see if your dependency exports targets and what their name is. As this is highly
      individual, this cookiecutter could not do this for you.
    * Add more dependencies in analogy to `libcurl`
    * Make dependencies requirements by adding `REQUIRED` to `find_package()`
    * Add version constraints to dependencies by adding `VERSION` to `find_package()`
    * Make a dependency a pure build time dependency by removing it from `raspi_stock_reporterConfig.cmake.in`
* Make sure that doxygen is installed on your system, e.g. by doing `sudo apt install doxygen`
  on Debian or Ubuntu.
* Enable the integration with `codecov.io` by heading to the [Codecov.io Website](https://codecov.io),
  log in (e.g. with your Github credentials) and enable integration for your repository. In order to do
  so, you need to select it from the list of repositories (potentially re-syncing with GitHub). Then, head
  to the "Settings" Tab and select "Global Upload Token". Here, you should select the "not required" option.
