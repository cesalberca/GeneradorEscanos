long tabla [50] [50]; //Este array contendrá la tabla que tiene los datos de los votos ya divididos, para luego hacer el recuento de escaños
int escanos [6];
	for (m = 0; m < 6; m++){
		escanos [m] = 0;
	}
  for (i = 0; i < provincias[i].diputados; i++) {//empezamos haciendo las divisiones
	  
      tabla [i] [0] = arrayVotos[i][0] / i + 1;
      tabla [i] [1] = arrayVotos[i][1] / i + 1;
      tabla [i] [2] = arrayVotos[i][2] / i + 1;
      tabla [i] [3] = arrayVotos[i][3] / i + 1;
      tabla [i] [4] = arrayVotos[i][4] / i + 1;
      tabla [i] [5] = arrayVotos[i][5] / i + 1;
	  


      /*for (n = 0; n < MAX_PARTIDOS; n++) {
		  mayor = 0;
		  for (k = 0; k < 6; k++){
			if (tabla[n] [k] > mayor) {
				mayor = tabla [n][k] ;
			}
		}
      }
	  
	  for(m = 0; m<)
      // printf("%ld\n",cocientes[0]);
      provincias[i].diputadosArray[mayor] += 1;
      divisores[mayor] += 1;
      mayor = 0;*/
    }
	for (i = 0; i < provincias[i].diputados; i++) {//este bucle observará cuales son los números mayores
		for (k = 0; k < 6; k++){
			if (tabla[i] [k] > mayor) {
				mayor = tabla [i][k] ;
			}
		for (i = 0; i < provincias[i].diputados; i++) {
			for (k = 0; k < 6; k++){
				if (tabla[i] [k] == mayor) {
				tabla [i][k] = 0;
				escanos [k] = escanos [k] + 1;
				}
			
			}
		}
		}
    }
	 