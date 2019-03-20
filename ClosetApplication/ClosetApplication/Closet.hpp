#pragma once
#include <list>
#include "Drawer.hpp"
#include <vector>
#include <float.h>
#include <string>
#include <cinttypes>
class Closet
{
public:
	Closet();
	~Closet();

private:
	std::vector<float> size = { 1,1,1 };
	std::basic_string<char> color = "red";
	std::vector<float> position = { 1,1,1 };
	std::list<Drawer*> *drawers;
	std::int64_t capacity = 20;
	
};


