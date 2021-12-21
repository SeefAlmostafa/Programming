#pragma once

using namespace std;
#include <iostream>
#include "Video.h"
#include <string>
#include <list>

class YoutubeChannel {
private:
	list<Video*> videos;
	string name;
	int subscribersCount;
	double calculate_outcome();

protected:
	string owner_name;
	double content_quality;

public:
	YoutubeChannel();
	YoutubeChannel(string, string);
	void init();
	void set_name(string);
	string get_owener_name();
	string get_name();
	int get_subscribersCount();
	int get_videos_number();
	void get_info();
	void subscribe();
	void unsubscribe();
	int get_video_views(string);
	void watch_video(string);
	int get_channel_views();
	void publich_video(string);
	virtual void practice() = 0;
	void print_publiched_video();
};
