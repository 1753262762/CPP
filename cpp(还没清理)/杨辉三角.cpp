#include<iostream>
#include<iomanip>
using namespace std;
void YangHuiShow(int *a, int n) {
	//根据数据a指向的二维数组在屏幕上打印 
	//杨辉三角形，每行前面填充合适的空格 
	//以显示成等腰三角形，左右对称 
	int i, j;
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n - i - 1; j++)
			cout << setw(3) << " ";//前导空格，为单个数据的一半宽度  
		for (j = 0; j <= i; j++)
			cout << setw(6) << a[i*n + j];
		cout << endl;
	}
int* YangHuiData(int n); //n是杨辉三角形的行数 
void YangHuiShow(int *pData, int n);//在屏幕上打印杨辉三角形 
int main() 
{
	int n;
	cout << "请输入杨辉三角形的行数";
	cin >> n;
	//计算杨辉三角并保存到二维数组
	int *pData = YangHuiData(n);
	//在屏幕上打印等腰三角形的杨辉三角 
	YangHuiShow(pData, n);
	//n是杨辉三角形的行数 
}
 
int* YangHuiData(int n) {
	int *a = new int[n*n];
	//完成杨辉三角形的计算，没有显示的位置填0 
	int i, j;
	for (i = 0; i<n*n; i++) {
		a[i] = 0;
	}
 
	a[0] = 1;
	a[n] = 1;
	a[n + 1] = 1;
 
	for (i = 2; i<n; i++) {
		a[i*n] = 1;
		a[i*n + i] = 1;
		for (j = 1; j<i; j++) {
			a[i*n + j] = a[(i - 1)*n + j - 1] + a[(i - 1)*n + j];
		}
	}
 
	return a;
}


