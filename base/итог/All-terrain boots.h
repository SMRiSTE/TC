#pragma once
#include "grTC.h"

class Boots :public grTC {
public:
	Boots() {
		this->time = 0;
		this->name = "Ботинки-вездеходы";
		this->chilltime = 10;
		this->runtime = 60;
		this->speed = 6;
	}
	double get_time(int dis) override;
	std::string get_res() override;
};