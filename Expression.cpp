#include "Expression.hpp"

Expression::Expression(int type, std::string address) {
    this->type = type;
    this->address = address;
}

Expression::~Expression() {

}

int Expression::get_type() {
    return this->type;
}

std::string Expression::get_address() {
    return this->address;
}