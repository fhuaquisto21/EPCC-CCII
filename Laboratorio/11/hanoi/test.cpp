//Modificado por sAfOrAs
//Torres de Hanoi
#include <iostream>
using namespace std;
 
void hanoi(int num,char A,char C,char B)
{
    if(num==1)
    {
            cout<<"A Mueva el bloque "<<num<<" desde "<<A<<" hasta  "<<C<<endl;
             
    }
    else
    {
        hanoi(num-1,A,B,C);
        cout<<"B Mueva el bloque "<<num<<" desde "<<A<<" hasta  "<<C<<endl;
        hanoi(num-1,B,C,A);
    }
}
 
int main()
{
        int n;
        char A,B,C;
 
        cout<<"Los clavijas son A B C\n";
        cout<<"Numero de discos: ";
        cin>>n;
        hanoi(n,'A','C','B');
        return 0;      
}
