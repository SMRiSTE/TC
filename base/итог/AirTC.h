#pragma once
#include<string>
#include"Transport.h"

class AirTC : public Transport {
protected:
	double time;
	int shortdis;
	int speed;
};