#include <iostream>
#include <string>

using namespace std;

class Console {
    
    private:

        string name;
    
    public:

        Console() {
            this->name = "Unknown";
        }

        Console(string name) {
            this->name = name;
        }

        void setConsoleName(string name){
            this->name = name;
        }

        string getConsoleName() {
            return this->name;
        }
};

class Game: public Console {

    private:

        string name;

    public:

        Game() {
            this->name = "Unknown";
        }

        Game(string name) {
            this->name = name;
        }

        Game(string name, string console): Console(console) {
            this->name = name;
        }
        

        void setGameName(string name){
            this->name = name;

        }

        string getGameName() {
            return this->name;
        }

};

class Pokemon: public Game {

    private:

        int id;
        string name;

    public:

        Pokemon(int id, string name) {
            this->id = id;
            this-> name = name;
        }

        Pokemon(int id, string name, string game): Game(game) {
            this->id = id;
            this->name = name;
        }

        Pokemon(int id, string name, string game, string console): Game(game, console) {
            this->id = id;
            this->name = name;
        }

        void setPokemonName(string name) {
            this->name = name;
        } 

        void print() {
            cout << this->name << " [" << this->getGameName() << "] [" << this->getConsoleName() << "]" << endl;
        }

        string getPokemonName() {
            return this->name;
        }
};

int main() {
    Console c = Console("Nintendo 64");
    //c.setConsoleName("Nintendo 64");
    cout << c.getConsoleName() << endl;
    Game g = Game("Pokemon Silver", "Game Boy Color");
    //g.setGameName("Pokemon Silver");
    //g.setConsoleName("Game Boy Color");
    cout << g.getGameName() << " / " << g.getConsoleName() << endl;
    Pokemon pikachu = Pokemon(25, "Pikachu", "Pokemon Red", "Game boy");
    Pokemon bulbasaur = Pokemon(1, "Bulbasaur", "Pokemon Blue", "Game Boy");
    //pikachu.setPokemonName("Pikachu");
    //pikachu.setGameName("Pokemon Blue");
    //pikachu.setConsoleName("Game Boy");
    //cout << pikachu.getPokemonName() << " / " << pikachu.getGameName() << " / " << pikachu.getConsoleName() << endl;
    pikachu.print();
    bulbasaur.print();
    return 0;
}