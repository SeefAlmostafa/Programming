#include <chrono>
#include <iostream>
#include <mutex>
#include <string>
#include <thread>
using namespace std;

mutex coutMutex;
timed_mutex mutex2;

void printNumbers(int max, string name) {
    for (int i = 1; i <= 100; i++) {
        if (mutex2.try_lock_for(chrono::seconds(1))) {
            cout << name.c_str() << i << endl;
            mutex2.unlock();
        }
        this_thread::sleep_for(chrono::nanoseconds(1));
    }
}

bool stop = false;
// infiniti loop
void process() {
    int x = 0;
    while (!stop) {
        x++;
    }
}

int main() {
    // thread processing1(process);
    // process();
    thread numberThread(process);
    // numberThread.join();
    //  printNumbers(100, "Main Thread: ");

    system("pause");

    stop = true;
    numberThread.join();
    return 0;
}
