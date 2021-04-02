#include <iostream>

using namespace std;


int main() {

	//array with capacity to store 1 to 100
	int freq[100] = { 0 };
	//to store number of matching socks
	int result = 0;

	//constant size 0f array
	const int n = 9;

	int arr[n] = { 10,9,23,23,8,10,20,20,10 };

	//it will simply increase the index of array frequency
	//for example at first iteration arr[0]=10; and freq[10]=0;
	//this will increase value of index number 10 by 1 in same process for each
	for (int i = 0; i < n; i++) {
	 ++freq[arr[i]];
	}


	//this will simply check for example this will simply return 1,2,3,4 integers decimal value wil be ignored

	//asume we found 9 socks with same color 4.5 = 9/2 integer will ignore after point value and get the 4 out of it so the single one is automatically truncated
	for (int i = 0; i < 100; i++) {
		result += freq[i] / 2;
	}

	cout << result << endl;





	return 0;
}