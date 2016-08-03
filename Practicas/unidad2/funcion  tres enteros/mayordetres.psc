SubProceso res<-mayordetres(mayo,num)
	mayo<-num(1)
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		Si mayo<num(i) Entonces
			mayo<-num(i)
			res<-mayo
		FinSi
	FinPara
FinSubProceso

Proceso mayorr
	DIMENSION num(30)
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		Escribir 'Dame un numero'
		Leer num(i)
	FinPara
	Escribir 'El mayor es',mayordetres(mayo,num)
FinProceso

