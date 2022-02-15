using namespace std;
#include <iostream>

int main(){
    int year = 0; // first year
    int s,b;     // s = sam's weight, b = weight of Bob
    cout << "Enter the weight of sam:";
    cin >> s;
    cout << "Enter the weight of Bob:";
    cin >> b;

    while(s <= b){ // as long sam's wight <=  Bob's weight
        s *= 3;    // then keep counting years
        b *= 2;                     
        ++year;
    }
    cout <<"Years:"<< year << endl; 
    return 0;
}

/*
Test case 1:
Enter the weight of sam:4
Enter the weight of Bob:7
Years:2

Test case 2:
Enter the weight of sam:4
Enter the weight of Bob:9
Years:3

Test case 3:
Enter the weight of sam:1
Enter the weight of Bob:1
Years:1
*/