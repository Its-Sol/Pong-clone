cmake_minimum_required(VERSION 3.25)

project(Pong)

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_ttf REQUIRED)
find_package(SDL2_mixer REQUIRED)

add_executable(${PROJECT_NAME} Pong.c Video.c Controls.c)

#ALSO later include Physics.c Sound.c Enemy.c

include_directories(${SDL2_INCLUDE_DIRS})
target_include_directories(${PROJECT_NAME} PRIVATE
	include
	Headers
)

target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES} SDL2_image::SDL2_image SDL2_ttf::SDL2_ttf SDL2_mixer::SDL2_mixer)
