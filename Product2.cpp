#include<iostream>
using namespace std;
class product
{
public:
    string product_name;
    int product_id;
    string product_category;
    int unite_price;
};
int main()
{
    int i,j,n;
    cout<<"Enter the number of products:";
    cin>>n;
    product p[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter product "<<i+1<<" details:"<<endl;
        cout<<"Enter product name:";
        cin>>p[i].product_name;
        cout<<"Enter product id:";
        cin>>p[i].product_id;
        cout<<"Enter product category:";
        cin>>p[i].product_category;
        cout<<"Enter unite price:";
        cin>>p[i].unite_price;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i].unite_price>p[j].unite_price)
            {
                product temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    cout<<"The products sorted according to unite price are:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Product "<<i+1<<" details:"<<endl;
        cout<<"Product name:"<<p[i].product_name<<endl;
        cout<<"Product id:"<<p[i].product_id<<endl;
        cout<<"Product category:"<<p[i].product_category<<endl;
        cout<<"Unite price:"<<p[i].unite_price<<endl;
    }
    return 0;
}
