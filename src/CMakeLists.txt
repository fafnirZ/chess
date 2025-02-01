file(GLOB
    ENGINE_SOURCES
    "engine/**/*.cpp"
)

set(SOURCES
    main.cpp
    ${ENGINE_SOURCES}
)

# executable target
add_executable(chess ${SOURCES})