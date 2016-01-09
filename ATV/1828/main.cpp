#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int int main(){
	int quantidade;
    cin >> quantidade;
    for (int i = 1; i <= quantidade; i++) {
        string sheldon, raj;
        cin >> sheldon >> raj;
        cout << "Caso #" << i << ": ";
        if (sheldon == raj)
            cout << "De novo!" << endl;
        else if ( (sheldon == "tesoura" && raj == "papel")
            || (sheldon == "papel" && raj == "pedra")
            || (sheldon == "pedra" && raj == "lagarto")
            || (sheldon == "lagarto" && raj == "Spock")
            || (sheldon == "Spock" && raj == "tesoura")
            || (sheldon == "tesoura" && raj == "lagarto")
            || (sheldon == "lagarto" && raj == "papel")
            || (sheldon == "papel" && raj == "Spock")
            || (sheldon == "Spock" && raj == "pedra")
            || (sheldon == "pedra" && raj == "tesoura"))
            cout << "Bazinga!" << endl;
        else
            cout << "Raj trapaceou!" << endl;
 
    }
    return 0;
}

/*
int Jogo(int jogo, string sheldon, string raj){
	if (raj == sheldon){
		printf("Caso #%d: De novo!\n",jogo );
		return 0;
	}
	if (sheldon == "pedra"){
		if (raj == "lagarto" || raj == "tesoura"){
			printf("Caso #%d: Bazinga!\n",jogo );
			return 0;
		}		
	}else if (sheldon == "papel"){
		if (raj == "pedra" || raj == "Spock")
		{
			printf("Caso #%d: Bazinga!\n",jogo );
			return 0;
		}		
	}else if (sheldon == "tesoura"){
		if (raj == "papel" || raj == "lagarto")
		{
			printf("Caso #%d: Bazinga!\n",jogo );
			return 0;
		}		
	}else if (sheldon == "lagarto"){
		if (raj == "Spock" || raj == "papel"){
			printf("Caso #%d: Bazinga!\n",jogo );
			return 0;
		}		
	}else if (sheldon == "Spock"){
		if (raj == "tesoura" || raj == "pedra")
		{
			printf("Caso #%d: Bazinga!\n",jogo );
			return 0;
		}		
	}
	if (raj == "pedra"){
		if (sheldon == "lagarto" || sheldon == "tesoura")
		{
			printf("Caso #%d: Raj trapaceou!\n",jogo );
			return 0;
		}		
	}else if (raj == "papel"){
		if (sheldon == "pedra" || sheldon == "Spock")
		{
			printf("Caso #%d: Raj trapaceou!\n",jogo );
			return 0;
		}		
	}else if (raj == "tesoura"){
		if (sheldon == "papel" || sheldon == "lagarto")
		{
			printf("Caso #%d: Raj trapaceou!\n",jogo );
			return 0;
		}
	}else if (raj == "lagarto"){
		if (sheldon == "Spock" || sheldon == "papel")
		{
			printf("Caso #%d: Raj trapaceou!\n",jogo );
			return 0;
		}
	}else if (raj == "Spock"){
		if (sheldon == "tesoura" || sheldon == "pedra")
		{
			printf("Caso #%d: Raj trapaceou!\n",jogo );
			return 0;
		}
	}

}

int main(){

	int quantidade;
	string sheldon, raj;
	cin >> quantidade;

	for (int jogo = 1; jogo <= quantidade; ++jogo){
		cin >> sheldon >> raj;
		Jogo(jogo, sheldon,raj);	
	}
}
*/
