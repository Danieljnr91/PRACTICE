#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <numeric>

class ShoppingListManager{
    public:
       std::vector<std::string> shoppingList;
       std::vector<std::pair<std::string,double>> history;
       std::vector<std::string>::iterator it;

    ShoppingListManager(std::vector<std::string> shoppingList){
        this->shoppingList=shoppingList;
    }
    
    void removeItem(std::vector<std::pair<std::string,double>>& remove){
        for(auto &item : remove){
            for(it=shoppingList.begin(); it!=shoppingList.end();){
                if(*it == item.first){
                   history.emplace_back(item);
                   shoppingList.erase(it);
                   break;
                }
                else{
                    it++;
                }
            }
        }
        std::cout<<"Shopping List Updated! "<<remove.size()<<" items removed"<<std::endl;
    }

    void addItem(std::vector<std::string>& add){
        for(auto &item : add){
            shoppingList.push_back(item);
        }
        std::cout<<"Shopping list updated! "<<add.size()<<" items added."<<std::endl;
    }
    
    void display(int x){
        if(x==1){
            int count = 1;
            for(auto &i : shoppingList){
                std::cout<<count<<"."<<i<<std::endl;
                count+=1;
            }
        }
        else if(x==2){
            int count = 1;
            if (history.empty()){
                std::cout<<"No History Recorded yet!"<<std::endl;
            }
            else{
               for(auto &i : history){
                  std::cout<<count<<"."<<i.first<<" - "<<" $"<<i.second<<std::endl;
                  count+=1;
               }
               double total = accumulate(history.begin(), history.end(), 0.0, 
               [](double sum, const auto &p)
              {return sum + p.second;});
               std::cout<<"You've spent a total of $"<<total<<" during your shopping"<<std::endl;
            }
        }
    }
};


int main(){
    std::vector<std::string> shoppingList;
    
    std::string y;
    std::cout<<"End your list with the keyword 'done'"<<std::endl;
    std::cout<<"Enter items to buy:";
    while(true){
        std::cin>>y;
        if(y=="done") break;
        shoppingList.push_back(y);
    }

    ShoppingListManager courier(shoppingList);


    int menuControl;
  while(true){
    std::cout<<"Enter"<<std::endl
    <<"1.To view current shopping list."<<std::endl
    <<"2.To remove items from the list."<<std::endl
    <<"3.To add items the list"<<std::endl
    <<"4.To view activity history."<<std::endl
    <<"5. To Exit"<<std::endl
    <<"choose:";
    std::cin>>menuControl;

    if(menuControl==1){
        courier.display(1);
    }
    else if(menuControl==2){
        int rem;
        std::vector<std::pair<std::string,double>> remove;
        std::cout<<"How many items you want to remove?:";
        std::cin>>rem;

        for(int i=0; i<rem; i++){
           std::string a;
           double b;
           std::cout<<"what item you want to remove?:";
           std::cin>>a;
           std::cout<<"how much is "<<a<<" ($)"<<":";
           std::cin>>b;

           remove.emplace_back(a,b);
        }

        courier.removeItem(remove);
    }
    else if(menuControl==3){
        std::vector<std::string> add;
        int newItems;
        std::cout<<"How many items you want to add?:";
        std::cin>>newItems;
        
        std::cout<<"What items are we adding?:";
        for(int i=0; i<newItems; i++){
            std::string a;
            std::cin>>a;
            
            add.push_back(a);
        }

        courier.addItem(add);

    }
    else if(menuControl==4){
        courier.display(2);
    }
    else{
        std::cout<<"Exiting...";
        break;
    }
 } 
 return 0; 
}
