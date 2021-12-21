#include "Video.h"

Video::Video(string title) {
	if (title.empty()) {
		throw "The video has no title";
	}
	this->name = title;
	views = 0;
}

void Video::watch() {
	views++;
}
int Video::get_views() {
	return views;
}
string Video::get_name() {
	return name;
}