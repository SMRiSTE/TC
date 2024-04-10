#include"FastCam.h"

int FastCam::get_time(int dis) {
	this->time = dis / this->speed + ((dis / this->speed / this->runtime - 2) * 6.5 + this->chilltime);
	return this->time;
}

std::string FastCam::get_res() {
	return this->name + ". Время: " + std::to_string(this->time);
}