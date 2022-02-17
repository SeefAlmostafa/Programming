using namespace std;
#include <cmath>
#include <ctime>
#include <iostream>

const int len = 5;

void printArray(int (&arr)[len][len]) {
    cout << "\n";
    for (int i = 0; i < len; i++) {
         for (int j = 0; j < len; j++) {
              cout << arr[i][j] << "  ";
        }
        cout << "\n";
    }
     cout << "\n\n";
}


void generateArray(int (&arr)[len][len]){
    // position in the array starts from 0-24
    int xPos;
    int yPos;
    do {
        xPos = rand() % 5;
        yPos = rand() % 5;

    } while (xPos == 2 && yPos == 2);

    arr[xPos][yPos] = 1;
    
}

int findPath(int (&arr)[len][len]){
    int count = 0;
    for (int i = 0; i < len; i++) {
         for (int j = 0; j < len ; j++) {
              if(arr[i][j] == 1){
                  count = (abs(i - 2) + abs(j - 2));
                  break; 
              }
        }
    }
    return count;
}

int main() {

    srand(time(NULL));

    int arr[len][len] = {0};

    generateArray(arr);

    int path = findPath(arr);

    printArray(arr);

    cout << "Path = " << path << endl;

    return 0;
}