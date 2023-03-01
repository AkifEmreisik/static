#include<iostream>
	
	class Kitap {
		public:
			kitap(){ 
				static int fadet=4;
				fadet++;
			}
		static int adet; //static int adet=10 desek burada olmaz sayıyı aşağıda tanımlamalısın staticte sınıf dışı tanımla yani
		static int get(){
			return adet;
		}
		
		
	};
int Kitap::adet = 50; //Kitap classındaki adet değişkenini 50 yapar
void test(){
	static int a=0; //static sayesinde akılda kalacak void test yazdık ama 1 2 3 diye yazacak
	a++;
	std::cout<<a<<std::endl;
}

int main(){
class Kitap kitap1;
class Kitap kitap2;
class Kitap kitap3;
/*kitap2.adet=5;
std::cout<<kitap1.adet<<std::endl;    //Burada şuna dikkat çekmek lazım kitap2 üzerinden adet değiştirilince hepsinde değişr 5 yazaccak yani hepsinde de 
std::cout<<kitap2.adet<<std::endl;
std::cout<<kitap3.adet<<std::endl;*/

std::cout<<kitap1.adet<<std::endl;
std::cout<<kitap2.adet<<std::endl;
std::cout<<kitap3.adet<<std::endl;
test();
test();
test();
std::cout<<Kitap::get()<<std::endl; //Kitap classındaki get fonksiyonuna gitti get adete dön diyor adete döndü ve onu yazdı 
std::cout<<kitap1.kitap()<<std::endl; 
std::cout<<kitap1.kitap()<<std::endl; //Classımızdaki kitap() da fadet isimli değişkeni tanımlamıştık bu değişkeni arttır dediğimiz ve static int olması sayesinde arttırarak yazar


	return 0;
}
