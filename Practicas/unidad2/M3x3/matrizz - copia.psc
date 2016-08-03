Proceso M
	Dimension M[3,3]
	Escribir " Dame los valores de la matriz"
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		Para j<-1 Hasta 3 Con Paso 1 Hacer
			Escribir "Dame un numero"
			Leer M(i,j)
		FinPara
		Escribir " "
	FinPara
	Escribir  "La matriz es:"
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		Para j<-1 Hasta 3 Con Paso 1 Hacer
			Escribir " M[",i,"][",j,"]",M(i,j)
		FinPara
		Escribir " "
	FinPara
	
	
FinProceso
