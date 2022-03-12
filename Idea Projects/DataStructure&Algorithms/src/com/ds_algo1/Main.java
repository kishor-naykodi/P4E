package com.ds_algo1;
import com.ds_algo2.Graph;
import com.ds_algo2.WeightedGraph;

public class Main {
    public static void main(String[] args) {

        var graph = new WeightedGraph();
        graph.addNode("A");
        graph.addNode("B");
        graph.addNode("C");
        graph.addNode("D");
        graph.addEdge("A","B",3);
        graph.addEdge("B","D",4);
        graph.addEdge("C","D",5);
        graph.addEdge("A","C",1);
        graph.addEdge("B","C",2);
        var tree = graph.getMinimumSpanningTree();
        tree.print();
    }
}