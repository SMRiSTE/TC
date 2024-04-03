#pragma once
#include<string>
#include"RACE.h"

class grTC:public RACE {
protected:
	std::string name;
	int time;
	double chilltime;
	int runtime;
	int speed;
public:
	virtual int get_time() = 0;
	virtual std::string get_res() = 0;
};