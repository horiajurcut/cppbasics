#include <iostream>
#include "Logger.h"

int main()
{
	Logger logger;

	logger.SetLogLevel(logger.LogLevelWarn);

	logger.Error("Something unexpected happened");
	logger.Warn("Something weird might be happening");
	logger.Info("Something happened");

	std::cin.get();
}