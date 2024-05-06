#pragma once
#include<string>
#include"airTC.h"

#ifdef TCDYNAMIC_EXPORTS
#define TCDYNAMIC_API __declspec(dllexport)
#else
#define TCDYNAMIC_API __declspec(dllimport)
#endif

namespace TC {
	class Carpet : public AirTC {
	public:
		Carpet() {
			this->time = 0;
			this->name = "Ковёр-самолёт";
			this->shortdis = 0;
			this->speed = 10;
		}

		TCDYNAMIC_API double get_time(int dis) override;
		TCDYNAMIC_API std::string get_res() override;
	};
}