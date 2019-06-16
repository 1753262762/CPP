#include<bits/stdc++.h>
using namespace std;
char word[10010];
void find()
{
	int len = strlen(word);
	for (int i = 1; i <= len; i ++)  //最小周期串长度从 1开始 
	{
		if (len % i == 0) //最小周期串的长度只可能是 len的因子 
		{
			bool f = true;
			for (int j = i; j < len; j ++)
				if (word[j] != word[j%i])  //倍数位置上的字符是否匹配 
					{f = false; break;}
			if (f)  //上一个循环结束后我们得知最小周期串的长度为 i 
			{
				for (int j = 0; j < i; j ++) printf("%c", word[j]);
				printf("\n");
				break;  //只要输出最小的周期串即可结束对当前串的讨论 
			}
		}
	}
}

int main()
{
	int k; scanf("%d", &k);
	while (k --)
	{
		scanf("%s", word);
		find();
	}
	return 0;
}


