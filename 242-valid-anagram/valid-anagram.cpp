class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int freqTable[256] = {0};
        for(int i=0; i<s.size(); i++){
            freqTable[s[i]]++;
        }

        for(int j=0; j<t.size(); j++){
            freqTable[t[j]]--;
        }

        for(int i=0; i<256; i++){
            if(freqTable[i] != 0){
                return false;
            }
        }
        return true;

        
        
        

        //Brute Force
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());

        // if(s==t){
        //     return true;
        // }else{
        //     return false;
        // }
    }
};