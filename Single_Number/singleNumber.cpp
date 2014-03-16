class Solution {
public:
    int singleNumber(int A[], int n) {
        int i = 0;
        int abs_Ai = 0;
        int result = 0;
        int max = 0;
        //find max number in array
        for (i = 0; i < n; i++){
            abs_Ai = abs(A[i]);
            if (abs_Ai > max){
                max = abs_Ai;
            }
        }
        
        int *B = new int[max + 1]();
        //use element as index of B array, and count how many same number in A array.
        for (i = 0; i < n; i++){
            abs_Ai = abs(A[i]);
            B[abs_Ai]++;
        }
        
        for (i = 0; i <= max; i++){
            if (B[i] % 2 == 1){
                result = i;
                break;
            }
        }
        
        int tmp = 0;
        //find out the single number
        for (i = 0; i < n; i++){
            if (result == A[i]){
                tmp ++;
            }
        }
        
        //make sure it if negative
        if (tmp % 2 == 0){
            result = -result;
        }
        
        delete [] B;
        return result;
    }
};