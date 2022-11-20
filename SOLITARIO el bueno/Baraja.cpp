#include "Baraja.h"
#include<iostream>
#include<string>
std::string Carta::DevolverCarta(Baraja& n) {
	std::string color, num,  carta;
	color = n.color;
	num = std::to_string(n.num);
	carta = num + " " + color + "\n";
	return carta;
}