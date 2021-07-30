#include <iostream>
#include <vector>
#include <classes.h>

using namespace std;


int main()
{
   int tam = 0;
   string exclude;
   string choice;
   string nome, numero, egmail, endereco;
   int i;
   vector<contact> vet;
   int numberContacts;
   string edit;
   string edition;

   /* DECLARA O CONTATO */
   contact contato;

  while (true) {

    cout << "Escolha uma opcao: Adicionar contato (A) | Excluir contato (E) | Mostrar contatos (M) | Editar contato (D): ";
    getline(cin, choice);

    /* MOSTRAR OS CONTATOS */
    if(choice == "M"){
        cout << "Seus contatos sao: " << endl;
        for(i=0; i < int(vet.size()); i++){
            cout << vet.at(i).name << endl;

       }

    }

    /* ADICIONANDO CONTATOS */
    if(choice =="A"){

       cout << "Quantos contatos serao adicionados?: " << endl;
       cin >> numberContacts;
       tam += numberContacts;

       for(i=1; i<=numberContacts; i++){

           cin.ignore();
           cout << "Nome do contato: ";
           getline(cin, nome);


           cout << "Numero do contato: " ;
           getline(cin, numero);


           cout << "Email do contato: " ;
           getline(cin, egmail);



           cout << "Endereco do contato: ";
           getline(cin, endereco);


           contato.setData(nome, numero, egmail, endereco);

           vet.push_back(contato);
        }

   }

   /* EXCLUIR CONTATO */
   if(choice == "E"){
       cout << "Qual contato voce deseja excluir?: ";
       getline(cin,nome);

       for(i=0; i < int(vet.size()); i++){

           if(vet.at(i).name==nome){
               cout << vet.at(i).name << endl;
               cout << vet.at(i).phone << endl;
               cout << vet.at(i).email << endl;
               cout << vet.at(i).adress << endl;
               cout << "Deseja exclui-lo? (S/N): ";
               getline(cin, exclude);

               if(exclude == "S"){
                   /* FUNÇÃO PARA EXCLUIR */
                   vet.erase(vet.begin()+i);
                   cout << "Contato excluido!" << endl;
               }if(exclude == "N"){
                   cout << "Escolha uma opcao: Adicionar contato (A) | Excluir contato (E) | Mostrar contatos (M) | Editar contato (D): ";
                   getline(cin, choice);
               }

         }

   }
}

   /* EDITAR CONTATOS */
   if(choice == "D"){
       cout << "Qual contato voce deseja editar?: ";
       getline(cin, edit);
       for(i=0; i < int(vet.size()); i++)

           if(vet.at(i).name==edit){
               cout << vet.at(i).name << endl;
               cout << vet.at(i).phone << endl;
               cout << vet.at(i).email << endl;
               cout << vet.at(i).adress << endl;

               cout << "Editar: Nome (N) | Numero (NUM) | Email (EM) | Endereco (END): ";
               getline(cin, edition);


               if(edition == "N"){
                   cout << "Novo nome: ";
                   getline(cin, nome);
                   vet.at(i).name = nome;

               }else if(edition == "NUM"){
                   cout << "Novo numero: ";
                   getline(cin, numero);
                   vet.at(i).phone = numero;

               }else if(edition == "EM"){
                   cout << "Novo email: ";
                   getline(cin, egmail);
                   vet.at(i).email = egmail;

               }else if(edition == "END"){
                   cout << "Novo endereco: ";
                   getline(cin, endereco);
                   vet.at(i).adress = endereco;
               }

               cout << "Contato atualizado: " << endl;
               cout << vet.at(i).name << endl;
               cout << vet.at(i).phone << endl;
               cout << vet.at(i).email << endl;
               cout << vet.at(i).adress << endl;
           }

        }


    }

}
