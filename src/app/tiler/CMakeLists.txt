project(tiler)

set(${PROJECT_NAME}_HEADERS
    scene.h
)

set(${PROJECT_NAME}_SOURCES
    main.cpp
)

add_executable(${PROJECT_NAME}
    ${${PROJECT_NAME}_SOURCES}
    ${${PROJECT_NAME}_HEADERS}
) 

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        glfw
        engine
        resource
        Boost::boost # Target for header-only dependencies
)
