#include <iostream>
#include "Logger.h"

void Logger::SetLogLevel(int logLevel)
{
	m_LogLevel = logLevel;
}

void Logger::Error(const char* message)
{
	if (m_LogLevel >= LogLevelError)
	{
		std::cout << "[ERROR]: " << message << std::endl;
	}
}

void Logger::Warn(const char* message)
{
	if (m_LogLevel >= LogLevelWarn)
	{
		std::cout << "[WARNING]: " << message << std::endl;
	}
}

void Logger::Info(const char* message)
{
	if (m_LogLevel >= LogLevelInfo)
	{
		std::cout << "[INFO]: " << message << std::endl;
	}
}
