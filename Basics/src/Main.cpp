#include <iostream>
#include "Logger.h"
#include "Entity.h"

extern int e_Variable;

int main()
{
	Logger logger;

	logger.SetLogLevel(logger.LogLevelWarn);

	logger.Error("Something unexpected happened");
	logger.Warn("Something weird might be happening");
	logger.Info("Something happened");

	std::cout << e_Variable << std::endl;

	// Entity e;
	// e.x = 2;
	// e.y = 3;

	// Entity e1 = { 5, 8 };
	// Entity e1;
	// e1.x = 5;
	// e1.y = 8;

	Entity::x = 9;
	Entity::y = 10;

	Entity en;
	en.Print();

	std::cin.get();
}