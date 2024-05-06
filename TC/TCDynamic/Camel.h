#pragma once
#include<string>
#include"grTC.h"

#ifdef TCDYNAMIC_EXPORTS
#define TCDYNAMIC_API __declspec(dllexport)
#else
#define TCDYNAMIC_API __declspec(dllimport)
#endif

namespace TC {
	class Camel :public grTC {
	public:
		Camel() {
			this->time = 0;
			this->name = "Верблюд";
			this->chilltime = 5;
			this->runtime = 30;
			this->speed = 10;
		}
		TCDYNAMIC_API double get_time(int dis) override;
		TCDYNAMIC_API std::string get_res() override;
	};
}
