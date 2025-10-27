#ifndef POKEMON_H    
#define POKEMON_H
#include <string>
#include <vector>

class Pokemon{
private:
 int id;
 int height;
 int weight;
 std::string name;
 std::vector<std::string> abilities;
 std::vector<std::string> types;
 std::vector<std::string> moves;

public:
     Pokemon(int _id, int _height, int _weight, 
            const std::string& _name,
            const std::vector<std::string>& _abilities,
            const std::vector<std::string>& _types,
            const std::vector<std::string>& _moves)
        : id(_id), name(_name), height(_height), weight(_weight), 
          abilities(_abilities), types(_types), moves(_moves) {}

 int getId() const;
 int getHeight() const;
 int getWeight() const;
 const std::string& getName() const;
 const std::vector<std::string>& getAbilities() const;
 const std::vector<std::string>& getTypes() const;
 const std::vector<std::string>& getMoves() const;


  
};
#endif