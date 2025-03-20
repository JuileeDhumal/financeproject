#include <iostream>

using namespace std;

void Substract(int a, int b)
{
	cout << a-b << endl;
}
void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main() {
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;
	//adding comment
    printFibonacci(num);
	Substract(40, 20);
	//one more comment
    return 0;
}

