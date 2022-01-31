#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

const int arrSize = 5;
template<class T, class T1 >
T1 max5(T arr, T1 x);

int main()
{
	
	int arr[arrSize] = { 1,3,2,5,4 };
	cout << max5(arr,arr[0]) << endl;

	double arr2[arrSize] = { 1.0,3.0,1.5,4.5,4.0 };
	cout << max5(arr2,arr2[0]);
}

template<class T,class T1>
T1 max5(T arr, T1 x)
{
	int temp = 0;
	for(int i =0; i < 5; i++)
	{
		for (int i = 0; i < 5; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}

	return arr[0];

}