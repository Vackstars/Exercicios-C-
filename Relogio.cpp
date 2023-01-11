#include <iostream>
using namespace std;
#include <string.h>
#include <string>

class Relogio
{
public :
	int horas;
	int minutos;
	int segundos;

	void setHoras (int horas)
	{
		this-> horas = horas;
	}

	void setMinutos (int minutos)
	{
		this-> minutos = minutos;
	}

	void setSegundos (int segundos)
	{
		this-> segundos = segundos;
	}

	int getHoras ()
	{
		return horas;
	}

	int getMinutos()
	{
		return minutos;
	}

	int getSegundos()
	{
		return segundos;
	}

	void setHora (int horas, int minutos, int segundos)
	{
		this->horas = horas;
		this->minutos = minutos;
		this->segundos = segundos;
	}

	void getHora()
	{
		cout << "o Horario eh: " << horas << ":" << minutos << ":" << segundos << endl;
	}

	void avancar()
	{
		if (segundos > 0 && segundos < 59)
		{
			segundos++;
			cout << "o Horario mudou para : " << horas << ":" << minutos << ":" << segundos << endl;
		}
		else if (minutos > 0 && minutos < 59)
		{
			segundos = 00;
					   minutos++;;
			cout << "o Horario mudou para : " << horas << ":" << minutos << ":" << segundos << endl;
		}
		else if (horas > 0 && horas < 23)
		{
			minutos = 00;
			segundos = 00;
			horas ++;
			cout << "o Horario mudou para : " << horas << ":" << minutos << ":" << segundos << endl;
		}
		else
		{
			minutos = 00;
			segundos = 00;
			horas = 00;
			cout << "o Horario mudou para : " << horas << ":" << minutos << ":" << segundos << endl;
		}
	}
};

int main(int argc, char *argv[])
{
	Relogio r;
	r.setHora(23, 59, 59);
	r.getHora();
	r.avancar();

	return 0;
}
