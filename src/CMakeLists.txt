add_library(bar
    bar/bar.cpp
)
target_include_directories(bar PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
#target_link_libraries(bar PRIVATE Boost::system Boost::serialization)

add_library(vehere
    vehere/vehere.cpp
)

target_include_directories(vehere PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)