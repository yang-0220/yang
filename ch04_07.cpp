#include  <iostream>
#include  <cstdlib>

using namespace  std;


int main()
{
    int i,j,tmp;
    int date[8]={26,35,49,37,12,8,45,63};
    
    cout<<"��w�ƧǪk:"<<endl<<"��l��Ƭ�:";
	
	for (i=0;i<8;i++)
	    cout<<date[i]<<"\t";
	cout<<endl;
	
	for (i=7;i>0;i--)
	{
	
	    for(j=0;j<i;j++)
		{
			if (date [j]>date[j+1])
				  	 	 
            {
            	tmp=date[j];
            	date[j]=date[j+1];
            	date[j+1]=tmp;
            	
            }
        }
    }
    cout<<"�Ƨǫᵲ�G��:  ";
	
	for (i=0;i<8;i++)
	cout<<date[i]<<"\t";
	cout<<endl;
	
	return 0;
}

	 
			

