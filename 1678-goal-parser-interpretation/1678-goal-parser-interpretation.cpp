class Solution {
public:
    string interpret(string command) {
        stack<char> st;
        string res = "";
        
        for(int i = 0;i<command.length();i++){
            switch (command[i]){
                case 'G':
                    res+='G';
                    break;
                case '(':
                    st.push('(');
                    break;
                case 'a':
                    st.push('a');
                    break;
                case 'l':
                    st.push('l');
                    break;
                case ')':
                    if(st.top() == '(')
                        res+='o';
                    else if(st.top() == 'l'){
                        while(st.top() != '('){
                            st.pop();
                        }
                        res+="al";
                    }
                    st.pop();
                    break;
            }
        }
        return res;
    }
};