#include <bits/stdc++.h>
#include <unistd.h>
#include<stdio.h>
#include<iostream>
#include<Windows.h>
#include <fstream>
using namespace std;

void loader()
{
	system("color 2f");
	
		system("color 09");
	

	char a=177, b=219;
	cout<<"\n\n\n\t\t\t\t\tScanning....";
	cout<<"\n\n\n";
	cout<<"\t\t\t\t\t ";
	for(int i=0;i<=25;i++)
	{
		cout<<a;
		Sleep(150);
	}
	cout<<"\r";
	cout<<"\t\t\t\t\t ";
	for(int  i=0;i<=25;i++)
	{
		cout<<b;
		Sleep(200);
	}
	
	
}

int main()
{
	
    fstream file,file2,file3;
    string word, t, q, filename,f2,w2,f3;
    int cnt=0,lngthf2=0;
  system("Color 09");
    
    filename = "codesnip.txt";
   // f2="virusfile.txt";
   
	cout<<"Enter the file locatoion which you want to scan: ";
	cin>>f2;
   
    file.open(filename.c_str());
    file2.open(f2.c_str());
  
   
    while (file2>>w2)
    {
        
        lngthf2++;
    }
  
    int l=lngthf2;
    
    
    
    for(int i=0;i<9;i++)
    {
       
        
        file >> word;
        f3=f2;
    	file3.open(f3.c_str());
        string w3;
      
        lngthf2=l;
        
		while(lngthf2--)
		{
			file3>>w3;
			if(word==w3)
			{
				cnt++;
			}
		}
		
		file3.close();
	}
	cout<<endl<<endl;
	
	char choice;
	int t1=(20-(cnt*2))/2;
	
	file2.close();
	if(cnt>0)
	{
			loader();
		
		cout<<endl<<"This file is "<<cnt*10<<"% infected."<<endl;
			
	

	
	cout<<"|"<<endl;
	cout<<"Press 0 if you want to remove file else press 1"<<endl;
		cin>>choice;
		switch (choice) {
    		case '0': {
    			
    				remove(f2.c_str());
    				//remove(f3);
    				
    					cout<<"\nFile Deleted Successfully!";	
				
        			
    				cout<<endl;
        		break;
   						}
    		case '1': {
       		cout<<"File is not removed.";
        		break;
    				}
		
	}
	}else
	{
	
	cout<<"This file is free from virus"<<endl;
	
	while(cnt--)
	{
		cout<<"* ";
	}
	
	
	while(t1--)
	{
		cout<<"- ";
	}
	
	cout<<"|";
	
	}
	

	
}
