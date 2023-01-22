#include "AlgoritmosDeBusca.hpp"

int BuscaSequencial(int v[], int tam, int X) {

	int i = 0;

	while (i < tam && v[i] < X) {

		i++;

	}

	if (i < tam && v[i] == X) {

		return i;

	}

	return -1; // elemento X não está no vetor
}

int BuscaBinaria(int v[], int esquerda, int direita, int X) {

	int meio = (direita + esquerda) / 2;

	if (esquerda > direita) {

		return -1; // não encontrou

	}
	else if (v[meio] == X) {

		return meio; // encontrou

	}
	else if (v[meio] > X) {

		return BuscaBinaria(v, esquerda, meio - 1, X); // só pode estar no sub vetor da esquerda

	}
	else if (v[meio] < X) {

		return BuscaBinaria(v, meio + 1, direita, X); // só pode estar no sub vetor da direita

	}

}

// Extra

int BuscaBinariaIter(int v[], int esquerda, int direita, int X) {

	int mid = (esquerda + direita) / 2;

	while (v[mid] != X && direita > esquerda) {

		if (v[mid] > X) {

			direita = mid - 1;
			mid = (esquerda + direita) / 2;

		}
		else if (v[mid] < X) {

			esquerda = mid + 1;
			mid = (esquerda + direita) / 2;

		}

	}

	if (v[mid] == X) {

		return mid;

	}
	else {

		return -1;

	}

}