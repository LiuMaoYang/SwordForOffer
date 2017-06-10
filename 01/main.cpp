#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define random(a,b) (rand()%(b-a+1)+a)
using namespace std;

bool Find(int target, vector<vector<int> > array) {
    int i,j;
	for(i=0;i<array.size();i++)
		for(j=0;j<array[0].size();j++)
			if(target==array[i][j])
				return true;
	return false;
}

int main() {
	vector<vector<int> > array(4, vector<int>(4));//note the 'Space'
	int i,j,n=0;
	int num;
	
	for(i = 0; i < array.size(); i++){
		for (j = 0; j < array[0].size();j++){
//    		array[i][j] = n++;
//			srand((unsigned) time (NULL));
//			array[i][j] = rand()%10;
			array[i][j] = random(1,10);
    		cout<< array[i][j] <<"\t";
		}
		cout<<endl;
	}
	cout<<endl; 
	
	cin>>num;
	if(Find(num,array))
		cout<<"found"<<endl;
	else
		cout<<"not found"<<endl;
		
	return 0;
}
