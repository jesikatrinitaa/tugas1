#include <iostream>

using namespace std;

//prosedur tambah
int tambah1 (int r,int t){
    return r+t;
}

//fungsi kurang
void kurang (int r,int t){
    cout<< r-t;
}

//prosedur tambah
int kali1 (int r,int t){
    return r*t;
}

//fungsi jmlh array
void jmlarray( ){
    int k;
    int m;
    cout<<"------------------------------"<<endl;
    cout<<"--jumlah array dan rata rata-- "<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"masukan jumlah nilai : ";cin>>m;

    int n [m];
    for( int i = 0; i < m ; i++){
       cout<<"masukan nilai ke"<<i+1<<" : " ; cin >> n[i];
    }
    float total = 0;
    for(int i = 0; i < m; i++){
        total = total+n[i];
    }
    float r = total / m ;
    cout<<"hasil jumlah     : "<<total<<endl;
    cout<<"hasil rata rata  : "<<r;
    cout<<"------------------------------"<<endl;
}




int main()
{
    int a,b;
    //output untuk prosedur pertambahan
    cout << "masukan nilai 1: " ;cin>>a;
    cout << "masukan nilai 2: " ;cin>>b;
    cout<<"------------------------------"<<endl;
    cout<<"---          hasil        ----"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"hasil (prosedur tambah) : "<<tambah1(a,b);
    cout<<endl;

    cout<<"------------------------------"<<endl;

    //output untuk fungsi pengurangan
    cout<<"hasil (fungsi kurang) : ";
    kurang(a,b);
    cout<<endl;

    cout<<"------------------------------"<<endl;

    //output untuk prosedur perkalian
    cout<<"hasil (prosedur kali) : "<<kali1(a,b);
    cout<<endl;

    cout<<"------------------------------"<<endl;

    jmlarray();

    return 0;
}
