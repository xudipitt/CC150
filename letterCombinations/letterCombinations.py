class Solution:
    # @return a list of strings, [s1, s2]
    def letterCombinations(self, digits):
        number = {
                            "1" : (),
                            "2" : ("a", "b", "c"),
                            "3" : ("d", "e", "f"),
                            "4" : ("g", "h", "i"),
                            "5" : ("j", "k", "l"),
                            "6" : ("m", "n", "o"),
                            "7" : ("p", "q", "r", "s"),
                            "8" : ("t", "u", "v"),
                            "9" : ("w", "x", "y", "z"),
                            "0" : ()
                }
        result = [""]
        
        for n in digits:
            if ((n != "1") and (n != "0")):
                if len(result):
                    tmp = list(result)
                    result = []
                    for i in tmp:
                        for j in number[n]:
                            result.append(i + j)
                else:
                    result = list(number[n])
        return result

