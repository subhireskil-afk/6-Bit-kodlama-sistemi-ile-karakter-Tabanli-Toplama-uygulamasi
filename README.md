# 6-Bit-kodlama-sistemi-ile-karakter-Tabanli-Toplama-uygulamasi

\# 6-Bit Kodlama Sistemi ile Karakter Tabanlı Toplama



Bu proje, \*\*6-bit kodlama sistemi\*\* kullanarak kullanıcıdan alınan \*\*tek haneli rakamları\*\* toplayan basit bir C uygulamasıdır. Program, kullanıcı girişini kontrol eder ve yalnızca geçerli rakamları kabul eder. Ayrıca, toplam \*\*tek haneli sayı sınırını\*\* aşarsa hata verir.



---



\## 📌 Özellikler



\- Kullanıcıdan \*\*tek haneli iki rakam\*\* alır.

\- Girişin \*\*geçerli olup olmadığını\*\* kontrol eder (0-9 aralığında olmalı).

\- Başka karakter veya fazla giriş varsa kullanıcıya hata mesajı verir.

\- İki sayıyı toplar ve sonucu ekrana yazdırır.

\- Toplam 9’u geçerse hata mesajı gösterir.



---



\## 💻 Kullanım



1\. Terminal veya komut satırında projeyi çalıştırın:



```bash

gcc -o karakter\_toplama karakter\_toplama.c

./karakter\_toplama



2.Program çalışınca, sırasıyla iki rakam girin

LUTFEN 1.RAKAMI GIRINIZ: 3

LUTFEN 2.RAKAMI GIRINIZ: 5

TOPLAMA ISLEMI SONUCU = 8



3.Eğer toplam 9’dan büyükse, hata mesajı alırsınız:

LUTFEN 1.RAKAMI GIRINIZ: 7

LUTFEN 2.RAKAMI GIRINIZ: 5

HATA: Sonuc (12), tek haneli siniri asti.





**Hata Kontrolleri**



* Rakam dışında giriş yapılırsa hata verir.
* Birden fazla karakter girilirse hata verir.
* Toplam 9’u aşarsa hata verir.





 **Fonksiyonlar**

int topla(int a, int b)

* Parametreler: a ve b (0-9 arası rakamlar)
* İşlev: İki sayıyı toplar ve sonucu döndürür.



