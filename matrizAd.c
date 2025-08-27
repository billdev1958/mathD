#include <stdio.h>

#define N 12

int main() {
	int matriz[N][N] = {
		{0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0},
		{0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0},
		{1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0},
		{0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0},
		{0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
		{0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1},
		{0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1},
		{0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0},
		{0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1},
		{0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1, 0}
	};

	int nodo;
	printf("Ingresa el numero del nodo (0 a 11): ");
	scanf("%d", &nodo);

	if (nodo < 0 || nodo >= N) {
		printf("Nodo invalido, debe estar entre 0 y 11.\n");
		return 1;
	}

	int grado = 0;
	for (int i = 0; i < N; i++){
		if (matriz[nodo][i] == 1) {
			grado++;
		}
	}
	printf("El grado del nodo %d es: %d\n", nodo, grado);
	return 0;
}
