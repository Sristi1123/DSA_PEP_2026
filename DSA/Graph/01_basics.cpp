/*
    G(V,E) => Representation -> consist of:
        V -> set of vertices (nodes) -> An individual object in graph
        E -> set of edges connecting pairs of vertices
    Graph is not a non-linear data structure but a network structure

    Graphs:
        1) Directed: edges have directions
        2) Undirected: edges have no directions
        3) Weighted: edges have some value(weight/cost/distance)
        4) Unweighted: edges have no value but by default it is 1
        5) Cyclic: graph that start and end at the same point

    DAG-> Directed Acyclic Graph -> have direction but not cycle

    Path-> A sequence of vertices connected edges
    Degree -> undirected-> connected nodes with a node
              Directed=> indegree (sink/incoming edges) && outdegree (source/outgoing edges)

    * graph can have cycles as well as can be disconnected but tree can't
    * A tree can be a graph but not vice-versaonly
    
    * 
    * Topological Sort only used in DAG Graphs
    * If a Topological Sort is valid then it means there is no cycle
*/