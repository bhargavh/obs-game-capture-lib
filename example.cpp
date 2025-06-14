#include "game_capture.h"

int main() {
	/*
		 GameCapture(int fov_width, int fov_height, int screen_width, int screen_height, const std::string& game_name);
	*/
	GameCapture capture(1920, 1080, 1920, 1080, "Example Game Window Name");
	return 0;
}