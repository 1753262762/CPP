#include<bits/stdc++.h>
using namespace std;
char word[10010];
void find()
{
	int len = strlen(word);
	for (int i = 1; i <= len; i ++)  //��С���ڴ����ȴ� 1��ʼ 
	{
		if (len % i == 0) //��С���ڴ��ĳ���ֻ������ len������ 
		{
			bool f = true;
			for (int j = i; j < len; j ++)
				if (word[j] != word[j%i])  //����λ���ϵ��ַ��Ƿ�ƥ�� 
					{f = false; break;}
			if (f)  //��һ��ѭ�����������ǵ�֪��С���ڴ��ĳ���Ϊ i 
			{
				for (int j = 0; j < i; j ++) printf("%c", word[j]);
				printf("\n");
				break;  //ֻҪ�����С�����ڴ����ɽ����Ե�ǰ�������� 
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


