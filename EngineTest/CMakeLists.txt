cmake_minimum_required(VERSION "3.18.3")

project("EngineTest" VERSION "1.0")

option(USE_MYMATH "Use math implementation" ON)

configure_file("EngineTestConfig.h.in" "EngineTestConfig.h")
if(USE_MYMATH)
    add_subdirectory("MathFunctions")
    list(APPEND EXTRA_LIBS "MathFunctions")
    list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/MathFunctions")
endif()

add_executable("${PROJECT_NAME}" "EngineTest.cpp")

target_link_libraries("EngineTest" PUBLIC ${EXTRA_LIBS})

target_include_directories("EngineTest" PUBLIC "${PROJECT_BINARY_DIR}" ${EXTRA_INCLUDES})

install (TARGETS "${PROJECT_NAME}" DESTINATION bin) #${CMAKE_INSTALL_PREFIX}/bin
install (FILES "EngineTest.cpp" DESTINATION src)    #${CMAKE_INSTALL_PREFIX}/src
