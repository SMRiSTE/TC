#pragma once
#include<string>

class Transport {
protected:
	int dis;
	std::string name;

public:
	virtual int get_time(int dis) = 0;
	virtual std::string get_res() = 0;
};