#include "vstorage.h"


void VStorage::copy(const VStorage& other) {
	this->nstored = other.nstored;
	this->current = other.current;
	for (int i = 0; i < other.nstored; i++) {
		storage[i] = new Vehicle(*other.storage[i]);
	}
}
void VStorage::destroy() const {
	for (int i = 0; i < nstored; i++) {
		delete storage[i];
	}
}

VStorage::VStorage(){
	index = 0;
	current = -1;
	storage = (new Vehicle*); 
	nstored = 0;
}


VStorage::VStorage(const VStorage& other){
	copy(other);
}

VStorage::~VStorage(){
	destroy();
}


VStorage &VStorage::operator =(const VStorage &other){
	if (this != &other)
	{
		destroy();

		copy(other);
	}
	return *this;

}

void VStorage::add(const Vehicle *vp){
		current++;
		storage[current] = new Vehicle(*vp);
		nstored++;
}

Vehicle *VStorage::getfirst(){
	index = 0;
	return storage[index];
}


Vehicle *VStorage::getnext(){
	return storage[++index];
}

Vehicle* VStorage:: getend() const {
	return storage[nstored];
}