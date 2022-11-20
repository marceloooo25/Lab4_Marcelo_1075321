#pragma once
#include<sstream>
#include<iostream>
#include"Baraja.h"
#include"Lista.h"
#include<stdlib.h>
#include<time.h>
Lista lista;
Baraja arreglo[52]; 
namespace SOLITARIO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_Mazo;
	protected:
	private: System::Windows::Forms::Label^ lbl_G6;
	private: System::Windows::Forms::Label^ lbl_G5;
	private: System::Windows::Forms::Label^ lbl_G3;
	private: System::Windows::Forms::Label^ lbl_G2;
	private: System::Windows::Forms::Label^ lbl_G4;
	private: System::Windows::Forms::Label^ lbl_G7;
	private: System::Windows::Forms::Label^ lbl_G1;
	private: System::Windows::Forms::Button^ btn_repartir;
	private: System::Windows::Forms::Button^ btn_mover;
	private: System::Windows::Forms::TextBox^ txt_Go;

	private: System::Windows::Forms::TextBox^ txt_posicion;
	private: System::Windows::Forms::Label^ lbl_posicion;
	private: System::Windows::Forms::Label^ lbl_grupo;
	private: System::Windows::Forms::Button^ btn_recm;
	private: System::Windows::Forms::TextBox^ txt_GD;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_Mazo = (gcnew System::Windows::Forms::Label());
			this->lbl_G6 = (gcnew System::Windows::Forms::Label());
			this->lbl_G5 = (gcnew System::Windows::Forms::Label());
			this->lbl_G3 = (gcnew System::Windows::Forms::Label());
			this->lbl_G2 = (gcnew System::Windows::Forms::Label());
			this->lbl_G4 = (gcnew System::Windows::Forms::Label());
			this->lbl_G7 = (gcnew System::Windows::Forms::Label());
			this->lbl_G1 = (gcnew System::Windows::Forms::Label());
			this->btn_repartir = (gcnew System::Windows::Forms::Button());
			this->btn_mover = (gcnew System::Windows::Forms::Button());
			this->txt_Go = (gcnew System::Windows::Forms::TextBox());
			this->txt_posicion = (gcnew System::Windows::Forms::TextBox());
			this->lbl_posicion = (gcnew System::Windows::Forms::Label());
			this->lbl_grupo = (gcnew System::Windows::Forms::Label());
			this->btn_recm = (gcnew System::Windows::Forms::Button());
			this->txt_GD = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl_Mazo
			// 
			this->lbl_Mazo->AutoSize = true;
			this->lbl_Mazo->Location = System::Drawing::Point(29, 29);
			this->lbl_Mazo->Name = L"lbl_Mazo";
			this->lbl_Mazo->Size = System::Drawing::Size(46, 17);
			this->lbl_Mazo->TabIndex = 0;
			this->lbl_Mazo->Text = L"Mazo:";
			// 
			// lbl_G6
			// 
			this->lbl_G6->AutoSize = true;
			this->lbl_G6->Location = System::Drawing::Point(429, 89);
			this->lbl_G6->Name = L"lbl_G6";
			this->lbl_G6->Size = System::Drawing::Size(60, 17);
			this->lbl_G6->TabIndex = 1;
			this->lbl_G6->Text = L"Grupo 6\n";
			// 
			// lbl_G5
			// 
			this->lbl_G5->AutoSize = true;
			this->lbl_G5->Location = System::Drawing::Point(347, 89);
			this->lbl_G5->Name = L"lbl_G5";
			this->lbl_G5->Size = System::Drawing::Size(60, 17);
			this->lbl_G5->TabIndex = 2;
			this->lbl_G5->Text = L"Grupo 5\n";
			// 
			// lbl_G3
			// 
			this->lbl_G3->AutoSize = true;
			this->lbl_G3->Location = System::Drawing::Point(184, 89);
			this->lbl_G3->Name = L"lbl_G3";
			this->lbl_G3->Size = System::Drawing::Size(60, 17);
			this->lbl_G3->TabIndex = 3;
			this->lbl_G3->Text = L"Grupo 3\n";
			// 
			// lbl_G2
			// 
			this->lbl_G2->AutoSize = true;
			this->lbl_G2->Location = System::Drawing::Point(100, 89);
			this->lbl_G2->Name = L"lbl_G2";
			this->lbl_G2->Size = System::Drawing::Size(60, 17);
			this->lbl_G2->TabIndex = 4;
			this->lbl_G2->Text = L"Grupo 2\n";
			// 
			// lbl_G4
			// 
			this->lbl_G4->AutoSize = true;
			this->lbl_G4->Location = System::Drawing::Point(266, 89);
			this->lbl_G4->Name = L"lbl_G4";
			this->lbl_G4->Size = System::Drawing::Size(60, 17);
			this->lbl_G4->TabIndex = 5;
			this->lbl_G4->Text = L"Grupo 4\n";
			// 
			// lbl_G7
			// 
			this->lbl_G7->AutoSize = true;
			this->lbl_G7->Location = System::Drawing::Point(514, 89);
			this->lbl_G7->Name = L"lbl_G7";
			this->lbl_G7->Size = System::Drawing::Size(60, 17);
			this->lbl_G7->TabIndex = 6;
			this->lbl_G7->Text = L"Grupo 7\n";
			// 
			// lbl_G1
			// 
			this->lbl_G1->AutoSize = true;
			this->lbl_G1->Location = System::Drawing::Point(18, 89);
			this->lbl_G1->Name = L"lbl_G1";
			this->lbl_G1->Size = System::Drawing::Size(60, 17);
			this->lbl_G1->TabIndex = 7;
			this->lbl_G1->Text = L"Grupo 1\n";
			// 
			// btn_repartir
			// 
			this->btn_repartir->Location = System::Drawing::Point(32, 390);
			this->btn_repartir->Name = L"btn_repartir";
			this->btn_repartir->Size = System::Drawing::Size(101, 31);
			this->btn_repartir->TabIndex = 8;
			this->btn_repartir->Text = L"REPARTIR";
			this->btn_repartir->UseVisualStyleBackColor = true;
			this->btn_repartir->Click += gcnew System::EventHandler(this, &MyForm::btn_repartir_Click);
			// 
			// btn_mover
			// 
			this->btn_mover->Enabled = false;
			this->btn_mover->Location = System::Drawing::Point(367, 390);
			this->btn_mover->Name = L"btn_mover";
			this->btn_mover->Size = System::Drawing::Size(101, 31);
			this->btn_mover->TabIndex = 9;
			this->btn_mover->Text = L"MOVER";
			this->btn_mover->UseVisualStyleBackColor = true;
			this->btn_mover->Click += gcnew System::EventHandler(this, &MyForm::btn_mover_Click);
			// 
			// txt_Go
			// 
			this->txt_Go->Enabled = false;
			this->txt_Go->Location = System::Drawing::Point(44, 339);
			this->txt_Go->Name = L"txt_Go";
			this->txt_Go->Size = System::Drawing::Size(100, 22);
			this->txt_Go->TabIndex = 10;
			// 
			// txt_posicion
			// 
			this->txt_posicion->Enabled = false;
			this->txt_posicion->Location = System::Drawing::Point(269, 339);
			this->txt_posicion->Name = L"txt_posicion";
			this->txt_posicion->Size = System::Drawing::Size(100, 22);
			this->txt_posicion->TabIndex = 11;
			// 
			// lbl_posicion
			// 
			this->lbl_posicion->AutoSize = true;
			this->lbl_posicion->Location = System::Drawing::Point(266, 302);
			this->lbl_posicion->Name = L"lbl_posicion";
			this->lbl_posicion->Size = System::Drawing::Size(61, 17);
			this->lbl_posicion->TabIndex = 12;
			this->lbl_posicion->Text = L"Posición";
			// 
			// lbl_grupo
			// 
			this->lbl_grupo->AutoSize = true;
			this->lbl_grupo->Location = System::Drawing::Point(41, 302);
			this->lbl_grupo->Name = L"lbl_grupo";
			this->lbl_grupo->Size = System::Drawing::Size(92, 17);
			this->lbl_grupo->TabIndex = 13;
			this->lbl_grupo->Text = L"Grupo origen";
			// 
			// btn_recm
			// 
			this->btn_recm->Enabled = false;
			this->btn_recm->Location = System::Drawing::Point(269, 12);
			this->btn_recm->Name = L"btn_recm";
			this->btn_recm->Size = System::Drawing::Size(101, 48);
			this->btn_recm->TabIndex = 14;
			this->btn_recm->Text = L"RECORRER MAZO";
			this->btn_recm->UseVisualStyleBackColor = true;
			this->btn_recm->Click += gcnew System::EventHandler(this, &MyForm::btn_recm_Click);
			// 
			// txt_GD
			// 
			this->txt_GD->Enabled = false;
			this->txt_GD->Location = System::Drawing::Point(474, 339);
			this->txt_GD->Name = L"txt_GD";
			this->txt_GD->Size = System::Drawing::Size(100, 22);
			this->txt_GD->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(471, 302);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 17);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Grupo Destino";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 450);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_GD);
			this->Controls->Add(this->btn_recm);
			this->Controls->Add(this->lbl_grupo);
			this->Controls->Add(this->lbl_posicion);
			this->Controls->Add(this->txt_posicion);
			this->Controls->Add(this->txt_Go);
			this->Controls->Add(this->btn_mover);
			this->Controls->Add(this->btn_repartir);
			this->Controls->Add(this->lbl_G1);
			this->Controls->Add(this->lbl_G7);
			this->Controls->Add(this->lbl_G4);
			this->Controls->Add(this->lbl_G2);
			this->Controls->Add(this->lbl_G3);
			this->Controls->Add(this->lbl_G5);
			this->Controls->Add(this->lbl_G6);
			this->Controls->Add(this->lbl_Mazo);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btn_repartir_Click(System::Object^ sender, System::EventArgs^ e) {
		txt_posicion->Enabled = true; txt_GD->Enabled = true; txt_Go->Enabled = true; btn_mover->Enabled = true;
		btn_repartir->Enabled = false; btn_recm->Enabled = true;
		int ncarta = 1, n = 0, arandom[52];
	
		for (int i = 0; i < 52; i++) {
			arreglo[i].num = ncarta;
			if (i % 4 > 1) {
				arreglo[i].color = "N";
			}
			else {
				arreglo[i].color = "R";
			}
			if (i % 4 == 3) {
				ncarta++;
			}
		}
		srand(time(NULL));
		for (int i = 0; i < 52; i++) {
			n = rand() % 52;
			while (verificar(n, arandom)) {
				n = rand() % 52;
			}
			arandom[i] = n;
		}
		lista.AddG1(arreglo[arandom[0]]);
		for (int i = 1; i <= 2; i++) {
			lista.AddG2(arreglo[arandom[i]]);
		}
		for (int i = 3; i <= 5; i++) {
			lista.AddG3(arreglo[arandom[i]]);
		}
		for (int i = 6; i <= 9; i++) {
			lista.AddG4(arreglo[arandom[i]]);
		}
		for (int i = 10; i <= 14; i++) {
			lista.AddG5(arreglo[arandom[i]]);
		}
		for (int i = 15; i <= 20; i++) {
			lista.AddG6(arreglo[arandom[i]]);
		}
		for (int i = 21; i <= 28; i++) {
			lista.AddG7(arreglo[arandom[i]]);
		}
		for (int i = 28; i < 52; i++) {
			lista.AddM(arreglo[arandom[i]]);
		}
		Baraja baraja;
		Carta carta; 
		for (int i = 0; i < 8; i++) {
			lista.DevolverCartaGrupo(i+1, 0, baraja);
			if (i == 0) {
				lbl_G1->Text = lbl_G1->Text + gcnew String(carta.DevolverCarta(baraja).c_str());
			}
			else if(i==1)
			{
				lbl_G2->Text = lbl_G2->Text + gcnew String(carta.DevolverCarta(baraja).c_str());
			}
			else if (i == 2)
			{
				lbl_G3->Text = lbl_G3->Text + gcnew String(carta.DevolverCarta(baraja).c_str());
			}
			else if (i == 3)
			{
				lbl_G4->Text = lbl_G4->Text + gcnew String(carta.DevolverCarta(baraja).c_str());
			}
			else if (i == 4)
			{
				lbl_G5->Text = lbl_G5->Text + gcnew String(carta.DevolverCarta(baraja).c_str());
			}
			else if (i == 5)
			{
				lbl_G6->Text = lbl_G6->Text + gcnew String(carta.DevolverCarta(baraja).c_str());
			}
			else if (i == 6)
			{
				lbl_G7->Text = lbl_G7->Text + gcnew String(carta.DevolverCarta(baraja).c_str());
			}
			else 
			{
				lbl_Mazo->Text = lbl_Mazo->Text + gcnew String(carta.DevolverCarta(baraja).c_str());
			}
		}
		
	}//llave boton repartir
		   bool verificar(int n, int arreglo[52]) {
			   for (int i = 0; i < 52; i++) {
				   if (n == arreglo[i]) {
					   return true;
				   }
			   }

			   return false;
		   }
		   void SystemTostd(String^ var, string &convert, int contador) {
			   
			   if (contador < var->Length) {
				   convert += var[contador];
				   contador++;
				   SystemTostd(var, convert,contador); 
			   }
		  }
