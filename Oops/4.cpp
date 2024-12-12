#include<iostream>
using namespace std;
class player{
    private:
        int age;
        int score;
        bool alive;
        int health;
    
    public:
        int getage(){
            return age;
        }
        int getscore(){
            return score;
        }
        int gethealth(){
            return health;
        }
        int isAlive(){
            return alive;
        }
        void setage(int age){
            this->age=age;
        }
        void sethealth(int health){
            this->health=health;
        }
        void setscore(int score){
            this->score=score;
        }
        void setisAlive(bool alive){
            this->alive=alive;
        }
};
int main(){
    player mishu;
    
    mishu.setage(19);
    mishu.sethealth(100);
    mishu.setisAlive(true);
    mishu.setscore(20);

    player divyansh;

    divyansh.setage(20);
    divyansh.sethealth(90);
    divyansh.setisAlive(false);
    divyansh.setscore(25);
}