#include<iostream>
#include<string>
using namespace std;
void flower()
{
	cout<<"\nList of the flowers:\n1.\tRose\n2.\tTulip\n3.\tDaisy\n4.\tSunflowers\n5.\tDaffodil\n6.\tShow total amount\n";
	int x,y,a,amount=0;
	double price[]={25,140,30,25,20};
	double num[]={30,15,20,15,25};
	string flowerType = "Which flower do you want? (Input): ";
	while(1)
	{
		cout<<endl<<flowerType;
		cin>>x;
		y = x - 1;
		if(x==1)
		{
			cout<<"There are "<<num[y]<<" flowers"<<endl;
			cout<<"How many do you want? : ";
			cin>>a;
			if(num[y]<0)
				cout<<"No flower available"<<endl;
			else if(num[y]<a)
				cout<<"Invalid input"<<endl;
			else
			{
				num[y]=num[y]-a;
				amount=amount+price[y]*a;
			}
		}
		else if(x==2)
		{
			cout<<"There are "<<num[y]<<" flowers"<<endl;
			cout<<"How many do you want? : ";
			cin>>a;
			if(num[y]<0)
				cout<<"No flower available"<<endl;
			else if(num[y]<a)
				cout<<"Invalid input"<<endl;
			else
			{
				num[y]=num[y]-a;
				amount=amount+price[y]*a;
			}
		}
		else if(x==3)
		{
			cout<<"There are "<<num[y]<<" flowers"<<endl;
			cout<<"How many do you want? : ";
			cin>>a;
			if(num[y]<0)
				cout<<"No flower available"<<endl;
			else if(num[y]<a)
				cout<<"Invalid input"<<endl;
			else
			{
				num[y]=num[y]-a;
				amount=amount+price[y]*a;
			}
		}
		else if(x==4)
		{
			cout<<"There are "<<num[y]<<" flowers"<<endl;
			cout<<"How many do you want? : ";
			cin>>a;
			if(num[y]<0)
				cout<<"No flower available"<<endl;
			else if(num[y]<a)
				cout<<"Invalid input"<<endl;
			else
			{
				num[y]=num[y]-a;
				amount=amount+price[y]*a;
			}
		}
		else if(x==5)
		{
			cout<<"There are "<<num[y]<<" flowers"<<endl;
			cout<<"How many do you want? : ";
			cin>>a;
			if(num[x]<0)
				cout<<"No flower available"<<endl;
			else if(num[y]<a)
				cout<<"Invalid input"<<endl;
			else
			{
				num[y]=num[y]-a;
				amount=amount+price[y]*a;
			}
		}
		else if(x==6)
		{
			break;
		}
		cout<<endl;
	}
	cout<<endl<<"Total amount: "<<amount<<" "<<"Taka";
}

int main()
{
	cout<<"\t\tWelcome to flower shop."<<endl<<endl<<"\tEnter number according to the list given below."<<endl<<"\t1.\tFlower list and price"<<endl<<"\t2.\tExit"<<endl<<endl;
	int n;
	cout<<"Input: ";
	cin>>n;
	if(n==1)
	{
		flower();
	}
	else
    {
        cout<<"Thank You";
    }
	return 0;
}
