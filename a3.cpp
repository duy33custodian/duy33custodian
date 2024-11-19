#include <iostream>
#include <string>
using namespace std;

struct Connguoi
{
    float chieucao;
    float cannang;
};   

void chi_so_BMI(Connguoi nguoi)
{
    float BMI= nguoi.cannang/(nguoi.chieucao*nguoi.chieucao);
    string ketqua;
    cout<<"chi so BMI cua ban là: "<<BMI<<endl;
    if(BMI>25)
    {
        cout<<"ban trong nguoi to ma lo xo be"<<endl;
    }
    else if (BMI<18)
    {
        cout<<"ban gay vl"<<endl;
    }
    else
    {
        cout<<"ban dep trai co nhieu gai theo"<< endl;
    }
}  

string chisoBMI1(Connguoi nguoi)
{
    float BMI1= nguoi.cannang/(nguoi.chieucao*nguoi.chieucao);
    string ketqua;
    if(BMI1>25)
    {
        ketqua = "trong nguoi to ma lo xo be";
    }
    else if (BMI1<18)
    {
        ketqua = "gay vl";
    }
    else
    {
        ketqua = "dep trai co nhieu gai theo";
    }
    return ketqua;
}

void thoigian(Connguoi nguoi, int nam)
{
    cout<<"bạn muon du tinh sau bao nhieu nam? ";
    cin>>nam;
    float tangcan;
    cout<<"ban doan minh se tang hay giam bao nhieu can? ";
    cin>>tangcan;
    for (int i=0; i < nam ;i+=1)
    {
        nguoi.cannang+=tangcan;
    }
    string ketqua =chisoBMI1(nguoi);
    cout<<"sau "<<nam<<" nam ban se "<< ketqua <<endl;
}

int main()
{
Connguoi nguoi;
    nguoi.cannang;
    nguoi.chieucao;
cout<<"can nang cua ban? ";
cin>>nguoi.cannang;
cout<<"chieu cao cua ban? ";
cin>>nguoi.chieucao;
chi_so_BMI(nguoi);
thoigian (nguoi, 1);

cout << "ket thuc" << endl;
return 0;
}
