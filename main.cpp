#include <iostream>
using namespace std;

int main(){
    //Qui vanno definite le variabili

    float a=0,b=0,c=0,triangolo=0,quadrato=0,rettangolo=0,trapezio=0;

    cin >> a >> b >> c;

    //Qui va scritto il codice per eseguire i calcoli richiesti

    triangolo=((a*b)/2);
    quadrato=a*a;
    rettangolo=a*b;
    trapezio=(((a+b)*c)/2);

    cout<<"Area triangolo e\'"<<" "<<triangolo<<endl;
    cout<<"Area quadrato e\'"<<" "<<quadrato<<endl;
    cout<<"Area rettanglo e\'"<<" "<<rettangolo<<endl;
    cout<<"Area trapezio e\'"<<" "<<trapezio<<endl;
}
