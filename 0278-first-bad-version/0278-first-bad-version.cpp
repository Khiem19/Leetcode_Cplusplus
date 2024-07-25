// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 0;
        unsigned long long end =n;
        unsigned long long mid;
        unsigned long long badverse;
        while(start <= end) {
            mid = (start+end)/2;

            if(isBadVersion(mid) == 1) {
                badverse = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;    
            }
        }

        return badverse;
    }
};