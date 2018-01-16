#include <iostream>
#include <cmath>

using namespace std;

int strlen(char* s){
    char* n = s;
    for(; *s != '\0';s++){
    }
    return s-n;
}

float stringInt(char myNumber[]){
    float rpta;
    bool indicador = false;
    float aux = 0.0;
    char current = myNumber[0];
    for(int i = 0; i < strlen(myNumber); i++){
        int current = myNumber[i];
        if(current == 46){
            indicador = true;
            aux = i;
        }
    }
        if(indicador){
            for(int j = 0; j < aux; j++){
                float jj = myNumber[j];
                for(int k = 48; k < 58; k++){
                    if( jj == k){
                        jj = k - 48;
                    }
                }
                //sumo parte entera
                rpta += jj * pow(10, aux - j - 1);
            }
            aux++;
            int pick = 0;
            for(int j = aux; j < strlen(myNumber); j++){
                float jj = myNumber[j];
                for(int k = 48; k < 58; k++){
                    if(jj == k){
                        jj = k - 48;
                    }
                }
                //sumo parte decimal
                rpta += jj * pow(10,-1*++pick);
            }
        return rpta;
    }
    else if(indicador == false){//suma de no haber un punto
    for(int i = 0; i < strlen(myNumber);current = myNumber[++i]){
        float j = current;
        for(int k = 48; k < 58; k++){
            if(j == k){
                j = k - 48;
            }
        }
        aux += j * pow(10, strlen(myNumber) - 1 - i);
    }
    rpta = aux;
    return rpta;
    }
}

int main()
{
    char arr[] = {"2018"};
    float aux = stringInt(arr);
    cout << aux << endl;
    return 0;
}
