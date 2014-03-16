class Solution {
public:
    vector<string> letterCombinations(string digits) {
        const char numbers[8][5] =  {   {'a', 'b', 'c', 0},
                                    {'d', 'e', 'f', 0},
                                    {'g', 'h', 'i', 0},
                                    {'j', 'k', 'l', 0},
                                    {'m', 'n', 'o', 0},
                                    {'p', 'q', 'r', 's', 0},
                                    {'t', 'u', 'v', 0},
                                    {'w', 'x', 'y', 'z', 0},
                                };
        vector<string> result;
        if (digits == ""){
            result.push_back("");
        }

        for (unsigned i = 0; i < digits.size(); i++){
            int num = digits[i] - 0x32;
            if (num >= 0){
                if (result.size()){
                    vector<string> vec_tmp = result;
                    result = std::vector<string>();
                    int index = 0;
                    for (unsigned j = 0; j < vec_tmp.size(); j++){
                        int k = 0;
                        while (numbers[num][k]){
                            string string_tmp = vec_tmp[j];
                            string_tmp.push_back(numbers[num][k++]);
                            result.push_back(string_tmp);
                        }
                    }
                }else{
                    int n = 0;
                    while (numbers[num][n]){
                        string tmp (1, numbers[num][n]);
                        result.push_back(tmp);
                        n++;
                    }   
                }   
            }else{
                result.push_back("");
            }   
        }   
    
        return result;
    }
};