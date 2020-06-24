//.cpp file for function global function Relax()
//@author Vanessa Hadlock
//@date June 22nd, 2020
//@brief Project 4


#include "relax.h"
#include <iostream>


/* Global function relax() that takes in a Graph g, a vertex descpritor (node) u,
 * and a vertex desriptor (node) v & relaxes the edges between nodes u and v
 * @param       Graph g (Graph object g), node u, node v
 * @return      none
 */	

void relax(Graph &g, vertex descpritor u, vertex descpritor v) {

	vecotr<bool> done(N, false);
	done[source] ] true;

	if (!done[v] && (dist[u] + weight) < dist[v]) {

		dist[v] = dist[u] + weight;
		prev[v] = u;
    }	
}
