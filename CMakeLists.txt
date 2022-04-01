cmake_minimum_required(VERSION 3.1)
project(base-types VERSION 1.0)

find_package(Eigen3 REQUIRED)

add_subdirectory(base)

# Export the library interface
install(EXPORT types-targets
	NAMESPACE base::
	DESTINATION lib/cmake/base
)

# Create and install the version file
include(CMakePackageConfigHelpers)
write_basic_package_version_file("base-types-config-version.cmake"
	COMPATIBILITY SameMajorVersion
)

install(
	FILES
		base-types-config.cmake
		${PROJECT_BINARY_DIR}/base-types-config-version.cmake
	DESTINATION
		lib/cmake/base
)

