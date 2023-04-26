#pragma once
#include <iostream>
#include <conio.h>
#include <time.h>
#include <cstdlib>
#include <string>
#include <ctime>




class Math 
{
private:
    
	int options;
    float Q1, Q2, Q3, nAnswer, nCorrectAns;
	int nCorrectNo, nTotalNo;
	int tempOperations;
	char Operations;
	
	
public:

	void play();
	void instructions();
	float randomNumber(int nNumber);
	void playGame();

};