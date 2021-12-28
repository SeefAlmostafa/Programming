
using namespace std;
#include <iostream>
#include <string>
#include <vector>


class Room {

private:
	int width;
	int height;
	string color;

public:
	Room() :Room(0, 0, "white") {}
	Room(int width, int height, string color) {
		this->width = width;
		this->height = height;
		this->color = color;
	}

	void set_width(int width) {
		this->width = width;
	}

	void set_height(int height) {
		this->height = height;
	}

	void set_color(string& color) {
		this->color = color;
	}

	int get_width() {
		return width;
	}

	int get_height() {
		return height;
	}

	const string& get_color() {
		return color;
	}
};

class Apartment {

private:
	vector<Room> rooms;
	vector<Room> bathrooms;
	int floor_number;
	int apartment_number;

public:

	Apartment() {
		floor_number = apartment_number = 0;
	}

	void set_floor_number(int floor_number) {
		this->floor_number = floor_number;
	}

	void set_apartment_number(int apartment_number) {
		this->apartment_number = apartment_number;
	}

	int get_floor_number() {
		return floor_number;
	}

	int get_apartment_number() {
		return apartment_number;
	}

	void set_rooms(const vector<Room>& rooms) {
		this->rooms = rooms;
	}

	const vector<Room>& get_rooms() {
		return rooms;
	}

	void push_room(const Room& r) {
		rooms.push_back(r);
	}

	void push_rooms(const vector<Room>& r) {
		for (auto& room : r) {
			push_room(room);
		}
	}

	void set_bathrooms(const vector<Room>& bathrooms) {
		this->bathrooms = bathrooms;
	}

	const vector<Room>& get_bathrooms() {
		return bathrooms;
	}
};

class Elevators {

private:
	int width;
	int height;
	int max_people;
	int max_weight;

public:
	int get_height() {
		return height;
	}

	void set_height(int height) {
		this->height = height;
	}

	int get_max_people() {
		return max_people;
	}

	void set_max_people(int max_people) {
		this->max_people = max_people;
	}

	int get_max_weight() {
		return max_weight;
	}

	void set_max_weight(int max_weight) {
		this->max_weight = max_weight;
	}

	int get_width() {
		return width;
	}

	void set_width(int width) {
		this->width = width;
	}
};

class Building {

private:
	vector<Apartment> apartments;
	vector<Elevators> elevators;

public:
	Building() {}

	void set_apartment(const vector<Apartment>& apartments) {
		this->apartments = apartments;
	}

	const vector<Apartment>& get_apartment() {
		return apartments;
	}

	void set_elevators(const vector<Elevators>& elevators) {
		this->elevators = elevators;
	}

	const vector<Elevators>& get_elevators() {
		return elevators;
	}
};

int main() {

	vector<Room> r(6);
	vector<Apartment> a(12);

	auto it = a.begin();
	for (int i = 0; i < a.size(); i++) { it->set_rooms(r); }


	// create Elevators & Apartments to the Bank
	vector<Elevators> e(5);
	Building Bank;
	Bank.set_apartment(a);
	Bank.set_elevators(e);


	// show result
	vector<Apartment>result_apartment = Bank.get_apartment();
	vector<Elevators>result_elevators = Bank.get_elevators();
	vector<Room>result_room = it->get_rooms();


	cout << "The Bank Apartments capacity:" << result_apartment.size() << endl;
	cout << "The Bank Elevators  capacity:" << result_elevators.size() << endl;
	cout << "The Bank Rooms capacity:" << result_room.size();

	return 0;
}
