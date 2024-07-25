class Solution {
public:
    bool isVowel(char ch){
        ch = tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    string reverseVowels(string s) {
        int low = 0;
        int high = s.size()-1;
        while(low < high){
            if(isVowel(s[low]) && isVowel(s[high])){
                swap(s[low],s[high]);
                low++;
                high--;
            }
            else if(isVowel(s[low]) == 0){
                low++;
            }
            else{
                high--;
            }
        }

        return s;
    }
};