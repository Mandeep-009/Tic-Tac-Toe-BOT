
#include <iostream>

using namespace std;

int main()
{
    char arr[10]="123456789";
    cout<<endl;
    
    int pl=0,a=0;
   for(int j=0;j<3;j++){
        
      //  fn_bot(pl)
      
      /* -------------------------------------------------------- */
      
      if(j<2){
          
           if(pl==0) arr[0]='0';
           else if(pl==9||pl==3||pl==6||pl==2) arr[6]='0';
           else if(pl==7||pl==8||pl==4) arr[2]='0';
           else if(pl==5) arr[8]='0';   }
      
      if(j==2)
      {
          if(pl==9) 
          {
              if(a==4)
              {
                  arr[2]='0';
                  cout<<"Your game is over between 2 and 5"<<endl;
                  
              }
              else
              {
                  arr[3]='0';
                  cout<<" Bot won !!!"<<endl;
              }
             
          }
          
          if(pl==3)
          {
              if(a==4) 
              {
                  arr[8]='0';
                  cout<<"Your game is over between 5 and 8"<<endl;
                  
              }
              else
              {
                  arr[3]='0';
                  cout<<" Bot won !!!"<<endl;
              }
          }
          
          if(pl==7)
          {
              if(a==2)
              {
                  arr[8]='0';
                  cout<<"Your game is over between 5 and 6"<<endl;
                  
              }
               else
              {
                  arr[1]='0';
                  cout<<" Bot won !!!"<<endl;
              }
          }
          
          if(pl==6)
          {
              if(a==4)
              {
                  arr[4]='0';
                  cout<<"Your game is over between 3 and 9"<<endl;
                
              }
               else
              {
                  arr[3]='0';
                  cout<<" Bot won !!!"<<endl;
              }
          }
          
          if(pl==8)
          {
              if(a==2)
              {
                  arr[4]='0';
                  cout<<"Your game is over between 7 and 9"<<endl;
                  
              }
               else
              {
                  arr[1]='0';
                  cout<<" Bot won !!!"<<endl;
              }
          }
          
          if(pl==4)
          {
              if(a==2)
              {
                  arr[8]='0';
                  cout<<"Your game is over between 5 and 6"<<endl;
                  
              }
               else
              {
                  arr[1]='0';
                  cout<<" Bot won !!!"<<endl;
              }
          }
          
          if(pl==2)
          {
              if(a==4)
              {
                  arr[8]='0';
                  cout<<"Your game is over between 5 and 8"<<endl;
                  
              }
               else
              {
                  arr[3]='0';
                  cout<<" Bot won !!!"<<endl;
              }
          }
          
          if(pl==5)
          {
              if(a==3)
              {
                  arr[6]='0';
                  cout<<"Your game is over between 4 and 8"<<endl;
                  
              }
              else if(a==7)
              {
                  arr[2]='0';
                  cout<<"Your game is over between 2 and 6"<<endl;
                  
              }
              else
              {
                  cout<<"I admit that you are a genius."<<endl;
                  break;
              }
          }
      }
      
      
      
    /* ---------------------------------------------------------------- */
    
    for(int i=0;i<9;i+=3)
    {   cout<<"\t";
        cout<<" "<<arr[i]<<" | "<<arr[i+1]<<" | "<<arr[i+2]<<endl;
        cout<<"\t----------\n";
    }
    cout<<endl;
    
    
    
    
    
    if(j==2) break;
    
    cout<<"enter your input: ";
    if(j==0){
    cin>>pl;if(pl>9||pl<1) {cout<<"\nInvalid Input\n";break;}
    arr[pl-1]='X';}
    
    if(j==1)
    {
         cin>>a;if(a>9||a<1) {cout<<"\nInvalid Input\n";break;}
    arr[a-1]='X';
    }
    cout<<endl;
   }
    
    return 0;
}
