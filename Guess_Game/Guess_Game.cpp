using namespace std;
#include <iostream>
#include <ctime>

int main() {
    int max, secretNumber, guessNumber, triesNr = 0;

    srand(time(NULL));
    cout << "\nEnter the maximum number in the list:";
    cin >> max;
    
    secretNumber = rand() % max + 1;

    if (secretNumber < 1) {
        exit(-1);
    }

    cout << "Hey, i am thinking of a number between 1 and " << max << endl;
    do {
        cout << "Guess My number:";
        cin >> guessNumber;

        if (guessNumber < secretNumber) {
            cout << "Your Number is too Low" << endl;
        }

        if (guessNumber > secretNumber) {
            cout << "Your Number is too high" << endl;
        }

        ++triesNr;

        if (triesNr == 10) {
            cout << "Game Over, the secret number was:" << secretNumber << endl;
            break;
        }

    } while (guessNumber != secretNumber);

    if (guessNumber == secretNumber) {
        cout << "Bravo, you found my number in " << triesNr << " tries" << endl;
    }

    return 0;
}
