#include <bits/stdc++.h>

using namespace std;

int main() {
	double A , B , C, R1, R2, delta ;
	cin >> A >> B >> C;
	delta = ((B*B)-(4*A*C));
		if ( (delta > 0 ) && (A*2 != 0)){
	
	R1 = (((B*(-1))+(sqrt (delta)))/(2*A));
	R2 = (((B*(-1))-(sqrt(delta)))/(2*A));

	cout.setf(ios_base::fixed);
	cout.precision(5);
	cout << "R1 = " << R1 << endl;
	cout << "R2 = " << R2 << endl;
       	
}
	else
	cout << "Impossivel calcular" << endl;
	
	return 0;
}

