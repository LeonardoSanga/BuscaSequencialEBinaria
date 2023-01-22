#include <iostream>
#include <chrono>

#include "AlgoritmosDeBusca.hpp"

#define TAMANHO 100

using namespace std;
using namespace std::chrono;

int main() {

	int v[TAMANHO] = { -130, -97, -82, -42, -39, - 36, -29, -15, -14, -8, -1, 3, 4, 10 , 20, 21, 22, 24, 29, 31, 34, 37, 38, 47, 50, 55,
		56, 57, 58, 63, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78,  80, 85,  99 };
	int elementoBuscado;

	// Busca Sequencial

	cout << "Busca Sequencial no vetor ordenado" << endl;

	auto comeco = steady_clock::now();
	elementoBuscado = v[BuscaSequencial(v, TAMANHO, 29)];
	auto fim = steady_clock::now();

	auto tempo = fim - comeco;

	cout << "Busca do elemento 29: " << tempo.count() << " ns" << " / Presente\n";

	comeco = steady_clock::now();
	elementoBuscado = v[BuscaSequencial(v, TAMANHO, 99)];
	fim = steady_clock::now();

	tempo = fim - comeco;

	cout << "Busca do elemento 99: " << tempo.count() << " ns" << " / Presente\n";

	comeco = steady_clock::now();
	elementoBuscado = v[BuscaSequencial(v, TAMANHO, 34)];
	fim = steady_clock::now();

	tempo = fim - comeco;

	cout << "Busca do elemento 34: " << tempo.count() << " ns" << " / Presente\n";

	comeco = steady_clock::now();
	elementoBuscado = v[BuscaSequencial(v, TAMANHO, 20)];
	fim = steady_clock::now();

	tempo = fim - comeco;

	cout << "Busca do elemento 20: " << tempo.count() << " ns" << " / Presente\n";

	comeco = steady_clock::now();
	elementoBuscado = v[BuscaSequencial(v, TAMANHO, 56)];
	fim = steady_clock::now();

	tempo = fim - comeco;

	cout << "Busca do elemento 56: " << tempo.count() << " ns" << " / Presente\n";

	// No caso do vetor não conter o elemento, a função retorna -1 e a saída do cout é o elemento de posição - 1do vetor, ou seja, lixo
	
	comeco = steady_clock::now();
	elementoBuscado = v[BuscaSequencial(v, TAMANHO, 61)];
	fim = steady_clock::now();

	tempo = fim - comeco;

	cout << "Busca do elemento 61: " << tempo.count() << " ns" << " / Ausente\n\n";

	// Busca Binária recursiva

	cout << "Busca Binaria recursiva no vetor ordenado" << endl;

	comeco = steady_clock::now();
	elementoBuscado = v[BuscaBinaria(v, 0, 9, 29)];
	fim = steady_clock::now();

	tempo = fim - comeco;
	cout << "Busca do elemento 29: " << tempo.count() << " / Presente\n";

	comeco = steady_clock::now();
	elementoBuscado = v[BuscaBinaria(v, 0, 9, 99)];
	fim = steady_clock::now();

	tempo = fim - comeco;
	cout << "Busca do elemento 99: " << tempo.count() << " / Presente\n";

	comeco = steady_clock::now();
	elementoBuscado = v[BuscaBinaria(v, 0, 9, 34)];
	fim = steady_clock::now();

	tempo = fim - comeco;
	cout << "Busca do elemento 34: " << tempo.count() << " / Presente\n";

	comeco = steady_clock::now();
	elementoBuscado = v[BuscaBinaria(v, 0, 9, 20)];
	fim = steady_clock::now();

	tempo = fim - comeco;
	cout << "Busca do elemento 20: " << tempo.count() << " / Presente\n";

	comeco = steady_clock::now();
	elementoBuscado = v[BuscaBinaria(v, 0, 9, 56)];
	fim = steady_clock::now();

	tempo = fim - comeco;
	cout << "Busca do elemento 56: " << tempo.count() << " / Presente\n";

	// No caso do vetor não conter o elemento, a função retorna -1 e a saída do cout é o elemento de posição - 1 do vetor, ou seja, lixo
	comeco = steady_clock::now();
	elementoBuscado = v[BuscaBinaria(v, 0, 9, 61)];
	fim = steady_clock::now();

	tempo = fim - comeco;
	cout << "Busca do elemento 61: " << tempo.count() << " / Ausente\n\n";
	
	// Extra: Busca Binária iterativa

	cout << "Extra: Busca Binaria iterativa no vetor ordenado" << endl;

	comeco = steady_clock::now();
	elementoBuscado = v[BuscaBinariaIter(v, 0, 9, 29)];
	fim = steady_clock::now();

	tempo = fim - comeco;
	cout << "Busca do elemento 29: " << tempo.count() << " / Presente\n";

	comeco = steady_clock::now();
	elementoBuscado = v[BuscaBinariaIter(v, 0, 9, 99)];
	fim = steady_clock::now();

	tempo = fim - comeco;
	cout << "Busca do elemento 99: " << tempo.count() << " / Presente\n";

	comeco = steady_clock::now();
	elementoBuscado = v[BuscaBinariaIter(v, 0, 9, 34)];
	fim = steady_clock::now();

	tempo = fim - comeco;
	cout << "Busca do elemento 34: " << tempo.count() << " / Presente\n";

	comeco = steady_clock::now();
	elementoBuscado = v[BuscaBinariaIter(v, 0, 9, 20)];
	fim = steady_clock::now();

	tempo = fim - comeco;
	cout << "Busca do elemento 20: " << tempo.count() << " / Presente\n";

	comeco = steady_clock::now();
	elementoBuscado = v[BuscaBinariaIter(v, 0, 9, 56)];
	fim = steady_clock::now();

	tempo = fim - comeco;
	cout << "Busca do elemento 56: " << tempo.count() << " / Presente\n";

	// No caso do vetor não conter o elemento, a função retorna -1 e a saída do cout é o elemento de posição - 1 do vetor, ou seja, lixo
	comeco = steady_clock::now();
	elementoBuscado = v[BuscaBinariaIter(v, 0, 9, 61)];
	fim = steady_clock::now();

	tempo = fim - comeco;
	cout << "Busca do elemento 61: " << tempo.count() << " / Ausente\n";;

	return 0;
}