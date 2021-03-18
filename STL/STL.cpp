// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool desc(int x, int y) {   //Comparator Function
	return x > y;
}

int main()
{
	vector<int> A = { 12,23,345,7,9 };
	sort(A.begin(), A.end()); //sort in ascending in O(nlogn)
	bool isT = binary_search(A.begin(), A.end(), 2);  //O(logn)
	cout << isT <<endl;
	vector<int>::iterator it;  //Iterator
	for (it = A.begin(); it != A.end(); it++)  //Print vector
		cout << *it << " ";
	cout << "Hello World!\n";
	sort(A.begin(), A.end(), desc);  // Sort in descending by passing a comparator function
	for (it = A.begin(); it != A.end(); it++)
		cout << *it << " ";
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(123);
	for (it = A.begin(); it != A.end(); it++)
		cout << "\n" <<*it << " ";
	vector<int>::iterator it1 = lower_bound(A.begin(), A.end(), 100); // >=
	vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100); // >
	cout << "\n" << *it1 << endl;
	cout << *it2 << endl;
	cout <<  it2 - it1;
	//set
	//map
	//pair
	//stl 2
	//unordered
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
