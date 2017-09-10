#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int m, n, p, q;
	cout<<"Enter size of first matrix(m*n)\n";
	cin>>m>>n;
	cout<<"\n Enter size of second matrix(p*q)\n";
	cin>>p>>q;
	if(n == p)
	{
		int m1[m][n], m2[p][q];
		cout<<"Enter values for matrix 1:\n";
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cin>>m1[i][j];
			}
		}
		cout<<"Entered matrix is:\n";
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout<<m1[i][j]<<" ";
			}
			cout<<"\n";
		}
		cout<<"Enter values for matrix 2:\n";
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cin>>m2[i][j];
			}
		}
		cout<<"Entered matrix is:\n";
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout<<m2[i][j]<<" ";
			}
			cout<<"\n";
		}
		int r[m][q];
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < q; ++j)
			{
				r[i][j] = 0;
			}
		}
		for (int i = 0; i < m; ++i)
		{
			for (int y = 0; y < q; ++y)
			{
				for (int j = 0; j < n; ++j)
				{
					r[i][y] = r[i][y] + m1[i][j] * m2[j][y];
				}
			}
		}
		cout<<"Result matrix is:\n";
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < q; ++j)
			{
				cout<<r[i][j]<<" ";
			}
			cout<<"\n";
		}

	}
	return 0;
}