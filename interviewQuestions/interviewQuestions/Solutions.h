#pragma once
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solutions {
public:
	//ARRAYS
	//two sums O(n^2)
	vector<int> twosums(vector<int>& numList, int target) {
		int n = numList.size();
		for (int i = 0; i < n; ++i)
		{
			for (int k = 0; k < n; ++k) {
				cout << "test" << endl;
				if (i != k)
				{
					if (numList[i] + numList[k] == target) {
						cout << "[" << i << "]["<< k << "]"<< endl;
						vector<int> temp{ i, k };
						return temp;
					}
				}
			}
		}
	}
	//two sums O(n log n)
	vector<int> twosums_optimized(vector<int>& numList, int target) {
		//use pair for creating a temp array
		vector<pair<int, int>> nums2;
		for (int i = 0; i < numList.size(); ++i) {
			pair<int, int> t(numList[i], i);
			nums2.push_back(t);
		}

		//use nums 2 from now on
		sort(nums2.begin(), nums2.end()); //first step sort the list
		int i = 0;
		int k = nums2.size() - 1;
		while (i < k) {
			if (nums2[i].first + nums2[k].first == target) {
				cout << "[" << nums2[i].second << "][" << nums2[k].second << "]" << endl;
				vector<int> temp{ nums2[i].second, nums2[k].second };
				return temp;
			}
			else if (nums2[i].first + nums2[k].first > target) --k;
			else ++i;
		}

	}
};