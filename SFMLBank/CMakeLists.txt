cmake_minimum_required(VERSION 3.2)
project(SFMLBank)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Menu.cpp Menu.h Cashier.cpp Cashier.h Customer.cpp Customer.h Menu2.cpp Menu2.h)
add_executable(SFMLBank ${SOURCE_FILES})

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(SFMLBank ${SFML_LIBRARIES})
endif()