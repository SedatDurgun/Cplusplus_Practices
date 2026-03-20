#include<iostream>
#include<vector>
#include <algorithm>


using namespace std;


void reverseArray(vector<int> &arr)
{
	if (arr.empty())
		return;


	reverse(arr.begin(), arr.end());


	
}

int main()
{
	vector<int> data = { 9,8,7,6,5,4,3,2,1 };
	
	cout << "Before Reversing:"<<endl;

	for (const auto& numbers:data)
	{
		 cout<< numbers<<" ";
	}
	cout << "\nAfter Reversing:"<<endl;
	reverseArray(data);

	for (const auto& val : data)
	{
		cout << val << " ";
	}
	return 0;
	

	
}