add_library(types
    Acceleration.cpp
    Angle.cpp
    JointLimitRange.cpp
    JointLimits.cpp
    JointState.cpp
    JointsTrajectory.cpp
    JointTransform.cpp
    Pose.cpp
    Pressure.cpp
    RigidBodyStateSE3.cpp
    Temperature.cpp
    Time.cpp
    TimeMark.cpp
    Timeout.cpp
    TransformWithCovariance.cpp
    Twist.cpp
    TwistWithCovariance.cpp
    Waypoint.cpp
    Wrench.cpp
    commands/Motion2D.cpp
    samples/BodyState.cpp
    samples/BoundingBox.cpp
    samples/DepthMap.cpp
    samples/DistanceImage.cpp
    samples/Frame.cpp
    samples/Joints.cpp
    samples/LaserScan.cpp
    samples/OrientedBoundingBox.cpp
    samples/PoseWithCovariance.cpp
    samples/Pressure.cpp
    samples/RigidBodyAcceleration.cpp
    samples/RigidBodyState.cpp
    samples/Sonar.cpp
    samples/SonarBeam.cpp
    samples/SonarScan.cpp
    samples/Temperature.cpp
)

target_include_directories(types
	PUBLIC
		$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
		$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

target_link_libraries(types
	PUBLIC
		Eigen3::Eigen
)

target_compile_features(types PUBLIC cxx_std_11)

# Install header files
install(DIRECTORY ../base
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
	FILES_MATCHING PATTERN "*.hpp"
)

# Install the binaries
install(TARGETS types EXPORT base-types-targets)

# Install pkg-config file
configure_file(base-types.pc.in base-types.pc @ONLY)
install(
	FILES ${PROJECT_BINARY_DIR}/base/base-types.pc
	DESTINATION ${PKGCONFIG_DESTINATION}
)

