#include <iostream>
#define CASILLAS 50


void tiroDado() {
	srand(time(0));
	int dado = rand() % 6 + 1;
	std::cout << dado;
}

int main() {
	char tablero[CASILLAS];
	int objetos;
	int player1, player2;
	tiroDado();
}