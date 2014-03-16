class Solution:
    # @param A, a list of integer
    # @return an integer
    def singleNumber(self, A):
        B = {}
        for num in A:
            if B.has_key(num):
                B[num] += 1
            else:
                B[num] = 1
                
        for num in B.keys():
            if B[num] == 1:
                return num