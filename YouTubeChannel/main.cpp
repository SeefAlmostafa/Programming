
#include "GamingChannel.h"

int main() {

	GamingChannel _Warzone("Call of Duty", "Seef Almostafa");
	try {
		int days = 9000;
		// practice before publiching for a better content-quality
		while (days) {
			_Warzone.practice();
			_Warzone.subscribe();
			days--;
		}

		// 200 unsubscribtions
		for (int i = 0; i < 200; i++) {
			_Warzone.unsubscribe();
		}

		// publich some videos
		_Warzone.publich_video("funny kill");
		_Warzone.publich_video("stream fighting with a gun");
		_Warzone.publich_video("streaming Airbort warzone");
		_Warzone.publich_video("Me against all the players in the game!");
	}
	catch (const char* msg) {
		cout << msg << endl;
	}

	// some videos are viewed
	try {
		for (int i = 0; i < 100000; i++) {
			_Warzone.watch_video("stream fighting with a gun");
			_Warzone.watch_video("funny kill");
			_Warzone.watch_video("streaming Airbort warzone");
			_Warzone.watch_video("Me against all the players in the game!");
		}
		//_Warzone.watch_video(""); // throw a mistake "no video was found"
	}
	catch (const char* msg) {
		cout << msg << endl;
	}

	catch (...) {
		cout << "Ops an Exception is thrown" << endl;
	}

	_Warzone.get_info();

	system("pause");
	return 0;
}
/*

output:
Channel Name:Call of Duty
Owner Name:Seef Almostafa
Subs:8800
Content quality:90
name:funny kill
views: 100000
name:stream fighting with a gun
views: 100000
name:streaming Airbort warzone
views: 100000
name:Me against all the players in the game!
views: 100000

total Outcome from youtube:400 $
*/