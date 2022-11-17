#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

    int prefix_eval(string s){

        stack<int> st;   // Here a stack of integer type is created.

        for(int i=s.length()-1;i>=0;i--){       //This for loop starts from the end of the expression and end at beginning of the prefix expression.
            if(s[i]>='0'&&s[i]<='9')
            {
                st.push(s[i]-'0');
            } else {
                int op1 = st.top();
                st.pop();
                int op2 = st.top();
                st.pop();

                switch (s[i]) {
                    case '+':
                        st.push(op1 + op2);
                        break;
                    case '-':
                        st.push(op1-op2);
                        break;
                    case '*':
                        st.push(op1*op2);
                        break;
                    case '/':
                        st.push(op1/op2);
                        break;
                    case '^':
                        st.push(pow(op1,op2));
                        break;
                }
            }
        }
        cout<<"Result is";
        return st.top();

    }



int main()
{
        string exp;
        cout<<"Enter the expression.";
        cin>>exp;
    cout<<prefix_eval(exp);
    return 0;
}

/*
 In this method operands are pushed onto a stack and if an operator comes then
  last two elements will get pop out and perform te operation and again inserted into a stack.
 */
