#include <iostream>

using namespace std;


class Character{

    public:
        string power;
        int age;
        string name;

};

class Show{
    private:
        string bestCharacter;
    public:
        string title;
        string creator;
        int score;
        Show(string aTitle, string aCreator,int aScore, string aBestChar){
            title = aTitle;
            creator = aCreator;
            score = aScore;
            setBestChar(aBestChar);
        }
        bool isGood(){
            if(score >= 8){
                return true;
            }
            return false;

        }
        void setBestChar(string aBestChar){
            bestCharacter = aBestChar;
        }
        string getBestChar(){
            return bestCharacter;
        }

};

int main(){

    Character character1;
    character1.name = "Cynthia";
    character1.power = "Elementalist";
    character1.age = 24;

    Character character2;
    character2.name = "Sone";
    character2.power = "Mage";
    character2.age = 46;

    cout << "Name: "<<character2.name << endl;
    cout << "Power: "<<character2.power << endl;
    cout << "Age: "<<character2.age << endl;

    cout << "\n";

    Show show1("Breaking Bad","Vince G",10,"Mike");
    Show show2("Attack On Titan","Hajime Isayama",10,"Eren");
    cout << "Show name:" << show1.title<<endl;
    cout << "Is good:" << show1.isGood()<< endl;
    cout << "Best Character:" << show1.getBestChar()<< endl;
    cout << "Show name:" << show2.title<<endl;
    cout << "Is good:" << show2.isGood()<< endl;
    cout << "Best Character:" << show2.getBestChar()<< endl;

    return 0;
}
