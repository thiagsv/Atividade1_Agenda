#include <iostream>
#include <vector>

#define True 1

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


int main()
{
   int tam = 0;
   string exclude;
   string choice;
   string nome, numero, egmail, endereco;
   int i;
   vector<contact> vet;
   vector<string> contactName;
   int numberContacts;
   string edit;
   string edition;

   /* DECLARA O CONTATO */
   contact contato;

  while (True) {

    cout << "Escolha uma opcao: Adicionar contato (A) | Excluir contato (E) | Mostrar contatos (M) | Editar contato (D): ";
    getline(cin, choice);

    /* MOSTRAR OS CONTATOS */
    if(choice == "M"){
        cout << "Seus contatos sao: " << endl;
        for(i=0; i<=int(sizeof(contactName)); i++){
            cout << contactName[i] << endl;

       }

    }

    /* ADICIONANDO CONTATOS */
    if(choice =="A"){

       cout << "Quantos contatos serao adicionados?: " << endl;
       cin >> numberContacts;
       tam += numberContacts;

       for(i=1; i<=numberContacts; i++){

           cout << "Nome do contato: ";
           getline(cin, nome);

           cout << "Numero do contato: ";
           getline(cin, numero);

           cout << "Email do contato: ";
           getline(cin, egmail);

           cout << "Endereco do contato: ";
           getline(cin, endereco);

           contato.setData(nome, numero, egmail, endereco);

           vet.push_back(contato);
           contactName.push_back(contato.name);
        }

   }

   /* EXCLUIR CONTATO */
   if(choice == "E"){
       cout << "Qual contato voce deseja excluir?: ";
       getline(cin,nome);

       for(i=0; i<=int(sizeof(vet))/4; i++)

           if(contato.name==nome){
               cout << contato.name << endl;
               cout << contato.phone << endl;
               cout << contato.email << endl;
               cout << contato.adress << endl;
               cout << "Deseja exclui-lo? (S/N): ";
               getline(cin, exclude);
               if(exclude == "S"){
                   /* FUNÇÃO PARA EXCLUIR */
                   contactName[i] = "-" ;
                   cout << "Contato excluido!";
               }if(exclude == "N"){
                   cout << "Escolha uma opcao: Adicionar contato (A) | Excluir contato (E) | Mostrar contatos (M) | Editar contato (D): ";
                   getline(cin, choice);
               }

         }
           else{
             cout << "Este contato nao existe" << endl;
             break;

         }

   }


   /* EDITAR CONTATOS */
   if(choice == "D"){
       cout << "Qual contato voce deseja editar?: ";
       getline(cin, edit);
       for(i=0; i<=int(sizeof(vet))/4; i++)

           if(contato.name==edit){
               cout << contato.name << endl;
               cout << contato.phone << endl;
               cout << contato.email << endl;
               cout << contato.adress << endl;

               cout << "Editar: Nome (N) | Numero (NUM) | Email (EM) | Endereco (END): ";
               getline(cin, edition);

               if(edition == "N"){
                   cout << "Novo nome: ";
                   getline(cin, nome);
                   contato.setName(nome);
                   contactName[i] = nome;

               }if(edition == "NUM"){
                   cout << "Novo numero: ";
                   getline(cin, numero);
                   contato.setPhone(numero);

               }if(edition == "EM"){
                   cout << "Novo email: ";
                   getline(cin, egmail);
                   contato.setName(egmail);

               }if(edition == "END"){
                   cout << "Novo endereco: ";
                   getline(cin, endereco);
                   contato.setName(endereco);
               }

               cout << "Contato atualizado: " << endl;
               cout << contato.name << endl;
               cout << contato.phone << endl;
               cout << contato.email << endl;
               cout << contato.adress << endl;

           }

        }


    }

}
