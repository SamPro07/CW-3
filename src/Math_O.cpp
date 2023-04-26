#include <Math_O.h>




void Math::play()
{
	nCorrectNo = 0;
	nTotalNo = 5;
	for (int i = 0; i < nTotalNo; i++) 
	{
		Q1 = randomNumber(15);
		Q2 = randomNumber(20);
		Q3 = randomNumber(25);

		tempOperations = std::rand() % 3;
		switch (tempOperations)
		{
		case 0: Operations = '+'; break;
		case 1: Operations = '-'; break;
		case 2: Operations = '*'; break;
		}

		std::cout << "( " << i + 1 << " )" << std::endl;
		std::cout << Q1 << " " << Operations << " " << Q2 << " = " << std::endl;
		std::cin >> nAnswer;

		switch (Operations)
		{
		case '+': nCorrectAns = Q1 + Q2; break;
		case '-': nCorrectAns = Q1 - Q2; break;
		case '*': nCorrectAns = Q1 * Q2; break;

		}

		if (nCorrectAns == nAnswer) 
		{
			nCorrectNo++;
			std::cout << "Answer is Correct" << std::endl;
		}
		else {
			std::cout << "Answer is Not Correct" << std::endl;
			std::cout << Q1 << " " << Operations << " " << Q2 << " = " << std::endl;
			std::cout << nCorrectAns << std::endl;
		}
	}

	std::cout << "Total: " << nTotalNo << std::endl;
	std::cout << "Correct " << nCorrectNo << std::endl;
	(void)getch();
}

void Math::instructions()
{
	std::cout << "   " << std::endl;
	std::cout << "Instructions" << std::endl;
	std::cout << "   " << std::endl;
	std::cout << "1) You will be given a set of 5 questions based on basic maths" << std::endl;
	std::cout << "2) Answer all the questions " << std::endl;
	std::cout << "3) Your correct answers will be recorded and displayed at the end of the quiz " << std::endl;
	std::cout << "4) in order to pass you need to achieve 50% of the correct answer " << std::endl;

	std::cout << "Press Any Key Too Continue " << std::endl;
	(void)getch();
}

float Math::randomNumber(int nNumber)
{
	std::srand((unsigned)std::time(nullptr));
	nNumber = std::rand()%nNumber;
	return nNumber;
}

void Math::playGame()
{
	std::system("cls");

	std::cout << "                 " << std::endl;
	std::cout << " MATHS POP QUIZ  " << std::endl;
	std::cout << "                 " << std::endl;
	std::cout << "                 " << std::endl;
	std::cout << "[1] Play         " << std::endl;
	std::cout << "[2] Instructions " << std::endl;
	std::cout << "[3] Quit         " << std::endl;
	std::cout << "                 " << std::endl;
	std::cout << "Enter The Key To Choose The Option" << std::endl;
	std::cin >> options;
	
	do {

		switch (options) 
		{
		case 1:
			play();
			break;
		case 2:
			instructions();
			break;
		}

	} while (options != 3);

}
