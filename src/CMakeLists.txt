add_library(utilities
    utilities/utilities.cpp
)
target_include_directories(utilities PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)

add_library(node
    node/node.cpp
)
target_include_directories(node PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)

add_library(list
    list/list.cpp
)
target_include_directories(list PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)