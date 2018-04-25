#include <iostream>
#include <string>
#include <vector>
//#include "check_pesel.h"



class Pesel
{
	static Pesel* _instance;
	std::string _pesel;
	Pesel() : _pesel("00000000000") {}
public:
	static Pesel* getInstance()
	{
		if (_instance == NULL)
			_instance = new Pesel();
		return _instance;
	}
	void setPesel(std::string pesel) { _pesel = pesel; }
	std::string getPesel() { return _pesel; }
};

Pesel* Pesel::_instance = NULL;


std::string someFunction(std::string pesel)
{
	Pesel* innypesel = Pesel::getInstance();
	innypesel->setPesel(pesel);
	return innypesel->getPesel();
}



int main()
{
	std::vector<std::string> wektor;
	//char nrPesel[15];
	std::string nrPesel;
	//std::cout  << "Podaj numer PESEL\n" <<std::endl;
	//std::cin >> nrPesel;
	//PeselValidator(nrPesel);


	while (1)
	{
		std::cout << "Podaj numer PESEL\n" << std::endl;
		std::cin >> nrPesel;
		system("cls");
		wektor.push_back(someFunction(nrPesel));
		for (int i = 0; i < wektor.size(); i++)
		{
			std::cout << wektor[i] << " " << std::endl;
		}

	}
	system("pause");
	return 0;
}