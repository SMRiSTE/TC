#include"Eagle.h"

namespace TC {
	double Eagle::get_time(int dis) {
		this->time = (dis - (dis / 100 * static_cast<double>(shortdis))) / this->speed;
		return this->time;
	}

	std::string Eagle::get_res() {
		return this->name + ". Время: " + std::to_string(this->time);
	}
}