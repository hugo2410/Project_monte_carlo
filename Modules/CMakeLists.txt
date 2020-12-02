project(Modules)

set(HEADER_FILES
        AbstractReader.h
        AbstractExpectation.h
        NormalReader.h
        UniformReader.h
        Error.hpp
        MonteCarloExpectation.h
        ExpFunc.h
        UniformDist.h
        NormalDist.h
        AbstractVariable.h
        AbstractFunc.h
        TrigoFunc.h
        PolynomlFunc.h
        )

set(SOURCE_FILES
        MonteCarloExpectation.cpp
        AbstractReader.cpp
        NormalReader.cpp
        UniformReader.cpp
        UniformDist.cpp NormalDist.cpp   AbstractFunc.cpp  TrigoFunc.cpp  PolynomlFunc.cpp  ExpFunc.cpp AbstractExpectation.cpp StatisticalMoment.cpp StatisticalMoment.h FunctReader.cpp FunctReader.h)

add_library(Modules STATIC ${SOURCE_FILES} ${HEADER_FILES})