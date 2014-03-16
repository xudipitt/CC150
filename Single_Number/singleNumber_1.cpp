class Solution {
public:
    int singleNumber(int A[], int n) {
        int i = 0;
        int result = 0;
        for (i = 0; i < n; i++){
            result ^= A[i];
        }
        return result;
    }
};