class Solution {
public:
    int singleNumber(int A[], int n) {
        int result = 0;
        int i = 0;
        int j = 0;
        int count = 0;
        //sum every bit for A array
        for (i = 0; i < 32; i++){
            for (j = 0; j < n; j++){
                if ((A[j] >> i) & 1){
                    count++;
                }
            }
            
            if (count % 3 == 1){
                result |= 1 << i;
            }
            count = 0;
        }
        
        return result;
    }
};