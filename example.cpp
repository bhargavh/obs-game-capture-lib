#include "game_capture.h"

int main() {
    /*
        Parameters:
        - fov_width:     Width of the capture field-of-view (FOV)
        - fov_height:    Height of the capture FOV
        - screen_width:  Screen resolution width
        - screen_height: Screen resolution height
        - game_name:     The exact window name of the game
    */
	GameCapture capture(1920, 1080, 1920, 1080, "Example Game Window Name");
	cv::Mat frame = capture.get_frame();
	cv::imshow("Captured Frame", frame);
	cv::waitKey(0);
	return 0;
}
