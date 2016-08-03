SubProceso d2<-dospuntos(x,ye)
	rx<-x(2)-x(1)
	ry<-ye(2)-ye(1)
	d<-rx^2+ry^2
	d2<-d^0.5
FinSubProceso

Proceso distancia
	DIMENSION x(3)
	DIMENSION ye(3)
	Para i<-1 Hasta 2 Con Paso 1 Hacer
		Escribir 'Dame el valor de X',i
		Leer x(i)
		Escribir 'Dame el valor de Y',i
		Leer ye(i)
	FinPara
	Escribir 'La distancia es',dospuntos(x,ye)
FinProceso

