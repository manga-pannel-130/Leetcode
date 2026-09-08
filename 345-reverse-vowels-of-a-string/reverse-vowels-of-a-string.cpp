class Solution {
public:
    bool isVowel(char x)
    {
        if(x=='A'||x=='a'||x=='E'||x=='e'||x=='I'||x=='i'||x=='O'||x=='o'||x=='U'||x=='u')
        {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int left = 0, right = s.size()-1;
        while(left<right){
            while(left<right && !isVowel(s[left])){
                left++;
            }
            while(left<right && !isVowel(s[right])){
                right--;
            }
            if(left<right){
                swap(s[left++],s[right--]);
            }
        }
        return s;
    }
};