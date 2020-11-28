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
        UniformDist.cpp UniformDist.h NormalDist.cpp NormalDist.h AbstractVariable.h AbstractFunc.cpp AbstractFunc.h TrigoFunc.cpp TrigoFunc.h PolynomlFunc.cpp PolynomlFunc.h ExpFunc.cpp ExpFunc.h)

add_library(Modules STATIC ${SOURCE_FILES} ${HEADER_FILES})