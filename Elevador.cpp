#include <iostream>
using namespace std;
#include <string.h>
#include <string>


class Elevador
{
public:
	int andarAtual ;
	int andares;
	int capacidade;
	int pessoas;

	Elevador()
	{
		cout << "Criando elevador..." << endl;
		andarAtual = 0;
		pessoas = 0;
	}

	int getAndarAtual()
	{
		return andarAtual;
	}
	int getAndares()
	{
		return andares;
	}
	int getCapacidade()
	{
		return capacidade;
	}

	int getPessoas()
	{
		return pessoas;
	}

	void setAndarAtual(int andarAtual)
	{
		this->andarAtual = andarAtual;
	}

	void setAndares(int andares)
	{
		this->andares = andares;
	}

	void setCapacidade(int capacidade)
	{
		this->capacidade = capacidade;
	}

	void setPessoas(int pessoas)
	{
		this->pessoas = pessoas;
	}

	int inicializa (int Capacidade, int Andares)
	{
		setCapacidade(Capacidade);
		setAndares(Andares);
		return 0;
	}

	void entra()
	{
		if (pessoas < capacidade)
		{
			pessoas++;
			cout << "uma pessoa entrou no elevador, agora temos: " << pessoas << " pessoa(s) no elevador" << endl;
		}
		else cout << "elevador lotado..." << endl;
	}

	void sai()
	{
		if (pessoas > 0)
		{
			pessoas--;
			cout << "uma pessoa saiu no elevador, agora temos: " << pessoas << " pessoa(s) no elevador" << endl;
		}
		else cout << "elevador ja esta vazio..." << endl;
	}

	void sobe()
	{
		if (andarAtual < andares)
		{
			andarAtual++;
			cout << "o elevador subiu 1 andar, agora esta no: " << andarAtual << " andar" << endl;
		}
		else cout << "elevador ja esta no ultimo andar..." << endl;
	}

	void desce ()
	{
		if (andarAtual > 0)
		{
			andarAtual--;
			cout << "o elevador desceu 1 andar, agora esta no: " << andarAtual << " andar" << endl;
		}
		else cout << "elevador ja esta no terreo..." << endl;
	}




};






int main(int argc, char *argv[])
{
	Elevador e;
	e.inicializa(4, 4);
	e.entra();
	e.sobe();
	e.sobe();
	e.sobe();
	e.sobe();
	e.desce();
	e.desce();
	e.desce();
	e.desce();
	e.entra();
	e.entra();
	e.entra();
	e.entra();
	e.sai();
	e.sai();
	e.sai();
	e.sai();
	e.sai();
	


	
	



	return 0;
}
