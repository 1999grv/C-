#include<bits/stdc++.h>
using namespace std;
struct  lil
{
	int data;
	lil*next;
};
class lli
{
	lil* head,*tail,*grv,*ptr,*mn;
    public:void creation()              //FBEGINGUNCTION FOR CREATION ,
                                      //SINCE WE WANT HEAD AND TAIL TO BE INTIALISED TOO!
    {
        head=NULL;
        tail=NULL;
    }
    void insertion_beg(int i)        //FUNCTION FOR INSERTION, AT BEGINING...
    {
        lil *new_node=new lil();
        new_node->data=i;
        new_node->next=NULL;
        if(head==NULL)
        {
            head=new_node;
            tail=new_node;
        }
        else
        {
            //head->data=new_node->data;
            new_node->next=head;
            head=new_node;
            //head->next=tail;
        }
    }
	void display()
	{
		lil *ptr=new lil();
		ptr=head;vector<long> v;vector<long> h;
		while(ptr!=NULL)
		{
			if(ptr->data%2==0)
			{
				h.push_back(ptr->data);
			}
			else
			{
				if(h.size()!=0)
				{
					reverse(h.begin(),h.end());
				}
				for(int i=0;i<h.size();i++)
				{
					cout<<h[i]<<" ";
				}
				cout<<ptr->data<<" ";
				h.clear();
			}
			ptr=ptr->next;
		}

	}
};
int main()
{
		#ifndef ONLINE_JUDGE
		freopen("input.in","r",stdin);
		freopen("output.in","w",stdout);
		#endif
		int n;
		cin>>n;
		lli obj;
		obj.creation();
		//obj.
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			obj.insertion_beg(x);
		}
		obj.display();
}