**El Enigma de los Números de Vasilije**

🔵 Karen y Carla, entusiastas programadores competitivos, desafían a sus amigos con un enigma matemático intrigante. Vasilije, uno de los participantes, se encuentra frente a una tarea peculiar.

Le han proporcionado tres números enteros positivos: n, k y x. La misión de Vasilije es determinar si puede elegir k números enteros distintos, cada uno dentro del rango de 1 a n, de manera que la suma total de estos números sea igual a x.

Vasilije se encuentra en Cacak, una ciudad misteriosa de Serbia donde residen Karen y Carla. Al enfrentarse a este enigma único, Vasilije busca tu ayuda para resolverlo.

Input Format

La primera línea consta de un solo número entero t (1≤t≤10^4): el número de casos de prueba. Para cada caso de prueba, hay una única línea que contiene tres números enteros n, k y x (1≤n≤2⋅10^5, 1≤k≤n, 1≤x≤4⋅10^10): el valor máximo que puede seleccionar, el número de elementos que debe elegir y la suma objetivo.

Constraints

Es importante tener en cuenta que la suma de n en todos los casos de prueba puede exceder 2⋅10^5.

Output Format

Para cada caso de prueba, genera una línea que indica "YES" si es posible elegir k enteros distintos entre 1 y n de tal manera que su suma sea igual a x, y "NO" en caso contrario.

Sample Input 0

12
5 3 10
5 3 3
10 10 55
6 5 20
2 1 26
187856 87856 2609202300
200000 190000 19000000000
28 5 2004
2 2 2006
9 6 40
47202 32455 613407217
185977 145541 15770805980
Sample Output 0

YES
NO
YES
YES
NO
NO
YES
NO
NO
NO
YES
YES