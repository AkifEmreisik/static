#include<iostream>
	
	class Kitap {
		public:
			kitap(){ 
				static int fadet=4;
				fadet++;
			}
		static int adet; //static int adet=10 desek burada olmaz say�y� a�a��da tan�mlamal�s�n staticte s�n�f d��� tan�mla yani
		static int get(){
			return adet;
		}
		
		
	};
int Kitap::adet = 50; //Kitap class�ndaki adet de�i�kenini 50 yapar
void test(){
	static int a=0; //static sayesinde ak�lda kalacak void test yazd�k ama 1 2 3 diye yazacak
	a++;
	std::cout<<a<<std::endl;
}

int main(){
class Kitap kitap1;
class Kitap kitap2;
class Kitap kitap3;
/*kitap2.adet=5;
std::cout<<kitap1.adet<<std::endl;    //Burada �una dikkat �ekmek laz�m kitap2 �zerinden adet de�i�tirilince hepsinde de�i�r 5 yazaccak yani hepsinde de 
std::cout<<kitap2.adet<<std::endl;
std::cout<<kitap3.adet<<std::endl;*/

std::cout<<kitap1.adet<<std::endl;
std::cout<<kitap2.adet<<std::endl;
std::cout<<kitap3.adet<<std::endl;
test();
test();
test();
std::cout<<Kitap::get()<<std::endl; //Kitap class�ndaki get fonksiyonuna gitti get adete d�n diyor adete d�nd� ve onu yazd� 
std::cout<<kitap1.kitap()<<std::endl; 
std::cout<<kitap1.kitap()<<std::endl; //Class�m�zdaki kitap() da fadet isimli de�i�keni tan�mlam��t�k bu de�i�keni artt�r dedi�imiz ve static int olmas� sayesinde artt�rarak yazar


	return 0;
}
