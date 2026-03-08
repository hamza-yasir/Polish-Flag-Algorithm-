#include "Algorithms.h"

int main() {

	int n;
	cout << "Enter Input Size: ";
	cin >> n;

	const int RUNS = 1000;

	long long total_pdf = 0;
	long long total_alt = 0;

	for (int r = 0; r < RUNS; r++) {

		char* arr1 = new char[n];
		char* arr2 = new char[n];

		fillArray(arr1, n);
		fillArray(arr2, n);

		auto start_alt = chrono::high_resolution_clock::now();
		Alt_PolishFlag(arr1, n);
		auto end_alt = chrono::high_resolution_clock::now();

		auto start_pdf = chrono::high_resolution_clock::now();
		PolishFlag(arr2, n);
		auto end_pdf = chrono::high_resolution_clock::now();

		total_alt += chrono::duration_cast<chrono::nanoseconds>(end_alt - start_alt).count();
		total_pdf += chrono::duration_cast<chrono::nanoseconds>(end_pdf - start_pdf).count();

		delete[] arr1;
		delete[] arr2;
	}

	cout << "Average Alternate Method: "
		<< total_alt / RUNS << " ns\n";

	cout << "Average PDF Method: "
		<< total_pdf / RUNS << " ns\n";

}