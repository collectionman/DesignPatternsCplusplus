#ifndef PROTOTYPE_B_H
#define PROTOTYPE_B_H

#include "Prototype.h"

class PrototypeB : public Prototype {
public:
    PrototypeB(String name = "TypeB") ;
    PrototypeB(const PrototypeB& prototype) ;
    ~PrototypeB(void) ;
    PrototypeB* clone(void) const ;
    String objectName(void) const ;
private:
    String object_name ;
} ;

#endif // PROTOTYPE_B_H