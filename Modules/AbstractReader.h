//
// Created by mehdi on 24/11/20.
//

#ifndef PROJECT_MONTE_CARLO_ABSTRACTREADER_H
#define PROJECT_MONTE_CARLO_ABSTRACTREADER_H


class AbstractReader {
public:

    AbstractReader();

    virtual ~AbstractReader();
    virtual void read_file(const char *file_name) = 0;
};


#endif //PROJECT_MONTE_CARLO_ABSTRACTREADER_H
