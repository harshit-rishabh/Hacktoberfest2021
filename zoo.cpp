#include<iostream>
using namespace std;

int main(){
  string str;
  
  int countx=0,county=0;
  cin>>str;
  for (int i = 0; i<str.size(); i++)
  {  
    
      if (str[i]=='z')
      {
          countx++;
      }
      else if(str[i]=='o')
      {
          county++;
      }
      
  }

  if (2*countx==county)
  {
      cout<<"Yes,number of o's are double the number of z's"<<endl;
  }
  else
  {
      cout<<"No,number of o's are not double the number of z's"<<endl;
  }
  
  
  return 0;
}
