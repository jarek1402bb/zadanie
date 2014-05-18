#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Algorytmy{
public:
  static void zamien(int &x, int &y);
  static void sortuj(int &x, int &y, int &z);
  static void sortuj(int *t, int rozmiar);
  static void wypisz(int x, int y, int z);
  static void wypisz(int *t, int rozmiar);
  
};

class CSortowalna{
public:
  virtual void sortuj() = 0;
  virtual void wypisz() = 0;
  virtual ~CSortowalna(){};
};

class CTrojkat: public CSortowalna{
private:
  int a;
  int b;
  int c;
  
public:
  CTrojkat(int a, int b, int c){
    this->a=a;
    this->b=b;
    this->c=c;
  }
  virtual void sortuj();
  virtual void wypisz();
};

class CTablica: public CSortowalna{
private:
  int *tab;
  int rozm;
  
public:
  CTablica(int rozm){
      this->rozm=rozm;
      tab = new int [rozm];
        
      for (int i=0; i<rozm; i++){
	int liczba =(rand()%10) + 0;
	tab[i]=liczba;
      }
  }    
  ~CTablica(){
    delete [] tab;
  }
  
  virtual void sortuj();
  virtual void wypisz();
};


void Algorytmy::zamien(int& x, int& y)
{
  int rob;
  
  if (x>y) 
    {
      rob=x;
      x=y;
      y=rob;
    }
}

void Algorytmy::sortuj(int& x, int& y, int& z)
{
  if (x>y) zamien(x,y);
  if (y>z) zamien(y,z);
  if (x>y) zamien(x,y);
}

void Algorytmy::sortuj(int* t, int rozmiar)
{
  for (int i=0; i<rozmiar-1; i++)
     for (int j=0; j<rozmiar-1; j++)
       if (t[j] > t[j+1])
	 zamien(t[j],t[j+1]);
}

void Algorytmy::wypisz(int x, int y, int z)
{
  cout << x << " " << y << " " << z << endl;
}

void Algorytmy::wypisz(int* t, int rozmiar)
{
  for(int i=0; i<rozmiar; i++)
    cout << t[i] << " ";
  cout << endl;
}

void CTrojkat::sortuj()
{

}

void CTrojkat::wypisz()
{
  
}

void CTablica::sortuj()
{

}
void CTablica::wypisz()
{

}


int main(){
 srand(time(NULL));
 
  
  return 0;
}


  