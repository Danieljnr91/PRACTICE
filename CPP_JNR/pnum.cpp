#include <iostream>

// int main()
// {
//     int arr[2];
//     int tester;

//     std::cout<<"Enter your range:";
//     for (int i=0; i<2; i++){std::cin>>arr[i];}

    
//     for (int k=arr[0]; k<=arr[1]; k++)
//     {
//         if (k==0 || k==1)
//         {
            
//         }
//         else
//         {
//             for (int j=1; j<=arr[1]; j++)
//            {
//               if (k%j==0)
//               {
//                 // Do Nothing
//                 tester+=1;
//               }
              
//            }
//         std::cout<<k<<" ";
//         }
//     }
    
    

// }


// int is_prime(int number)
// {
//     if (number==1 || number==0)
//     {
//         return false;
//     }
//     for (int i=2; i*i<number; i++)
//     {
//         if (number%i==0)
//         {
//                 return false;
//         }
//     }
//     return true;

// }

//===================================================================================================
// int main()
// {
//     int arr[2];

//     std::cout<<"Enter the range:";
//     for (int i=0; i<2; i++){std::cin>>arr[i];}

//     for (int j=arr[0]; j<=arr[1]; j++)
//     {
//         if (is_prime(j))
//         {
//             std::cout<<j<<" ";
//         }
//     }
//     return 0;
// }


//=====================================================================================================
// int main()
// {
//     int number;
//     bool is_prime = true;

//     std::cout<<"Enter number:"<<std::endl;
//     std::cin>>number;

//     for (int i=2; i<number; i++)
//     {
//         if (number%i==0)
//         {
//             is_prime=false;
//         }
//     }
//     if (is_prime)
//     {
//         std::cout<<"Prime";
//     }
//     else{
//         std::cout<<"Not Prime";
//     }
//     return 0;
    
// }


//==============================================================================
int main()
{
    int start,end;
   

    std::cout<<"Enter start value and End value:";
    std::cin>>start>>end;

    for (int i=start; i<=end; i++)
    {
        if (i<=1)
        {
            continue;
        }
        bool is_prime = true;
        for (int j=2; j<i; j++)
        {
            if (i%j==0)
            {
                is_prime=false;
                break;
            }
        }
        if (is_prime)
        {
            std::cout<<i<<" ";
        }
    }
    return 0;
}