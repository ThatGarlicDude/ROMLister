cmake_minimum_required(VERSION 3.12) # Cmake must be on version 3.12 or above to proceed.
project(romlister VERSION 0.0.4) # Start the project.

set(CMAKE_C_STANDARD 99) # C99 is required.
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")

FILE(GLOB SOURCES src/*.c) # Get all the files from the src directory.

add_executable(romlister ${SOURCES}) # Create the executable.

add_subdirectory(submodules/LibPacSet) # Include LibPacSet in the project.

target_link_libraries(romlister PRIVATE pacset) # Link it too.

install(TARGETS romlister DESTINATION /usr/local/bin) # Put the executable in the bin folder.

target_include_directories(romlister PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/headers) # Get the files in the header directory as well.
