#pragma once
#include "Baraja.h"
 class Lista
{
	 struct Node
	 {
		 Baraja data;
		 Node* next;
	 };
public:
	//nodos
	Node* Mazo = nullptr; Node* G1 = nullptr; Node* G2 = nullptr; Node* G3 = nullptr; Node* G4 = nullptr;
	Node* G5 = nullptr; Node* G6 = nullptr; Node* G7 = nullptr;
	//metodos
	void AddM(Baraja);
	void AddG1(Baraja);
	void AddG2(Baraja);
	void AddG3(Baraja);
	void AddG4(Baraja);
	void AddG5(Baraja);
	void AddG6(Baraja);
	void AddG7(Baraja);
	void DevolverCartaGrupo(int grupo, int p, Baraja& carta);

	void Buscar(Node*& nodo, Baraja& carta,int p); 

	bool CompararCarta(Baraja c1, Baraja c2);
	void CambiarCarta( int go, int gd, int po, int pd, int cm); 

	void ImprimirGo(System::String^&, int go, int dif);
	void ImprimirGd(System::String^&, int gd, int sum); 

	void DeleteNodo(int, int);

	void RecorrerMazo(System::String^&); 

private:
	Node* almacenador = new Node(); 
	void DevolverNodo(Node*&, int grupo);
};

