#include "GamingChannel.h"

GamingChannel::GamingChannel(string name, string owner_name) :
	YoutubeChannel(name, owner_name) {}

void GamingChannel::practice() {
	this->content_quality += 0.01;
}