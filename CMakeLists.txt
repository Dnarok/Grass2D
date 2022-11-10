cmake_minimum_required(VERSION 3.21)

project(grass VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(dependencies)

set(GRASS_SOURCE_DIR
	${CMAKE_CURRENT_SOURCE_DIR}/source
)
set(GRASS_SOURCE
	${GRASS_SOURCE_DIR}/main.cpp
)

set(GRASS_INCLUDE_DIR
	${CMAKE_CURRENT_SOURCE_DIR}/include
)
set(GRASS_INCLUDE

)

add_executable(
	grass
	${GRASS_SOURCE} ${GRASS_INCLUDE}
)

target_link_libraries(
	grass
	PUBLIC ImGui-SFML::ImGui-SFML
)