#include "player.h"
#include <iostream>
#include <stdexcept>
#include <string>

int main(int argc, char** argv) {
	try {
		/*if (argc != 2) {
			throw std::logic_error{ "Not enough arguments" };
		}*/

		Player play{ "C:\\Users\\Hardborn\\Desktop\\错误分析报告日志与截图\\错误分析报告日志与截图\\8.30日错误日志\\媒体文件\\广汽菲克JEEP30秒.mp4" };
		play();
	}

	catch (const std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return -1;
	}

	return 0;
}
