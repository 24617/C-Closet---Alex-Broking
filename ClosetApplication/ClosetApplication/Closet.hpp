#pragma once
#include <list>
#include "Drawer.hpp"
#include <vector>
#include <float.h>
#include <cinttypes>
#include <string>
class Closet
{
public:
	Closet();
	~Closet();

private:
	std::list<Drawer*> *drawers;
	std::vector<float> size;
	std::string color;
	std::vector<float> position;
	std::int64_t capacity;
	
};


