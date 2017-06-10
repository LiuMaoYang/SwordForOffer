#include <iostream>
#include <string>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void replaceSpace(char *str,int length){
	if(str==NULL || length<0)
		return;
	
	int i,cnt=0;
	for(i=0;i<length;i++)
		if(str[i]==' ')
			cnt++;
			
	if(cnt==0)
		return;

	int newLength=length+2*cnt;	
	for(i=length-1;i>=0;i--){
		if(str[i]==' '){
			str[--newLength]='0';
			str[--newLength]='2';
			str[--newLength]='%';
		}
		else
			str[--newLength]=str[i];
	}
	cout<<str<<endl;
}

int main() {
//	string str;
//	getline(cin,str);//#include <string>
//	cout<<str<<str.size()<<endl;
//	int len=str.size();
	char str[100];
	cin.get(str,100);
//	cout<<str<<strlen(str)<<endl;
	int len=strlen(str);//include <string.h>
	replaceSpace(str,len);
	
	getchar();
		
	return 0;
}