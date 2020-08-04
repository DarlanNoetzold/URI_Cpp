#include<iostream>
using namespace std;

main(){

   float prestTotal, prestPagas, valAtual, totPago, salDevedor;

   cout << "Digite o numero total de prestaçoes : ";
   cin >> prestTotal;
   
   cout << "Digite o numero de prestações pagas : ";
   cin >> prestPagas;
   
   cout << "Digite o valor atual das prestaçoes : ";
   cin >> valAtual;
   
   totPago = valAtual * prestPagas;
   salDevedor = (prestTotal * valAtual) - totPago;
   
   cout << "O total pago ate hoje no consorcio e : " << totPago;
   cout << "Seu saldo devedor e : " << salDevedor;

		
}
