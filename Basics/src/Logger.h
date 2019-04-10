#pragma once

class Logger {
public:
	int LogLevelError = 0;
	int LogLevelWarn = 1;
	int LogLevelInfo = 2;

private:
	int m_LogLevel = LogLevelInfo;

public:
	void SetLogLevel(int logLevel);

	void Error(const char* message);

	void Warn(const char* message);

	void Info(const char* message);
};

