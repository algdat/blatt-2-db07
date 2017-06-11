#ifndef DB07_INDEX_H
#define DB07_INDEX_H

#include <list>
#include <string>
#include <array>
#include "Column.h"
#include "Row.h"

#define MAX_AMOUNTKEYS 4
#define MIDDLE_VALUE 2


namespace db07 {

    class Btree {

    private:

        struct Node {
            std::vector<int> keys;
            std::vector<Node*> childNodes;
            Node *parentNode = nullptr;
            int level = 0;
        };


        struct LeafNode : Node {
            std::vector<Row*> entries;
        };

        Node *root;



        void insertFullNode(int index, Row *entries, Node *node);

        void insertSpaceNode(int index, Row *entries, Node *node);

        LeafNode* insertLeafNode(int index, Row *entries, Node *leafNode);

        void insertNode(int index, Row *entries, Node *node);

        void splitNode(Node *node);

        LeafNode* splitLeafNode(LeafNode *leafNode);

    public:

		Btree();

        void insert(int index, Row *entries);

        void remove(int index);

        LeafNode *indexSeek(int index);

        LeafNode *indexScan(Row *values);


    };

}
#endif //DB07_INDEX_H
