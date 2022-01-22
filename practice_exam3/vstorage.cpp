#include "vstorage.h"

VStorage::VStorage(){
	current = 0;
	*storage = new Vehicle();
	nstored = ++current;
}


VStorage::VStorage(const VStorage& other){
	nstored = other.nstored;
	current = other.current;
}

VStorage::~VStorage(){
	delete* storage;
}


VStorage &VStorage::operator =(const VStorage &other){
	if (this != &other)
	{
		delete  *storage;

		current = other.current;
	}
	return *this;

}

void VStorage::add(const Vehicle *vp){
	if (storage != nullptr) {
		*storage[int(getnext())] = *vp;
	}
	else cerr << "No storage" << endl;
}

Vehicle *VStorage::getfirst() const{
	return storage[0];
}

Vehicle *VStorage::getnext() const{
	if (current < 0) {
		cerr << "storage:Out of range" << endl;
		exit(-1);
	}
	return storage[current + 1];
}
