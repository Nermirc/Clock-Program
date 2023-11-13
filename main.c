#include <stdio.h>
#include <stdlib.h>

    void saniyeyecevir(int saniye)
    {
        int saat,dakika,sn,zaman;
        saat=saniye/3600;
        zaman=saniye%3600;
        dakika=zaman/60;
        sn=zaman%60;
        printf("%d %d %d",saat,dakika,sn);

    }
int main()
{
    /*Kullanici tarafindan saniye olarak girilen bir degerin
    saat:dakika:saniye(hh:mm:ss) formatina donusturulmesini saglayan
    C programini fonksiyon kullanarak yaziniz.*/
    int saniye;
    printf("Lutfen saniye degerini giriniz.\n");
    scanf("%d",&saniye);
    saniyeyecevir(saniye);
}
