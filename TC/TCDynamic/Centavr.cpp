#include"Centavr.h"

namespace TC {
	double Centavr::get_time(int dis) {
		this->time = dis / this->speed + ((dis / static_cast<double>(this->speed) / this->runtime - 1) * 2 + this->chilltime);
		return this->time;
	}

	std::string Centavr::get_res() {
		return this->name + ". Время: " + std::to_string(this->time);
	}
}