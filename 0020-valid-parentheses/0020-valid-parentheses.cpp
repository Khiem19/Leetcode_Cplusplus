class Solution {
public:
    
    bool isValid(string a){
        stack<char> c;
        for(int i=0;i<a.length();i++){
            if(a[i] == '(' || a[i] == '[' || a[i] == '{')
            {
                c.push(a[i]);
            }
            else {
                if(c.empty()) 
                    return false;
                if(a[i] == ')' && c.top() != '(' ) {
                    return false;
                }
                if(a[i] == ']' && c.top() != '[' ) {
                    return false;
                }
                if(a[i] == '}' && c.top() != '{' ) {
                    return false;
                }
                c.pop(); 
            }
        }
        return c.empty();
    }  
};