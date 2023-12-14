/*
Count triplets (a, b, c) such that a + b, b + c and a + c are all divisible by K

Given two integers ‘N’ and ‘K’, the task is to count the number of triplets (a, b, c) of positive integers not greater than ‘N’ such that ‘a + b’, ‘b + c’, and ‘c + a’ are all multiples of ‘K’. Note that ‘a’, ‘b’ and ‘c’ may or may not be the same in a triplet.

Examples: 

Input: N = 2, K = 2 
Output: 2
Explanation: All possible triplets are  (1, 1, 1) and (2, 2, 2)

Input: N = 3, K = 2 
Output: 9  

Approach:
Run three nested loops from ‘1’ to ‘N’ and check whether i+j, j+l, and l+i are all divisible by ‘K’. Increment the count if the condition is true.

*/



// C++ implementation of the approach
#include<iostream>
using namespace std;
class gfg
{
    // Function returns the
    // count of the triplets
    public:
    long count_triples(int n, int k);
};

    long gfg :: count_triples(int n, int k)
    {
        int i = 0, j = 0, l = 0;
        int count = 0;

        // iterate for all
        // triples pairs (i, j, l)
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                for (l = 1; l <= n; l++)
                {

                    // if the condition
                    // is satisfied
                    if ((i + j) % k == 0
                        && (i + l) % k == 0
                        && (j + l) % k == 0)
                        count++;
                }
            }
        }
        return count;
    }

    // Driver code
    int main()
    {
        gfg g;
        int n = 3;
        int k = 2;
        long ans = g.count_triples(n, k);
        cout << ans;
    }
//This code is contributed by Soumik
