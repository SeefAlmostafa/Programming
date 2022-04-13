#include <chrono>
#include <iostream>
#include <map>
#include <string>
#include <thread>
using namespace std;

void RefreshForecast(map<string, int> forecastMap) {
    while (true) {
        for (auto& item : forecastMap) {
            item.second++;
            cout << item.first << " - " << item.second << "\n";
        }
        cout << "\n";
        this_thread::sleep_for(2000ms);
    }
}

int main() {
    map<string, int> forecastMap = {
        {"New York", 15},
        {"Hamburg", 20},
        {"vancouver", 30}};

    thread bgWorker(RefreshForecast, forecastMap);
    cin.ignore();
    return 0;
}