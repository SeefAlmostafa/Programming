// not finished Code

using namespace std;
#include <windows.h>

#include <iostream>
#include <string>

void SetColor(int ForgC);
void Navigation();
void Switch(int index);
void UpdateMenu();

const int IAIM = 4;
const int IAIM_SMOOTH = 3;
const int IWAL = 2;
const int ITRI = 1;
const int IRAD = 0;

int Smoothness = 1;
int M_index = 0;
int Changes = 0;

bool Aimbot = false;
bool Wallhack = false;
bool Triggerbot = false;
bool Radar = false;

string bools[2] = {"[OFF],[ON]"};

void SetColor(int ForgC) {
}

void Navigation() {
    for (;;) {
        for (int i = 2; i < 180; i++) {
            if (GetAsyncKeyState(i) & 0x8000) {
                switch (i) {
                    case 38:
                        if (M_index < 4)
                            M_index++;
                        Changes++;
                        break;
                    case 40:
                        if (M_index > 0)
                            M_index--;
                        Changes++;
                        break;
                    case 37:
                        Switch(M_index);
                        Changes++;
                        break;
                    case 39:
                        Switch(M_index);
                        Changes++;
                        break;
                }
                Sleep(200);
            }
        }
    }
}

void Switch(int index) {
    if (index == IAIM) {
        Aimbot = !Aimbot;
    }

    if (index == IAIM_SMOOTH) {
        if (GetAsyncKeyState(37)) {
            if (Smoothness > 1) {
                Smoothness--;
            }
        }

        else if (GetAsyncKeyState(39)) {
            if (Smoothness < 5) {
                Smoothness++;
            }
        }

        else if (index == IWAL) {
            Wallhack = !Wallhack;
        }

        else if (index == ITRI) {
            Triggerbot = !Triggerbot;
        }

        else if (index == IRAD) {
            Rader = !Rader;
        }

        else {
            exit(-1);
        }
    }
}

void UpdateMenu() {
    int temp = -1;
    for (;;) {
        if (temp != Changes) {
            temp = Changes;
            system("cls");
            SetColor(15);
            cout << ">> EDIT MENU DEMO HACK" << endl;
            cout << "_______________________________" << endl;
            if (M_index == IAIM) {
                SetColor(10);
                cout << "Aimbot\t\t=\t" << bools[Aimbot] << endl;
            } else {
                setColor(15);
                cout << "Aimbot\t\t=\t" << bools[Aimbot] << endl;
            }
            if (M_index == IAIM_SMOOTH) {
                SetColor(10);
                cout << " \\->Smooth\t=\t[ " << Smoothness << " ]" << endl;
            } else {
                SetColor(15);
                cout << " \\->Smooth\t=\t[ " << Smoothness << " ]" << endl;
            }
            if (M_index == IWAL) {
                SetColor(10);
                cout << "Wallhack\t=\t" << bools[Wallhack] << endl;
            } else {
                SetColor(15);
                cout << "Wallhack\t=\t" << bools[Wallhack] << endl;
            }
            if (M_index == ITRI) {
                SetColor(10);
                cout << " Triggerbot\t=\t" << bools[Triggerbot] << endl;
            } else {
                SetColor(15);
                cout << " Triggerbot\t=\t" << bools[Triggerbot] << endl;
            }
            if (M_index == IRAD) {
                SetColor(10);
                cout << " Rader\t\t=\t" << bools[Rader] << endl;
            } else {
                SetColor(15);
                cout << " Rader\t\t=\t" << bools[Rader] << endl;
            }
        }
    }
}

int main() {
    return 0;
}