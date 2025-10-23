#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cctype> 

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

string normalizeString(const string& str) {
string stringNormalisee = "";
for (char c : str){
    char lowercaseChar = tolower(c);
    if (isalnum(lowercaseChar)) {
        stringNormalisee += lowercaseChar;
    }
};
return stringNormalisee;
}


int main() {  
srand(time(NULL));
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
    cout << "================================" << endl;
    cout << "  GUESS THE DENZEL SONG " << endl;
    cout << "================================" << endl;
    
    // TODO: Boucle de jeu principale
    int score = 0;
    string playerAnswer = "";
    vector<int> availableSongs;
    for (size_t  i = 0; i< songs.size(); i++){
        availableSongs.push_back(i);
    }
    for (int round = 1; round < 6; round++){
        cout << "Round " << round << "/5" <<endl;
        int randomSongIndex = rand() % availableSongs.size();
        int index = availableSongs[randomSongIndex];
        availableSongs.erase(availableSongs.begin() + randomSongIndex);
        Song currentSong = songs[index];
        cout << currentSong.getLyrics() << endl;
        cout << "Please, enter the song title: ";
        getline (std::cin,playerAnswer);
        string normalizedPlayerAnswer = normalizeString(playerAnswer);
        if (normalizeString(currentSong.getTitle()) == normalizedPlayerAnswer){
            score += 1 ;
            cout << normalizedPlayerAnswer << endl;
        }else if(normalizedPlayerAnswer == ""){
            score -= 1;
        }else{
            score -= 2;
        }
    }
    // TODO: Afficher le score final
    cout << "\n=== Partie fini ===" << endl;
    cout << "Score final : " << score << endl;
    
    
    return 0;
}