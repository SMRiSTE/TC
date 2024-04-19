#pragma once
#include"AirTC.h"

class Broom : public AirTC {
public:
	Broom() {
		this->time = 0;
		this->name = "Метла";
		this->shortdis = 0;
		this->speed = 20;
	}

	double get_time(int dis) override;
	std::string get_res() override;
};