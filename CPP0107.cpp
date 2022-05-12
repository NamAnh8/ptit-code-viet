#include<iostream>
#include<cmath>
using namespace std;
int main(){
    char A[15];
	A[0] = 'A';
	A[1] = 'B';
	A[2] = 'B';
	A[3] = 'A';
	A[4] = 'D';
	A[5] = 'C';
	A[6]= 'C';
	A[7]= 'A';
	A[8]= 'B';
	A[9]= 'D';
	A[10]= 'C';
	A[11]= 'C';
	A[12]= 'A';
	A[13]= 'B';
	A[14]= 'D';
	
	char B[15];
	B[0] = 'A';
	B[1] = 'C';
	B[2] = 'C';
	B[3] = 'A';
	B[4] = 'B';
	B[5] = 'C';
	B[6] = 'D';
	B[7] = 'D';
	B[8] = 'B';
	B[9] = 'B';
	B[10] = 'C';
	B[11] = 'D';
	B[12] = 'D';
	B[13] = 'B';
	B[14] = 'B';
    int t;
	cin >> t;
	int id;
	char check;
	int count;
	
	while(t--)
	{	
		count = 0;
		//cout << "nhap id" << endl;
		cin >> id;
		if(id==101)
		{
			for(int i=0;i<=14;i++)
			{
				//cout << "nhap test thu" << i+1 << endl;
				cin >> check;
				
				if(check == A[i])
				{
					//cout << "cong count" << endl;
					count++;
				}
			}
		}
		if(id==102)
		{
			for(int i=0;i<=14;i++)
			{
				cin >> check;
				if(check == B[i])
				{
					count++;
				}
			}
		}
		//float ans = count/15;
		//cout << ans << endl;
		printf("%0.2f",static_cast<float>(count)/15*10);
		printf("\n");
	}
}
