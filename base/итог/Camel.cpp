#include "Camel.h"

int Camel::get_time(int dis) {
	this->time = dis / this->speed + ((dis/this->speed/this->runtime-2)*8+this->chilltime);
	return this->time;
}

std::string Camel::get_res() {
	return this->name + ". Время: " + std::to_string(this->time);
}