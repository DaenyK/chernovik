#include"Headers.h"
#include "vector.h"
#include "enhansedVector.h"
#include "enhansedList.h"



int main() {
	EnhancedVector <double> v;
	v.push_back(5);
	v.push_back(12);

	try {
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << endl;
	}
	catch (char *txt) {
		cout << txt << endl;
}


	EnhancedList<int> L;
	L.pushback(4);
	L.pushback(5);
	L.pushback(12);
	L.pushback(7);
	L.pushback(54);
	L.print();

	cout << L[0] << endl;

	
	system("pause");
	return 0;
}