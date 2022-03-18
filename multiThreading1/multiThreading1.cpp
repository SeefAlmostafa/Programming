#include <chrono>
#include <iostream>
#include <string>
#include <thread>
using namespace std;

void printNumbers(int max, string name) {
    for (int i = 1; i <= 100; i++) {
        cout << name << i << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
}

// infiniti loop
void process() {
    int x = 0;
    while (true) {
        x++;
    }
}

int main() {
    thread processing1(process);
    process();
    //  thread numberThread(printNumbers, 100, "Thread 1: ");
    //  numberThread.join();
    //  printNumbers(100, "Main Thread: ");

    system("pause");
    return 0;
}
