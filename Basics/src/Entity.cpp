#include <iostream>
#include "Entity.h"

int Entity::x;
int Entity::y;

void Entity::Print()
{
	std::cout << x << ", " << y << std::endl;
}
