class Solution {
public:
    bool isExpr(string expr){
        if(expr=="+"||expr=="-"||expr=="*"||expr=="/"){
            return true;
        }
        return false;
    }
    int evaluate(int a, int b, string expr){
        if(expr=="+"){
            return a+b;
        }
        else if(expr=="-"){
            return b-a;
        }
        else if(expr=="*"){
            return a*b;
        }
        else if(expr=="/"&&b!=0){
            return b/a;
        }
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        for(string x: tokens){
            if(!s.empty()&&isExpr(x)){
                int a = stoi(s.top());
                s.pop();
                int b = stoi(s.top());
                s.pop();
                int val = evaluate(a, b, x);
                s.push(to_string(val));
            }
            else{
                s.push(x);
            }
        }
        if(s.size()==1){
            return stoi(s.top());
        }
        return 0;
    }
};