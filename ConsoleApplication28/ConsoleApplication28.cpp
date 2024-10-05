#include <iostream>
using namespace std;
int main()
{
	cout << "filmin olcusunu gb ile yazin ";
	double fgb;
	cin >> fgb;
	cout << "internerin b/san suretini  yazin: ";
	double san;
	cin >> san;
	double sft = fgb * 1024 * 1024 * 8 / san;
	int sf = sft / 3600;
	int deqf = (sft - sf * 3600) / 60;
	int sanf = (sft - sf * 3600 - deqf * 60);
	sft - sf * 3600 - deqf * 60 > sanf ? sanf + 1 : sanf;
	cout << "filmin yuklenme tarixi: " << sf << ":" << deqf << ":" << sanf << endl;
	cout << "drivenin olcusunu gb ile yazin: ";
	double gb;
	cin >> gb;
	cout << "kinonun olcusunu mb ile dyazin - ";
	double mb;
	cin >> mb;
	int defe = gb * 1024 / mb;
	cout << "film " << defe << " defe drivede yerlesir." << endl;
	  }
	
