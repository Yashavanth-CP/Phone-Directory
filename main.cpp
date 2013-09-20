#include<iostream>
#include<sstream>
#include "Contact.h"
#include "Parser.h"
#include "list.h"
#include <vector>
#include <algorithm>
#include "Verifier.h"
#include <assert.h>
using namespace std;

int main()
{  
//   list *db = new list();
   //vector<vector<string> > *db = new vector<vector<string> >(); 
   Parser* p = new Parser("/home/yash/PhoneDirectory/Contacts.txt");
   int max_entries;
   max_entries = p->get_no_lines();
  
   if(max_entries < 1)
     {
       std::cout<< "Empty file "<< std::endl;
       return -1;
     } 

   std::string *db = new std::string[max_entries];
   assert(db!=0); 
   std::cout<<" No of lines are " << max_entries <<std::endl;
   p->read_all(db);
   assert(db!=0);
   Verifier *vfy = new Verifier();
   assert(vfy!=0);
   for(int i=0; i<max_entries; i++)
       {
          std::cout<<"String is : "<< *db << std::endl;
          std::vector<string> *tokens = new  std::vector<string>;
          if(!vfy->verify_entry(*db, tokens)){
             std::cout<<" Verification failed " <<std::endl;
             *db++;
             continue;
           }
           
           if(tokens->size()){
  //           std::cout <<" Tokens are: "<< std::endl;
           for(std::vector<string>::iterator it = tokens->begin();it != tokens->end() ; it++)
               {
//			 std::cout<< *it << std::endl;
               }
             
             Contact(tokens);
             //tokens->clear(); 
           }
          *db++;
          
 }

                  
                 

  
   # if 0
   std::vector<std::string>::iterator i,j;
   for(i = db->begin();  i!= db->end() ; i++)
      {
          for(j=db->at(i).begin(); j != db->at(i).end(); j++)
            {

               std::cout<<" Entry is : "<< db->at(i).at(j);
            }

     }

   #endif 
   return 0;
}


