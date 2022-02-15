using namespace std;
#include <iostream>
#include <string>

int main(){
    unsigned int Petya,Vasya,Tonya;
    int len;
    cin >> len;
    unsigned int res = 0;

    try{
        for(int i = 0; i < len; i++){
            cin >> Petya >> Vasya >> Tonya; 
            if((Petya + Vasya + Tonya > 3)){
                throw (string) "Wrong Input, Only 0 or 1 can be entered";
            }
            res += (Petya + Vasya + Tonya >= 2);
        }
    }

    catch(string& e){
        cout << e << endl;
    }

    cout << "Result:" << res << endl;

    return 0;
}

/*
#test case 1:
3
1 1 0
1 1 1
1 0 0
Result:2

#test case 2:
3
1 2 3
Wrong Input, Only 0 or 1 can be entered
Result:0

#test case 3:
3
1 1 1
1 1 1
0 0 0
Result:2

#test case 4:
3  
0 1 0
0 1 1
0 0 0
Result:1

#test case 5:
3
1 0 0
0 0 0
0 0 1
Result:0

#test case 6:
3
1 1 1 
1 1 1
1 1 1
Result:3
*/