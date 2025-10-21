#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Song{
private:
 string title;
 string artist;
 string lyrics;

public:
    Song(const string& _title, const string& _artist, const string& _lyrics)
    : title(_title), artist(_artist), lyrics(_lyrics) {};

    string getTitle(){
        return title;   
    };
    void setTitle(string _title){
        title = _title;
    };

    string getArtist(){
    return artist;
    };
    void setArtist(string _artist){
        artist = _artist;
    };
    
    string getLyrics(){
    return lyrics;
    };
    void setLyrics(string _lyrics){
    lyrics = _lyrics;
    };

};

int main() {
    // TODO: Définir ta structure Song ici
    
    // TODO: Créer un vector pour stocker tes chansons
    
    // TODO: Ajouter 5-10 chansons manuellement
    
    // TODO: Afficher un message de bienvenue
    
    // TODO: Boucle de jeu principale
    
    // TODO: Afficher le score final
    
    return 0;
}