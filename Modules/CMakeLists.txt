project(Modules)

set(HEADER_FILES
        AbstractReader.h
        NormalReader.h
        UniformReader.h
        Error.hpp
        )

set(SOURCE_FILES
        AbstractReader.cpp
        NormalReader.cpp
        UniformReader.cpp
        )

add_library(Modules STATIC ${SOURCE_FILES} ${HEADER_FILES})