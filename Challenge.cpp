#include<iostream>
#include<iomanip>
using namespace std;

void convert(int x[], int y[],int stack[], int size_x, int size_y, int size_stack){
	int inp_imp;
	int posit_y=0;
	int posit_stack=0;
	int temp=0;
	for(int i=0; i<size_x; i++){
		if(x[i]>='A' || x[i]<='Z'){
			x[i]=y[posit_y];
			posit_y++;
		}
		else{
		if(x[i]=='/' || x[i]=='*')
			inp_imp=2;
		if(x[i]=='+' || x[i]=='-')
			inp_imp=1;
		if(inp_imp>temp){
			x[i]=stack[posit_stack];
			posit_stack++;
			temp=inp_imp;
		}
		else{
			stack[posit_stack-1]=y[posit_y];
			x[i]=stack[posit_stack];
			posit_stack++;
			posit_y++;
		}
		stack[posit_stack-1]=y[posit_y];
		}
	
	}
	for(int i=0; i<size_y; i++)
		cout<<y[i];
}


