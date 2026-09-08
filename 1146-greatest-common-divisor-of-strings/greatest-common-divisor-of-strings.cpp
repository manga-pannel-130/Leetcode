class Solution {
public:
    int gcd(int l1,int l2){
        int minlen = l1>l2 ? l2:l1;
        for(int i = minlen;i>0;i--){
            if(l1 % i == 0 && l2 % i == 0){
                return i;
            }
        }
        return 1;
    }

    string gcdOfStrings(string str1, string str2) {
        int comLen;
        if(str1 + str2 != str2 +str1){
            return "";
        }
        comLen = gcd(str1.size(),str2.size());
        return str1.substr(0,comLen);
    }
};