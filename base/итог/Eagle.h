#pragma once
#include"AirTC.h"

class Eagle : public AirTC {
public:
	Eagle() {
		this->time = 0;
		this->name = "���";
		this->shortdis = 6;
		this->speed = 8;
	}

	double get_time(int dis) override;
	std::string get_res() override;
};