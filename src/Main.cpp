#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <future>
#include "Math_O.h"
#include "Timer.h"
#include "File_RW.h"







int main(){

	Math mathThread;
	Timer timerThread;
	FileProcessing FileThread;

	std::thread mThread([&mathThread]() {mathThread.playGame();});
	std::thread tThread([&timerThread]() {timerThread.playTimer();});
	
	
	timerThread.playTimer();
	mathThread.playGame();

	

	

	
};