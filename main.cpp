/* To do more later */
/* Done 4/26/2014 */

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <ctime>
#include <stdio.h>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>     
#include <time.h>

using namespace std;

int main()
{
	cout << "Welcome to rock, paper, scissors!" << endl;
	cout << "The computer will choose a number, (1 - rock, 2 - paper, 3 - scissors)" <<  endl;
  cout << "Choose rock, paper, or scissors" << endl;
  string x;
	bool won;
	getline(cin, x);
	string rock = "rock";
	string paper = "paper";
	string scissors = "scissors";
	srand(time(0));

	int compchoice = rand() % 3 + 1;

	if (compchoice == 1)
	{
		cout << "The computer chose rock!\n";
	}
	else if (compchoice == 2)
	{
		cout << "The computer chose paper!\n";
	}
	else if (compchoice == 3)
	{
		cout << "The computer chose scissors!\n";
	}

	/*  Calculating choice!  */

	if (compchoice == 1 && x == rock)
	{
	cout << "You and the computer tied!\n";
	}
	if (compchoice == 1 && x == scissors)
	{
		cout << "Rock crushes scissors!\n";
		won = false;
	}
	if (compchoice == 1 && x == paper)
	{
		cout << "You killed the rock!!\n";
		won = true;
	}

	if (compchoice == 2 && x == rock)
	{
		cout << "You lost by the computer!\n";
		bool won = false;
	}
	if (compchoice == 2 && x == scissors)
	{
		cout << "You cut the paper!\n";
		won = true;
	}
	if (compchoice == 2 && x == paper)
	{
		cout << "You tied the computer!!\n";
		won = true;
	}

	if (compchoice == 3 && x == rock)
	{
		cout << "You killed the computer!\n";
		won = true;
	}
	if (compchoice == 3 && x == scissors)
	{
		cout << "You tied the computer!\n";
		won = true;
	}
	if (compchoice == 3 && x == paper)
	{
		cout << "You lost! The computer cut you in half!\n";
		won = false;
	}


	if (won == true)
	{
		cout << "You win!!\n";
	}
	else if (won == false)
	{
		"Game over!";
	}
	std::getchar();
}
