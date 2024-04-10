#pragma once
#include<string>
#include"Transport.h"

class grTC :public Transport {
protected:
	int time;
	double chilltime;
	int runtime;
	int speed;
};