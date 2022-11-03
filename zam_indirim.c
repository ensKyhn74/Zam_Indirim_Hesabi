#include <stdio.h>
// klavyeden girilen harfe göre zam veya indirim hesaplayıp ürünün yeni fiyatını hesaplar
// i ve I indirimi temsil eder
// z ve Z zamı temsil eder

int main() 

{
 
 double UrunFiyati;
 double indirim,zam;
 char secim; 
 
 printf("urunun fiyatini girin: ");
 scanf("%lf",&UrunFiyati); 
 
 printf("zam mi yapacaksiniz indirim mi?: ");
 scanf(" %c",&secim); // bir boşluğa dikkat et! aksi halde output hatalı olur
 
  if(secim == 'i' || secim == 'I')
  {
    printf("%% kac indirim yapacaksiniz?: "); // printf içinde %% bir tane % yazdırılmasını sağlar
    scanf("%lf",&indirim); 
    
    if(indirim > 0 && indirim <= 100)
    {
      double yeniFiyat = UrunFiyati - (UrunFiyati * (indirim / 100)); 
      printf("urunun indirimli fiyati: %.2lf",yeniFiyat); 
    }
     
    else
    {
     printf("%% 100'den fazla ve %% 1'den az indirim yapilamaz!");
    }
  }
  
   if(secim == 'z' || secim == 'Z')
   {
     printf("%% kac zam yapacaksiniz?: ");
     scanf("%lf",&zam); 
     
    if(zam > 0)
    {
     double YeniFiyat = UrunFiyati + (UrunFiyati * (zam / 100)); 
     printf("urunun zamli fiyati: %.2lf",YeniFiyat); 
    }
     
    else
    {
     printf("%% 1'den az zam yapilamaz!");	
    }
   }
 
   return 0;

}
