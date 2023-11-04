**DETOUR**

⚪ En la ciudad de Sucre, el alcalde está llevando a cabo un ambicioso proyecto de renovación de las carreteras. Sin embargo, debido a las obras, algunas rutas quedan temporalmente intransitables, lo que requiere la creación de desvíos para mantener el flujo del tráfico sin interrupciones.

Cada segmento de carretera conecta dos intersecciones de la ciudad y puede ser transitado en ambas direcciones. Un desvío es una ruta alternativa específica que se establece temporalmente para reemplazar un segmento de carretera en proceso de renovación. Cuando la ruta directa entre dos intersecciones, U y V, se encuentra bloqueada, el desvío debe ser una secuencia de caminos que comienza en U y termina en V, evitando intencionalmente el camino directo entre ellos. El objetivo es encontrar el desvío más corto para cada segmento de carretera y así minimizar las interrupciones causadas por las mejoras viales.

Como pasante del Centro de Pavimentos y Automóviles, se te asigna la tarea de apoyar esta iniciativa del alcalde calculando la longitud del desvío más corto para cada segmento de carretera dentro de Sucre.

Input Format

La primera línea contiene dos números enteros, N y M (1≤N≤300), que representan el número de intersecciones en Sucre y el número de segmentos de carretera respectivamente. Cada una de las siguientes M líneas contiene tres números enteros, U, V y L (1≤U≤N, 1≤V≤N, U≠V, 1≤L≤10^4), que representan un segmento de carretera bidireccional de longitud L que conecta las intersecciones U y V. No hay segmentos de carretera duplicados.

Constraints

.

Output Format

Debes generar M líneas, cada una con un número entero. El número en la línea i-ésima representa la longitud del desvío más corto para el segmento de carretera i-ésimo o -1 si no es posible establecer un desvío. La respuesta para cada segmento de carretera debe ser proporcionada en el mismo orden en que se describen los segmentos en la entrada.

Sample Input 0

4 5
1 2 4
1 3 8
2 3 4
4 1 2
3 4 3
Sample Output 0

9
5
9
11
10
Sample Input 1

2 1
1 2 1
Sample Output 1

-1