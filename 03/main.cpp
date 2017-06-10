#include<vector>  
#include<iostream>  
using namespace std;  
  
typedef struct ListNode  
{  
    int val;  
    struct ListNode *next;  
    ListNode(int x) : val(x), next(NULL){}  
}ListNode,*LinkList;  
  
class Solution  
{  
public:  
    vector<int> printListFromTailToHead(struct ListNode* head)  
    {  
        vector<int> arr;  
        while(head!=NULL)  
        {  
            arr.insert(arr.begin(),head->val); 
            head=head->next;  
        }  
        return arr;  
    }  
    
    void CreatList(LinkList &L,vector<int> data)  {  
    	LinkList temp1,temp2;
		temp1=L;
		temp1->val=data[0];
		for(int i=1;i<data.size();i++){
			temp2=new ListNode(data[i]);
			temp1->next=temp2;
			temp1=temp2;
		} 
    }
//	void CreatList(LinkList &L,int n)  
//    {  
//        LinkList a,b;  
//        L=new ListNode(NULL);  
// 
//        a = L;   
//        if(n>0) cin>>a->val; 
//		 
//        int x;  
//        for(int i=1;i<n;i++)  
//        {  
//            cin>>x;  
//            b=new ListNode(x);//b->val=x;b->next=null  
//  
//            a->next=b;  
//            a = b;//a->b  
//        }  
//    }    
};  

int main()  
{  
    Solution so;
	int n,x;
	vector<int> data;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		data.push_back(x);
	}
	LinkList L=new ListNode(NULL);
	so.CreatList(L,data);  
//    int n;  
//    cin>>n;  
//    LinkList L;  
//    so.CreatList(L,n);  
    vector<int> ans=so.printListFromTailToHead(L);  
    
    vector<int>::iterator it;  
    for(it=ans.begin();it!=ans.end();it++)  
        cout<<*it<<" ";  
        
    getchar();
    return 0;  
}  

