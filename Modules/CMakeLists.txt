project(Modules)

set(HEADER_FILES
        AbstractReader.h
        AbstractExpectation.h
        NormalReader.h
        UniformReader.h
        AbstractError.h
        MonteCarloExpectation.h
        FunctReader.h
        ExpFunc.h
        UniformDist.h
        NormalDist.h
        AbstractVariable.h
        AbstractFunc.h
        TrigoFunc.h
        PolynomFunc.h
        CentralLimitThm.h
        )

set(SOURCE_FILES
        MonteCarloExpectation.cpp
        AbstractReader.cpp
        NormalReader.cpp
        UniformReader.cpp
        UniformDist.cpp
        FunctReader.cpp
        NormalDist.cpp   AbstractFunc.cpp  TrigoFunc.cpp PolynomFunc.cpp ExpFunc.cpp AbstractExpectation.cpp StatisticalMoment.cpp StatisticalMoment.h CentralLimitThm.cpp)

add_library(Modules STATIC ${SOURCE_FILES} ${HEADER_FILES})