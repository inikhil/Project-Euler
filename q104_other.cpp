#include <iostream>
#include <cmath>

bool isPandig (unsigned&);

int main()
{

   unsigned fn(1), fnSub1(1), fnSub2(1);
   unsigned fibIndex(2);
   const double SQRT5 = sqrt(5), PHI = (1+SQRT5)/2;

   while (true) {
      if (isPandig(fn)) {
         double tmp = fibIndex*log10(PHI) - log10(SQRT5);
         unsigned first9Digs = static_cast<unsigned>(pow(10,tmp-floor(tmp)+8));
         if (isPandig(first9Digs))
            break;
      }
      fn = (fnSub1 + fnSub2)%1000000000;
      fnSub2 = fnSub1;
      fnSub1 = fn;
      fibIndex++;
   }
   std::cout << fibIndex;
   return 0;
}

bool isPandig (unsigned& n)
{
   unsigned digitCheck = 0;

   while (n) {
      digitCheck |= (1UL << n%10);
      n /= 10;
   }
   return digitCheck == 0x3FE;
}
