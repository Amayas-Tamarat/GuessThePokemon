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
    void setId(int _id){
        id = _id;
    }

    string getTitle() const{
        return title;   
    };
    void setTitle(const string& _title){
        title = _title;
    };

    string getArtist() const{
    return artist;
    };
    void setArtist(const string& _artist){
        artist = _artist;
    };
    
    string getLyrics() const{
    return lyrics;
    };
    void setLyrics(const string& _lyrics){
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