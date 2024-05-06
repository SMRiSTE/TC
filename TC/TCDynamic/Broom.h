#pragma once
#include<string>
#include"airTC.h"

#ifdef TCDYNAMIC_EXPORTS
#define TCDYNAMIC_API __declspec(dllexport)
#else
#define TCDYNAMIC_API __declspec(dllimport)
#endif

namespace TC {
	class Broom : public AirTC {
	public:
		Broom() {
			this->time = 0;
			this->name = "Метла";
			this->speed = 20;
		}

		TCDYNAMIC_API double get_time(int dis) override;
		TCDYNAMIC_API std::string get_res() override;
	};
}