#include <iostream>
#include<algorithm>
using namespace std;

class stack{
	private:
		int size;
		int *arr;
		int top;
	public:
		stack(int s)
		{
			arr = new int[size];
			size = s;
			top = -1; 
		}
		
		void push(int element)
		{
			if(top == size-1)
			{
				cout << "No space available in stack: " << endl;
			}
			else{
				
				//top++;
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

int prec(char c)
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

string infixToPrefix(string s)
{
	reverse(s.begin(),s.end());
	
	stack st(100);
	string result;
	
	for(int i = 0; i < s.length();i++)
	{
		if((s[i]>='a' && s[i] <='z') || (s[i]>='A' && s[i]<='Z'))
		{
			result+=s[i];
		}
		else if(s[i] == ')'){
			st.push(s[i]);
		}
		else if(s[i] == '(')
		{
			while(!st.isempty() && st.peak() != ')')
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
			while(!st.isempty() && prec(st.peak())>prec(s[i]))
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
	reverse(result.begin(),result.end());
	return result;
}

int main()
{
	cout << infixToPrefix("(a-b/c)*(a/k-l)") << endl;
}
