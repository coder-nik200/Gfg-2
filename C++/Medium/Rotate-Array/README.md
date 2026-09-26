<div align="center">

# 🔗 Rotate Array

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-dfb317?style=for-the-badge)](https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1)**

</div>

---

## 📝 Problem Statement

> Given an array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. Do the mentioned change in the array in place.
> 
> Note: Consider the array as circular.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [1, 2, 3, 4, 5], d = 2` |
| **Output** | `[3, 4, 5, 1, 2]` |

**Explanation:**
when rotated by 2 elements, it becomes [3, 4, 5, 1, 2].

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20], d = 3` |
| **Output** | `[8, 10, 12, 14, 16, 18, 20, 2, 4, 6]` |

**Explanation:**
when rotated by 3 elements, it becomes [8, 10, 12, 14, 16, 18, 20, 2, 4, 6].

</details>

<details >
<summary><strong>Example 3</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [7, 3, 9, 1], d = 9` |
| **Output** | `[3, 9, 1, 7]` |

**Explanation:**
when we rotate 9 times, we'll get [3, 9, 1, 7] as resultant array.

</details>


---

// ## 💡 Solution

// Solution file: [`Rotate-Array.cpp`](./Rotate-Array.cpp)

// ```cpp
// class Solution {
	public:
	void rotateArr(vector<int>& arr, int d) {
		int n = arr.size();
		d = d % n;
		
		reverse(arr.begin(), arr.begin() + d);
		reverse(arr.begin() + d, arr.end());
		reverse(arr.begin(), arr.end());
	}
};

// ```

// ---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-09-26</sub>

</div>
