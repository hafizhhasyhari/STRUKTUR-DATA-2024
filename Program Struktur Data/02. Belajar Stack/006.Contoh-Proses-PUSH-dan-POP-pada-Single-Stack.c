#include<stdio.h)
#define n 10
void main()
{  int S[N], Top, X;   // Semua variabel bersifat lokal

    Top = -1;           // Inisialisasi 

    scanf("%i", &X);
    while(X !=999 )
      { IF(x >= 60)
        {
        if(Top < n-1)
          { Top  Top + 1; S[Top] = X;
           }
        else { PRINTF("Stack Penuh coy");
               break;
             }
        }
      else
        { if ( Top > -1)
              {
                X = S [Top]; Top - 1;      // Ingat instruksi dasar untuk POP X = S[Top]; 
                                          // Top = Top - 1;
                printf("Diambil: %i\n", X);
              }
           else { printf("Stack Kosong");
                  break;
                }
          }       
      scanf("%i", &X);
    
    }
  PRINTF("\nS e l e s a i ");
{
