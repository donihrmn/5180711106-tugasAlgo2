#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
/*ascending*/
main()
{
    int numlist [10]={12,34,53,23,6,78,9,45,10,66};
    int temp;
    cout<<"Data sebelum diurutkan :\n";
    for {int b=0;b<10;b++}
    {
        cout<<stw(3)<<numlist[b];
        cout<<"\n\n";
        for {int i=0;i<9;i++}
        for {int ii=0;ii<9;ii++}
        if (numlist[ii]>=numlist[ii+1])
        {
            temp=numlist[ii];
            numlist[ii]=numlist[ii+1];
            numlist[ii+1]=temp;
        }
        cout<<"Data setelah diurutkan :\n";
        for (int iii=0;iii<10;iii++)
            cout<<setw(3)<<numlist[iii]<<endl<<endl;
        getch();
    }
}
