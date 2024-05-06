#pragma once
#include<string>
#include"grTC.h"

#ifdef TCDYNAMIC_EXPORTS
#define TCDYNAMIC_API __declspec(dllexport)
#else
#define TCDYNAMIC_API __declspec(dllimport)
#endif

namespace TC {
	class FastCam :public grTC {
	public:
		FastCam() {
			this->time = 0;
			this->name = "Верблюд-быстроход";
			this->chilltime = 5;
			this->runtime = 10;
			this->speed = 40;
		}
		TCDYNAMIC_API double get_time(int dis) override;
		TCDYNAMIC_API std::string get_res() override;
	};
}