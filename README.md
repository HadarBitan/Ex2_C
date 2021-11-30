# Task 2

In this project we used 10X10 [matrices](https://en.wikipedia.org/wiki/Matrix_(mathematics)) of natural numbers in order to represent [undirected graphs](https://en.wikipedia.org/wiki/Graph_(discrete_mathematics)).

* matrix[i][j] represents the weight of the edge **from i to j**
* **Note:** If matrix[i][j]=0 -> There is no edge between vertex i and vertex j


## Project abilities:
* Build 10X10 matrix based on 100 numbers input. For example: **1 0 4 6 235 74.....**
* Given 2 numbers **i**, **j**, the program will return if there is a route between vertex **i** and vertex **j**
* Given 2 numbers **i**, **j**, the program will return the length of the shortest path between vertex i and vertex j based on [Floyd–Warshall Algorithm](https://www.youtube.com/watch?v=oNI0rf2P9gE). If there is no such route, the program will return default value of (-1).


## Example:
* **Input=** 0 6 5 29 4 0 12 15 46 10 6 0 32 41 35 18 15 48 41 4 5 32 0 30 2 14 48 24 30 27 29 41 30 0 48 10 29 13 31 42 4 35 2 48 0 30 24 40 22 23 0 18 14 10 30 0 1 11 8 12 12 15 48 29 24 1 0 17 45 8 15 48 24 13 40 11 17 0 21 33 46 41 30 31 22 8 45 21 0 8 10 4 27 42 23 12 8 33 8 0
* The matrix:  




| 0 |	6 |	5 |	29 |	4 |	0 |	12 |	15 |	46 |	10 |
| ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| 6 |	0 |	32 | 41 |	35 |	18 |	15 |	48 |	41 |	4 |		
| 5 |	32 |	0 |	30 |	2 |	14 |	48 |	24 |	30 |	27 |  	
| 29 |	41 |	30 |	0 |	48 |	10 |	29 | 13 |	31 |	42 |  	
| 4 |	35 |	2 |	48 |	0 |	30 |	24 |	40 |	22 |	23 |  	
| 0 |	18 |	14 |	10 |	30 |	0 |	1 |	11 |	8 |	12 |  	
| 12 |	15 |	48 |	29 |	24 |	1 |	0 |	17 |	45 |	8 | 	
| 15 |	48 |	24 |	13 |	40 |	11 |	17 |	0 |	21 |	33 |  	
| 46 |	41 |	30 |	31 |	22 |	8 |	45 |	21 |	0 |	8 | 	
| 10 |	4 |	27 |	42 |	23 |	12 |	8 |	33 |	8 |	0 |   

* i=2, j=5 --> True, 14
* i=7, j=7 --> False, (-1)


## Collaborators:
* Eden Roas
* Hadar Bitan


