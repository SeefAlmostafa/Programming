using namespace std;
#include <iostream>
#include <list>
#include <string>

#define limit 40

class Enemy {
   public:
    Enemy() { cout << "Enemy Constructor" << endl; }
    static bool isClose() {
    }
    static bool isFound() {
    }
};

class Weapon {
   private:
   public:
    Weapon() {}
};

class Game {
   private:
    list<Player> players;
    string name;

   public:
    Game(string g) { this->name = g; }
    void Run() {}
    bool Lobby() {
        int max_players = Player::join();
        //..
        if (max_players < limit) {
            throw "Error";
        }
    }
};

class Player {
   private:
    string name;

   public:
    Player(string p) { this->name = p; }
    void WatchOut() {
    }
    static int join();
    void Switch_Weapon(Weapon, Weapon);
    void Assassinate();
    void Attack();
    void Heal();
    void Jump();
    void Walk();
    void Reload();
    void Fire();
    void Dive();
    void Quick_Scope();
    void Locate_Enemy();
};

int main() {
    Game Call_Of_Duty("Call Of Duty");
    Player ChessPlayer("ChessPlayer");

    Call_Of_Duty.Run();
    Call_Of_Duty.Lobby();

    while (!Enemy::isFound()) {
        ChessPlayer.Locate_Enemy();
    }
    if (Enemy::isClose() && Enemy::isFound()) {
        ChessPlayer.WatchOut();  // Watch out for players who try to kill you
        ChessPlayer.Heal();      // Heal yourself before entering any Battle
        ChessPlayer.Attack();    // Attack your opponents
        ChessPlayer.Fire();      // Shoot them Soldier
        ChessPlayer.Reload();    // Reload your weapon for the next Battle
    }
    return 0;
}
