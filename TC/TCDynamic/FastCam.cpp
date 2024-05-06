#include"FastCam.h"

namespace TC {
	double FastCam::get_time(int dis) {
		this->time = (dis / static_cast<double>(this->speed)) + ((dis / this->speed / this->runtime - 2) * 8) + (this->chilltime + 6.5);
		return this->time;
	}

	std::string FastCam::get_res() {
		return this->name + ". Время: " + std::to_string(this->time);
	}
}