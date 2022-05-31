#include<iostream>
using namespace std;

void missing(int arr[],int n)
{
	int sum = 0;
	for (int i = 0; i < 11; i++) {
		sum = sum + arr[i];
	}
	int s = n * (n + 1) / 2;
	int key = s - sum;
	cout << key;
}

int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,10,11,12 };
	cout << "The missing element is: "; missing(arr, 12);
}