#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

double pi{ 3.1415926535 };

double getComp(char comp) {
	double n;
	if (comp == 'x')
		cout << "Let's initialize our vector: \n";
	cout << "Insert the value for " << comp<<": ";
	cin >> n;
	return n;
}

struct miVector
{
	double x{getComp('x')};
	double y{ getComp('y') };
	double z{ getComp('z') };
};

void printVectors(vector<miVector>A, int nVectors) {
	for (int i = 0; i < nVectors; i++)
		cout << "[" << A[i].x << ", " << A[i].y << ", " << A[i].z << "]\t";
	cout << endl;
	for (int i = 0; i < nVectors; i++)
		cout <<"("<<i<<")"<< "\t\t";
	cout << endl;
}

miVector vOperation(vector<miVector>A, int nVectors) {
	int vInvolved;
	cout << "How many vectors will you use in your operation?: ";
	cin >> vInvolved;
	cout << "Which of these vectors will you use? " << "(0 - " << nVectors - 1 << "): \n";
	printVectors(A, nVectors);
	vector<int>vSelectOP;
	for (int i = 0; i < vInvolved; i++)
	{
		int index;
		cin >> index;
		vSelectOP.push_back(index);
	}

	vector<double>coefficients;
	for (int i = 0; i < vInvolved; i++)
	{
		double coef;
		cout << "Insert the coefficient whether it may be positive or negative of vector "<<vSelectOP[i]<<": ";
		cin >> coef;
		coefficients.push_back(coef);
	}

	double xsum{};
	for (int i = 0; i < vInvolved; i++)
		xsum += (coefficients[i]*A[vSelectOP[i]].x);

	double ysum{};
	for (int i = 0; i < vInvolved; i++)
		ysum += (coefficients[i] * A[vSelectOP[i]].y);

	double zsum{};
	for (int i = 0; i < vInvolved; i++)
		zsum += (coefficients[i] * A[vSelectOP[i]].z);
	cout << "Algebraic view of vector operation: ";
	for (int i = 0; i < vInvolved; i++)
	{
		cout << coefficients[i]<<"v"<<vSelectOP[i];
		if (i != vInvolved - 1)
			cout << " + ";
	}
	cout << endl;
	return{ xsum, ysum, zsum };
}

double obtainModulus(miVector v) {
	double xsqrt{ v.x * v.x };
	double ysqrt{ v.y * v.y };
	double zsqrt{ v.z * v.z };
	double sumsqrt{xsqrt+ysqrt+zsqrt};
	double mod{ pow(sumsqrt,0.5) };
	return mod;
}

miVector modAngle() {	//OBTENER VECTOR CON MODULO Y ANGULO
	double mod;
	cout << "Insert modulus of vector: ";
	cin >> mod;
	double angle;
	cout << "Insert angle from positive x axis: ";
	cin >> angle;
	double anglerad{ angle * pi / 180 };
	double xcoord{ mod * cos(anglerad) };
	double ycoord{ mod * cos(anglerad) };
	return {xcoord, ycoord, 0};
}

int main() {
	char menubar{};
		
	int nVectors;
	cout << "How many vectors will you have from given coordinates?: ";
	cin >> nVectors;
	vector<miVector> Vectores(nVectors);
	do{	
		miVector sum{ vOperation(Vectores, nVectors) };
		cout <<"["<< sum.x<<", "<<sum.y<<", "<<sum.z<<"]\n";
		
		cout << "If you want to exit, input e. If you want to make another operation, input any other character: ";
		cin >> menubar;
	} 
	while (menubar!='e');
	return 0;
}

//CODIGO BASE
#if 0
miVector vSum(vector<miVector>A, int nVectors) {
	int vInvolved;
	cout << "How many vectors will you use in your operation?: ";
	cin >> vInvolved;
	cout << "Which of these vectors will you use? " << "(0 - " << nVectors - 1 << "): \n";
	printVectors(A, nVectors);
	vector<int>vSelectSum;
	for (int i = 0; i < vInvolved; i++)
	{
		int index;
		cin >> index;
		vSelectSum.push_back(index);
	}

	double xsum{};
	for (int i = 0; i < vInvolved; i++)
		xsum += A[vSelectSum[i]].x;

	double ysum{};
	for (int i = 0; i < vInvolved; i++)
		ysum += A[vSelectSum[i]].y;

	double zsum{};
	for (int i = 0; i < vInvolved; i++)
		zsum += A[vSelectSum[i]].z;
	return{ xsum, ysum, zsum };
}
#endif
