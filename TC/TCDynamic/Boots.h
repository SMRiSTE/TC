#pragma once
#include<string>
#include"grTC.h"

#ifdef TCDYNAMIC_EXPORTS
#define TCDYNAMIC_API __declspec(dllexport)
#else
#define TCDYNAMIC_API __declspec(dllimport)
#endif

namespace TC {
	class Boots :public grTC {
	public:
		Boots() {
			this->time = 0;
			this->name = "Ботинки-вездеходы";
			this->chilltime = 10;
			this->runtime = 60;
			this->speed = 6;
		}
		TCDYNAMIC_API double get_time(int dis) override;
		TCDYNAMIC_API std::string get_res() override;
	};
}
