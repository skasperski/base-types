cmake_minimum_required(VERSION 3.9)
project(base-types
	VERSION 2.0.0
	DESCRIPTION "Basic types for robotic infrastructures."
)

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

find_package(Eigen3 REQUIRED)

# Where to install .cmake, .pc and .hpp files
set(CMAKE_DESTINATION      ${CMAKE_INSTALL_LIBDIR}/cmake/base-types)
set(PKGCONFIG_DESTINATION  ${CMAKE_INSTALL_LIBDIR}/pkgconfig)

add_subdirectory(base)

# Export the library interface
install(EXPORT base-types-targets
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

