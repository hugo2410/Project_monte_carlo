//
// Created by hugo on 25/11/2020.
//

#ifndef ERROR_HPP_
#define ERROR_HPP_

#include <string>
#include <exception>
#include <iostream>

/**
 * \brief Manages all errors encountered by the program.
 */
class AbstractError : public std::exception {
protected:

public:
    /** Constructor.
     */
    explicit
    AbstractError() {}

    /** Destructor.
     *  Virtual to allow for subclassing.
     */
    virtual ~AbstractError() throw () {}

    /** Returns a pointer to the (constant) error description.
     *  @return A pointer to a const char*. The underlying memory
     *  is in possession of the AbstractError object. Callers must
     *  not attempt to free the memory.
     */
    virtual const char * what () const throw ()  {
        std::cerr<<"An exception was thrown!"<< std::endl;
        return "F't be opened!";
    }

};

struct FileError : public AbstractError{
    const char * what () const throw () override {
        return "File coudn't be opened!";
    }
};
struct VectSizeError : public AbstractError{
    const char * what () const throw () override {
        return "Vector size must be a positive integer !";
    }
};
struct VarError : public AbstractError{
    const char * what () const throw () override {
        return "Variance must a positive float number!";
    }
};
struct BoundError : public AbstractError{
    const char * what () const throw () override {
        return "Lower bound greater than upper bound!";
    }
};
struct OrderError : public AbstractError{
    const char * what () const throw () override {
        return "Order must be a striclty positive integer!";
    }
};
#endif /* ERROR_HPP_*/