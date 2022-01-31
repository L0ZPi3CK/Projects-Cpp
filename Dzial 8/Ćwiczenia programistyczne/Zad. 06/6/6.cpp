#include <iostream>
#include <cstring>
using namespace std;

template< typename T>
T maxn(T arr[], int arrSize);

int main()
{
	int arr[5] = { 10,200,444,3333,555 };
	double arrd[4] = { 10.10,333.33,213.67,333.333 };

	cout << maxn(arr,5) << endl;
	cout << maxn(arrd, 4);

}

template <class T>
T maxn(T tab[], int n)
{
    T max = tab[0];

    for (int i = 1; i < 5; i++) {
        if (tab[i] > max)
            max = tab[i];
    }

    return max;
}