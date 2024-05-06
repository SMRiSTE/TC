#pragma once
#include<string>
#include"grTC.h"

#ifdef TCDYNAMIC_EXPORTS
#define TCDYNAMIC_API __declspec(dllexport)
#else
#define TCDYNAMIC_API __declspec(dllimport)
#endif

namespace TC {
	class Centavr :public grTC {
	public:
		Centavr() {
			this->time = 0;
			this->name = "Кентавр";
			this->chilltime = 2;
			this->runtime = 8;
			this->speed = 15;
		}
		TCDYNAMIC_API double get_time(int dis) override;
		TCDYNAMIC_API std::string get_res() override;
	};
}
