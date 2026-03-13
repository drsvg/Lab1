#include <iostream>
using namespace std;

int main(){
	cout << "enter the sides"<< endl << "enter 1-st side: ";
	int A;
	int B;
	int C;
	cin >> A;
	cout << "enter 2-nd side: ";
	cin >> B;
	cout << "enter 3-rd side: ";
	cin >> C;
	
	if (A+B>C && A+C>B && C+B>A) 
		cout << "The sides can form a triangle";
	else
		cout << "The sides can't form a triangle";
	cout << endl;
	
	return 0;
}
