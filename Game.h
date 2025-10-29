#ifndef GAME_H
#define GAME_H

#include <vector>
#include <string>
#include "Pokemon.h"

class Game {

private : 
    int totalPokemonToGuess;
    int pokemonsFound;
    int totalScore;
    std::vector<Pokemon> pokemons;
    std::vector<int> availableIndexes;

    void initializePokemons();
    Pokemon selectRandomPokemon();
    Pokemon* findPokemonByName(const std::string& name);
    void playPokemon();
    bool checkAnswer(const std::string& answer, const Pokemon& target);

    void displayFeedback(const Pokemon& guessed, const Pokemon& target);
    bool checkTypes(const Pokemon& p1, const Pokemon& p2);
    int compareHeight(const Pokemon& p1, const Pokemon& p2);
    int compareWeight(const Pokemon& p1, const Pokemon& p2);
    int compareAbilities(const Pokemon& p1, const Pokemon& p2);
    void updateScore(int attemptNumber);

public:

    Game();
    int getTotalPokemonToGuess() const ;
    int getPokemonsFound() const;
    int getTotalScore () const;
    const std::vector<Pokemon>& getPokemons() const;
    void start();

    
};
#endif