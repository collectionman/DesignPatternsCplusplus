#include <iostream>

#include "Prototypes.h"

class PrototypesClient {
public:
    PrototypesClient(PrototypeA* a, PrototypeB* b) : _prototypeA(a), _prototypeB(b) {}

    Prototype* makePrototypeA(void) {
        return _prototypeA->clone();
    }

    Prototype* makePrototypeB(void) {
        return _prototypeB->clone();
    }

private:
    Prototype* _prototypeA ;
    Prototype* _prototypeB ;
} ;

int main(int argc, char* argv[]) {
    PrototypesClient* client = new PrototypesClient(new PrototypeA, new PrototypeB) ;
    Prototype* prototype = client->makePrototypeA() ;
    prototype = client->makePrototypeB() ;
} 


