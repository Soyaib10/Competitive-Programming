#include <stdio.h>
// Function to print a subarray formed by nums[start, end]
/*
1. Subarray
A subarray is a slice from a contiguous array (i.e., occupy consecutive positions) and inherently maintains the order of elements. For example, the subarrays of array {1, 2, 3} are {1}, {1, 2}, {1, 2, 3}, {2}, {2, 3}, and {3}.

Following is the C, Java, and Python program to generate all subarrays of the specified array:

*/
void printSubarray(int nums[], int start, int end) {
    printf("[");
    for (int i = start; i < end; i++) printf("%d, ", nums[i]);
    printf("%d]\n", nums[end]);
}

// Function to print all subarrays of the specified array
void printAllSubarrays(int nums[], int n) {
    // consider all subarrays starting from `i`
    for (int i = 0; i < n; i++) {
        // consider all subarrays ending at `j`
        for (int j = i; j < n; j++) printSubarray(nums, i, j);
    }
}

/*
A substring of a string s is a string s' that occurs in s. A substring is almost similar to a subarray, but it is in the context of strings.

For example, the substrings of string 'apple' are 'apple', 'appl', 'pple', 'app', 'ppl', 'ple', 'ap', 'pp', 'pl', 'le', 'a', 'p', 'l', 'e', ''. Following is the C++, Java, and Python program that generates all non-empty substrings of the specified string:

*/
void printAllSubstrings(string str)
{
    int n = str.length();

    // consider all substrings starting from `i`
    for (int i = 0; i < n; i++)
    {
        // consider all substrings ending at j
        for (int j = i; j < n; j++) {
            cout << "'" << str.substr(i, j - i + 1) << "', ";
        }
    }
}

/*
A subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements. For example, {A, B, D} is a subsequence of sequence {A, B, C, D, E} obtained after removing {C} and {E}.

 
People are often confused between a subarray/substring and a subsequence. A subarray or substring will always be contiguous, but a subsequence need not be contiguous. That is, subsequences are not required to occupy consecutive positions within the original sequences. But we can say that both contiguous subsequence and subarray are the same.

In other words, the subsequence is a generalization of a substring, or substring is a refinement of the subsequence. For example, {A, C, E} is a subsequence of {A, B, C, D, E}, but not a substring, and {A, B, C} is both a subarray and a subsequence.

Please note that a subsequence can be in the context of both arrays and strings. Generating all subsequences of an array/string is equivalent to generating a power set of an array/string. For a given set, S, we can find the power set by generating all binary numbers between 0 and 2n-1, where n is the size of the given set. This approach is demonstrated below in C++, Java, and Python:

*/

void findPowerSet(string str)
{
    int n = str.length();

    // N stores the total number of subsets
    int N = pow(2, n);

    // generate each subset one by one
    for (int i = 0; i < N; i++)
    {
        cout << "'";

        // check every bit of `i`
        for (int j = 0; j < n; j++)
        {
            // if j'th bit of `i` is set, print S[j]
            if (i & (1 << j)) {
                cout << str[j];
            }
        }
        cout << "', ";
    }
}

/*
A subset is any possible combination of the original set. The term subset is often used for subsequence, but that’s not right. A subsequence always maintains the relative order of the array elements (i.e., increasing index), but there is no such restriction on a subset. For example, {3, 1} is a valid subset of {1, 2, 3, 4, 5}, but it is neither a subsequence nor a subarray.

It is worth noting that all subarrays are subsequences and all subsequences are a subset, but the reverse is not valid. For instance, a subarray {1, 2} of array {1, 2, 3, 4, 5} is also a subsequence and a subset.
*/

int main() {
    int nums[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(nums) / sizeof(nums[0]);
    printAllSubarrays(nums, n);

    string str = "techie";
    printAllSubstrings(str);

    string str = "apple";
    findPowerSet(str);

    return 0;
}