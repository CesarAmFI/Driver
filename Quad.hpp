#ifndef QUAD_H
#define QUAD_H

#include <string>

class Quad {

    private:
        std::string result;
        std::string operator_1;
        std::string operation;
        std::string operator_2;
        
    public:
        Quad(std::string result, std::string operator_1, std::string operation, std::string operator_2);
        ~Quad();

        std::string get_result();
        std::string get_operator_1();
        std::string get_operation();
        std::string get_operator_2();

};


#endif