class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        
        for(int i = 0; i<s.size();i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                s1.push(s[i]);
            }else if (s[i] == ')' || s[i] == ']' || s[i] == '}'){
                if(s[i] == ')'){
                    if (!s1.empty()){
                        if(s1.top() == '('){
                            s1.pop();
                        }else{
                            s1.push(s[i]);
                        }
                    }else{
                        return false;
                    }
                }
                else if(s[i] == ']'){
                    if (!s1.empty()){
                        if(s1.top() == '['){
                            s1.pop();
                        }else{
                            s1.push(s[i]);
                        }
                    }else{
                        return false;
                    }
                }
                if(s[i] == '}'){
                    if (!s1.empty()){
                        if(s1.top() == '{'){
                            s1.pop();
                        }else{
                            s1.push(s[i]);
                        }
                    }else{
                        return false;
                    }
                }
            }
        }
        return s1.empty();
    }
};