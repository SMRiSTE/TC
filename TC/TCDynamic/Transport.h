#pragma once
#include<string>

#ifdef TCDYNAMIC_EXPORTS
#define TCDYNAMIC_API __declspec(dllexport)
#else
#define TCDYNAMIC_API __declspec(dllimport)
#endif

namespace TC {
	class Transport {
	protected:
		int dis;
		std::string name;

	public:
		TCDYNAMIC_API virtual double get_time(int dis) = 0;
		TCDYNAMIC_API virtual std::string get_res() = 0;
	};
}