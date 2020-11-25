//
// Created by hugo on 25/11/2020.
//

#ifndef ERROR_HPP_
#define ERROR_HPP_

#include <string>
#include <exception>

/**
 * \brief Manages all errors encountered by the program.
 */
class Error : public std::exception {
protected:
    std::string error_tag;               ///< Error number
    std::string error_message;      ///< Error message

public:
    /** Constructor (C++ STL string, int, int).
     *  @param msg The error message
     *  @param err_num Error number
     */
    explicit
    Error(const std::string& msg, const std::string& tag):
            error_tag(tag),
            error_message(msg)
    {}

    /** Destructor.
     *  Virtual to allow for subclassing.
     */
    virtual ~Error() throw () {}

    /** Returns a pointer to the (constant) error description.
     *  @return A pointer to a const char*. The underlying memory
     *  is in possession of the Error object. Callers must
     *  not attempt to free the memory.
     */
    virtual const char* what() const throw () {
        return error_message.c_str();
    }

    /** Returns error number.
     *  @return #error_number
     */
    virtual const char* getErrorTag() const throw() {
        return error_tag.c_str();
    }
};
#endif /* ERROR_HPP_*/