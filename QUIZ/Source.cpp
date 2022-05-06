#include "Header.h"
void quiz()
{
	int choise, YesCount = 0, NoCount = 0, OtherCount = 0;
	

	const int size = 5;
	string otherAnswer[size] = {};
	string questions[size] = {
		"Do you like programming?",
		"Do you like your programming teacher?",
		"Does this teacher claim the status of the best teacher?",
		"Do you plan to continue your studies?",
		"Did you like it?"
	};

	string options = "1. Yes\n"
		"2. No\n"
		"3. Enter your answer...\n";
	for (int i = 0; i < size; i++)
	{
		cout << "Question " << i + 1 << endl << endl;
		cout << questions[i] << endl;
		
		cout << options;
		cin >> choise;

		if (choise == 3)
		{
			cout << "Enter ur answer: ";
			cin >> otherAnswer[i];
		}
		
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