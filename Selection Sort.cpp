#include<iostream.h>
#include<conio.h>
/*descending*/
main()
{
    int i,a,masuk,data[50];
    int simpan,min;
    char lagi;
    atas:
        cout<<"Masukkan banyak bilangan :";cin>>masuk;
        for (i=1;i<=masuk;i++)
        {
            cout<<"Data"<<i<<" :";cin>>data[i];
        }
        for (i=1;i<=masuk;i++)
        {
             for (a=i+1;a<=masuk;a++)
            {
                if(data[i]<data[a])
                {
                    simpan=data[i];
                    data[i]=data[a];
                    data[a]=simpan;
                }
            }
        }
        cout<<endl;
        cout<<"Hasil pengurutan :";
        for(i=1;i<=masuk;i++)
        {
            cout<<data[i]<<"\t";
        }
        cout<<endl<<"Apakah anda ingin memasukkan data lagi ?(Y/N) :";cin>>lagi;
        if(lagi=='Y'||lagi=='y')
        {
            goto atas;
        }
       getch();
}
