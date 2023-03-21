#include <iostream>

int search (int* pA, int N, int x){ //linear search
				    //pA - pointer to array
				    //N - size of array
				    //x - desired number
	for (int i = 0; i < N; i++)
		if (pA[i] == x)
			return i;
	return -1;
}

int main (){
	std::cout << "Size of array from: " << std::endl;
	int N;
	std::cin >> N;
	std::cout << "Number to search from 0 to 32767: " << std::endl;
	int x;
	std::cin >> x;
	int* pA = new int[N];
	for (int i = 0; i < N; i++)
		pA[i] = rand() % 32768;
	int answer = search (pA, N, x);
	((answer < N)&&(answer >= 0)) ? std::cout << "A[" << answer << "] = " << x << std::endl
				      : std::cout << x << " is not in array" << std::endl;
	delete[] pA;
	return 0;
}
