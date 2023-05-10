#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); // deklerasi method
};


void mahasiswa::showNim() { // implementasi method diluar class
	cout << "No Induk = " << nim << endl;
}

int main() 
{
	mahasiswa mhs{ 1 };      //object mhs
	mhs.showNim();           //member Acces operator

}

	
