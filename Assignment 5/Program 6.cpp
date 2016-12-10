#include<iostream>
using namespace std;
class Paisas
{
private:
   int m_Paisas;
public:
   Paisas(int Paisas = 0)
   {
      m_Paisas = Paisas;
   }

   // Overloaded int cast
   operator int()
   {
      return m_Paisas;
   }

   int getPaisas()
   {
      return m_Paisas;
   }
   void setPaisas(int Paisas)
   {
      m_Paisas = Paisas;
   }
};

class rupees
{
private:
   int m_rupees;
public:
   rupees(int rupees=0)
   {
      m_rupees = rupees;
   }

   // Allow us to convert rupees into Paisas
   operator Paisas()
   {
      return Paisas(m_rupees * 100);
   }
};

void printPaisas(Paisas Paisas)
{
   cout << Paisas; // Paisas will be implicitly cast to an int here
}

int main()
{
   rupees rupees(9);
   printPaisas(rupees); // rupees will be implicitly cast to a Paisas here

   return 0;
}
