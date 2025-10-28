#include "Pokemon.h"

int Pokemon::getId() const{
    return id;
};

int Pokemon::getHeight() const{
    return height;
}

int Pokemon::getWeight() const{
    return weight;
}

const std::string& Pokemon::getName () const{
    return name;
}

const std::vector<std::string>& Pokemon::getAbilities () const{
    return abilities;
}

const std::vector<std::string>& Pokemon::getTypes () const{
    return types;
}

const std::vector<std::string>& Pokemon::getMoves () const{
    return moves;
}
