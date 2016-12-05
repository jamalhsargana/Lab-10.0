#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool pairs(char open, char close)

{
	if (open == '(' && close == ')') return true;
	else if (open == '{' && close == '}') return true;
	else if (open == '[' && close == ']') return true;
	return false;
}

bool balancing(string eq)
{
	stack<char>  S;
	for (int i = 0; i<eq.length(); i++)
	{
		if (eq[i] == '(' || eq[i] == '{' || eq[i] == '[')
			S.push(eq[i]);
		else if (eq[i] == ')' || eq[i] == '}' || eq[i] == ']')
		{
			if (S.empty() || !pairs(S.top(), eq[i]))
				return false;
			else
				S.pop();
		}
	}
	return S.empty() ? true : false;
}


int main()
{
	string equat;
	cout << "Enter equation: \n ";
	cin >> equat;
	if (balancing(equat))
		cout << "Valid \n";
	else
		cout << "not valid \n";

	string sign;
	int a;
	for (int i =0; i < equat.length(); i++)
	{
		if (equat[i] == '*' || equat[i] == '+' || equat[i] == '-' || equat[i] == '/')
		{			
			sign[a] = equat[i];
			a++;
		}
	}

	for (int i = 0; i <= sign.length(); i++)
	{
		if (sign[a] == sign[a] + 1)
		{
			cout << "invalid equation \n";
		}
		else{
			cout << "Valid \n";
		}

	}

	//system("pause");
}