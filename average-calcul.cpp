#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
float note1, note2, note3, note4, moyenne; 


cout<<"~~~ Calcul de la moyenne de passage  ~~~"<<endl;
cout<<"Veuillez saisir la note1 :"<<endl;
cin>>note1;
cout<<"Veuillez saisir la note2 :"<<endl;
cin>>note2;
cout<<"Veuillez saisir la note3 :"<<endl;
cin>>note3;
    
moyenne=(note1+note2+note3)/3; 

if (moyenne<10)
{
cout<<"Moyenne :   " <<moyenne<< "    Travaillez Mieux Prochainement !"<<endl;
}
else
{
cout<<"Moyenne:    " <<moyenne<< "     Félicitations Gardez le Rythme !"<<endl;
} 
 
return 0;
}
