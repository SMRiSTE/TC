#pragma once
#include"AirTC.h"

class Carpet : public AirTC {
public:
	Carpet(){
		this->time = 0;
		this->name = "����-������";
		this->shortdis = 0;
		this->speed = 10;
	}

	double get_time(int dis) override;
	std::string get_res() override;
};