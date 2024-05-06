#include"Broom.h"

namespace TC {
	double Broom::get_time(int dis) {
		this->shortdis = dis;
		while (shortdis >= 10) {
			this->shortdis /= 10;
		}
		this->time = (dis - (dis / 100 * static_cast<double>(this->shortdis))) / this->speed;
		return this->time;
	}

	std::string Broom::get_res() {
		return this->name + ". Время: " + std::to_string(this->time);
	}
}