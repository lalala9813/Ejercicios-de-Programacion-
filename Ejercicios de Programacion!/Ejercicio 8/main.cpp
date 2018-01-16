#include <iostream>
using namespace std;

bool Verif_Year(int anio)
{
    if(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void dia_find(int dia, int mes, int year)   //______-------______________-------
{
    bool bisiesto = false;
    char *dia_fecha_res[7] = {"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};
    int respuesta = 0;
        if ((dia > 31)||(dia < 1)){std::cout << "Formato invalido"; return;}
        if ((mes > 12)||(mes < 1)){std::cout << "Formato invalido"; return;}
        if(Verif_Year(year)==true){bisiesto = true;}
    std::cout << dia << "-" << mes << "-" << year << std::endl;
    int mod_year= ((year%1000)%100);
    int var = (mod_year/12);
    int verif = mod_year - (var*12);
    int ver_4 = verif/4;
    int year_2 = ((year%1000)-mod_year)/100;
    int tmp= (year - mod_year)/100;
    int anchor_day = tmp % 4;
        switch(anchor_day)
        {
            case 0:
                //std::cout <<"Anchor day es Martes " << std::endl;
                anchor_day = 2;
                break;
            case 1:
                //std::cout <<"Anchor day es Domingo " << std::endl;
                anchor_day = 0;
                break;
            case 2:
                //std::cout <<"Anchor day es Miercoles " << std::endl;
                anchor_day = 5;
                break;
            case 3:
                //std::cout <<"Anchor day es Viernes " << std::endl;
                anchor_day = 3;
                break;
        }
    int res = var + verif + ver_4 + anchor_day;
    int dia_actual = res -((res/7)*7);
    int dia_2;
        if(mes == 2){ dia_2 = 29 - dia_actual;}
        if (bisiesto == true)
            {
                if(mes == 2){ dia_2 = 29 - dia_actual;}
            }
        if((mes == 1)||(mes == 3)||(mes == 5)||(mes == 7)||(mes == 8)||(mes == 10)||(mes == 12))
            {
                dia_2 = 31 - dia_actual;
            }
        if((mes == 4)||(mes == 6)||(mes == 9)||(mes == 11))
            {
                dia_2 = 30 - dia_actual;
            }
    int fin_de_mes = 0;
        switch(mes)
        {
        case 1:
            if (bisiesto == true){fin_de_mes = 4;}
            else{fin_de_mes = 3;}
            break;
        case 2:
            if (bisiesto == true){fin_de_mes = 29;}
            else{fin_de_mes = 28;}
            break;
        case 3:
            fin_de_mes = 7;
            break;
        case 4:
            fin_de_mes = 4;
            break;
        case 5:
            fin_de_mes = 9;
            break;
        case 6:
            fin_de_mes = 6;
            break;
        case 7:
            fin_de_mes = 11;
            break;
        case 8:
            fin_de_mes = 8;
            break;
        case 9:
            fin_de_mes = 5;
            break;
        case 10:
            fin_de_mes = 10;
            break;
        case 11:
            fin_de_mes = 7;
            break;
        case 12:
            fin_de_mes = 12;
            break;
        }
    int resultante = 0;
        if (fin_de_mes > dia)
            {
                resultante =  (dia + fin_de_mes % 7);
                resultante = (resultante - dia_actual) % 7 + 1;
                if (resultante < 0)
                {
                    resultante = resultante * (-1);
                }
                if (resultante >= 7)
                {
                    resultante = resultante % 7;
                }
                std::cout << dia << "-" << mes << "-" << year << " es " << dia_fecha_res[resultante]<<std::endl;
                return;
            }
        else if (fin_de_mes < dia)
            {
                resultante = (dia - fin_de_mes)%7;
                resultante = (resultante + dia_actual)%7;
                std::cout << dia << "-" << mes << "-" << year << " es " << dia_fecha_res[resultante]<<std::endl;
                return;
            }
        else
            {
                resultante = 0;
                std::cout << dia << "-" << mes << "-" << year << " es " << dia_fecha_res[dia_actual]<<std::endl;
                return;
            }
    return;
}



int main ()
{
    dia_find(8,12,2000);
    dia_find(1,7,743);
    dia_find(3,1,1500);
    dia_find(11,4,500);
}
