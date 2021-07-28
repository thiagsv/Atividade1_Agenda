#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>



using namespace std;

/* CLASSE CONTATO, USA SET PARA PEGAR OS DADOS E ADICIONA-LOS NO CONTATO */

class contact {
public:
    string name, phone, email, adress;
    void setData(string _name, string _phone, string _email, string _adress){
        name = _name;
        phone = _phone;
        email = _email;
        adress = _adress;

        }
    void setName(string _name){
        name = _name;
    }

    void setPhone(string _phone){
        phone = _phone;
    }
    void setEmail(string _email){
        email = _email;
    }
    void setAdress(string _adress){
        adress = _adress;
    }

private:

};

#endif // CLASSES_H
