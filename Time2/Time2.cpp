using namespace std;
#include <iostream>
#include <string>
#include <sstream>  

class Time {

private:
	int hours;
	int minutes;
	int seconds;

public:

	Time(int hours, int minutes, int seconds) {
		set_time(hours, minutes, seconds);
	}

	void set_time(int hours, int minutes, int seconds) {
		set_hours(hours);
		set_minutes(minutes);
		set_seconds(seconds);
	}

	Time& set_hours(int hours) {
		if (hours < 0) {
			hours = 0;
		}
		this->hours = hours;
		return *this;
	}

	Time& set_minutes(int minutes) {
		if (minutes < 0) {
			minutes = 0;
		}
		this->minutes = minutes;
		return *this;
	}

	Time& set_seconds(int seconds) {
		if (seconds < 0) {
			seconds = 0;
		}
		this->seconds = seconds;
		return *this;
	}

	int get_hours() {
		return hours;
	}

	int get_minutes() {
		return minutes;
	}

	int get_seconds() {
		return seconds;
	}

	string To_string(string seperator = "-") {
		ostringstream oss;
		oss << get_hours() << seperator << get_minutes() << seperator << get_seconds() << endl;
		return oss.str();
	}

	void what_time() {
		cout << To_string(":") << "\n";
	}

	int get_total_minutes() {
		return get_minutes() + (get_hours() * 60);
	}

	int get_total_seconds() {
		return (get_total_minutes() * 60) + get_seconds();
	}
};

int main() {

	Time meeting(6, 20, 10);

	cout << "Total Minutes:" << meeting.get_total_minutes() << endl;
	cout << "Total Seconds:" << meeting.get_total_seconds() << endl;

	meeting.set_hours(7).set_minutes(45).set_seconds(20); // it is possible now
														  // because we return *this


	cout << "The meeting starts at ";
	meeting.what_time();

	return 0;

}

