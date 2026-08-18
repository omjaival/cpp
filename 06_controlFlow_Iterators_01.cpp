#include <iostream>
 
 int main()
 {
     for(int i=0; i<6;i++)
     {
         if(i%2 ==0)
         continue;
         std::cout<< "Salaar Devaratha Saisar "<< std::endl; // NOLINT(*-misleading-indentation)
         std::cout<< i << std::endl;
     }
     std::cin.get();
    
 }