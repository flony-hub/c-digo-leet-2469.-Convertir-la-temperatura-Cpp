#include<vector>
#include<iostream>
using namespace std;


class Solution
{
public:
	double Kelvin, Fahrenheit;
	Solution(double celcius) :celcius_(celcius) {};
	vector<double> convertTemperature(double celsius_)
	{
		vector<double> rdo;
		Kelvin = float(celsius_ + 273.15);
		rdo.push_back(Kelvin);
		Fahrenheit = float(celsius_ * 1.80 + 32.00);
		rdo.push_back(Fahrenheit);
		return rdo;
	}
private:
	double celcius_;
};

int main()
{
	Solution primer_dato(431.41);
	auto resultado = primer_dato.convertTemperature(431.41);
	for (int i = 0; i < 2; i++)
	{
		cout << resultado[i] << " ";
	}
	return 0;
}
