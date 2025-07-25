#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>


int varmi(char kelime[],char harf,int a)
{
    static int k=0;
    for(int i=0;i<a;i++)
    {
        if(harf==kelime[i])
        {
            printf("%c",harf);
            k++;
        }
        
        else 
        printf(" _ ");
    }
    
    return k;
}


int main()
{
    
    srand(time(NULL));
    
    char kelime[297][17]={"Elma", "Bilgisayar", "Mavi", "Kitap", "Köpek", "Bulut", "Soğuk", "Dans", 
 "Gün", "Ev", "Yumurta", "Göz", "Aile", "Tüy", "Ateş", "Balık", "Çiçek", "Gıda", "Oyuncak", "Bahçe",
 "Cam", "Altın", "Saç", "Şapka", "Kalp", "Isı", "Ev", "Buz", "Ada", "Merdiven", "Anahtar", "Bıçak",
 "Öpücük", "Göl", "Lamba", "Dil", "Aşk", "Mıknatıs", "Adam", "Ay", "Para", "Maymun", "Dağ", 
 "Fare", "Müzik", "Çivi", "Burun", "Fındık", "Yağmur", "Okyanus", "Portakal", "Boya", "Kalem",
 "Telefon", "Resim", "Domuz", "Patates", "Hediye", "Yüzük", "Yol", "Yelken", "Tuz", "Kum", "Yılan", 
 "Kar", "Sabun", "Çorap", "Güneş", "Masa", "Sandalye", "Öğretmen", "Ağaç", "Kamyon", "Tren", "Şemsiye",
 "Saat", "Duvar", "Su", "Pencere", "Rüzgar", "Kanat", "Kurt", "Yerde", "Yumurta", "Bal", "Arı",
 "Kuş", "Siyah", "Beyaz", "Kırmızı", "Yeşil", "Sarı", "Mavi", "Mor", "Turuncu", "Kahverengi", "Pembe", 
 "Gri", "Zebra", "Zemin", "Zehir", "Zihin", "Ziyaret", "Zor", "Zorluk", "Zümrüt", "Zarf",
 "Zarif", "Zarf", "Zihinsel", "Zıt", "Zıtlaşma", "Zarf", "Zihinsel", "Zıt", "Zıtlaşma", 
 "Zarf", "Rüzgar", "Deniz", "Kum", "Güneş", "Martı", "Dalga", "Tekne", "Yelken", "Balık", 
 "Mavi", "Gökyüzü", "Ufuk", "Uçurtma", "Sıcak", "Yaz", "Tatil", "Kumsal", "Palmiye", "Köpük", 
 "Çakıl", "Kayalık", "Ada", "Islak", "Yüzmek", "Güneşlenmek", "Kumdan kale", "Su topu", "Dondurma",
 "Limonata", "Şemsiye", "Havlu", "Gözlük", "Şapka", "Krema", "Mayokini", "Plaj", "Sahil", "Kıyı",
 "Boğaz", "Körfez", "Akıntı", "Denizanası", "Yosun", "Balıkçı", "Ağ", "Tekne turu", "Dalış", "Su kayağı",
 "Rüzgar sörfü", "Kitesurf", "Jet ski", "Banana boat", "Paraşüt", "Tüplü dalış", "Şnorkel", "Maskot", "Deniz feneri",
 "Liman", "Gemi", "Yat", "Martı", "Yunus", "Balina", "Kaplumbağa", "Mantar", "Denizkestanesi", "Yengeç", "Istakoz",
 "Ahtapot", "Midye", "Deniz yıldızı", " mercan", "Sualtı", "Denizaltı", "Deniz canlıları", "Deniz kirliliği", 
 "Deniz koruma", "Denizcilik", "Denizci", "festivaller", "kültür",
 "Sevgi", "Gülümse", "Barış", "Umut", "Mutluluk", "Dostluk", "Merhaba", "Selam", "Teşekkür",
 "Minnet", "Güven", "Saygı", "Neşe", "Heyecan", "Duygu", "Aşk", "Güneş", "Ay", "Yıldız", 
 "Gece", "Sabah", "Akşam", "Yemek", "Su", "Hava", "Giyim", "Kıyafet", "Kumaş", "Pamuk", 
 "Keten", "Yün", "İpek", "Kürk", "Kemik", "Et", "Sebze", "Meyve", "Ağaç", "Orman", "Çiçek",
 "Tomurcuk", "Tohum", "Toprak", "Dünya", "Gökyüzü", "Yer", "Evren", "Gezegen", "Uzay", "Gökkuşağı",
 "Göz", "Kulak", "Dil", "Doku", "Deri", "Kemik", "Kas", "Sinir", "Kan", "Kalp", "Akıl", "Düşünce", 
 "Fikir", "Hayal", "Gerçek", "Masal", "Destan", "Hikaye", "Roman", "Şiir", "Tarih", "Geçmiş", "Gelecek",
 "Anı", "Hatıra", "Zaman", "Saat", "Dakika", "Saniye", "Yıl", "Ay", "Hafta", "Gün", "Saat", "Dakika",
 "Saniye", "Yıl", "Ay", "Hafta", "Gün", "Saat", "Dakika", "Saniye", "İş", "Çalışma", "Gayret", "Azim", "Kazanç", "Başarı"},asilkelime[17];
    int a=rand()%298;
    
    for(int i=0;i<17;i++)
    {
        if(kelime[a][i]==0)
        break;
        asilkelime[i]=kelime[a][i];
        
    }
    
    a=strlen(asilkelime);
    char harf;
    
    
    while(true)
    {
       printf("bir harf giriniz:");
       scanf("%c",&harf);
       varmi(asilkelime,harf,a);
    }    
    
    return 0;
}


