#include <stdlib.h>
#include <iostream>
using std::cout;
using std::cin;

struct Data
{
    int dia;
    int mes;
    int ano;
};

struct Funcionario
{
    char nome[ 50 ];
    Data nascFunc;
};

void exibeStruct( const Funcionario * );


int main(  )
{
    // Estrutura de dados para mostrar nome e idade de funcionários
    struct Funcionario func[ 3 ];
    int i = 0;

    for( i = 1; i < 3; i++ )
    {
    	cout <<"\nNome do Funcionario " << i << ": " << '\n';
    	cin >> func[i].nome;
        
        cout <<"Entre com o dia do nascimento do funcionario " << i << ": " << '\n';
    	cin >> func[i].nascFunc.dia;
        
        cout <<"Entre com o mes de nascimento do funcionario " << i << ": " << '\n';
    	cin >> func[i].nascFunc.mes;
        
        cout <<"Entre com o ano de nascimento do funcionario " << i << ": " << '\n';
    	cin >> func[i].nascFunc.ano;
    }
    
    exibeStruct( func );
 
    system ("pause"); 
    return 0;

}

void exibeStruct( const Funcionario *func )
{
    for( int i = 1; i < 3; i++ )
    {
    	cout << "-----------------------------------\n";
    	cout << "Nome do Funcionario " << i << ": " << func[ i ].nome << '\n';
        cout <<"\nData de nascimento do Funcionario " << i << ": " << func[ i ].nascFunc.dia << "/" << func[i].nascFunc.mes << "/" << func[ i ].nascFunc.ano << '\n';
        cout << "-----------------------------------\n";
        cout << "\n";
    };
}