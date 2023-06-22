#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>


void g(int x, int y); void d(float number_of_seconds); void sign(); void al(); void B(); void I(); void N(); void G(); void O();void kk();void mn(); void nome(); void finish();void cy();void esq(); void L(); void ver(); void hor(); void maincra(); void sm();
int num_aleatorio, numeros[75], v, fstop, des,num_aleatorio2,numeros2[75];
char nm1[60];
char nm2[60];
int a, k, j, l, m, n, z;
int b1, i1, n1, g1, o1;
int b2, i2, n2, g2, o2;
int ff, f;
int bn(int nm, int ar[], int t);
int p1[5];
int p2[5];
int p3[5];
int p4[5];
int p5[5];
int bg[5][5];
int p21[5];
int p22[5];
int p23[5];
int p24[5];
int p25[5];
int bg2[5][5];
int jugadanum = 0,jugadanumc2=0,ganador=0;
int buscarNumero(int numero, int arreglo[]) {
	int k, stopp = 0;
	for (k = 0; (k <= 75 && stopp == 0); k++) {
		if (arreglo[k] == numero) {
			stopp = 1;
		}
	}
	return stopp;
}
void g(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void d(float number_of_seconds)
{
	// Converting time into milli_seconds 
	float milli_seconds = 1000 * number_of_seconds;

	// Stroing start time 
	clock_t start_time = clock();

	// looping till required time is not acheived 
	while (clock() < start_time + milli_seconds)
		;
}

void sign()
{
	int j, k;
	g(15, 5); printf("Bingo 2019");
	g(15, 6); printf("Loading ");
	for (j = 0, k = 24; j <= 6, k <= 30; j++, k++) {
		d(0.5);
		g(k, 6); printf("==");
	}

	system("cls");
}

int bn(int nm, int ar[], int t)
{
	int h, stop = 0;

	for (h = 0; (h < 5 && stop == 0); h++)
	{
		if (ar[h] == nm)
			stop = 1;
	}
	return stop;
}



void B()
{

	srand(getpid());
	for (a = 0; a < 5; a++)
	{

		do
		{
			b1 = rand() % (15 - 1 + 1) + 1;
			ff = bn(b1, p1, 5);

		} while (ff);
		p1[a] = b1;
	}
}


void I()
{
	srand(getpid());

	for (a = 0; a < 5; a++)
	{

		do
		{
			i1 = rand() % (30 - 16 + 1) + 16;
			ff = bn(i1, p2, 5);

		} while (ff);
		p2[a] = i1;
	}
}

void N()
{
	srand(getpid());
	for (a = 0; a < 5; a++)
	{

		do
		{
			n1 = rand() % (45 - 31 + 1) + 31;
			ff = bn(n1, p3, 5);

		} while (ff);
		p3[a] = n1;
	}
}


void G()
{
	srand(getpid());
	for (a = 0; a < 5; a++)
	{

		do
		{
			g1 = rand() % (60 - 46 + 1) + 46;
			ff = bn(g1, p4, 5);

		} while (ff);
		p4[a] = g1;
	}
}

void O()
{
	srand(getpid());
	for (a = 0; a < 5; a++)
	{

		do
		{
			o1 = rand() % (75 - 61 + 1) + 61;
			ff = bn(o1, p5, 5);

		} while (ff);
		p5[a] = o1;
	}
}


 void B2()
{

	srand(time(NULL));
	for (a = 0; a < 5; a++)
	{

		do
		{
			b2 = rand() % (15 - 1 + 1) + 1;
			ff = bn(b2, p21, 5);

		} while (ff);
		p21[a] = b2;
	}
}






void I2()
{
	srand(time(NULL));
	for (a = 0; a < 5; a++)
	{

		do
		{
			i2 = rand() % (30 - 16 + 1) + 16;
			ff = bn(i2, p22, 5);

		} while (ff);
		p22[a] = i2;
	}
}

void N2()
{
	srand(time(NULL));
	for (a = 0; a < 5; a++)
	{

		do
		{
			n2 = rand() % (45 - 31 + 1) + 31;
			ff = bn(n2, p23, 5);

		} while (ff);
		p23[a] = n2;
	}
}


void G2()
{
	srand(time(NULL));
	for (a = 0; a < 5; a++)
	{

		do
		{
			g2 = rand() % (60 - 46 + 1) + 46;
			ff = bn(g2, p24, 5);

		} while (ff);
		p24[a] = g2;
	}
}

void O2()
{
	srand(time(NULL));
	for (a = 0; a < 5; a++)
	{

		do
		{
			o2 = rand() % (75 - 61 + 1) + 61;
			ff = bn(o2, p25, 5);

		} while (ff);
		p25[a] = o2;
	}
}



void c1()
{


	g(1, 1); printf("B");
	g(4, 1); printf("I");
	g(8, 1); printf("N");
	g(12, 1); printf("G");
	g(16, 1); printf("O");

	g(1, 2); printf("%d", p1[0]);
	g(1, 3); printf("%d", p1[1]);
	g(1, 4); printf("%d", p1[2]);
	g(1, 5); printf("%d", p1[3]);
	g(1, 6); printf("%d", p1[4]);

	g(4, 2); printf("%d", p2[0]);
	g(4, 3); printf("%d", p2[1]);
	g(4, 4); printf("%d", p2[2]);
	g(4, 5); printf("%d", p2[3]);
	g(4, 6); printf("%d", p2[4]);

	g(8, 2); printf("%d", p3[0]);
	g(8, 3); printf("%d", p3[1]);
	g(8, 4); printf("XX");
	g(8, 5); printf("%d", p3[2]);
	g(8, 6); printf("%d", p3[4]);

	g(12, 2); printf("%d", p4[0]);
	g(12, 3); printf("%d", p4[1]);
	g(12, 4); printf("%d", p4[2]);
	g(12, 5); printf("%d", p4[3]);
	g(12, 6); printf("%d", p4[4]);

	g(16, 2); printf("%d", p5[0]);
	g(16, 3); printf("%d", p5[1]);
	g(16, 4); printf("%d", p5[2]);
	g(16, 5); printf("%d", p5[3]);
	g(16, 6); printf("%d", p5[4]);
	
	g(1, 7);printf("Player 1");
	g(1,8);printf("%s", nm1);

}


void c2()
{


	g(21, 1); printf("B");
	g(24, 1); printf("I");
	g(28, 1); printf("N");
	g(32, 1); printf("G");
	g(36, 1); printf("O");

	g(21, 2); printf("%d", p21[0]);
	g(21, 3); printf("%d", p21[1]);
	g(21, 4); printf("%d", p21[2]);
	g(21, 5); printf("%d", p21[3]);
	g(21, 6); printf("%d", p21[4]);

	g(24, 2); printf("%d", p22[0]);
	g(24, 3); printf("%d", p22[1]);
	g(24, 4); printf("%d", p22[2]);
	g(24, 5); printf("%d", p22[3]);
	g(24, 6); printf("%d", p22[4]);

	g(28, 2); printf("%d", p23[0]);
	g(28, 3); printf("%d", p23[1]);
	g(28, 4); printf("XX");
	g(28, 5); printf("%d", p23[2]);
	g(28, 6); printf("%d", p23[4]);

	g(32, 2); printf("%d", p24[0]);
	g(32, 3); printf("%d", p24[1]);
	g(32, 4); printf("%d", p24[2]);
	g(32, 5); printf("%d", p24[3]);
	g(32, 6); printf("%d", p24[4]);

	g(36, 2); printf("%d", p25[0]);
	g(36, 3); printf("%d", p25[1]);
	g(36, 4); printf("%d", p25[2]);
	g(36, 5); printf("%d", p25[3]);
	g(36, 6); printf("%d", p25[4]);
	
	g(21, 7);printf("Player 2");
	g(21,8);printf("%s", nm2);
}

void gnr()
{
	B();
	B2();
	I();
	I2();
	N();
	N2();
	G();
	G2();
	O();
	O2();
}

void kk()
{
	v = 0;
	do {
		if (jugadanum != 8||jugadanumc2 !=8) {
			do {
				num_aleatorio2 = rand() % (75 - 1 + 1);
				fstop = buscarNumero(num_aleatorio2, numeros2);
			} while (fstop);

			numeros2[v] = num_aleatorio2 ;
			v = v + 1;
			
			g(27,10);printf("Ficha Sacada %d ", num_aleatorio2 );
		}
		//EVALUACION DE LA JUGADA T CARTON 1

		if (num_aleatorio2 == p1[0]) {
			jugadanum = jugadanum + 1;
			g(1, 2);printf("XX");
		}
		if (num_aleatorio2 == p2[0]) {
			jugadanum = jugadanum + 1;
			g(4, 2);printf("XX");
		}
		if (num_aleatorio2 == p3[0]) {
			jugadanum = jugadanum + 1;
			g(8, 2);printf("XX");
		}
		if (num_aleatorio2 == p4[0]) {
			jugadanum = jugadanum + 1;
			g(12, 2);printf("XX");
		}
		if (num_aleatorio2 == p5[0]) {
			jugadanum = jugadanum + 1;
			g(16, 2);printf("XX");
		}

		if (num_aleatorio2 == p3[1]) {
			jugadanum = jugadanum + 1;
			g(8, 3);printf("XX");
		}
		if (num_aleatorio2 == p3[2]) {
			jugadanum = jugadanum + 1;
			g(8, 5);printf("XX");
		}
		if (num_aleatorio2 == p3[4]) {
			jugadanum = jugadanum + 1;
			g(8, 6);printf("XX");
		}
		
        //EVALUACION DE LA JUGADA T CARTON 2

		if (num_aleatorio2 == p21[0]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(21, 2);printf("XX");
		}
		if (num_aleatorio2 == p22[0]) {
			jugadanumc2= jugadanumc2 + 1;
			g(24, 2);printf("XX");
		}
		if (num_aleatorio2 == p23[0]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(28, 2);printf("XX");
		}
		if (num_aleatorio2 == p24[0]) {
			jugadanumc2 = jugadanumc2+ 1;
			g(32, 2);printf("XX");
		}
		if (num_aleatorio2 == p25[0]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(36, 2);printf("XX");
		}

		if (num_aleatorio2 == p23[1]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(28, 3);printf("XX");
		}
		if (num_aleatorio2 == p23[2]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(28, 5);printf("XX");
		}
		if (num_aleatorio2 == p23[4]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(28, 6);printf("XX");
		}
		if(jugadanumc2==8){
			g(25,13);printf("%s ES EL GANADOR!!!", nm2);
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
		}		
			if(jugadanum==8){
			g(25,13);printf("%s ES EL GANADOR!!!", nm1);
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
		}		
		
			if(jugadanum==8 && jugadanumc2==8){
			g(25,13);printf("QUIEN LO DIRIA ES UN EMPATE!!!!");
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
			}
			
		if (ganador != 1) {

		g(25,11);printf("Presione Cualquier Tecla Para Sacar Otra Ficha :3");
		g(25,12);getche();

		}
		
		
		
	} while (ganador!=1);
	g(25,14); printf("  ");
}

void cy()
{
	v = 0;
	do {
		if (jugadanum != 24||jugadanumc2 !=24) {
			do {
				
				num_aleatorio = rand() % (75 - 1 + 1);
				fstop = buscarNumero(num_aleatorio, numeros);
			} while (fstop);

			numeros[v] = num_aleatorio;
			v = v + 1;
			
			g(27,10);printf("Ficha Sacada %d ", num_aleatorio);
		}
		
			//EVALUACION DE LA JUGADA CARTON LLENO CARTON 1

		if (num_aleatorio == p1[0]) {
			jugadanum = jugadanum + 1;
			g(1, 2);printf("XX");
		}
		if (num_aleatorio == p1[2]) {
			jugadanum = jugadanum + 1;
			g(1, 4);printf("XX");
		}
		if (num_aleatorio == p1[3]) {
			jugadanum = jugadanum + 1;
			g(1, 5);printf("XX");
		}
		if (num_aleatorio == p1[4]) {
			jugadanum = jugadanum + 1;
			g(1, 6);printf("XX");
		}
		if (num_aleatorio == p1[1]) {
			jugadanum = jugadanum + 1;
			g(1, 3);printf("XX");
		}
		
		
		
		if (num_aleatorio == p2[0]) {
			jugadanum = jugadanum + 1;
			g(4, 2);printf("XX");
		}
		if (num_aleatorio == p2[1]) {
			jugadanum = jugadanum + 1;
			g(4, 3);printf("XX");
		}
		if (num_aleatorio == p2[2]) {
			jugadanum = jugadanum + 1;
			g(4, 4);printf("XX");
		}
		if (num_aleatorio == p2[3]) {
			jugadanum = jugadanum + 1;
			g(4, 5);printf("XX");
		}
		
		if (num_aleatorio == p2[4]) {
			jugadanum = jugadanum + 1;
			g(4, 6);printf("XX");
		}
		
		if (num_aleatorio == p3[0]) {
			jugadanum = jugadanum + 1;
			g(8, 2);printf("XX");
		}
		if (num_aleatorio == p3[1]) {
			jugadanum = jugadanum + 1;
			g(8, 3);printf("XX");
		}
	
		if (num_aleatorio == p3[3]) {
			jugadanum = jugadanum + 1;
			g(8, 5);printf("XX");
		}
		if (num_aleatorio == p3[4]) {
			jugadanum = jugadanum + 1;
			g(8, 6);printf("XX");
		}
		
		if (num_aleatorio == p4[0]) {
			jugadanum = jugadanum + 1;
			g(12, 2);printf("XX");
		}
		if (num_aleatorio == p4[1]) {
			jugadanum = jugadanum + 1;
			g(12, 3);printf("XX");
		}
		if (num_aleatorio == p4[2]) {
			jugadanum = jugadanum + 1;
			g(12, 4);printf("XX");
		}
		if (num_aleatorio == p4[3]) {
			jugadanum = jugadanum + 1;
			g(12, 5);printf("XX");
		}
		if (num_aleatorio == p4[4]) {
			jugadanum = jugadanum + 1;
			g(12, 6);printf("XX");
		}
		
		if (num_aleatorio == p5[0]) {
			jugadanum = jugadanum + 1;
			g(16, 2);printf("XX");
		}
		if (num_aleatorio == p5[1]) {
			jugadanum = jugadanum + 1;
			g(16, 3);printf("XX");
		}
		if (num_aleatorio == p5[2]) {
			jugadanum = jugadanum + 1;
			g(16,4);printf("XX");
		}
		if (num_aleatorio == p5[3]) {
			jugadanum = jugadanum + 1;
			g(16, 5);printf("XX");
		}
		if (num_aleatorio == p5[4]) {
			jugadanum = jugadanum + 1;
			g(16, 6);printf("XX");
		}

	
		
        //EVALUACION DE LA JUGADA CARTON LLENO CARTON 2

		if (num_aleatorio == p21[0]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(21, 2);printf("XX");
		}
		if (num_aleatorio == p21[1]) {
			jugadanumc2 =jugadanumc2 + 1;
			g(21, 3);printf("XX");
		}
		if (num_aleatorio == p21[2]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(21, 4);printf("XX");
		}
		if (num_aleatorio == p21[3]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(21, 5);printf("XX");
		}
		if (num_aleatorio == p21[4]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(21, 6);printf("XX");
		}
		
		
		if (num_aleatorio == p22[0]) {
			jugadanumc2= jugadanumc2 + 1;
			g(24, 2);printf("XX");
		}
		if (num_aleatorio == p22[1]) {
			jugadanumc2= jugadanumc2 + 1;
			g(24, 3);printf("XX");
		}
		if (num_aleatorio == p22[3]) {
			jugadanumc2= jugadanumc2 + 1;
			g(24, 5);printf("XX");
		}
		if (num_aleatorio == p22[4]) {
			jugadanumc2= jugadanumc2 + 1;
			g(24, 6);printf("XX");
		}
		if (num_aleatorio == p22[2]) {
			jugadanumc2= jugadanumc2 + 1;
			g(24, 4);printf("XX");
		}
		
		
		if (num_aleatorio == p23[0]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(28, 2);printf("XX");
		}
			if (num_aleatorio == p23[1]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(28, 3);printf("XX");
		}
			if (num_aleatorio == p23[2]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(28, 5);printf("XX");
		}
			if (num_aleatorio == p23[4]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(28, 6);printf("XX");
		}
		
		if (num_aleatorio == p24[0]) {
			jugadanumc2 = jugadanumc2+ 1;
			g(32, 2);printf("XX");
		}
		if (num_aleatorio == p24[1]) {
			jugadanumc2 = jugadanumc2+ 1;
			g(32, 3);printf("XX");
		}
		if (num_aleatorio == p24[2]) {
			jugadanumc2 = jugadanumc2+ 1;
			g(32, 4);printf("XX");
		}
		if (num_aleatorio == p24[3]) {
			jugadanumc2 = jugadanumc2+ 1;
			g(32, 5);printf("XX");
		}
		if (num_aleatorio == p24[4]) {
			jugadanumc2 = jugadanumc2+ 1;
			g(32, 6);printf("XX");
		}
		
		if (num_aleatorio == p25[0]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(36, 2);printf("XX");
		}
		if (num_aleatorio == p25[1]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(36, 3);printf("XX");
		}
		if (num_aleatorio == p25[2]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(36, 4);printf("XX");
		}
		if (num_aleatorio == p25[3]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(36, 5);printf("XX");
		}
		if (num_aleatorio == p25[4]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(36, 6);printf("XX");
		}
		
		if(jugadanumc2==24){
			g(25,13);printf("%s ES EL GANADOR!!!", nm2);
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
		}		
			if(jugadanum==24){
			g(25,13);printf("%s ES EL GANADOR!!!", nm1);
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
		}		
		
			if(jugadanum==24 && jugadanumc2==24){
			g(25,13);printf("QUIEN LO DIRIA ES UN EMPATE!!!!");
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
			}

		
	
		if (ganador != 1) {

		g(25,11);printf("Presione Cualquier Tecla Para Sacar Otra Ficha :3");
		g(25,12);getche();

		}
		
		}while (ganador!=1);
		
        
		
		
	 
	g(25,14); printf("  ");
}

void esq()
{
	v = 0;
	do {
		if (jugadanum != 4||jugadanumc2 !=4) {
			do {
				num_aleatorio2 = rand() % (75 - 1 + 1);
				fstop = buscarNumero(num_aleatorio2, numeros2);
			} while (fstop);

			numeros2[v] = num_aleatorio2 ;
			v = v + 1;
			
			g(27,10);printf("Ficha Sacada %d ", num_aleatorio2 );
		}
		//EVALUACION DE LA JUGADA ESQUINAS CARTON 1

		if (num_aleatorio2 == p1[0]) {
			jugadanum = jugadanum + 1;
			g(1, 2);printf("XX");
		}
		if (num_aleatorio2 == p1[4]) {
			jugadanum = jugadanum + 1;
			g(1, 6);printf("XX");
		}
		if (num_aleatorio2 == p5[4]) {
			jugadanum = jugadanum + 1;
			g(16, 6);printf("XX");
		}
	
		
		if (num_aleatorio2 == p5[0]) {
			jugadanum = jugadanum + 1;
			g(16, 2);printf("XX");
		}
        //EVALUACION DE LA JUGADA ESQUINAS CARTON 2

		if (num_aleatorio2 == p21[0]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(21, 2);printf("XX");
		}
		if (num_aleatorio2 == p21[4]) {
			jugadanumc2= jugadanumc2 + 1;
			g(21, 6);printf("XX");
		}
		if (num_aleatorio2 == p25[4]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(36, 6);printf("XX");
		}
	
		if (num_aleatorio2 == p25[0]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(36, 2);printf("XX");
		}

		
		if(jugadanumc2==4){
			g(25,13);printf("%s ES EL GANADOR!!!", nm2);
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
		}		
			if(jugadanum==4){
			g(25,13);printf("%s ES EL GANADOR!!!", nm1);
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
		}		
		
			if(jugadanum==4 && jugadanumc2==4){
			g(25,13);printf("QUIEN LO DIRIA ES UN EMPATE!!!!");
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
			}
			
		if (ganador != 1) {

		g(25,11);printf("Presione Cualquier Tecla Para Sacar Otra Ficha :3");
		g(25,12);getche();

		}
		
		
		
	} while (ganador!=1);
	g(25,14); printf("  ");
}

void L()
{
	v = 0;
	do {
		if (jugadanum != 9||jugadanumc2 !=9) {
			do {
				num_aleatorio2 = rand() % (75 - 1 + 1);
				fstop = buscarNumero(num_aleatorio2, numeros2);
			} while (fstop);

			numeros2[v] = num_aleatorio2 ;
			v = v + 1;
			
			g(27,10);printf("Ficha Sacada %d ", num_aleatorio2 );
		}
		//EVALUACION DE LA JUGADA L CARTON 1

		if (num_aleatorio2 == p1[0]) {
			jugadanum = jugadanum + 1;
			g(1, 2);printf("XX");
		}
			if (num_aleatorio2 == p1[1]) {
			jugadanum = jugadanum + 1;
			g(1, 3);printf("XX");
		}
			if (num_aleatorio2 == p1[2]) {
			jugadanum = jugadanum + 1;
			g(1, 4);printf("XX");
		}
			if (num_aleatorio2 == p1[3]) {
			jugadanum = jugadanum + 1;
			g(1, 5);printf("XX");
		}
		if (num_aleatorio2 == p1[4]) {
			jugadanum = jugadanum + 1;
			g(1, 6);printf("XX");
		}
		if (num_aleatorio2 == p5[4]) {
			jugadanum = jugadanum + 1;
			g(16, 6);printf("XX");
		}
		if (num_aleatorio2 == p4[4]) {
			jugadanum = jugadanum + 1;
			g(12, 6);printf("XX");
		}
		if (num_aleatorio2 == p3[4]) {
			jugadanum = jugadanum + 1;
			g(8, 6);printf("XX");
		}
		if (num_aleatorio2 == p2[4]) {
			jugadanum = jugadanum + 1;
			g(4, 6);printf("XX");
		}
	
        //EVALUACION DE LA JUGADA L CARTON 2

		if (num_aleatorio2 == p21[0]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(21, 2);printf("XX");
		}
		if (num_aleatorio2 == p21[1]) {
			jugadanumc2= jugadanumc2 + 1;
			g(21, 3);printf("XX");
		}
		if (num_aleatorio2 == p21[2]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(21, 4);printf("XX");
		}
	
		if (num_aleatorio2 == p21[3]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(21, 5);printf("XX");
		}
			if (num_aleatorio2 == p21[4]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(21, 6);printf("XX");
		}
		if (num_aleatorio2 == p22[4]) {
			jugadanumc2= jugadanumc2 + 1;
			g(24, 6);printf("XX");
		}
		if (num_aleatorio2 == p23[4]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(28, 6);printf("XX");
		}
	
		if (num_aleatorio2 == p24[4]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(32, 6);printf("XX");
		}
		if (num_aleatorio2 == p25[4]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(36, 6);printf("XX");
		}

		
		if(jugadanumc2==9){
			g(25,13);printf("%s ES EL GANADOR!!!", nm2);
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
		}		
			if(jugadanum==9){
			g(25,13);printf("%s ES EL GANADOR!!!", nm1);
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
		}		
		
			if(jugadanum==9 && jugadanumc2==9){
			g(25,13);printf("QUIEN LO DIRIA ES UN EMPATE!!!!");
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
			}
			
		if (ganador != 1) {

		g(25,11);printf("Presione Cualquier Tecla Para Sacar Otra Ficha :3");
		g(25,12);getche();

		}
		
		
		
	} while (ganador!=1);
	g(25,14); printf("  ");
}

void ver()
{
		v = 0;
	do {
		if (jugadanum != 4||jugadanumc2 !=4) {
			do {
				num_aleatorio2 = rand() % (75 - 1 + 1);
				fstop = buscarNumero(num_aleatorio2, numeros2);
			} while (fstop);

			numeros2[v] = num_aleatorio2 ;
			v = v + 1;
			
			g(27,10);printf("Ficha Sacada %d ", num_aleatorio2 );
		}
		//EVALUACION DE LA JUGADA HORIZONTAL CARTON 1

		if (num_aleatorio2 == p1[2]) {
			jugadanum = jugadanum + 1;
			g(1, 4);printf("XX");
		}
			if (num_aleatorio2 == p2[2]) {
			jugadanum = jugadanum + 1;
			g(4, 4);printf("XX");
		}
		
			if (num_aleatorio2 == p4[2]) {
			jugadanum = jugadanum + 1;
			g(12, 4);printf("XX");
		}
		if (num_aleatorio2 == p5[2]) {
			jugadanum = jugadanum + 1;
			g(16, 4);printf("XX");
		}
	
	
        //EVALUACION DE LA JUGADA HORIZONTAL CARTON 2

		if (num_aleatorio2 == p21[2]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(21, 4);printf("XX");
		}
		if (num_aleatorio2 == p22[2]) {
			jugadanumc2= jugadanumc2 + 1;
			g(24, 4);printf("XX");
		}
		if (num_aleatorio2 == p24[2]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(32, 4);printf("XX");
		}
	
		if (num_aleatorio2 == p25[2]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(36, 4);printf("XX");		}
		

		
		if(jugadanumc2==4){
			g(25,13);printf("%s ES EL GANADOR!!!", nm2);
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
		}		
			if(jugadanum==4){
			g(25,13);printf("%s ES EL GANADOR!!!", nm1);
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
		}		
		
			if(jugadanum==4 && jugadanumc2==4){
			g(25,13);printf("QUIEN LO DIRIA ES UN EMPATE!!!!");
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
			}
			
		if (ganador != 1) {

		g(25,11);printf("Presione Cualquier Tecla Para Sacar Otra Ficha :3");
		g(25,12);getche();

		}
		
		
		
	} while (ganador!=1);
	g(25,14); printf("  ");
}

void hor()
{
		v = 0;
	do {
		if (jugadanum != 4||jugadanumc2 !=4) {
			do {
				num_aleatorio2 = rand() % (75 - 1 + 1);
				fstop = buscarNumero(num_aleatorio2, numeros2);
			} while (fstop);

			numeros2[v] = num_aleatorio2 ;
			v = v + 1;
			
			g(27,10);printf("Ficha Sacada %d ", num_aleatorio2 );
		}
		//EVALUACION DE LA JUGADA VERTICAL CARTON 1

		if (num_aleatorio2 == p3[0]) {
			jugadanum = jugadanum + 1;
			g(8, 2);printf("XX");
		}
			if (num_aleatorio2 == p3[1]) {
			jugadanum = jugadanum + 1;
			g(8, 3);printf("XX");
		}
		
			if (num_aleatorio2 == p3[2]) {
			jugadanum = jugadanum + 1;
			g(8, 5);printf("XX");
		}
		if (num_aleatorio2 == p3[4]) {
			jugadanum = jugadanum + 1;
			g(8, 6);printf("XX");
		}
	
	
        //EVALUACION DE LA JUGADA VERTICAL CARTON 2

		if (num_aleatorio2 == p23[0]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(28, 2);printf("XX");
		}
		if (num_aleatorio2 == p23[1]) {
			jugadanumc2= jugadanumc2 + 1;
			g(28, 3);printf("XX");
		}
		if (num_aleatorio2 == p23[2]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(28, 5);printf("XX");
		}
	
		if (num_aleatorio2 == p23[4]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(28, 6);printf("XX");		}
		

		
		if(jugadanumc2==4){
			g(25,13);printf("%s ES EL GANADOR!!!", nm2);
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
		}		
			if(jugadanum==4){
			g(25,13);printf("%s ES EL GANADOR!!!", nm1);
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
		}		
		
			if(jugadanum==4 && jugadanumc2==4){
			g(25,13);printf("QUIEN LO DIRIA ES UN EMPATE!!!!");
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
			}
			
		if (ganador != 1) {

		g(25,11);printf("Presione Cualquier Tecla Para Sacar Otra Ficha :3");
		g(25,12);getche();

		}
		
		
		
	} while (ganador!=1);
	g(25,14); printf("  ");
}

void maincra()
{
		v = 0;
	do {
		if (jugadanum != 16||jugadanumc2 !=16) {
			do {
				num_aleatorio2 = rand() % (75 - 1 + 1);
				fstop = buscarNumero(num_aleatorio2, numeros2);
			} while (fstop);

			numeros2[v] = num_aleatorio2 ;
			v = v + 1;
			
			g(27,10);printf("Ficha Sacada %d ", num_aleatorio2 );
		}
		//EVALUACION DE LA JUGADA CUADRADO CARTON 1

		if (num_aleatorio2 == p1[0]) {
			jugadanum = jugadanum + 1;
			g(1, 2);printf("XX");
		}
			if (num_aleatorio2 == p1[1]) {
			jugadanum = jugadanum + 1;
			g(1, 3);printf("XX");
		}
		
			if (num_aleatorio2 == p1[2]) {
			jugadanum = jugadanum + 1;
			g(1, 4);printf("XX");
		}
		if (num_aleatorio2 == p1[3]) {
			jugadanum = jugadanum + 1;
			g(1, 5);printf("XX");
		}
		if (num_aleatorio2 == p1[4]) {
			jugadanum = jugadanum + 1;
			g(1, 6);printf("XX");
		}
			if (num_aleatorio2 == p2[0]) {
			jugadanum = jugadanum + 1;
			g(4, 2);printf("XX");
		}
		
			if (num_aleatorio2 == p2[4]) {
			jugadanum = jugadanum + 1;
			g(4, 6);printf("XX");
		}
		if (num_aleatorio2 == p3[0]) {
			jugadanum = jugadanum + 1;
			g(8, 2);printf("XX");
		}
		if (num_aleatorio2 == p3[4]) {
			jugadanum = jugadanum + 1;
			g(8, 6);printf("XX");
		}
			if (num_aleatorio2 == p4[0]) {
			jugadanum = jugadanum + 1;
			g(12, 2);printf("XX");
		}
		
			if (num_aleatorio2 == p4[4]) {
			jugadanum = jugadanum + 1;
			g(12, 6);printf("XX");
		}
		if (num_aleatorio2 == p5[0]) {
			jugadanum = jugadanum + 1;
			g(16, 2);printf("XX");
		}
		if (num_aleatorio2 == p5[1]) {
			jugadanum = jugadanum + 1;
			g(16, 3);printf("XX");
		}
			if (num_aleatorio2 == p5[2]) {
			jugadanum = jugadanum + 1;
			g(16, 4);printf("XX");
		}
		
			if (num_aleatorio2 == p5[3]) {
			jugadanum = jugadanum + 1;
			g(16, 5);printf("XX");
		}
		if (num_aleatorio2 == p5[4]) {
			jugadanum = jugadanum + 1;
			g(16, 6);printf("XX");
		}
	
	
        //EVALUACION DE LA JUGADA CUADRADO CARTON 2

		if (num_aleatorio2 == p21[0]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(21, 2);printf("XX");
		}
		if (num_aleatorio2 == p21[1]) {
			jugadanumc2= jugadanumc2 + 1;
			g(21, 3);printf("XX");
		}
		if (num_aleatorio2 == p21[2]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(21, 4);printf("XX");
		}
	
		if (num_aleatorio2 == p21[3]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(21, 5);printf("XX");		}
		if (num_aleatorio2 == p21[4]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(21, 6);printf("XX");
		}
		if (num_aleatorio2 == p22[0]) {
			jugadanumc2= jugadanumc2 + 1;
			g(24, 2);printf("XX");
		}
		if (num_aleatorio2 == p22[4]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(24, 6);printf("XX");
		}
	
		if (num_aleatorio2 == p23[0]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(28, 2);printf("XX");		}
		
		if (num_aleatorio2 == p23[4]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(28, 6);printf("XX");
		}
		if (num_aleatorio2 == p24[0]) {
			jugadanumc2= jugadanumc2 + 1;
			g(32, 2);printf("XX");
		}
		if (num_aleatorio2 == p24[4]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(32, 6);printf("XX");
		}
	
		if (num_aleatorio2 == p25[0]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(36, 2);printf("XX");		}
		
		if (num_aleatorio2 == p25[1]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(36, 3);printf("XX");
		}
		if (num_aleatorio2 == p25[2]) {
			jugadanumc2= jugadanumc2 + 1;
			g(36, 4);printf("XX");
		}
		if (num_aleatorio2 == p25[3]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(36, 5);printf("XX");
		}
	
		if (num_aleatorio2 == p25[4]) {
			jugadanumc2 = jugadanumc2 + 1;
			g(36, 6);printf("XX");		}
		

		
		if(jugadanumc2==16){
			g(25,13);printf("%s ES EL GANADOR!!!", nm2);
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
		}		
			if(jugadanum==16){
			g(25,13);printf("%s ES EL GANADOR!!!", nm1);
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
		}		
		
			if(jugadanum==16 && jugadanumc2==16){
			g(25,13);printf("QUIEN LO DIRIA ES UN EMPATE!!!!");
			ganador=1;
			g(25,16);printf("Presione Cualquier Tecla Para Continuar");
			}
			
		if (ganador != 1) {

		g(25,11);printf("Presione Cualquier Tecla Para Sacar Otra Ficha :3");
		g(25,12);getche();

		}
		
		
		
	} while (ganador!=1);
	g(25,14); printf("  ");
}

void mn()
{
	system("cls");
	int op;
	g(2,2);printf("BINGO!!!");
	g(2,5);printf("1- Iniciar El Juego");
	g(2,6);printf("2- Cerrar El Juego :C");
	g(2,10);scanf("%d", &op);
	fflush(stdin);
	switch(op)
	{
		case 1: nome();
		break;
		
		case 2: exit(-1);
		break;
		
		default: 
		mn();
		
	break;
		
			
		
	}
}

void nome()
{
	int op;
	system("cls");
	g(2,2);printf("Ingrese El Nombre Del Primer Jugador");
	g(2,3);gets(nm1);
	fflush(stdin);
	system("cls");
	g(2,2);printf("Ingrese El Nombre Del Segundo Jugador");
	g(2,3);gets(nm2);
	fflush(stdin);
	system("cls");
	
	g(2,2);printf("Que Jugada Desea Ejecutar?");
	g(2,3);printf("1- 'T'");
	g(2,4);printf("2- Carton Lleno");
	g(2,5);printf("3- Esquinas");
	g(2,6);printf("4- 'L'");
	g(2,7);printf("5- Linea Vertical");
	g(2,8);printf("6- Linea Horizontal");
	g(2,9);printf("7- Cuadrado");
	g(2,10);printf("8- Volver Al Menu :c");
	g(2,11);scanf("%d", &op);
	
	switch(op)
	{
	
	case 1: 
	system("cls");
	gnr();
	c1();
	c2();
	kk();
	break;
	
	case 2:
	system("cls");
	
	gnr();
	c1();
	c2();
	cy();
	break;
	
	case 3:
	system("cls");
	gnr();
	c1();
	c2();
	esq();
	break;
	
	case 8:
	system("cls");
	mn();
	break;
	
	case 4:
	system("cls");
	gnr();
	c1();
	c2();
	L();
	break;
	
	case 5:
	system("cls");
	gnr();
	c1();
	c2();
	hor();
	break;
	
	case 6:
	system("cls");
	gnr();
	c1();
	c2();
	ver();
	break;	
	
	case 7:
	system("cls");
	gnr();
	c1();
	c2();
	maincra();
	break;
	
	default: 
	sm();
	break;
}
	
}

void sm()
{
	int op;
	system("cls");
	g(2,2);printf("Que Jugada Desea Ejecutar?");
	g(2,3);printf("1- 'T'");
	g(2,4);printf("2- Carton Lleno");
	g(2,5);printf("3- Esquinas");
	g(2,6);printf("4- 'L'");
	g(2,7);printf("5- Linea Vertical");
	g(2,8);printf("6- Linea Horizontal");
	g(2,9);printf("7- Cuadrado");
	g(2,10);printf("8- Volver Al Menu :c");
	g(2,11);scanf("%d", &op);
	
	switch(op)
	{
	
	case 1: 
	system("cls");
	gnr();
	c1();
	c2();
	kk();
	break;
	
	case 2:
	system("cls");
	
	gnr();
	c1();
	c2();
	cy();
	break;
	
	case 3:
	system("cls");
	gnr();
	c1();
	c2();
	esq();
	break;
	
	case 8:
	system("cls");
	mn();
	break;
	
	case 4:
	system("cls");
	gnr();
	c1();
	c2();
	L();
	break;
	
	case 5:
	system("cls");
	gnr();
	c1();
	c2();
	ver();
	break;
	
	case 6:
	system("cls");
	gnr();
	c1();
	c2();
	hor();
	break;	
	
	case 7:
	system("cls");
	gnr();
	c1();
	c2();
	maincra();
	break;
	
	default: sm();
	break;
}
}

void finish()
{
	
	
	getche();

}



int main()
{
	
	sign();
	
	mn();
	
	finish();
	
	return  0;
}
