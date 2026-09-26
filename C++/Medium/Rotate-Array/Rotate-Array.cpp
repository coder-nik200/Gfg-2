// Problem: Rotate Array
// Difficulty: Medium
// Language: C++
// GFG: https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1

class Solution {
	public:
	void rotateArr(vector<int>& arr, int d) {
		int n = arr.size();
		d = d % n;
		
		reverse(arr.begin(), arr.begin() + d);
		reverse(arr.begin() + d, arr.end());
		reverse(arr.begin(), arr.end());
	}
};
