class Solution:
    # @param A, a list of integer
    # @return an integer
    def singleNumber(self, A):
        B = {}
        for number in A:
            if B.has_key(number):
                B[number] += 1
            else:
                B[number] = 1
        
        for number in B.keys():
            if B[number] % 2 == 1:
                return number