#include "Lista.h"
#include "Baraja.h"
#include<iostream>
#include<string>
void Lista::AddM(Baraja carta) {
	Node* nuevo = new Node();
	nuevo->data = carta;
	if (Mazo == nullptr) {
		nuevo->next = nullptr;
		Mazo = nuevo;
	}
	else
	{
		Node* sig = Mazo;
		while (sig->next!=nullptr)
		{
			sig = sig->next;
		}
		sig->next = nuevo;
	}
}
void Lista::AddG1(Baraja carta) {
	Node* nuevo = new Node();
	nuevo->data = carta;
	if (G1 == nullptr) {
		nuevo->next = nullptr;
		G1 = nuevo;
	}
	else
	{
		Node* sig = G1;
		while (sig->next != nullptr)
		{
			sig = sig->next;
		}
		sig->next = nuevo;
	}
}
void Lista::AddG2(Baraja carta) {
	Node* nuevo = new Node();
	nuevo->data = carta;
	if (G2 == nullptr) {
		nuevo->next = nullptr;
		G2 = nuevo;
	}
	else
	{
		Node* sig = G2;
		while (sig->next != nullptr)
		{
			sig = sig->next;
		}
		sig->next = nuevo;
	}
}
void Lista::AddG3(Baraja carta) {
	Node* nuevo = new Node();
	nuevo->data = carta;
	if (G3 == nullptr) {
		nuevo->next = nullptr;
		G3 = nuevo;
	}
	else
	{
		Node* sig = G3;
		while (sig->next != nullptr)
		{
			sig = sig->next;
		}
		sig->next = nuevo;
	}
}
void Lista::AddG4(Baraja carta) {
	Node* nuevo = new Node();
	nuevo->data = carta;
	if (G4 == nullptr) {
		nuevo->next = nullptr;
		G4 = nuevo;
	}
	else
	{
		Node* sig = G4;
		while (sig->next != nullptr)
		{
			sig = sig->next;
		}
		sig->next = nuevo;
	}
}
void Lista::AddG5(Baraja carta) {
	Node* nuevo = new Node();
	nuevo->data = carta;
	if (G5 == nullptr) {
		nuevo->next = nullptr;
		G5 = nuevo;
	}
	else
	{
		Node* sig = G5;
		while (sig->next != nullptr)
		{
			sig = sig->next;
		}
		sig->next = nuevo;
	}
}
void Lista::AddG6(Baraja carta) {
	Node* nuevo = new Node();
	nuevo->data = carta;
	if (G6 == nullptr) {
		nuevo->next = nullptr;
		G6 = nuevo;
	}
	else
	{
		Node* sig = G6;
		while (sig->next != nullptr)
		{
			sig = sig->next;
		}
		sig->next = nuevo;
	}
}
void Lista::AddG7(Baraja carta) {
	Node* nuevo = new Node();
	nuevo->data = carta;
	if (G7 == nullptr) {
		nuevo->next = nullptr;
		G7 = nuevo;
	}
	else
	{
		Node* sig = G7;
		while (sig->next != nullptr)
		{
			sig = sig->next;
		}
		sig->next = nuevo;
	}
}

void Lista::DevolverCartaGrupo(int grupo, int p, Baraja& carta) {
	Node* buscar = new Node(); 
	DevolverNodo(buscar, grupo); 
	Buscar(buscar,carta,p);
	
}
void Lista::Buscar(Node*& nodo, Baraja& carta, int p) {
	for (int i = 0; i < p; i++) {
		nodo = nodo->next; 
	}
	if(nodo!=nullptr)
		carta = nodo->data; 
	else {
		carta.color = "N";
		carta.num = 0;
	}
}

bool Lista::CompararCarta(Baraja c1, Baraja c2) {
	if (c2.num - c1.num == 1) {
		if (c1.color != c2.color) {
			return true;
		}
		else {
			return false;
		}
	}
	else if (c2.num == 0) {
		return true;
	}
	else {
		return false; 
	}
}

