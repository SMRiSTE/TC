#include"Boots.h"

namespace TC {
	double Boots::get_time(int dis) {
		this->time = dis / this->speed + ((dis / static_cast<double>(this->speed) / this->runtime - 1) * 5 + this->chilltime);
		return this->time;
	}

	std::string Boots::get_res() {
		return this->name + ". Время: " + std::to_string(this->time);
	}
}