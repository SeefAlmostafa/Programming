using namespace std;
#include <iostream>
#include <string>
#include <sstream>  

class Time {

private:
	int total_seconds;

public:

	Time(int hours, int minutes, int seconds) {
		set_time(hours, minutes, seconds);
	}

	void set_time(int hours, int minutes, int seconds) {
		total_seconds = 0;
		set_hours(hours);
		set_minutes(minutes);
		set_seconds(seconds);
	}

	void set_hours(int hours) {
		if (hours < 0) {
			hours = 0;
		}
		total_seconds += (hours - get_hours()) * (60 * 60);
	}

	void set_minutes(int minutes) {
		if (minutes < 0) {
			minutes = 0;
		}
		total_seconds += (minutes - get_minutes()) * 60;
	}

	void set_seconds(int seconds) {
		if (seconds < 0) {
			seconds = 0;
		}
		total_seconds += (seconds - get_seconds());
	}

	int get_hours() {
		return get_total_seconds() / (60 * 60);
	}

	int get_minutes() {
		return (get_total_seconds() % (60 * 60)) / 60 ;
	}

	int get_seconds() {
		return get_total_seconds() % 60;
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
		return total_seconds;
	}
};

int main() {

	Time meeting(0,0,0);

	meeting.set_hours(2);
	meeting.set_minutes(120);
	meeting.set_seconds(1200);

	cout << "The total seconds: " << meeting.get_total_seconds() << endl;

	return 0;

}
