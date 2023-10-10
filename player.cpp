#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum TEAM {REAL_MADRID, ATELTI};
class Player{

    private:
        int age;
        string sport;
        TEAM team;
        string name; // ranges from 1 - 10

    public:

        Player(string name, int age, string sport, TEAM team)
        {
            this->name = name; // ranges from 1 - 10
            this->age = age;
            this->sport = sport;
            this->team = team;
        }
        Player();

        string getName(){return name;}
        string getSport(){return sport;}
        TEAM getTeam(){return team;}
        int getAge(){return age; }


        /*
        Exercise 1:

        remove the last Player that has a team of REAL_MADRID
        */
       static void removeLastPlayerFromRealMadrid(vector<Player> &vec){ // second to last player

       }

    /*
    Exercise 2:
    
    Combine vectors of players into one vector. alternate between the first parameter vector and the second parameter vector BUT go through the second parameter vector backwards

    ASSUME vectors always have the same length!

    Example: 
    v1 = <apu, jil, leo>
    v2 = <bob, brad, jude>

    result = <apu, jude, jil, brad, leo, anthony>
    */
       static vector<Player> combine(vector<Player> v1, vector<Player> v2){
        vector<Player> result;

      return result;
       }
    
};


void showVector(vector<Player> v){
    cout << "{ ";
    for(auto myIterator = v.begin(); myIterator != v.end(); myIterator++){
        // cout << "Speed: " << myIterator->getSpeed() << " Age: " << myIterator->getAge() << " sport: " << myIterator->getSport() << " Team: " << myIterator->getTeam();
        cout << myIterator->getName() ;
        if(myIterator != v.end() - 1){
            cout << ", " ;
        }
    }
    cout << "}" << endl;
}

int main(){
    // Player(int speed, int age, string sport, string team)
    Player atleti1 = Player("Grizi", 21, "soccer", ATELTI);
    Player atleti2 = Player("Depay", 25, "soccer", ATELTI);
    
    Player realMadrid1 = Player("Jude", 27, "soccer", REAL_MADRID);
    Player realMadrid2 = Player("Modric", 34, "soccer", REAL_MADRID);
    


    vector<Player> playerVector = {atleti1,realMadrid1, realMadrid2, atleti2};

    cout << "Before removing last Real Madrid Player: " << endl << endl;
    showVector(playerVector);

    cout << "After removing last Real Madrid Player: " << endl << endl;
    Player::removeLastPlayerFromRealMadrid(playerVector);
   showVector(playerVector);

    // vector<Player> vec1 = {atleti1, atleti2}; // <"Grizi", "Depay">
    // vector<Player> vec2 = {realMadrid1, realMadrid2}; // < "Jude", "Modric">
    // cout << "After combining: " << endl;
    // vector<Player> result = Player::combine(vec1, vec2); // result should be: <"Grizi", "Modric", "Depay", "Jude"
    // showVector(result);
}

