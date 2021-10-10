#include<iostream>
using namespace std;

int main()
{
    int raw,m=1;
    cout<<"enter the number of raws"<<endl;
    cin>>raw;
    for(int i=1;i<=raw;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<m<<" " ;
            m++;
        }
        cout<<endl;
    }
    return 0;
}
