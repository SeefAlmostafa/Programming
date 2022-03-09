using namespace std;
#include <iostream>

#define WIDTH 3
#define HEIGHT 3
#define LENGTH (WIDTH * HEIGHT)

void print_1D_array(int (&_1D_array)[LENGTH]) {
    for (int i = 0; i < LENGTH; i++) {
        cout << _1D_array[i] << " ";
    }
    cout << "\n";
}

void print_2D_array(int (&_2D_array)[WIDTH][HEIGHT]) {
    for (int i = 0; i < WIDTH; i++) {
        for (int j = 0; j < HEIGHT; j++) {
            cout << _2D_array[i][j] << " ";
        }
    }
    cout << "\n";
}

void copy_to_1D_array(int (&_1D_array)[LENGTH], int (&_2D_array)[WIDTH][HEIGHT]) {
    int k = 0;
    for (int i = 0; i < WIDTH; i++) {
        for (int j = 0; j < HEIGHT; j++) {
            _1D_array[k++] = _2D_array[i][j];
        }
    }
}

void install_2D_array(int (&_2D_array)[WIDTH][HEIGHT]) {
    for (int i = 0; i < WIDTH; i++) {
        for (int j = 0; j < HEIGHT; j++) {
            _2D_array[i][j] = 0;
        }
    }
    cout << "\n";
}

int main() {
    int _2D_array[WIDTH][HEIGHT] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int _1D_array[LENGTH];

    // copy
    copy_to_1D_array(_1D_array, _2D_array);

    // print _1D_array
    print_1D_array(_1D_array);

    // reinstall (set _2D_array values to 0)
    install_2D_array(_2D_array);

    // print _2D_array
    print_2D_array(_2D_array);

    cout << "\n";
    system("pause");

}  // delete will happen here because all the arrays are in stack !

/*
    Output

    1 2 3 4 5 6 7 8 9

    0 0 0 0 0 0 0 0 0
*/