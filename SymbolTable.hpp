#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "Symbol.hpp"

class SymbolTable {

    private:
        std::vector<Symbol> symbols;

    public:
        SymbolTable();
        ~SymbolTable();

        void add_symbol(Symbol symbol);
        Symbol get_symbol_by_id(std::string id);
        bool has_symbol_with_id(std::string id);
        bool is_equivalent(SymbolTable symbol_table);
        std::vector<Symbol> get_symbols();

};


#endif