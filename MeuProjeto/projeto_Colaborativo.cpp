# include <iostream>

using namespace std;

int main(void)
{
    int idade;
    char opcao;

    do{
        cout << "Digite sua idade: ";
        cin >> idade;

        if (idade >= 18) cout << "maior de idade pode votar : " << idade << endl;
        else cout << "menor de idade não pode votar : " << idade << endl;

        cout << "Deseja continuar S/N: ";
        cin >> opcao;
    }while (opcao != 'N' && opcao != 'n');
    
    
    return 0;
}
