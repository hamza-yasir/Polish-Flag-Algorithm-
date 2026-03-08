#include <iostream>
#include <chrono>
using namespace std;

void PolishFlag(char arr[], int n) {
	while (true) {
		int L = 0, R = n - 1;

		for (L = 0; L < n; L++)
			if (arr[L] == 'W')
				break;

		for (R = n - 1; R >= 0; R--)
			if (arr[R] == 'R')
				break;

		if (L >= R)
			return;

		swap(arr[L], arr[R]);
	}
}

void Alt_PolishFlag(char arr[], int n) {
	int L = 0;
	int R = n - 1;

	while (L < R) {

		while (arr[L] == 'R' && L < R)
			L++;

		while (arr[R] == 'W' && L < R)
			R--;

		if (L < R) {
			swap(arr[L], arr[R]);
			L++;
			R--;
		}
	}
}

void fillArray(char arr[], int n) {
	for (int i = 0; i < n / 2; i++)
		arr[i] = 'W';

	for (int i = n / 2; i < n; i++)
		arr[i] = 'R';
}