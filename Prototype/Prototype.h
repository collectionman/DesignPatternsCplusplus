#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include <iostream>
#include <string>

#define interface struct 

typedef std::string String ;

interface Prototype {
    virtual ~Prototype(void) {}
    virtual Prototype* clone(void) const = 0 ;
    virtual String objectName(void) const = 0 ;
} ;

#endif // PROTOTYPE_H