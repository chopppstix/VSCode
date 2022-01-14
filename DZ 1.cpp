#include<iostream>
using namespace std;
int main()
{
	int n, i, p;
	int temp;
	cout << "Vvedite n";
	cin >> n;
	int mas[n];
	for (i = 0; i < n; i++)
		mas[i] =rand() %100-50;
	for (int i = 0; i < n; i++){
		cout <<mas[i]<<"";
		cout<<endl;
		}
	for(int p=1; p<<n; p++)
	for(i=0; i<n-1; i++) 
	if(mas[i] < mas[i+1]){
		temp=mas[i];
		mas[i]=mas[i+1];
		mas[i+1]=temp;}
		for(i=0;i<n;i++)
		cout<<" "<<mas[i]<<"";
		cout<<endl;
}