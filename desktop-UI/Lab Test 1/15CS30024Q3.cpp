#include<bits/stdc++.h>
using namespace std;
struct food
{
  int id;
  char name[100];
  int price;
  char health[100];
  char composition[100];
  char season[100];
};
void fn(food f[100],int n)
{
  int i;
  for(i=0;i<n;i++)
    {
      cout<<"ID:";
      cin>>f[i].id;
      cout<<"Name:";
      cin>>f[i].name;
      cout<<"Price:";
      cin>>f[i].price;
      cout<<"Health:";
      cin>>f[i].health;
      cout<<"Composition:";
      cin>>f[i].composition;
      cout<<"Seasonal:";
      cin>>f[i].season;
    }
}
int main(void)
{
  FILE* p1;food f[100];
  p1=fopen("item.bin","rb");
  static int t=1;
  if(!p1)
    t=0;
  int i,n1,flag;
  if(t==1)
    {
      fread(&n1, sizeof(int), 1, p1);
      for(i=0;i<n1;i++)
      fread(&f[i], sizeof(food), 1, p1);
      fclose(p1);
    }
   else
	{
	  cout<<"Examiner,since list is not available please enter input to make file which you can then use to check code\n";
          cout<<"Enter no of items:";
          cin>>n1;
          fn(f,n1);
        }
  while(1)
    {
      flag=0;int ch,ID;
      cout<<"DIGITAL WAITER\n";
      cout<<"CHOICES:\n";
      cout<<"1)See menu list\n2)See item details\n3)See item name-price\n4)Exit";
      cin>>ch;
      switch(ch)
	{
	case 1: for(i=0;i<n1;i++)
	    {
	      cout<<endl;
              cout<<"Item "<<i+1<<endl;
              cout<<"ID:"<<f[i].id<<endl;
              cout<<"Name:"<<f[i].name<<endl;
            }break;
        case 2: 
	  cout<<"Enter Item ID:";
          cin>>ID;
          for(i=0;i<n1;i++)
	    {
	      if(f[i].id==ID)
		{
		  cout<<"Name:"<<f[i].name<<endl;
                  cout<<"Health warning:"<<f[i].health<<endl;
                  cout<<"Composition:"<<f[i].composition<<endl;
                  cout<<"Seasonal availability:"<<f[i].season<<endl;

		  break;


                }
	    }
	  if(i==n1)cout<<"Item not found"<<endl;break;
	case 3:cout<<"Enter Item ID:";
	  cin>>ID;
          for(i=0;i<n1;i++)
	    {
	      if(ID==f[i].id)
		{
                  cout<<"Name:"<<f[i].name<<endl;
                  cout<<"Price:"<<f[i].price<<endl;
                  break;


            


		}

	    }if(i==n1)cout<<"Item not found"<<endl;break;
	default:
	        flag=1;p1=fopen("item.bin","wb");
                 fwrite(&n1, sizeof(int), 1, p1);
                 for(i=0;i<n1;i++)
                 fwrite(&f[i], sizeof(food), 1, p1);
                 fclose(p1);break;

      }

      if(flag==1)
	break;


    }
   


   return 0;
}
