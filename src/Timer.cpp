#include <Timer.h>


void Timer::ProcessTime(int sec) 
{
	clock_t Wait;
	Wait = clock() + sec * CLOCKS_PER_SEC;
	while (clock() < Wait) {}

}


void Timer::playTimer() 
{
	
	timeOfPlace[19];

	std::cout << "Enter The Current Hour of The Day/Night" << std::endl;
	std::cin >> Hours;
	std::cout << "Enter The Current Minuites of That Hour" << std::endl;
	std::cin >> Minuites;
	std::cout << "Enter The Current Seconds of That Minuites" << std::endl;
	std::cin >> Seconds;
	std::lock_guard<std::mutex>lock(timerMutex);
	
	for (H = Hours; H < 13; H++) 
	{
		if (M = 59) 

			for (M = Minuites; M < 60; M++) 
			{
              if(S = 59)
				  for (S = Seconds; S < 60; S++)
				  {
					  std::cout << "\t\t\t\n\t\t\t\t\t\t\t" << H << ":" << M << ":" << S << std::endl;
					  ProcessTime(1);
					  system("cls");
				  }
		    }
	}
	getchar();

}