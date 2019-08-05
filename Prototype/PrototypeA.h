#ifndef PROTOTYPE_A_H
#define PROTOTYPE_A_H

#include "Prototype.h"

class PrototypeA : public Prototype {
public:
    PrototypeA(String name = "TypeA") ;
    PrototypeA(const PrototypeA& prototype) ;
    ~PrototypeA(void) ;
    PrototypeA* clone(void) const ;
    String objectName(void) const ;
private:
    String object_name ;
} ;

#endif // PROTOTYPE_A_H