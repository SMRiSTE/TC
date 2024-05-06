#include"Camel.h"

namespace TC {
	double Camel::get_time(int dis) {
		this->time = dis / this->speed + ((dis / static_cast<double>(this->speed) / this->runtime - 2) * 8 + this->chilltime);
		return this->time;
	}

	std::string Camel::get_res() {
		return this->name + ". Время: " + std::to_string(this->time);
	}
}