#include <iomanip>
#include<iostream>
#include"Broomstick.h"

double Broom::get_time(int dis) {
	std::string strnum;
	strnum = dis;
	shortdis = strnum[0];
	this->time = (dis - (this->dis / 100 * shortdis)) / this->speed;
	std::cout << std::fixed << std::setprecision(2);
	return this->time;
}

std::string Broom::get_res() {
	return this->name + ". Время: " + std::to_string(this->time);
}