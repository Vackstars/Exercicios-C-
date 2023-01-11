#include <iostream>
using namespace std;
#include <string.h>
#include <string>


class Ar
{
public:
	int potencia;
	int sensor;
	int temp;

	Ar ()
	{
		cout << "ligando o ar... " << endl;
		//this->sensor = sensor;
		temp = 0;
		//this->potencia = potencia;
	}

	void setPotencia (int potencia)
	{
		this->potencia = potencia;
	}

	void setSensor (int sensor)
	{
		this->sensor = sensor;
	}

	void setTemp (int temp)
	{
		this->temp = temp;
	}

	int getPotencia ()
	{
		return potencia;
	}

	int getSensor()
	{
		return sensor;
	}

	int getTemp()
	{
		return temp;
	}

	void aumentarPotencia ()
	{
		temp = sensor - (potencia * 1.8);
	}

	void mostrarTemp()
	{
		cout << "Temperatura do ambiente esta em: " << temp << " graus" << endl;
	}

};


int main(int argc, char *argv[])
{
	Ar a,b;
	a.setPotencia(5);
	b.setPotencia(10);
	a.setSensor(25);
	b.setSensor(31);
	a.aumentarPotencia();
	b.aumentarPotencia();
	
	a.mostrarTemp();
	b.mostrarTemp();


	return 0;
}
