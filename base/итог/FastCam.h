#pragma once
#include"grTC.h"
class FastCam :public grTC {
public:
	FastCam() {
		this->time = 0;
		this->name = "Верблюд-быстроход";
		this->chilltime = 5;
		this->runtime = 10;
		this->speed = 40;
	}
	double get_time(int dis) override;
	std::string get_res() override;
};