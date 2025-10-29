#include "Game.h"
#include "Utils.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Game::Game() {
    totalPokemonToGuess = 0;
    pokemonsFound = 0;
    totalScore = 0;
    initializePokemons();

    for (size_t i = 0; i < pokemons.size(); i++) {
        availableIndexes.push_back(i);
    }

    srand(time(nullptr));

 
}

int Game::getTotalPokemonToGuess() const{
    return totalPokemonToGuess;
}

int Game::getTotalScore() const {
    return totalScore;
}

int Game::getPokemonsFound() const {
    return pokemonsFound;
}

const std::vector<Pokemon>& Game::getPokemons () const{
    return pokemons;
}

