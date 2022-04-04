include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

cmake_minimum_required(VERSION 3.1)
project(base-types VERSION 1.0)

find_package(Eigen3 REQUIRED)

# Where to install .cmake, .pc and .hpp files
set(CMAKE_DESTINATION      ${CMAKE_INSTALL_LIBDIR}/cmake/base-types)
set(PKGCONFIG_DESTINATION  ${CMAKE_INSTALL_LIBDIR}/pkgconfig)
set(INCLUDE_DESTINATION    ${CMAKE_INSTALL_INCLUDEDIR}/base)

add_subdirectory(base)

# Export the library interface
install(EXPORT types-targets
	NAMESPACE base::
	DESTINATION ${CMAKE_DESTINATION}
)

# Create and install the version file
write_basic_package_version_file("base-types-config-version.cmake"
	COMPATIBILITY SameMajorVersion
)

install(
	FILES
		base-types-config.cmake
		${PROJECT_BINARY_DIR}/base-types-config-version.cmake
	DESTINATION
		${CMAKE_DESTINATION}
)

