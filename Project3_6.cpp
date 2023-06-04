
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n = 0;
	int m = 0;
	int k = 0;
	vector<string> words1;
	vector<string> words2;
	vector<string> answer;
	string s, sub, s1, s2;
	getline(cin, s);
	transform(s.begin(), s.end(), s.begin(), tolower);
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '.') {
			s1 = s.substr(0, i);
			s2 = s.substr(i + 2, (s.length() - (i + 3)));
			break;
		}
	}

	s1 += ' ';
	s2 += ' ';

	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] == ' ')
		{
			sub = s1.substr(m, (i - m));
			words1.push_back(sub);
			s1.erase(m, (i - m));
			m += 1;
		}
	}


	for (int i = 0; i < s2.length(); i++)
	{
		if (s2[i] == ' ')
		{
			sub = s2.substr(m, (i - m));
			words2.push_back(sub);
			s2.erase(m, (i - m));
			m += 1;
		}
	}

	for (int i = 0; i < words1.size(); i++)
	{
		for (int j = 0; j < words2.size(); j++)
		{
			if (words1[i] == words2[j])
			{
				answer.push_back(words1[i]);
			}
		}
	}

	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << ' ';
	}
}

