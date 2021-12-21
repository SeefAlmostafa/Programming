
#include "YoutubeChannel.h"

YoutubeChannel::YoutubeChannel(string name, string owner_name) {
	this->name = name;
	this->owner_name = owner_name;
	init();
}
YoutubeChannel::YoutubeChannel() {
	init();
}

void YoutubeChannel::init() {
	subscribersCount = 0;
	content_quality = 0;
}
void YoutubeChannel::set_name(string name) {
	this->name = name;
}
string YoutubeChannel::get_owener_name() {
	return owner_name;
}
string YoutubeChannel::get_name() {
	return name;
}
int YoutubeChannel::get_subscribersCount() {
	return subscribersCount;
}
void YoutubeChannel::get_info() {
	cout << "Channel Name:" << name << endl;
	cout << "Owner Name:" << owner_name << endl;
	cout << "Subs:" << subscribersCount << endl;
	cout << "Content quality:" << content_quality << endl;
	print_publiched_video();
	// money from youtube
	double outcome = calculate_outcome();
	cout << "\ntotal Outcome from youtube:" << outcome << " $" << endl << endl;
}
void YoutubeChannel::subscribe() {
	subscribersCount++;
}
void YoutubeChannel::unsubscribe() {
	if (subscribersCount != 0)
		subscribersCount--;
}
int YoutubeChannel::get_videos_number() {
	return  int(videos.size());
}
void YoutubeChannel::publich_video(string title) {
	videos.push_back(new Video(title));
}
double YoutubeChannel::calculate_outcome() {
	int views = get_channel_views();
	return double(views) / 1000.0;
}

void YoutubeChannel::practice() {
	content_quality++;
}
int YoutubeChannel::get_video_views(string title) {

	for (auto it = videos.begin(); it != videos.end(); it++) {
		if ((*it)->get_name() == title) {
			return (*it)->get_views();
		}
	}
	throw "no video was found !";
}
int YoutubeChannel::get_channel_views() {
	int views = 0;
	for (auto it = videos.begin(); it != videos.end(); it++) {
		views += (*it)->get_views();
	}
	return views;
}
void YoutubeChannel::print_publiched_video() {
	for (auto it = videos.begin(); it != videos.end(); it++) {
		cout << "name:" << (*it)->get_name() << endl << "views: " << (*it)->get_views() << endl;
	}
}

void YoutubeChannel::watch_video(string title) {
	for (auto& it : videos) {
		if (it->get_name() == title) {
			it->watch();
			return;
		}
	}
	throw "no video was found !";
}