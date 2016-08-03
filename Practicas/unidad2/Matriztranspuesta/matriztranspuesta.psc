Proceso matriztranspuesta
	DIMENSION A(3,3)
	DIMENSION B(3,3)
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		Para j<-1 Hasta 3 Con Paso 1 Hacer
			Escribir ' Dame un numero para la matriz  A[',j,'][',i,']'
			Leer A(i,j)
			B(j,i)<-(A(i,j))
		FinPara
		Escribir ' '
	FinPara
	Escribir ' La transpuesta de la matriz es'
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		Para j<-1 Hasta 3 Con Paso 1 Hacer
			Escribir ' B[',j,'][',i,']',B(i,j)
		FinPara
		Escribir ' '
	FinPara
FinProceso

