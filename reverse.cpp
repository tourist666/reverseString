#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s,str="hElLo wOrLd";
	reverse(str.begin(),str.end());
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] != ' '&&str[i] <= 'z'&&str[i] >= 'a')
			str[i] += 'A' - 'a';
		else if (str[i] != ' '&&str[i] >= 'A'&&str[i] <= 'Z')
			str[i] -= 'A' - 'a';
	}
	cout << str << endl;;
	for (int i = 0; i < str.size(); i++)
	{
		 int j = i;
		while(j<str.size()&&str[j] != ' ')
			j++;
		reverse(str.begin()+i, str.begin()+j);
		i = j;
	}
	cout << str;
}
