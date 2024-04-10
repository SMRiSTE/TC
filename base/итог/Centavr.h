#pragma once
#include"grTC.h"
class Centavr :public grTC {
public:
	Centavr() {
		this->time = 0;
		this->name = "Кентавр";
		this->chilltime = 2;
		this->runtime = 8;
		this->speed =15;
	}
	int get_time(int dis) override;
	std::string get_res() override;
};