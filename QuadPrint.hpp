#ifndef QUADPRINT_H
#define QUADPRINT_H

#include <string>

#include "Quad.hpp"
#include "QuadType.hpp"

class QuadPrint {

    public:
        QuadPrint();
        ~QuadPrint();

        QuadType resolve_type(Quad quad);
        std::string resolve_string(Quad quad);

};


#endif