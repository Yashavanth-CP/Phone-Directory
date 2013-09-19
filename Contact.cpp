#include "Contact.h"
#include<assert.h>
#include <iostream>
using namespace std;

Contact::Contact(){
	cout << "length of email is " << email.length() << endl;
};

Contact::Contact(string fname) : f_name(fname) {

	cout << "Contact(string name) Constructor " << email.length() << endl;
}

Contact::Contact(string fname, string lname,  long telp, long moble, string email_id
 , string ltion, string group, char Abil) : f_name(fname),l_name(lname),tele(telp),mob(moble),email(email_id),loc(ltion),grp(group)
   { 
    
	cout << "Member initialed Constructor " << email.length() << endl;
} 

Contact::~Contact(){
}

void Contact::set_f_name(string name){
                 assert(name.length() > 0);
                 this->f_name.assign(name);
               }

string Contact::get_f_name(){
                   return this->f_name;
                 }


void Contact::set_l_name(string name){
                 this->f_name.assign(name);
               }

string Contact::get_l_name(){
                    return this->l_name;
                }

long Contact::get_tele(){
                   return this->tele;
                }
 
void Contact::set_tele(long num){
                   assert(num >0);
                   this->tele = num;
                }


long Contact::get_mob(){
                   return this->tele;
                }
 
void Contact::set_mob(long num){
                   assert(num >0);
                   this->mob = num;
                }

 
string Contact::get_email(){
                   return this->email;
                }
 
void Contact::set_email(string e){
                    this->email = e;
                }


string Contact::get_loc(){
                   return this->loc;
                }
 
void Contact::set_loc(string ltion){
                   this->loc.assign(ltion);
                }

string Contact::get_grp(){
                   return this->grp;
               }

void  Contact::set_grp( string grp){
                  this->grp.assign(grp);
               }

char Contact::get_Abils(){
                   return this->abil;
               }

void Contact::set_Abils(char ab){
                    int num = ab-'0';
                    assert(num >0);
                    this->abil = ab;
               }




