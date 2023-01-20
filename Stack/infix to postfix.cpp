#include <iostream>
using namespace std;

class stack{
	private:
		int size;
		char *arr;
		int top;
	public:
		stack(int s)
		{
			arr = new char[size];
			size = s;
			top = -1; 
		}
		
		void push(char element)
		{
			if(top == size-1)
			{
				cout << "No space available in stack: " << endl;
			}
			else{
				arr[++top] = element;
			}
		}
		
		int pop(){
			if(top == -1)
			{
				cout << "stack under flow: " << endl;
				return -1; 
			}
			else{
				return arr[top--];
				
			}
		}
		
		int peak(){
			if(top == -1)
			{
				cout << "stack is empty" << endl;
				return -1;
			}
			else{
				return arr[top];
			}
		}
		
		bool isempty()
		{
			if(top == -1)
			{
				return true;
			}
			else{
				return false;
			}
		}
};

int precedence(char c)
{
	if(c=='^')
	{
		return 3;
	}
	else if(c=='*' || c == '/')
	{
		return 2;
	}
	else if(c == '-' || c == '+')
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

string infixToPostfix(string s)
{
	stack st(100);
	string result;
	for(int i = 0; i < s.length();i++)
	{
		if(s[i]>='a' && s[i] <='z' || s[i]>='A' && s[i]<='Z')
		{
			result+=s[i];
		}
		else if(s[i] == '('){
			st.push(s[i]);
		}
		else if(s[i] == ')')
		{
			while(!st.isempty() && st.peak() != '(')
			{
				result+=st.peak();
				st.pop();
			}
			if(!st.isempty())
			{
				st.pop();
			}
		}
		
		else{
			while(!st.isempty() && precedence(st.peak())>precedence(s[i]))
			{
				result+=st.peak();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(!st.isempty())
	{
		result+=st.peak();
		st.pop();
	}
	return result;
}

int main()
{
	//abc/-ak/l-*
	cout << infixToPostfix("(a-b/c)*(a/k-l)") << endl;
}
