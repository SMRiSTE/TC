#include"All-terrain boots.h"
double Boots::get_time(int dis) {
	this->time = dis / this->speed + ((dis / this->speed / this->runtime - 1) * 5 + this->chilltime);
	return this->time;
}

std::string Boots::get_res() {
	return this->name + ". Время: " + std::to_string(this->time);
}