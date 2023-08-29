# File with heading

Beautiful Matrix 5

Eres un científico que estudia las propiedades especiales de las matrices. En tu laboratorio, tienes una matriz cuadrada de tamaño 5 × 5. La matriz está compuesta por 24 ceros y un único número uno. Cada número uno es de vital importancia, pero estás especialmente interesado en la posición del número uno en la matriz.

Para entender mejor las características especiales de la matriz, has ideado un experimento. En cada paso de tu experimento, estás autorizado para realizar una de las siguientes dos operaciones en la matriz:

Intercambiar dos filas adyacentes de la matriz, es decir, las filas con índices i e i + 1 para algún entero i (1 ≤ i < 5).
Intercambiar dos columnas adyacentes de la matriz, es decir, las columnas con índices j y j + 1 para algún entero j (1 ≤ j < 5).
Tú crees que la matriz adquiere una propiedad maravillosa si y solo si el número uno se encuentra en el centro de la matriz, en la celda que coincide con la intersección de la tercera fila y la tercera columna. Tu objetivo en este experimento es determinar el número mínimo de movimientos necesarios para hacer que la matriz adquiera esta propiedad maravillosa.

Input Format

La entrada consta de cinco líneas, cada una con cinco enteros: el entero en la j-ésima posición de la i-ésima línea representa el elemento en la matriz que está en la intersección de la i-ésima fila y la j-ésima columna. Se garantiza que la matriz está compuesta por 24 ceros y un único número uno.

Constraints

.

Output Format

Imprime un solo entero: el número mínimo de movimientos necesarios para hacer que la matriz adquiera la propiedad maravillosa.

Sample Input 0

0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
Sample Output 0

3
Sample Input 1

0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
Sample Output 1

1