void Lista::CambiarCarta( int go, int gd, int po, int pd, int cmo) {
	Node* grupo1 = new Node(); Node* grupo2 = new Node();
	DevolverNodo(grupo1, go);
	DevolverNodo(grupo2, gd);
	Node* aux1 = grupo1; 
	Node* aux2 = grupo2; 
	Node* aux3 = almacenador; 
	Node* aux4 = new Node(); 
	Node* aux5 = new Node(); 
	for (int d = 0; d < pd; d++) {
		aux2 = aux2->next; 
	}
	aux4 = aux2;
	for (int o = po; o < cmo; o++) {
		if (aux3->data.color == "") {
			aux3->data = aux1->data;
			aux3->next = nullptr; 
		}
		else {
			while (aux3->next!=nullptr)
			{
				aux3=aux3->next;
			}
			aux5->data = aux1->data; 
			aux5->next = nullptr; 
			aux3->next = aux5; 
		}
		aux1 = aux1->next;
	}
	Node* aux6 = almacenador;
	while (aux6->next != nullptr) {
		aux6 = aux6->next; 
	}
	aux6->next = aux4;
	aux2 = almacenador;
	if (grupo2 != nullptr) {
		while (grupo2->data.num - aux2->data.num != 1) {
			grupo2 = grupo2->next;
		}
		grupo2->next = aux2;
	}
	else
		switch (gd)
		{
		case 1:
		{
			G1 = aux2; 
			break; 
		}
		case 2:
		{
			G2 = aux2;
			break;
		}
		case 3:
		{
			G3 = aux2;
			break;
		}
		case 4:
		{
			G4 = aux2;
			break;
		}
		case 5:
		{
			G5 = aux2;
			break;
		}
		case 6:
		{
			G6 = aux2;
			break;
		}
		case 7:
		{
			G7 = aux2;
			break;
		}
		}
	almacenador = new Node(); 
}

void Lista::DeleteNodo(int p,int g) {
	int c = 0;
	Node* grupo = new Node();
	DevolverNodo(grupo, g); 
	Node* borrar = grupo;
	Node* ant = nullptr;
	while (c != p) {
		c++;
		ant = borrar;
		borrar = borrar->next;
	}
	if (ant == nullptr) {
		switch (g)
		{
		case 1:
		{
			G1 = G1->next;
			break;
		}
		case 2:
		{
			G2 = G2->next;
			break;
		}
		case 3:
		{
			G3 = G3->next;
			break;
		}
		case 4:
		{
			G4 = G4->next;
			break;
		}
		case 5:
		{
			G5 = G5->next;
			break;
		}
		case 6:
		{
			G6 = G6->next;
			break;
		}
		case 7:
		{
			G7 = G7->next;
			break;
		}
		case 8:
		{
			Mazo = Mazo->next;
			break;
		}
		}
	}
	else {
		ant->next = borrar->next;
		delete borrar;
	}
}

void Lista::DevolverNodo(Node*& nodo, int grupo) {
	switch (grupo)
	{
	case 1: {
		nodo = G1;
		break;
	}
	case 2: {
		nodo = G2;
		break;
	}
	case 3: {
		nodo = G3;
		break;
	}
	case 4: {
		nodo = G4;
		break;
	}
	case 5: {
		nodo = G5;
		break;
	}
	case 6: {
		nodo = G6;
		break;
	}
	case 7: {
		nodo = G7;
		break;
	}
	case 8: {
		nodo = Mazo;
		break;
	}
	}
}

void Lista::ImprimirGo(System::String^& imprimir, int go, int dif) {
	Node* grupo = new Node();
	Baraja carta;
	DevolverNodo(grupo, go);
	for (int i = 0; i < dif; i++) {
		if (grupo != nullptr) {
			DevolverCartaGrupo(go, i, carta);
			imprimir += System::Convert::ToString(carta.num) + gcnew System::String(carta.color.c_str()) + "\n";
			grupo = grupo->next;
		}
		else {
			break; 
		}
	}
	
	
}
void Lista::ImprimirGd(System::String^& imprimir, int gd, int sum) { 
	Baraja carta; 
	for (int i = 0; i < sum; i++) {
		DevolverCartaGrupo(gd, i, carta);
		imprimir += System::Convert::ToString(carta.num) + gcnew System::String(carta.color.c_str()) + "\n"; 
	}
}

void Lista::RecorrerMazo(System::String^& imprimir) {
	Node* mazo = Mazo; 
	Node* aux1 = mazo; 
	Node* aux2 = aux1->next; 
	while (aux2->next!=nullptr)
	{
		aux2 = aux2->next; 
	}
	Node* aux3 = new Node(); 
	aux3->data = aux1->data; 
	aux2->next = aux3; 
	Mazo = Mazo->next;
	imprimir = Mazo->data.num.ToString() + gcnew System::String(Mazo->data.color.c_str()); 
}
