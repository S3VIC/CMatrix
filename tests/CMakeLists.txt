cmake_minimum_required(VERSION 3.20)

project(appTests LANGUAGES CXX)

message( STATUS "App tests included" )

add_executable(appTest 
	test-01.cpp)

target_include_directories(appTest PRIVATE
	"../src/"
)

target_link_libraries(appTest 
	Catch2Main
	Catch2
)
