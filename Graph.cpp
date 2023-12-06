#include "Graph.h"
#include <queue>

template <class T>
Vertex<T>::Vertex(const T &value)
{
    data = value;
    inDegree = 0;
    outDegree = 0;
    connectedTo = {};
}
template <class T>
Vertex<T>::~Vertex()
{
}
template <class T>
void Vertex<T>::addNeighbor(Vertex<T> *to, int weight)
{
    Edge<T> *temp = new Edge<T>;
    temp->to = to;
    temp->weight = weight;
    outDegree++;
    to->inDegree++;
    connectedTo.insert(connectedTo.size(), temp);
}
template <class T>
int Vertex<T>::getWeight(const T &value)
{
    for (int i = 0; i < connectedTo.size(); i++)
    {
        Edge<T> *temp = connectedTo.get(i);
        if (temp->to->data == value)
        {
            return connectedTo.get(i)->weight;
        }
    }
    return NULL;
}
template <class T>
Graph<T>::Graph()
{
    count = 0;
    vertexList = {};
}
template <class T>
Graph<T>::~Graph()
{
}
template <class T>
Vertex<T> *Graph<T>::addVertex(const T &value)
{
    Vertex<T> *newVertex = new Vertex<T>(value);
    vertexList.insert(vertexList.size(), newVertex);
    count++;
    return newVertex;
}
template <class T>
void Graph<T>::addEdge(const T &from, const T &to, int weight)
{
    Vertex<T> *fromVertex = getVertex(from);
    if (!fromVertex)
    {
        fromVertex = addVertex(from);
    }
    Vertex<T> *toVertex = getVertex(to);
    if (!toVertex)
    {
        toVertex = addVertex(to);
    }
    fromVertex->addNeighbor(toVertex, weight);
}
template <class T>
Vertex<T> *Graph<T>::getVertex(const T &value)
{
    for (int i = 0; i < vertexList.size(); i++)
    {
        if (vertexList.get(i)->data == value)
            return vertexList.get(i);
    }
    return NULL;
}

template <class T>
void Graph<T>::addCategoryEdge(const string &movieId1, const string &movieId2)
{
    Vertex<T> *movieVertex1 = getVertexById(movieId1);
    Vertex<T> *movieVertex2 = getVertexById(movieId2);

    if (movieVertex1 && movieVertex2)
    {
        // Verificar si ya existe una arista de movieVertex1 a movieVertex2
        if (!aristaExiste(movieVertex1, movieVertex2))
        {
            movieVertex1->addNeighbor(movieVertex2);
        }
        // Verificar si ya existe una arista de movieVertex2 a movieVertex1 (para grafos no dirigidos)
        if (!aristaExiste(movieVertex2, movieVertex1))
        {
            movieVertex2->addNeighbor(movieVertex1);
        }
    }
}

template <class T>
bool Graph<T>::aristaExiste(Vertex<T> *fromVertex, Vertex<T> *toVertex)
{
    for (int i = 0; i < fromVertex->connectedTo.size(); i++)
    {
        if (fromVertex->connectedTo.get(i)->to == toVertex)
        {
            return true;
        }
    }
    return false;
}

/*template <class T>
void Graph<T>::bfs(const T &startValue) {
    Vertex<T> *startVertex = getVertex(startValue);
    if (!startVertex) return;

    std::queue<Vertex<T>*> queue;
    std::set<T> visited;

    queue.push(startVertex);
    visited.insert(startValue);

    while (!queue.empty()) {
        Vertex<T> *current = queue.front();
        queue.pop();

        // Procesar el nodo actual
        // ...

        // Añadir vecinos no visitados a la cola
        for (int i = 0; i < current->connectedTo.size(); i++) {
            Vertex<T> *neighbor = current->connectedTo.get(i)->to;
            if (visited.find(neighbor->data) == visited.end()) {
                queue.push(neighbor);
                visited.insert(neighbor->data);
            }
        }
    }
}
*/
template <class T>
Vertex<T> *Graph<T>::getVertexById(const string &id)
{
    for (int i = 0; i < vertexList.size(); i++)
    {
        if (vertexList.get(i)->data.id == id)
        {
            return vertexList.get(i);
        }
    }
    return nullptr;
}

template <typename T>
bool Graph<T>::removeVertex(const string &vertexId)
{
    for (int i = 0; i < vertexList.size(); i++)
    {
        if (vertexList.get(i)->data.id == vertexId)
        {
            delete vertexList.get(i);
            vertexList.erase(i);
            return true;
        }
    }
    return false; // Vértice no encontrado.
}
