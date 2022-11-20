#pragma once
#include <iostream>

  class Baraja
 {
 public:
	 int num;
	 std::string color;
	 
 };
  class Carta :public Baraja {
  public:
	  std::string DevolverCarta(Baraja&);
  };

