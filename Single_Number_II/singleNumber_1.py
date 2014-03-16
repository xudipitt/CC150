class Solution:
    # @param A, a list of integer
    # @return an integer
    def singleNumber(self, A):
        A.sort()
        if len(A) == 1:
            return A[0]
        if A[0] != A[1]:
            return A[0]
        for num in range(1, len(A) - 1):
            if (A[num - 1] != A[num]) and (A[num + 1] != A[num]):
                return A[num]
        return A[-1]