#ifndef OBJECT_H
#define OBJECT_H

#include <string>
using std::string

#include "Location.h"

class Object{
    string name;
    string description; //to be displayed when the user examines
    Location* objectLocation;
};


#endif /* OBJECT_H */
