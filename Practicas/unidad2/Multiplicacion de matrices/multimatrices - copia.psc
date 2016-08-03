Proceso Multiplicacionmatrices
	DIMENSION A(3,3)
	DIMENSION B(3,3)
	DIMENSION C(3,3)
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		Para j<-1 Hasta 3 Con Paso 1 Hacer
			Escribir ' Dame un numero para la matriz  A[',j,'][',i,']'
			Leer A(i,j)
			C(i,j)<-(0)
		FinPara
	FinPara
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		Para j<-1 Hasta 3 Con Paso 1 Hacer
			Escribir 'Dame un numero para B'
			Leer B(i,j)
		FinPara
	FinPara
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		Para j<-1 Hasta 3 Con Paso 1 Hacer
			Para k<-1 Hasta 3 Con Paso 1 Hacer
				C(i,j)<-(C(i,j)+(A(i,k)*B(k,j)))
			FinPara
		FinPara
	FinPara
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		Para j<-1 Hasta 3 Con Paso 1 Hacer
			Escribir ' C[',i,'][',j,']',C(i,j)
		FinPara
		Escribir ' '
	FinPara
FinProceso

