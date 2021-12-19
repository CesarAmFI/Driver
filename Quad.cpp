#include "Quad.hpp"
        
Quad::Quad(std::string result, std::string operator_1, std::string operation, std::string operator_2) {
    this->result = result;
    this->operator_1 = operator_1;
    this->operation = operation;
    this->operator_2 = operator_2;
}

Quad::~Quad() {

}

std::string Quad::get_result() {
    return this->result;    
}

std::string Quad::get_operator_1() {
    return this->operator_1;
}

std::string Quad::get_operation() {
    return this->operation;
}

std::string Quad::get_operator_2() {
    return this->operator_2;
}