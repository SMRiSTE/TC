#include"Carpet.h"

namespace TC {
	double Carpet::get_time(int dis) {
		if (dis <= 1000) {
			this->time = dis / this->speed;
		}
		else if (1000 < dis <= 5000) {
			this->shortdis = 3;
			this->time = (dis - (dis / 100 * static_cast<double>(shortdis))) / this->speed;
		}
		else if (5000 < dis < 10000) {
			this->shortdis = 10;
			this->time = (dis - (dis / 100 * static_cast<double>(shortdis))) / this->speed;
		}
		else {
			this->shortdis = 5;
			this->time = (dis - (dis / 100 * static_cast<double>(shortdis))) / this->speed;
		}
		return this->time;
	}

	std::string Carpet::get_res() {
		return this->name + ". Время: " + std::to_string(this->time);
	}
}