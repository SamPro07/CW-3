cmake_minimum_required(VERSION "3.14.0")

project("CW3_Threading")

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


add_executable(CW3_Threading 
${CMAKE_SOURCE_DIR}/src/Main.cpp
${CMAKE_SOURCE_DIR}/src/Timer.cpp
${CMAKE_SOURCE_DIR}/src/Math_O.cpp
${CMAKE_SOURCE_DIR}/src/File_RW.cpp
${CMAKE_SOURCE_DIR}/include/File_RW.h
${CMAKE_SOURCE_DIR}/include/Math_O.h
${CMAKE_SOURCE_DIR}/include/Timer.h


)



target_include_directories(CW3_Threading PUBLIC ${CMAKE_SOURCE_DIR}/src ${CMAKE_SOURCE_DIR}/include)

install(TARGETS "${PROJECT_NAME}" DESTINATION bin) #${CMAKE_INSTALL_PREFIX}/bin
install(FILES "Main.cpp" DESTINATION src)

# Group into "Source Files" and "Header Files"
    if ("${FILE}" MATCHES ".*\\.cpp")
      set(GROUP "src${GROUP}")
    elseif("${FILE}" MATCHES ".*\\.h")
      set(GROUP "include${GROUP}")
    endif()

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT CW3_Threading)

set(CMAKE_SUPPRESS_REGENERATION true)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)