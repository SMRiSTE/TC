#pragma once
#include<string>
#include"Transport.h"

#ifdef TCDYNAMIC_EXPORTS
#define TCDYNAMIC_API __declspec(dllexport)
#else
#define TCDYNAMIC_API __declspec(dllimport)
#endif

namespace TC {
	class grTC : public Transport {
	protected:
		double time;
		double chilltime;
		int runtime;
		int speed;
	};
}