Proceso primo
	Escribir "Dame un numero"
	Leer A;
	primo=1
	Escribir "Tus numeros son:"
	Escribir " "
	Para i<-2 Hasta A Con Paso 1 Hacer
		Para j<-2 Hasta i Con Paso 1 Hacer
			Si i%j==0 Entonces
				primo=0
				Si primo=0 Entonces
					Escribir " :",i
					Escribir " "
				    
				Fin Si
				
			Fin Si
		
		Fin Para
		primo=1
	FinPara

	
	
	
	
FinProceso
