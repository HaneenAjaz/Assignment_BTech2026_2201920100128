#include<bits/stdc++.h>

using namespace std;
class Box{
    private:
    int l,b,h;
    
    public:
    Box(){
       this->l=0;
       this->b=0;
       this->h=0;
    }
    Box(int l,int b,int h){
       this->l=l;
       this->b=b;
       this->h=h;
    }
    Box(const Box &b) {
        this->l = b.l;
        this->b = b.b;
        this->h = b.h;
    }
    int getLength(){ return l;}
       
    int getBreadth(){ return b;}
    
    int getHeight(){ return h;}
    
    long long CalculateVolume(){
        return (long long)l*b*h;}
   
    // Overload < operator
    bool operator<(const Box& B) {
        if (l < B.l) return true;
        if (l == B.l && b < B.b) return true;
        if (l == B.l && b == B.b && h < B.h) return true;
        return false;
    }
         
   friend ostream& operator<<(ostream& out, const Box& B) {
    out << B.l << " " << B.b << " " << B.h;
    return out;}
    
    Box& operator=(const Box& B) {
    if (this != &B) {  // Avoid self-assignment
        this->l = B.l;
        this->b = B.b;
        this->h = B.h;
    }
    return *this;}
};


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}