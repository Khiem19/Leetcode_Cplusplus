class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.length() > magazine.length()) {
            return false;
        }
        
        map<char, int> _mag;

        for(int i = 0; i < magazine.length(); i++) {
            _mag[magazine[i]]++;
        }        
        
        for(int i = 0; i < ransomNote.length(); i++) {
            if(_mag[ransomNote[i]] > 0){
                _mag[ransomNote[i]]--;
            }
            else return false;
        }

        return true;
    }
};