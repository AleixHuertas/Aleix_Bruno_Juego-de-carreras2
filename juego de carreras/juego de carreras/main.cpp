#include <iostream>
#define CASILLAS 50


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
	int player1, player2;
	tiroDado();
	tableroimprimir();
}