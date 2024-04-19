#include"Centavr.h"

double Centavr::get_time(int dis) {
	this->time = dis / this->speed + ((dis / this->speed / this->runtime -1) * 2 + this->chilltime);
	return this->time;
}

std::string Centavr::get_res() {
	return this->name + ". Время: " + std::to_string(this->time);
}