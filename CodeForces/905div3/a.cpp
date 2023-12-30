#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string k;
        std::cin>>k;
        int sec =4;
        //move to the first digit
        if(k[0] != '1'&& k[0] != '0')
            sec += abs(int('1')-int(k[0]));
        else if(k[0] == '0')
            sec+=9;
        
        for(int i  = 0; i<k.length()-1;i++)
        {

            if(k[i+1] != '0' && k[i] != '0')
                sec += abs(int(k[i])-int(k[i+1]));
            else if(k[i] != '0')
                sec += int('0')+10-int(k[i]);
            else if(k[i+1] != '0')
                sec += abs(int('0')-int(k[i+1])+10);
            else
                sec += 0;
            
        }
        std::cout<<sec<<std::endl;
    }
}