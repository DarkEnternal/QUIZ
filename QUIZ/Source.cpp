#include "Header.h"
void quiz()
{
	int choise, YesCount = 0, NoCount = 0, OtherCount = 0;

	const int size = 10;
	string questions[size] = {
		"Do you like programming?",
		"D"

	};

	string options = "1. Yes\n"
		"2. No\n"
		"3. Enter your answer...\n";
	for (int i = 0; i < size; i++)
	{
		cout << "Question " << i + 1 << endl << endl;
		cout << options;
		cin >> choise;
		
	}

	switch (choise)
	{
	case 1:
		YesCount++;
		break;
	case 2:
		NoCount++;
		break;
	case 3:
		OtherCount++;
		break;
	default:
		cout << "Incorrect choise! Try again" << endl;
		cin >> choise;
		break;
	}



}