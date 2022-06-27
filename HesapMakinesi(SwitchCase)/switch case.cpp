#include <iostream>
using namespace std;
main(){
/*switch(degisken){
	case d1: islemler; break;   // toplama 
	case d2: islemler; break;    // çýkarma örneðin hesap makinesi yapýmý
	case d3: islemler; break;
	default : þartlar saðlanmazsa çalýþacak kod blogu 
} */
int sayi1,sayi2,islem;
cout << "1.sayiyi giriniz:";
cin >> sayi1;
cout << "2. sayiyi giriniz: ";
cin >> sayi2;
cout << endl << endl;
cout << "islem seciniz "<< endl;
cout << " 1. toplama" << endl;
cout << " 2. cikarma" << endl;
cout << " 3. carpma " << endl;
cout << " 4. bolme" << endl;
cin >> islem ;
switch (islem){
	case 1 : {
		cout << sayi1 + sayi2 ;
		break;
	}
	case 2 : {
		cout << sayi1 - sayi2;
		break;
	}
	case 3 : {
		cout << sayi1 * sayi2;
		break;
	}
	case 4 : {
		cout << float (sayi1) / sayi2 ;
		break;
	}
	default : {
		cout << " hatali islem sectiniz";
		break;
	}
}


 

}
