#include<iostream>
using namespace std;
int main()
{
char ch='a';
short s=-1;
int i=697869;
bool b=false;
long l=66074321;
float f=2.9f;
long double ld=67.8956;
wchar_t wc=L'a';
cout<<"SIZE OF VARIABLES:\n";
cout<<"Size of Character variable	:"<<sizeof(ch)<<endl;
cout<<"Size of Short variable		:"<<sizeof(s)<<endl;
cout<<"Size of Integer variable	:"<<sizeof(i)<<endl;
cout<<"Size of Bool variable		:"<<sizeof(b)<<endl;
cout<<"Size of Long variable		:"<<sizeof(l)<<endl;
cout<<"Size of Float variable		:"<<sizeof(f)<<endl;
cout<<"Size of Long Double variable	:"<<sizeof(ld)<<endl;
cout<<"Size of Wide Character variable :"<<sizeof(wc)<<endl;
 
cout<<"SIZE OF DATATYPES:\n\n";
cout<<"Size of CHARACTER datatype	:"<<sizeof(char)<<endl;
cout<<"Size of SHORT datatype		:"<<sizeof(short)<<endl;
cout<<"Size of INTEGER datatype	:"<<sizeof(int)<<endl;
cout<<"Size of BOOLEAN datatype	:"<<sizeof(bool)<<endl;
cout<<"Size of LONG datatype		:"<<sizeof(long)<<endl;
cout<<"Size of FLOAT datatype		:"<<sizeof(float)<<endl;
cout<<"Size of LONG DOUBLE datatype	:"<<sizeof(long double)<<endl;
cout<<"Size of WIDE CHARACTER datatype :"<<sizeof(wchar_t)<<endl;	
return 0;}
