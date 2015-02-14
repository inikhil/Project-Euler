int length_of_number(int n)
{
   static const int smalls[20] = {0,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8};
   static const int tens[10] = {0,0,6,6,5,5,5,7,6,6};

   if (n == 1000)
      return 11;
   int count = 0;
   int low = n % 100;
   count = (low < 20) ? smalls[low] : tens[low / 10] + smalls[low % 10];
   if (n >= 100) {
      count += 7 + smalls[n / 100]; // word "hundred" plus the digit
      if (n % 100 != 0)
         count += 3; // the word "and"
   }
   return count;
}

int main() {
   int sum = 0;
   for (int i = 1; i <= 1000; ++i)
      sum += length_of_number(i);
   return sum;
}
