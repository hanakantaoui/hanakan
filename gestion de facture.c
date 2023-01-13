// Online C compiler to run C program online
#include <stdio.h>

   struct date{
       int JOUR;
       int MOIS;
       int ANNEE;
   };
   struct facture{
       int CODE;
       char NOM;
       char PRENOM;
       float MONTANT;
       int date;
   };
   int main() {
       struct facture;
       int i;
       int N;
      facture tab[N];
   
for(i=0;i<N;i++){
    printf("/n entrer le code:%d",code);
    scanf("%d",&tab[i].CODE);
    printf("/n entrer le nom:%s",nom);
    scanf("%s",tab[i].NOM);
    printf("/n entrer le prenom:%s",prenom);
    scanf("%s",tab[i].PRENOM);
    printf("/n entrer la date de facture:%d",date);
    scanf("%d",&tab[i].JOUR,&tab[i].MOIS,&tab[i].ANNEE);
    printf("/n entrer le montant à payer:%d",montant);
    scanf("%d",&tab[i].MONTANT);
    }    
 return 0;

}
