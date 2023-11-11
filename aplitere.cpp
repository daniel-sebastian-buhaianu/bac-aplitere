#include <iostream>
using namespace std;
int faz[26], fAZ[26];
int main()
{
	int i, ap, apmax=0;
	char s[101];
	cin.get(s, 101);
	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			ap = ++faz[s[i]-'a'];
		else if (s[i] >= 'A' && s[i] <= 'Z')
			ap = ++fAZ[s[i]-'A'];
		if (ap > apmax) apmax = ap;
	}
	for (i = 0; i < 26; i++)
	{
		if (faz[i] == apmax)
			cout << (char)('a'+i) << ' ' << faz[i] << '\n';
		if (fAZ[i] == apmax)
			cout << (char)('A'+i) << ' ' << fAZ[i] << '\n';
	}
	return 0;
}
