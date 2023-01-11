#include <iostream>
using namespace std;
#include <string.h>
#include <string>


class Ingresso
{
public:
	int valor;

	void imprimeValor()
	{
		cout << "valor do ingresso: " << valor << endl;
	}

	int getValor()
	{
		return valor;
	}

	void setValor(int valor)
	{
		this->valor = valor;
	}
};


class VIP : public Ingresso
{
public:
	int valorAdicional;

	int getValorAdicional()
	{
		return valorAdicional;
	}

	void setValorAdicional(int valorAdicional)
	{
		this->valorAdicional = valorAdicional;
	}

	void imprimeValorAdicional()
	{
		cout << "valor do ingresso: " << valor << " valor adicional do VIP: " << valorAdicional <<  endl;
	}
};

class Normal : public Ingresso
{
public :
	void imprimeValor()
	{
		cout << "valor do ingresso normal: " << valor << endl;
	}
};

class CamaroteInferior : public VIP
{
public :
	string loc;

	string getLoc()
	{
		return loc;
	}

	void mostraLoc()
	{
		cout << "local do camarote inferior: " << loc << endl;
	}

	void setLoc(string loc)
	{
		this->loc = loc;
	}

};

class CamaroteSuperior : public VIP
{
public:
	int valorAdicionalC;
	string loc;

	void setValorAdicionalC(int valorAdicionalC)
	{
		this->valorAdicionalC = valorAdicionalC;
	}
	void mostraLoc()
	{
		cout << "local do camarote superior: " << loc << endl;
	}
	void setLoc(string loc)
	{
		this->loc = loc;
	}

	void valorCS()
	{
		cout << "o valor do ingresso do camarote superior eh: " << valor +  valorAdicional + valorAdicionalC << " e o acrecimo somente do camarote superior eh: " << valorAdicionalC << endl;
	}

};


int main(int argc, char *argv[])
{
	Normal n;
	VIP v;
	CamaroteInferior ci;
	CamaroteSuperior cs;
	n.setValor(20);
	v.setValor(20);
	v.setValorAdicional(10);
	ci.setValor(20);
	ci.setValorAdicional(10);
	ci.setLoc("inferior");
	cs.setValor(20);
	cs.setValorAdicional(10);
	cs.setValorAdicionalC(20);
	cs.setLoc("inferior");


	int a;


	cout << "digite 1 para ingresso normal e 2 para vip: " << endl;
	cin >> a;

	switch (a)
	{
	case 1:
		cout << " seu ingresso eh normal! " << endl;
		n.imprimeValor();
		break;

	case 2:
		cout << " seu ingresso eh VIP, escolha entre (1) camaorte superior ou (2) inferior! " << endl;
		int b;
		cin >> b;
		
		switch (b)
		{
		case 1:
			cout << " seu ingresso eh do camarote superior! " << endl;
			cs.setLoc("inferior");
			cs.valorCS();
			break;
		case 2:
			cout << " seu ingresso eh do camarote inferior! " << endl;
			ci.mostraLoc();
			ci.imprimeValorAdicional();
			break;
		default:
			cout << "tecla invalida!!" << endl;


		}

	default:
		
		break;
	}





	return 0;
}
S