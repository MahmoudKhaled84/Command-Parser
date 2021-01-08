#include <iostream>
#include <string>
#include <typeinfo>
#include <cstdlib>
#include <string.h>

using namespace std;
int main(int argc,char *argv[])
{
 	
int sum;
 if(argc>1)
 {

if( strcmp(argv[1],"print")==0 )
{
       if( argv[2] )   
{
    for(int i=2;i<=(argc-1);i++)
        cout<<argv[i]<<" ";
       }

else cout<<"Incorrect Number of Arguments";
}
else if ( strcmp(argv[1],"reverse")==0)
{
	 if( argv[2] && argv[3] )   
{

 for(int i=1;i<=(argc-2);i++)
        cout<<argv[argc-i]<<" ";
}
else cout<<"Incorrect Number of Arguments";
}
else if ( strcmp(argv[1],"upper")==0)
{
	if( argv[2] )
	{
	
	 for (int i=2; i<=(argc-1); i++) {
	    for(int j=0; argv[i][j] != NULL;j++)  
	    {


    if ((argv[i][j] > 96) && (argv[i][j] < 123))
    {
      argv[i][j]=argv[i][j]-32;
      cout<<argv[i][j];
    }
    else
    {
        cout<<argv[i][j];
    }
}
cout<<" ";
}
}
else cout<<"Incorrect Number of Arguments";
}

else if (strcmp(argv[1],"shuffle")==0)
 
 {
 if( argv[2] && argv[3]==0  )
 {
 
      int  x= strlen(argv[2]);
      if (x==1)
      {
      	cout<<argv[2];
	  }
	  else 
	  {
        for(int i=0;i<=x;i+=2)
        {
		if ( argv[2][i+1] )
		{
		
        int y=argv[2][i];
        int temp=argv[2][i+1];
        argv[2][i]=temp;
        argv[2][i+1]=y;
        cout<<argv[2][i]<<argv[2][i+1];
    }
    else cout<<argv[2][i];
}
   }
}
else cout<<"Incorrect Number of Arguments";
}
else if (strcmp(argv[1],"shuffleStatement")==0)
{
	if( argv[2] && argv[3] )
	{
        for(int i=2;i<=(argc-1);i+=2)
        {
		if ( argv[i+1] )
		{
		
        swap(argv[i],argv[i+1]);
        
        cout<<argv[i]<<" "<<argv[i+1]<<" ";
}
       else cout<<argv[i];
 }

}
else cout<<"Incorrect Number of Arguments";
}
else if (strcmp(argv[1],"delete")==0)
{
	if( argv[2] && atoi(argv[2])<=(argc-3)  ) 

{     if( atoi(argv[2])==0 )
{cout<<"Incorrect Data Type";} 

else {

		if( 58>*argv[2] && *argv[2]>47   )

		{
				  
    for( int i=1;i<=(argc-3);i++)
	{
        if (atoi(argv[2])==i)
		{
            delete(argv[2+i]);
    }
        else    
          cout<<argv[2+i]<<" ";

    }
}
else cout<<"Incorrect Data Type";
}}
else cout<<"Incorrect Number of Arguments";
}



else if (strcmp(argv[1],"middle")==0)

		{
		if (argv[2])	
		{
			
      int x=(argc-2);
      if (x % 2 == 0)
        cout<<argv[(x/2)+1]<<" "<<argv[((x/2)+2)];
      else
        cout<<argv[(x/2)+2];
        }
		else cout<<"Incorrect Number of Arguments";
	}


else if (strcmp(argv[1],"add")==0)

            {
		         	if( argv[2] )
            {
            	 	 	        int sum =0;
	
		 for (int i=2; i<=(argc-1); i++) {
	    
		for(int j=0; argv[i][j] != NULL;j++)  
	    { 
		if (((argv[i][j]=='-') && (58>argv[i][j+1] && argv[i][j+1]>47)) ||  ((argv[i][j]=='+') && (58>argv[i][j+1] && argv[i][j+1]>47 )) || (58>argv[i][j] && argv[i][j]>47) )   
	 	 {
	 	 	if (argv[i][1]=='-' || argv[i][1]=='+')
	 	 	{cout<<"Incorrect Data Type";
			  }
			  else{
	 	 	 int m =atoi(argv[i]);
           sum=sum + m ; 
		  if (i==(argc-1))
  			  cout<<sum;
 	
                }}
                else cout<<"Incorrect Data Type";
                break;
          }}

                }else cout<<"Incorrect Number of Arguments";
            }

else if (strcmp(argv[1],"random")==0)
        {
	
				   
    if( argv[2] && argv[3] && argv[4] && argv[5] && (argv[6]==0) )
        	{
		
	    
		for(int j=0; argv[2][j] != NULL;j++)  
	    { 
		if ( ((argv[2][j]=='+') && (58>argv[2][j+1] && argv[2][j+1]>47 )) || (58>argv[2][j] && argv[2][j]>47) )   
	 	 {
	 	 	 if ((atoi(argv[2])==0))
	 	 	 {cout<<"Incorrect Data Type";
			   }
			   else if (*argv[3]>47 && *argv[3]<58 && *argv[4]>47 && *argv[4]<58 && *argv[5]>47 && *argv[5]<58 && *argv[6]>47 && *argv[6]<58){
			   
	 	 	if( ((argv[2][j]=='-') ))
	 	 	{cout<<"Incorrect Data Type";
			  }
			  else{
    int min = atoi(argv[3]);
    int max = atoi(argv[4]);
if (min>max)
{cout<<"Incorrect Data Type";
}
else{

   srand(atoi(argv[5]));

   for ( int i=0;i<atoi(argv[2]); i++ )
    {
    cout<<rand()%(max-min+1)+min<<" ";
    }
}}
	}
	else cout<<"Incorrect Data Type";}
	else cout<<"Incorrect Data Type";
	break;
}
	} 
	else cout<<"Incorrect Number of Arguments";

}
	else cout<<"Undefined Command";   
}}	
