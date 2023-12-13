/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "task_5.h"
using namespace std;

int main() {
    int N, value;
    cin >> N;
    RedBlackTree tree;

    for (int i = 0; i < N; ++i) {
        cin >> value;
        tree.insert(value);
    }

    tree.countChildrenForEachNode();

    return 0;
}