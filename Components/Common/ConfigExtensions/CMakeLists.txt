SET(target_CPP
)
SET(target_INCLUDE
${CMAKE_CURRENT_SOURCE_DIR}/include/ConfigExtension.h
)

SET (target_SOURCES
${target_CPP}
${target_INCLUDE}
)

SET(target_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

SEGS_REGISTER_COMPONENT(ConfigExtensions "${target_INCLUDE_DIR}" "${target_CPP}" "${target_INCLUDE}" )

INCLUDE_DIRECTORIES(${target_INCLUDE_DIR})




