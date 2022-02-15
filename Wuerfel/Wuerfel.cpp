using namespace std;
#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));
    int throws, sides;
     
    cout << "\nHow often should the dice be rolled: ";
    cin >> throws ; 
    cout << "How many sides does the dice have: ";
    cin >> sides;

    for(int i = 0; i < throws; i++){
        int roll = rand() % sides + 1;
        cout << i+1 <<". roll: " << roll << "\n";
    }
    
    cout << "\n";
    return 0;
}
