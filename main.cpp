#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Song{
private:
 int id;
 string title;
 string artist;
 string lyrics;

public:
    Song(int _id, const string& _title, const string& _artist, const string& _lyrics)
    : id(_id),title(_title), artist(_artist), lyrics(_lyrics) {};

    int getId() const{
    return id;
    };

    string getTitle() const{
        return title;   
    };

    string getArtist() const{
    return artist;
    };
  
    string getLyrics() const{
    return lyrics;
    };
};

int main() {    
    // TODO: Créer un vector pour stocker tes chansons


    vector<Song> songs = {
        {1, "Ultimate", "Denzel Curry", "I am the one, don't weigh a ton, don't need a gun to get respect up on the street..."},
        {2, "Clout Cobain", "Denzel Curry", "I just wanna feel myself, you want me to kill myself..."},
        {3, "Walkin", "Denzel Curry", "Walkin' with my back to the sun, keep my head to the sky..."},
        {4, "X-Wing", "Denzel Curry", "If I make that bitch an inch taller Then I upgrade to a Skywalker"},
        {5, "Sumo", "Denzel Curry", "Pocket too big, they sumo, tell me who the hottest motherfucker that you know"},
        {6, "Ricky", "Denzel Curry", "My daddy said, 'Trust no man but your brothers...'"},
        {7, "Hot Ones", "Denzel Curry", "Got a new chain, what you think I brought the strap for?"},
        {8, "Still in the Paint", "Denzel Curry ft.Bktherula, LAZER DIM 700", "I hang in the trenches with my partners countin' skrilla"},
        {9, "Wish", "Denzel Curry ft. Kiddo Marv", "And I keep a Glock, nah, it's a Glock .40"},
        {10, "Speedboat", "Denzel Curry", "Didn't go to college for a free throw"},  
    };    
    // TODO: Afficher un message de bienvenue
    
    // TODO: Boucle de jeu principale
    
    // TODO: Afficher le score final
    
    return 0;
}