using namespace std;
#include <cmath>
#include <ctime>
#include <iostream>

int main() {
    srand(time(NULL));

    int random_number;
    int input_player1;
    int input_player2;

    random_number = rand() % 1024 + 1;
    cout << "\nComputer: i am thinking of a number between 1 and 1024" << endl;
    cout << "Who can guess it ?" << endl;

    cout << "Player1: ";
    cin >> input_player1;
    cout << "Player2: ";
    cin >> input_player2;

    int distancePlayer1 = abs(random_number - input_player1);
    int distancePlayer2 = abs(random_number - input_player2);

    if (distancePlayer1 < distancePlayer2) {
        cout << "\nplayer1 won. He is only " << distancePlayer1
             << " far from the random Number " << random_number << endl;
    }

    else if (distancePlayer1 > distancePlayer2) {
        cout << "\nPlayer2 won. He is only " << distancePlayer2
             << " far from the random Number " << random_number << endl;
    }

    else {
        cout << "draw. random Number:" << random_number << endl;
    }

    return 0;
}