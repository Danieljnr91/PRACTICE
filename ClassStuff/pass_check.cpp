#include <iostream>
#include <string>

int main()
{
   std::string password;
   std::cout<<"Enter Your password for validation:"<<std::endl;
   std::cin >> password;

   int pass_length = password.length();
   int num_digits = 0;

   for (int i=1; i<=9; i++)
   {   
         if (password[i] >= '0' && password[i] <= '9')
         {
            num_digits+=1;
         }
   }

   if (pass_length >= 8 && num_digits>=1)
   {
      std::cout<<"Strong Password you got there!";
   }
   else if (pass_length >= 8 && num_digits<1)
   {
      std::cout<<"There are too few digits in your password!";
   }
   else
   {
      std::cout<<"The length of your password is too short";
   }

   
   return 0;
}