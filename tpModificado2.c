//EL programa es para una prepaga llamada "SALUD Y BIENESTAR" el cual tiene 2 empleados . Los cuales tendran que usar  el programa para atender a los clientes  que quieran contratar unos de los servicios de la prepaga.
//1-juan
//2-roberto

//Cuando comienza el programa pregunta si juan desea vender , luego de realizar o no la operacion pregunta si Roberto desea vender. y si uno de los 2 desea vender debe ingresar si. Cuando finaliza la operacion le volvera a preguntar si  desea hacer otra venta( utilizando un while y un strcmp para validar la respuesta , que tendra que ser "SI")
//Cuando desea vender deberan  cargar los siguientes datos  :Nombre del vendedor  ,nombre y apellido del cliente (cadena) , edad del cliente (enteros ) , sexo del cliente ( cadenas) 
//y luego cargar el plan que eligio el cliente ingresando uno de los caracteres 'a' , 'b', 'c' (utilazando switch):
//A-PLAN BRONCE VALOR $1000 INCLUYE:  40 % de descuento en farmacia , solo covertura a nivel nacional ,atencion en todos los  sanatorios y clinica de  buenos aires.
//B-PLAN PLATA VALOR $1500 INCLUYE: 70 % de descuento en farmacias , solo covertura a nivel nacional , atencion en todos los sanatorios y clinicas de buenos aires cubre , 100 % odontologia y sesiones con psicologos.
//C-  PLAN ORO VALOR $2000 INCLUYE : 100 % de descuento en farmacias , covertura a nivel nacional e internacional , atencion en todos los sanatorios y clinicas de buenos aires , cubre 100 % cirujia ,cubre 100 % odontologia y sesiones con psicologos.

//Cuando finaliza la operación  al atender un cliente se debera imprimir el numero de socio que inicia apartir del numero 1 (utilizando contadores )

//Se desea saber al finalizar:
//-total recaudado por empleado y el total por ambos( utlilizando acumuladores)
//-el  nombre empleado que mas vendio o si vendieron lo mismo
//-cantidad de personas atendidas por empleado y total

#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

main(){
	
	int i, edad ,acum_roberto , acum_juan, n_socio, personasRoberto, personasJuan, vendedor_max, roberto , juan;
	
	time_t date;
	time(&date);
	
	
	char clienteNom[20] ,vendedor[60] , ingresar[10], sexo[10], opcion ;
	
	acum_roberto = acum_juan = n_socio = personasRoberto = personasJuan = 0;
	
	
	for(i = 0; i <= 1 ; i++){
	
		if(i == 0){
			printf("hola juan desea realizar una nueva venta?   SI-NO:  \n ");
			juan = i;

		}
		else if(i == 1){
			printf("hola roberto desea realizar una nueva venta?  SI-NO:  \n");
			roberto = i;
		
		}
	
		fflush(stdin);
		gets(ingresar);
	
	while (strcmp ( ingresar , "si" ) == 0 ){
		
	
	
		if(roberto == 1){
			
			
			printf("ingrese el nombre y apellido del cliente\n");
			fflush(stdin);
			gets(clienteNom);
			
			system("cls");
			
			printf("ingrese la edad del cliente:\n");
			fflush(stdin);
			scanf("%i",&edad);
			
			system("cls");
			
			printf("ingrese el sexo: \n");
			fflush(stdin);
			gets(sexo);
			
			system("cls");
			
			printf("a-PLAN BRONCE VALOR $1000 INCLUYE:  40 porciento de descuento en farmacia , solo covertura a nivel nacional ,atencion en todos los  sanatorios y clinica de  buenos aires.\n\nb-PLAN PLATA VALOR $1500 INCLUYE: 70 % de descuento en farmacias , solo covertura a nivel nacional , atencion en todos los sanatorios y clinicas de buenos aires cubre , 100 % odontologia y sesiones con psicologos.\n\nc-  PLAN ORO VALOR $2000 INCLUYE : 100 % de descuento en farmacias , covertura a nivel nacional e internacional , atencion en todos los sanatorios y clinicas de buenos aires , cubre 100 porciento cirujia ,cubre 100 porcient odontologia y sesiones con psicologos.\n\n");
			
			
		
		
		printf("\n\ningrese la opcion:\n");
		
		scanf("\n%c",&opcion);
		
		switch(opcion){
			
			
			case 'a':
				acum_roberto += 1000;
			break;
			case 'b':
				acum_roberto += 1500;	
			break;
			case 'c':
				acum_roberto += 2000;
			break;
			default:
				printf("error");
			break;
			
		}
		
		system("cls");	
			
		n_socio++;
		printf("\n\nel numero de socio es :  %i \n",n_socio);
		printf("La operacion se realizo : \n %s\n", ctime(&date));
		
		personasRoberto++;
		
		printf("desea seguir vendiendo ?\n");
		fflush(stdin);
		gets(ingresar);		
	}
		
		 else if( juan == 0){
			
					
			printf("ingrese el nombre y apellido del cliente\n");
			fflush(stdin);
			gets(clienteNom);
			
			printf("ingrese la edad del cliente:\n");
			fflush(stdin);
			scanf("%i",&edad);
			
			printf("ingrese el sexo: \n");
			fflush(stdin);
			gets(sexo);
			
			system("cls");
			
			printf("A-PLAN BRONCE VALOR $1000 INCLUYE:  40 porciento de descuento en farmacia , solo covertura a nivel nacional ,atencion en todos los  sanatorios y clinica de  buenos aires.\n\nB-PLAN PLATA VALOR $1500 INCLUYE: 70 % de descuento en farmacias , solo covertura a nivel nacional , atencion en todos los sanatorios y clinicas de buenos aires cubre , 100 % odontologia y sesiones con psicologos.\n\nC-  PLAN ORO VALOR $2000 INCLUYE : 100 % de descuento en farmacias , covertura a nivel nacional e internacional , atencion en todos los sanatorios y clinicas de buenos aires , cubre 100 porciento cirujia ,cubre 100 porcient odontologia y sesiones con psicologos.");
			
			
		
		
		printf("\n\ningrese la opcion:\n");
		
		scanf("\n%c",&opcion);
		
		switch(opcion){
			
			
			case 'a':
				acum_juan += 1000;
			break;
			case 'b':
				acum_juan += 1500;	
			break;
			case 'c':
				acum_juan += 2000;
			break;
			default:
				printf("error");
			break;
			
		}
		system("cls");
		n_socio++;
		printf("\n\nel numero de socio es :  %i \n",n_socio);
		printf("La operacion se realizo : \n %s\n", ctime(&date));
		
		personasJuan++;
		
		printf("desea seguir vendiendo ?\n");
		fflush(stdin);
		gets(ingresar);	
			
		}
		
		
		
	}
		
	
}

	if(acum_roberto > acum_juan){
		
		strcpy(vendedor,"roberto");
		
	}
	else if(acum_juan > acum_roberto){
		
		strcpy(vendedor , "juan");
	}
	else{
		strcpy( vendedor , "ambos vendedores recaudaron lo mismo");
	}


		
		printf("\n Lo total recaudado por roberto es: %i",acum_roberto);
		printf("\n cantidad de personas atendidas por roberto es : %i", personasRoberto);
		printf("\nLo total recaudado por juan es: %i",acum_juan);
		printf("\n cantidad de pesonas atendidas por juan es: %i",personasJuan);
		printf("\n total de personas atendidas: %i", personasJuan + personasRoberto);
		printf("\n total recaudado del dia es : %i", acum_roberto + acum_juan);
		printf("\n el vendedor que mas recaudo es : %s", vendedor);

			
	
	return 0;
}
