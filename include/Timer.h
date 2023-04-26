#pragma once
#include <mutex>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>




class Timer
{
private:
	std::mutex timerMutex;
	int Hours;
	int Minuites;
	int Seconds;
	int H;
	int M;
	int S;
	char timeOfPlace[20];


public:

	void playTimer();
	void ProcessTime(int sec);

	void test1(int sec);
	void test2();
};