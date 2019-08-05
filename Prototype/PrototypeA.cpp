#include "PrototypeA.h"

PrototypeA::PrototypeA(String name) : object_name(name) {
    std::cout << object_name << std::endl ;
}

PrototypeA::PrototypeA(const PrototypeA& prototype) : object_name(prototype.object_name) {}

PrototypeA::~PrototypeA(void) {}

PrototypeA* PrototypeA::clone(void) const {
    return new PrototypeA(*this) ; 
}

String PrototypeA::objectName(void) const { 
    return object_name ; 
}
