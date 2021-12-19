#include "SymbolTable.hpp"

SymbolTable::SymbolTable() {
    std::vector<Symbol> symbols;
}

SymbolTable::~SymbolTable() {

}

void SymbolTable::add_symbol(Symbol symbol) {
    this->symbols.push_back(symbol);
}

Symbol SymbolTable::get_symbol_by_id(std::string id) {
    for (Symbol symbol : this->symbols) {
        if (symbol.get_id() == id) return symbol;
    }
    throw new std::exception();
}

bool SymbolTable::has_symbol_with_id(std::string id) {
    for (Symbol symbol : this->symbols) {
        if (symbol.get_id() == id) return true;
    }
    return false;
}

bool SymbolTable::is_equivalent(SymbolTable symbol_table) {
    std::vector<std::string> equivalents;
    for (Symbol symbol_1 : get_symbols()) {
        for (Symbol symbol_2 : symbol_table.get_symbols()) {
            if ((symbol_1.get_type() == symbol_2.get_type()) && std::find(equivalents.begin(), equivalents.end(), symbol_2.get_id()) == equivalents.end()) {
                equivalents.push_back(symbol_2.get_id());
            }
        }
    }
    return equivalents.size() == get_symbols().size();
}

std::vector<Symbol> SymbolTable::get_symbols() {
    return this->symbols;
} 

