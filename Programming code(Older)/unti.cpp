if(i.size()>p.size())
     {
       cout<<"IMPOSSIBLE"<<endl;
       break;
     }
  else{
  y=0;
  for(int k=0;k<p.size();k++)
  {
    for(int j=0;j<i.size();j++)
    {
      if(p[k]==i[j])
      {
        i.erase(i.begin()+j);
      
      }
      else
      {
        flag=1;
        y=y+1;
      }
    }
    
  }
  if(flag==1)
  {
    cout<<y<<endl;
  }
  else
  {
    cout<<"IMPOSSIBLE"<<endl;
  }
  } 
  }