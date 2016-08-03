
	Proceso SM
		Dimension M[3,3], A[ 3,3],T[3,3]
		Escribir " Dame los valores de la matriz"
		Para i<-1 Hasta 3 Con Paso 1 Hacer
			Para j<-1 Hasta 3 Con Paso 1 Hacer
				Escribir "Dame un numero para M[",i,"][",j,"]",M(i,j)
				Leer M(i,j)
			FinPara
			Escribir " "
		FinPara
		Para i<-1 Hasta 3 Con Paso 1 Hacer
			Para j<-1 Hasta 3 Con Paso 1 Hacer
				Escribir "Dame un numero para A[",i,"][",j,"]",A(i,j)
				Leer A(i,j)
				T[i,j]=A[i,j]+M[i,j];
			FinPara
			Escribir " "
		FinPara
		
		Escribir  "La suma de las matrices es:"
		Para i<-1 Hasta 3 Con Paso 1 Hacer
			Para j<-1 Hasta 3 Con Paso 1 Hacer
				Escribir " T[",i,"][",j,"]",T(i,j)
			FinPara
			Escribir " "
		FinPara
		
		
FinProceso
