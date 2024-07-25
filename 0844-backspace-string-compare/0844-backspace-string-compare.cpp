class Solution {
public:
    bool backspaceCompare(const string& s, const string& t) {
        int i = s.length() - 1;
        int j = t.length() - 1;
        int bsS = 0, bsT = 0;
            
        while(i>=0 || j>= 0){
            while(i>=0 && (s[i] == '#' || bsS > 0)){
                if(s[i]== '#')
                    bsS++;
                else bsS--;
                i--;
            }
            
            while(j>=0 && (t[j] == '#' || bsT > 0)){
                if(t[j]== '#')
                    bsT++;
                else bsT--;
                j--;
            }
            
            if((i >= 0 && j >= 0 && s[i] != t[j]) || (i >= 0) != (j >= 0))
                return false;
            
            i--;
            j--;
        }
        return true;
    }
};