#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>

class Expression {

    private:
        int type;
        std::string address;

    public:
        Expression(int type, std::string address);
        ~Expression();

        int get_type();
        std::string get_address();
};


#endif