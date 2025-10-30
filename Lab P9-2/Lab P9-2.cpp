#include <iostream>
using namespace std;
bool isSortedIncreasing(int arr[], int size);
bool isSortedDecreasing(int arr[], int size);
bool hasAdjecentDuplicates(int arr[], int size);
bool hasDuplicates(int arr[], int size);

int main() {
	int array[6];

	for (int i = 0; i < 6; i++) {
		cout << "Enter integer #" << (i + 1) << ": ";
		cin >> array[i];
	}
	if (isSortedIncreasing(array, 6)) cout << "The data are increasing" << endl;
	else cout << "The data are not increasing" << endl;

	if (isSortedDecreasing(array, 6)) cout << "The data are decreasing" << endl;
	else cout << "The data are not decreasing" << endl;

	if (hasAdjecentDuplicates(array, 6)) cout << "The data has adjacent duplicates" << endl;
	else cout << "The data has no adjacent duplicates" << endl;

	if (hasDuplicates(array, 6)) cout << "The data has duplicates" << endl;
	else cout << "The data has no duplicates" << endl;

	return 0;
}
bool isSortedIncreasing(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			return false;
		}
	}
	return true;
}
