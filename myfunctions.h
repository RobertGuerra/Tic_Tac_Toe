#pragma once

#include <iostream>
#include <iomanip>

using namespace std;

// create the board
char board[3][3] = { '1', '2', '3', '4', '5', '6', '7','8', '9' };
char newBoard[3][3] = { '1', '2', '3', '4', '5', '6', '7','8', '9' };
char player = 'X';
int numCount;

//print board to screen
void drawBoard()
{
	system("cls");
	cout << "\n\nWelcome to Tic-Tac-Toe!" << endl;
	cout << "=======================" << endl << endl;

	cout << "Here is your board below:" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << right << setw(5) << board[i][j];
		}
		cout << endl;
	}
}

// clears the board for new game
void clearBoard()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = newBoard[i][j];
		}
	}
}

// give choice to player one whether to be X or O
void playerChoice()
{
	char choice;
	cin >> choice;

	if (choice == 'X' or choice == 'x')
	{
		player = toupper(choice);

	}
	else if (choice == 'O' or choice == 'o')
	{
		player = toupper(choice);
	}
	else
	{
		cout << "Please choose X or O: ";
		playerChoice();
	}

}

// takes player input and places on corresponding board spot
void input()
{
	int numberOnBoard = 0;
	cin >> numberOnBoard;
	
	if (numberOnBoard < 0 || numberOnBoard > 9 || !cin)
	{
		cout << "Please enter a number from 1 to 9 (that is not taken): ";
		cin.clear();
		cin.ignore(numeric_limits <streamsize>::max(), '\n');
		input();
	}
	if (numberOnBoard == 1)
	{
		if (board[0][0] == '1')
			board[0][0] = player;
		else
		{
			cout << "Sorry, " << numberOnBoard << " is alraedy taken " << endl;
			cout << "Try again! ";
			input();
		}
	}
	if (numberOnBoard == 2)
	{
		if (board[0][1] == '2')
			board[0][1] = player;
		else
		{
			cout << "Sorry, " << numberOnBoard << " is alraedy taken " << endl;
			cout << "Try again! ";
			input();
		}
	}
	if (numberOnBoard == 3)
	{
		if (board[0][2] == '3')
			board[0][2] = player;
		else
		{
			cout << "Sorry, " << numberOnBoard << " is alraedy taken " << endl;
			cout << "Try again! ";
			input();
		}
	}
	if (numberOnBoard == 4)
	{
		if (board[1][0] == '4')
			board[1][0] = player;
		else
		{
			cout << "Sorry, " << numberOnBoard << " is alraedy taken " << endl;
			cout << "Try again! ";
			input();
		}
	}
	if (numberOnBoard == 5)
	{
		if (board[1][1] == '5')
			board[1][1] = player;
		else
		{
			cout << "Sorry, " << numberOnBoard << " is alraedy taken " << endl;
			cout << "Try again! ";
			input();
		}
	}
	if (numberOnBoard == 6)
	{
		if (board[1][2] == '6')
			board[1][2] = player;
		else
		{
			cout << "Sorry, " << numberOnBoard << " is alraedy taken " << endl;
			cout << "Try again! ";
			input();
		}
	}
	if (numberOnBoard == 7)
	{
		if (board[2][0] == '7')
			board[2][0] = player;
		else
		{
			cout << "Sorry, " << numberOnBoard << " is alraedy taken " << endl;
			cout << "Try again! ";
			input();
		}
	}
	if (numberOnBoard == 8)
	{
		if (board[2][1] == '8')
			board[2][1] = player;
		else
		{
			cout << "Sorry, " << numberOnBoard << " is alraedy taken " << endl;
			cout << "Try again! ";
			input();
		}
	}
	if (numberOnBoard == 9)
	{
		if (board[2][2] == '9')
			board[2][2] = player;
		else
		{
			cout << "Sorry, " << numberOnBoard << " is alraedy taken " << endl;
			cout << "Try again! ";
			input();
		}
	}
	
}

// switches between x and o
void togglePlayer()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}

// checks to see if there is a winner
char winner()
{
	// check if x wins!

	//check horizontally
	if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
		return 'X';
	if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
		return 'X';
	if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
		return 'X';
	//check vertically
	if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
		return 'X';
	if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
		return 'X';
	if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
		return 'X';
	//check Angles
	if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
		return 'X';
	if (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X')
		return 'X';


	// check if O wins!

	//check horizontally
	if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
		return 'O';
	if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
		return 'O';
	if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
		return 'O';
	//check vertically
	if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
		return 'O';
	if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
		return 'O';
	if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
		return 'O';
	//check Angles
	if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
		return 'O';
	if (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O')
		return 'O';

	
	return '/';
}

// get's player answer to play again or not
void playAgain(char &answer)
{

	cout << "\n\nWould you like to play again? ";
	cin >> answer;

	if (answer == 'Y' || answer == 'y')
	{
		clearBoard();
		exit;
	}
	else if (answer == 'n' || answer == 'N')
		exit;
	else
	{
		while (answer != 'n' || answer != 'N' || answer != 'y' || answer != 'Y' || !isalpha(answer))
		{
			cout << "Please choose Y for yes and N for no. ";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cin >> answer;
			if (answer == 'Y' || answer == 'y')
			{
				clearBoard();
				break;
			}
			else if (answer == 'n' || answer == 'N')
				break;
		}
	}
	
}

// main body of game with loop
void myGame(char answer)
{
	drawBoard();
	cout << "player one choose your letter: X or O " << endl;
	playerChoice();
	cout << "Pick a number! " << endl;
	numCount = 0;

	while (1)
	{
		
		numCount++;
		input();
		drawBoard();
		if (winner() == 'X')
		{
			cout << "X wins!" << endl;
			break;
		}
		else if (winner() == 'O')
		{
			cout << "O wins!" << endl;
			break;
		}
		else if (winner() == '/' && numCount == 9)
		{
			cout << "It's a Draw!" << endl;
			break;
		}
		else
		{
			togglePlayer();
			cout << "It's " << player << "'s " << "Turn.  Pick a number! " << endl;
		}
	}

}