#include<iostream>
using namespace std;

main(){

   float prestTotal, prestPagas, valAtual, totPago, salDevedor;

   cout << "Digite o numero total de presta�oes : ";
   cin >> prestTotal;
   
   cout << "Digite o numero de presta��es pagas : ";
   cin >> prestPagas;
   
   cout << "Digite o valor atual das presta�oes : ";
   cin >> valAtual;
   
   totPago = valAtual * prestPagas;
   salDevedor = (prestTotal * valAtual) - totPago;
   
   cout << "O total pago ate hoje no consorcio e : " << totPago;
   cout << "Seu saldo devedor e : " << salDevedor;

		
}
