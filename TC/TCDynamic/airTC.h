#pragma once
#include<string>
#include"Transport.h"

#ifdef TCDYNAMIC_EXPORTS
#define TCDYNAMIC_API __declspec(dllexport)
#else
#define TCDYNAMIC_API __declspec(dllimport)
#endif

namespace TC {
	class AirTC : public Transport {
	protected:
		double time;
		int shortdis;
		int speed;
	};
}