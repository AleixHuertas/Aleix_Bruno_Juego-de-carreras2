#include <iostream>
#include <windows.h>

#define CASILLAS 50
bool gameOver = false;
char player1 = 'X';
char player2 = 'O';
int playerTurn = 1;
int tablero[CASILLAS];
int objetos;
int dado;

void tiroDado() {
	srand(time(0));
	dado = rand() % 6 + 1;
}

void iniciartablero() {
	for (int i = 1; i <= CASILLAS; i++)
	{
		tablero[i] = i;
	}
}
void tableroimprimir() {
	for (int i = 1; i <= CASILLAS; i++)
	{
		if (tablero[i] == 55)
		{
			std::cout << 'X' << ' ';
		}
		else {
			std::cout << tablero[i] << ' ';
		}
		
		
	}
}

void movimientoPlayer1() {
	tablero[dado] = 55; // x
}

int main() {
	
	tiroDado();
	iniciartablero();
	tableroimprimir();
	while (!gameOver)
	{
		system("cls");

		if (playerTurn == 1)
		{
			tiroDado();
			movimientoPlayer1();
		}
		else if (playerTurn == 2)
		{
			tiroDado();
			
		}
		tableroimprimir();
		Sleep(2000);

	}
}