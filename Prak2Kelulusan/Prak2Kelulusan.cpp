// Prak2Kelulusan.cpp 

#include <iostream>
using namespace std;

int main()
{
   
	float nMTK, nFSK, rerata;

	string status;

	cout << "MASUKAN NILAI MTK = ";
	cin >> nMTK;

	cout << "MASUKAN NILAI FISIKA = ";
	cin >> nFSK;

	rerata = (nMTK + nFSK) / 2;

	if (rerata >= 60) {
		status = "LULUS JALUR RERATA";

	}

	else if (nMTK >= 70) {
		status = "LULUS JALUR MATEMATIKA";
	}

	else {
		status = "TIDAK LULUS";
	}

	cout << "STATUS KELULUSAN" << status << endl;

	

}

