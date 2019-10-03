#include "myfunctions.h"

int main() {

	char answer = 'Y';
	

	while (answer == 'y' || answer == 'Y')
	{
		myGame(answer);
		playAgain(answer);
	}



	system("pause");
	return 0;
}