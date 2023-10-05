
#include<iostream>
using namespace std;
 
int main()
{   int n,m;
    cout<<"enter number of rows"<<endl;
    cin>>m;
    cout<<"enter number of column"<<endl;
    cin>>n;
int  mat[m][n],mat1[m][n],mat2[m][n];
    
for (int i = 0; i < m; i++)
    {
       for (int j = 0; j < n; j++)
       { cout<<"enter number: ";
          cin>>  mat[i][j];
       }}
 for (int i = 0; i < m; i++)
    {
       for (int j = 0; j < n; j++)
       { cout<<"enter number for matrix 2: ";
          cin>>  mat1[i][j];
       }}
    
    
for (int i = 0; i < m; i++)
    {
       for (int j = 0; j < n; j++)
       {
      
        mat2[i][j]=mat[i][j]+mat1[i][j];
          cout << mat2[i][j] << " \n"[j == n-1];
        } 
        
        }}
