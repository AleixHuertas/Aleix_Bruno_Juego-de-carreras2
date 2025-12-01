#include <iostream>
#define CASILLAS 50
bool gameOver = false;
char player1 = 'X';
char player2 = 'O';
int playerTurn = 1;

void tiroDado() {
	srand(time(0));
	int dado = rand() % 6 + 1;
}

void tableroimprimir() {
	for (int i = 1; i <= CASILLAS; i++)
	{
		std::cout << i << " ";
		if (i == 20 || i == 37)
		{
			std::cout << '\n';
		}
	}
}

int main() {
	char tablero[CASILLAS];
	int objetos;
	tiroDado();
	tableroimprimir();
	while (!gameOver)
	{
		if (playerTurn == 1)
		{

		}
		else if (playerTurn == 2)
		{

		}
	}
}