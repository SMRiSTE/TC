#include <iomanip>
#include<iostream>
#include"Eagle.h"

double Eagle::get_time(int dis) {
	this->time = (dis - (this->dis / 100 * shortdis)) / this->speed;
	std::cout << std::fixed << std::setprecision(2);
	return this->time;
}

std::string Eagle::get_res() {
	return this->name + ". Время: " + std::to_string(this->time);
}