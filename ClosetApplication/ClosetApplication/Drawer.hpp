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
	std::vector<float> size = { 1,1,1 };
	std::basic_string<char> color = "red";
};