private: System::Void btn_mover_Click(System::Object^ sender, System::EventArgs^ e) {
	int go = 0, gd = 0, p = 0, contcartas1 = 0, contcartas2 = 0, c1 = 0, pdelete = 0;
	string svar1,svar2;
	String^ Svar1;String^ Svar2;
	Baraja ca1;
	Baraja ca2;
	if (txt_GD->Text == "" || txt_Go->Text == "" || txt_posicion->Text == "")
		MessageBox::Show("INGRESE TODOS LOS PARAMETROS INDICADOS");
	else {
		try
		{
			go = System::Convert::ToInt16(txt_Go->Text);
			gd = System::Convert::ToInt16(txt_GD->Text);
			p = System::Convert::ToInt16(txt_posicion->Text) - 1;
			if (p < 0 || go <= 0 || gd <= 0) {
				MessageBox::Show("ERROR!");
			}
			else {
				if (go > 8) {
					MessageBox::Show("ERROR!");
				}
				else {
					if (gd > 7) {
						MessageBox::Show("ERROR!");
					}
					else {
						if (go == gd) {
							MessageBox::Show("ERROR!");
						}
						else {
							switch (go)
							{
							case 1: {
								Svar1 = lbl_G1->Text->Substring(8);
								break;
							}
							case 2: {
								Svar1 = lbl_G2->Text->Substring(8);
								break;
							}
							case 3: {
								Svar1 = lbl_G3->Text->Substring(8);
								break;
							}
							case 4: {
								Svar1 = lbl_G4->Text->Substring(8);
								break;
							}
							case 5: {
								Svar1 = lbl_G5->Text->Substring(8);
								break;
							}
							case 6: {
								Svar1 = lbl_G6->Text->Substring(8);
								break;
							}
							case 7: {
								Svar1 = lbl_G7->Text->Substring(8);
								break;
							}
							case 8:
								Svar1 = lbl_Mazo->Text->Substring(5);
								break;
							default:
							{
								MessageBox::Show("ERROR!");
								break;
							}
							}
							switch (gd)
							{
							case 1: {
								Svar2 = lbl_G1->Text->Substring(8);
								break;
							}
							case 2: {
								Svar2 = lbl_G2->Text->Substring(8);
								break;
							}
							case 3: {
								Svar2 = lbl_G3->Text->Substring(8);
								break;
							}
							case 4: {
								Svar2 = lbl_G4->Text->Substring(8);
								break;
							}
							case 5: {
								Svar2 = lbl_G5->Text->Substring(8);
								break;
							}
							case 6: {
								Svar2 = lbl_G6->Text->Substring(8);
								break;
							}
							case 7: {
								Svar2 = lbl_G7->Text->Substring(8);
								break;
							}
							default:
							{
								MessageBox::Show("ERROR!");
								break;
							}
							}
							SystemTostd(Svar1, svar1, 0);
							ContarCartas(svar1, 0, contcartas1);
							c1 = contcartas1 - p;
							pdelete = p;
							SystemTostd(Svar2, svar2, 0);
							ContarCartas(svar2, 0, contcartas2);
							lista.DevolverCartaGrupo(go, p, ca1); lista.DevolverCartaGrupo(gd, contcartas2 - 1, ca2);
							if (lista.CompararCarta(ca1, ca2)) {
								lista.CambiarCarta(go, gd, p, contcartas2, c1);
								for (int i = 0; i < c1; i++) {
									lista.DeleteNodo(pdelete, go);
								}
								ImprimirGO(c1, contcartas1, go);
								ImprimirGD(gd, c1, contcartas2);
								if (ValGanador(c1 + contcartas2)) {
									MessageBox::Show("FELICIDADES, HAZ GANADO!!"); 
									Close(); 
								}
								
							}

							else {
								MessageBox::Show("NO SE PUEDE HACER EL CAMBIO");
							}
						}
					}
				}
			}
		}
		catch (const std::exception&)
		{
			MessageBox::Show("ERROR");
		}
	}

/*llave botor*/}

	   void ContarCartas(string carta, int contador, int &cant_carta_mostrada) {
		   if (contador < carta.length())
		   {
			   if (carta[contador] == '\n') {
				   cant_carta_mostrada++;
			   }
			   contador++;
			   ContarCartas(carta, contador, cant_carta_mostrada);
		   }
	   }
	   void ImprimirGO(int c1, int contcartas, int go) {
		   int dif = 0;
		   dif = contcartas - c1;
		   if (dif == 0) {
			   dif = 1; 
		   }
		   String^ imprimir = ""; 
		   lista.ImprimirGo(imprimir, go, dif); 
		   switch (go)
		   {
		   case 1: {
			   lbl_G1->Text = "Grupo 1\n" + imprimir; 
			   break;
		   }
		   case 2: {
			   lbl_G2->Text = "Grupo 2\n" + imprimir;
			   break;
		   }
		   case 3: {
			   lbl_G3->Text = "Grupo 3\n" + imprimir;
			   break;
		   }
		   case 4: {
			   lbl_G4->Text = "Grupo 4\n" + imprimir;
			   break;
		   }
		   case 5: {
			   lbl_G5->Text = "Grupo 5\n" + imprimir;
			   break;
		   }
		   case 6: {
			   lbl_G6->Text = "Grupo 6\n" + imprimir;
			   break;
		   }
		   case 7: {
			   lbl_G7->Text = "Grupo 7\n" + imprimir;
			   break;
		   }
		   case 8: {
			   lbl_Mazo->Text = "Mazo:" + imprimir;
			   break;
		   }
		   }
	   }
	   void ImprimirGD(int gd, int c1, int c2) {
		   String^ imprimir = "";
		   lista.ImprimirGd(imprimir, gd, c1 + c2);
		   switch (gd)
		   {
		   case 1: {
			   lbl_G1->Text = "Grupo 1\n" + imprimir;
			   break;
		   }
		   case 2: {
			   lbl_G2->Text = "Grupo 2\n" + imprimir;
			   break;
		   }
		   case 3: {
			   lbl_G3->Text = "Grupo 3\n" + imprimir;
			   break;
		   }
		   case 4: {
			   lbl_G4->Text = "Grupo 4\n" + imprimir;
			   break;
		   }
		   case 5: {
			   lbl_G5->Text = "Grupo 5\n" + imprimir;
			   break;
		   }
		   case 6: {
			   lbl_G6->Text = "Grupo 6\n" + imprimir;
			   break;
		   }
		   case 7: {
			   lbl_G7->Text = "Grupo 7\n" + imprimir;
			   break;
		   }
		   }
	   }
	   bool ValGanador(int contador) {
		   if (contador < 5)
			   return false;
		   else
			   return true; 
	   }
private: System::Void btn_recm_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ mazo; 
	lista.RecorrerMazo(mazo);
	lbl_Mazo->Text = "Mazo: " + mazo->ToString()+"\n"; 
}
};
}
