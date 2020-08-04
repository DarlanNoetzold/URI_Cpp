#include <bits/stdc++.h>

using namespace std;

main(){
    int cont, i=0,quant=0;
    double  tot=0,coelhos=0,ratos=0,sapos=0;
    char tip;
    cin>>cont;
    while(i < cont){
        cin>>quant>>tip;
        if(tip == 'C'){
            coelhos = quant + coelhos;
            tot = tot + quant;
        }else if(tip == 'R'){
            ratos = quant + ratos;
            tot = tot + quant;
        }else if(tip == 'S'){
            sapos = quant + sapos;
            tot = tot + quant;
        }
        i++;
    }
    cout<<"Total: "<<tot<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<coelhos<<endl;
    cout<<"Total de ratos: "<<ratos<<endl;
    cout<<"Total de sapos: "<<sapos<<endl;
    double prC,prR,prS;
    prC = (100*coelhos)/tot;
    prR = (100*ratos)/tot;
    prS = (100*sapos)/tot;
    cout<<fixed<<setprecision(2);
    cout<<"Percentual de coelhos: "<<prC<<" %"<<endl;
    cout<<"Percentual de ratos: "<<prR<<" %"<<endl;
    cout<<"Percentual de sapos: "<<prS<<" %"<<endl;
}
