#include <iostream>
using namespace std;

//вывод строчки пирамиды до n
void piramid(int& n) { 
    for (int i = 1; i < n; i++)
        cout << i << " ";
    cout << n;
    n++;
}

int main()
{
    int N;
    int n = 1;
    cin >> N;
    if (N > 9 or N < 1)
        cout << "N is wrong: " << N;
    else
        do {
            piramid(n);
            if (n != N+1)
                cout << endl; //избегаем переноса после вывода последней строчки
        } while (n!=N+1);
}