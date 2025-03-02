
#include <iostream>
#include <string>
#include <ctime>
#include <random>
using namespace std;
void swit (int n,int a,string Animals[4], string AnimalsRus[2][4]) {
	switch (n) {
	  case 0:cout << Animals[n] <<endl<<AnimalsRus[a][n] <<endl<< AnimalsRus[a+1][n] << endl; break;
	  case 1:cout << Animals[n] <<endl<< AnimalsRus[a][n] << endl << AnimalsRus[a + 1][n] << endl; break;
	  case 2:cout << Animals[n] <<endl<< AnimalsRus[a][n] << endl << AnimalsRus[a + 1][n] << endl; break;
	  case 3:cout << Animals[n] <<endl<< AnimalsRus[a][n] << endl << AnimalsRus[a + 1][n] << endl; break;
	}
}
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "RU");
	int n;
	int a = 0;
	int A[]{ 1,2,3,4 };
	const int rows = 4;
	const int KolAnimal = 2;
	string Animals[4] = { "Sirenidae","cat","dfdfs","spider" };
	string AnimalsRus[KolAnimal][rows] = {{ "хз что это","кот","ывф","паук" }, { "2", "4", "6", "8" }};
	n = rand() % 4 - 0;
	cout<<n<<endl;
	swit(n,a, Animals, AnimalsRus);
}
