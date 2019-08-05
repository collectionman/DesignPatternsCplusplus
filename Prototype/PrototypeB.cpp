#include "PrototypeB.h" 

PrototypeB::PrototypeB(String name) : object_name(name) {
    std::cout << object_name << std::endl ;
}

PrototypeB::PrototypeB(const PrototypeB& prototype) : object_name(prototype.object_name) {} 

PrototypeB::~PrototypeB(void) {}

PrototypeB* PrototypeB::clone(void) const {
    return new PrototypeB(*this) ; 
}

String PrototypeB::objectName(void) const { 
    return object_name ; 
}
