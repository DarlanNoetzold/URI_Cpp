#include <bits/stdc++.h>
using namespace std;

void ajustaHoraIn(char hora[10], int **horaIn, int **minutoIn, int **segundoIn){

    char horaI[4], minutoI[4], segundoI[4];
    for(int i =0; i < 8; i++){
        if(i == 0){
            for(int j=0; j < 2; j++){
                horaI[j] = hora[j];
            }
        }
        if(i == 3){
            for(int j=0; j < 2; j++){
                minutoI[j] = hora[j+3];
            }
        }
        if(i == 6){
            for(int j=0; j < 2; j++){
                segundoI[j] = hora[j+6];
            }
        }

    }

    **horaIn = atoi(horaI);
    **minutoIn = atoi(minutoI);
    **segundoIn = atoi(segundoI);
}

void ajustaHoraFin(char horaF[10], int **horaFi, int **minutoFi, int **segundoFi){
    char horaFinal[4], minutoFinal[4], segundoFinal[4];
    for(int i =0; i < 8; i++){
        if(i == 0){
            for(int j=0; j < 2; j++){
                horaFinal[j] = horaF[j];
            }
        }
        if(i == 3){
            for(int j=0; j < 2; j++){
                minutoFinal[j] = horaF[j+3];
            }
        }
        if(i == 6){
            for(int j=0; j < 2; j++){
                segundoFinal[j] = horaF[j+6];
            }
        }

    }
    **horaFi = atoi(horaFinal);
    **minutoFi = atoi(minutoFinal);
    **segundoFi = atoi(segundoFinal);
}


main(){
    int *dia = new int;
    char hora[8];
    int *diaF = new int;
    char horaF[8];
    bool validate=true;
    cout<<"Dia de Inicio: ";
    cin>>*dia;
    fflush(stdin);
    cout<<"Hora de Inicio: ";
    gets(hora);

    cout<<"Dia de fim: ";
    cin>>*diaF;
    fflush(stdin);
    cout<<"Hora de fim: ";
    gets(horaF);

    if(*dia > *diaF || *dia > 30 || *diaF > 30){
        cout<<"\n===Valor do dia Invalido!==="<<endl;
        validate=false;
    }

    int *horaIn = new int;
    int *minutoIn = new int;
    int *segundoIn = new int;

    ajustaHoraIn(hora, &horaIn, &minutoIn, &segundoIn);
    bool validateHoraIn = true;
    if(*horaIn > 24 || *minutoIn > 60 || *segundoIn > 60 || *horaIn < 0 || *minutoIn < 0 || *segundoIn < 0){
        cout<<"\n\n===Horario Inicial Invalido!==="<<endl;
        validateHoraIn= false;
    }

    int *horaFi = new int;
    int *minutoFi = new int;
    int *segundoFi = new int;


    
    ajustaHoraFin(horaF, &horaFi, &minutoFi, &segundoFi);
    bool validateHoraFinal = true;
    if(*horaFi > 24 || *minutoFi > 60 || *segundoFi > 60 || *horaFi < 0 || *minutoFi < 0 || *segundoFi < 0){
        cout<<"\n\n===Horario Final Invalido!==="<<endl;
        validateHoraFinal = false;
    }

    if(validate && validateHoraIn && validateHoraFinal){
        int horaInt = *horaFi - *horaIn;
        int minuto = *minutoFi - *minutoIn;
        int segundo = *segundoFi - *segundoIn;
        *dia = *diaF - *dia;

        if (segundo < 0){
            segundo += 60;
            minuto--;
        }

        if (minuto < 0){
            minuto += 60;
            horaInt--;
        }

        if (horaInt < 0){
            horaInt += 24;
            (*dia)--;
        }

        cout<<"\n\nDuracao do evento: "<<endl;
        cout<<*dia<<" dia(s)"<<endl;
        cout<<horaInt<<" hora(s)"<<endl;
        cout<<minuto<<" minuto(s)"<<endl;
        cout<<segundo<<" segundo(s)"<<endl;

        delete dia;
    }
}
