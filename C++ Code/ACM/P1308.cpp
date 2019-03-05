#include<iostream>
#include<string>
using namespace std;
int main()
{
	string word;
	string text;
	getline(cin, word);
	getline(cin, text);
	for (int i = 0; i < word.length(); i++)
	{
		word[i] = tolower(word[i]);
	}
	for (int i = 0; i <text.length(); i++)
	{
		text[i] = tolower(text[i]);
	}
	word = " " + word + " ";//若不添加则to在toooo中也能正确匹配
	text = " " + text + " ";//添加后只有单词才会匹配，同时处理首尾目标单词

	size_t found = text.find(word);
	if (found != string::npos)
	{
		size_t a = text.find(word);
		size_t b = text.find(word);
		int count = 0;
		while (1)
		{
			count++;
			b = text.find(word, b + 1);
			if (b == string::npos)
			{
				break;
			}
		}
		cout << count << " " << a;
	}
	else
	{
		cout << "-1";
	}
	return 0;
}