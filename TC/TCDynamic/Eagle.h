#pragma once
#include<string>
#include"airTC.h"

#ifdef TCDYNAMIC_EXPORTS
#define TCDYNAMIC_API __declspec(dllexport)
#else
#define TCDYNAMIC_API __declspec(dllimport)
#endif

namespace TC {
	class Eagle : public AirTC {
	public:
		Eagle() {
			this->time = 0;
			this->name = "Îð¸ë";
			this->shortdis = 6;
			this->speed = 8;
		}

		TCDYNAMIC_API double get_time(int dis) override;
		TCDYNAMIC_API std::string get_res() override;
	};
}