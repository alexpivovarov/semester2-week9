
#include <stdio.h>
#include <stdlib.h>

#include "node_structures.h"
#include "node.h"

int main( void ) {

    // create some nodes
    Node *zero = createNode(createData(0));
    Node *first = createNode(createData(1));
    Node *second = createNode(createData(2));
    Node *third = createNode(createData(3));

    // link the nodes
    zero->next= first;
    first->next = second;
    second->next = third;
    
    // print the data by following links
    traverseI( zero );

    // free all node memory (using traversal)
    freeNodes( zero );

    return 0;
}
