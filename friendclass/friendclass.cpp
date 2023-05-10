#include<iostream>
using namespace std;

class siswa;

class orang {
private:
	string nama;
public:
	void setNama(string pNama);
	friend class siswa;
};

class siswa {
private:
	int id;
public:
	void setID(int pID);
	void displayAll(orang& a);
};

void siswa::displayAll(orang& a) {
	cout << id << endl << a.nama;

}

void siswa::setID(int pID) {
	id = pID;
}

void orang::setNama(string pNama) {
	nama = pNama;
}

int main()
{
	orang o;
	o.setNama("joko kumat");
	siswa s;
	s.setID(1);
	s.displayAll(o);
	system("pause");
	return 0;
}
