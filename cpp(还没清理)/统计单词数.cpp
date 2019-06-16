#include<bits/stdc++.h>
using namespace std;
string word, text;
int pos, first, ans;
void convert()  //转换为全小写并加空格
{
	for (int i = 0; i < word.size(); i ++) 
		word[i] = tolower(word[i]);
	for (int i = 0; i < text.size(); i ++) 
		text[i] = tolower(text[i]);
	word = ' ' + word + ' ';
	text = ' ' + text + ' ';
}

int main()
{
	getline(cin, word);
	getline(cin, text);
	convert();
	first = text.find(word);
	while ((pos = text.find(word, pos)) >= 0) //尚未返回 -1 
	{
		pos += word.size() - 1;  // pos往后跳一个 word的长度 
		ans ++;
	}
	cout << ans << " " << first;
	return 0;
}
