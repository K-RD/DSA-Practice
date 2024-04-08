class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.empty())return digits;
        digits[digits.size()-1] +=1;
        int pos=digits.size()-1;
        while(digits[pos]>9){
            int rem = digits[pos]%10;
            int quot = digits[pos]/10;
            digits[pos] = rem;
            if(pos==0){
                digits.insert(digits.begin(), quot);
                pos++;
            }else{
                digits[pos-1] += quot;
            }
            --pos;
        }
        return digits;
    }
};
