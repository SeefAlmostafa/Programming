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

	Time(int hours,int minutes,int seconds){
		set_time(hours, minutes, seconds);
	}

	void set_time(int hours, int minutes, int seconds) {
		set_hours(hours);
		set_minutes(minutes);
		set_seconds(seconds);
	}

	void set_hours(int hours) {
		if (hours < 0) {
			hours = 0;
		}
	
		else {
			this->hours = hours;
		}
	}

	void set_minutes(int minutes) {
		if (minutes < 0) {
			minutes = 0;
		}

		else {
			this->minutes = minutes;
		}
	}

	void set_seconds(int seconds) {
		if (seconds < 0) {
			seconds = 0;
		}

		else {
			this->seconds = seconds;
		}
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

int main(){

	Time meeting(6, 20, 10); // if the Minutes were 120, the hours will still be 6
							 // note: the hours should be increased to 8
							 // so the result should be (8:0:10) instead of (6:120:10)
							 // check solution on GitHub (File will be updated)

	cout << "Total Minutes:" << meeting.get_total_minutes() << endl;
	cout << "Total Seconds:" << meeting.get_total_seconds() << endl;

	cout << "The meeting starts at ";
	meeting.what_time();

	return 0;

}

