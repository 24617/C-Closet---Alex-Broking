#pragma once
#include <list>
#include "Clothing.hpp"
#include <vector>
#include <float.h>
#include <string>
class Drawer
{
public:
	Drawer();
	~Drawer();
private:
	std::list<Clothing*> *clothing;
	std::vector<float> size;
	std::string color;
	std::vector<float> position;
	std::int64_t capacity;
};

