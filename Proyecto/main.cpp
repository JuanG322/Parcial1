#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int opcion = 1;

    while(opcion != 0){

        char matriz[][8] = {
            {" ", "Lun", "Mar", "Mie", "Jue", "Vie", "Sab", "Dom"},
            {"08:00", " ", " ", " ", " ", " ", " ", " "},
            {"09:00", " ", " ", " ", " ", " ", " ", " "},
            {"10:00", " ", " ", " ", " ", " ", " ", " "},
            {"11:00", " ", " ", " ", " ", " ", " ", " "},
            {"13:00", " ", " ", " ", " ", " ", " ", " "},
            {"14:00", " ", " ", " ", " ", " ", " ", " "},
            {"15:00", " ", " ", " ", " ", " ", " ", " "},
            {"16:00", " ", " ", " ", " ", " ", " ", " "},
            {"17:00", " ", " ", " ", " ", " ", " ", " "},
            {"19:00", " ", " ", " ", " ", " ", " ", " "},
            {"20:00", " ", " ", " ", " ", " ", " ", " "},
            {"21:00", " ", " ", " ", " ", " ", " ", " "},
            {"22:00", " ", " ", " ", " ", " ", " ", " "}
        };


        char nombre[30]="";
        int credito, horasClases;


        cout<<"Presiona 0 para salir";
        cin>>opcion;

};
    return 0;
}
