#include <iostream>
#include <complex>
using namespace std;
typedef complex<float> Complex;

void t(Complex *p) {
	delete[]p;
	p = new Complex[3];
	

}

//void main(int arg) {
//	Complex *p=new Complex[3];
//	Complex *p2 = new Complex[3];
//	for (size_t i = 0; i < 3; i++)
//	{
//		p2[i] = Complex(3);
//	}
//	memcpy(p, p2, sizeof(Complex)*3);
//	getchar();
//}

