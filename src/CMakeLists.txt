file(GLOB_RECURSE
    ENGINE_SOURCES
    "engine/*.cpp"
)

set(SOURCES
    main.cpp
    ${ENGINE_SOURCES}
)

# for testing purposes
message(STATUS "-------printing sources-------")
message(STATUS "Engine Sources: ${ENGINE_SOURCES}")
message(STATUS "-------end printing sources-------")

# executable target
add_executable(chess ${SOURCES})