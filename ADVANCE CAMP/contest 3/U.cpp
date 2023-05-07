#include <bits/stdc++.h>

using namespace std;

vector<int> blocks[25];
int pos[25];

void returnToInitial(int a) {
    int current_pos = pos[a];
    for (int i = current_pos + 1; i < blocks[current_pos].size(); i++) {
        int element = blocks[current_pos][i];
        blocks[element].push_back(element);
        pos[element] = element;
    }
    blocks[current_pos].resize(current_pos + 1);
}

void moveOnto(int a, int b) {
    returnToInitial(a);
    returnToInitial(b);
    int posA = pos[a];
    int posB = pos[b];
    blocks[posB].push_back(a);
    pos[a] = posB;
}

void moveOver(int a, int b) {
    returnToInitial(a);
    int posA = pos[a];
    int posB = pos[b];
    blocks[posB].push_back(a);
    pos[a] = posB;
}

void pileOnto(int a, int b) {
    returnToInitial(b);
    int posA = pos[a];
    int posB = pos[b];
    for (int i = posA; i < blocks[posA].size(); i++) {
        int element = blocks[posA][i];
        blocks[posB].push_back(element);
        pos[element] = posB;
    }
    blocks[posA].resize(posA);
}

void pileOver(int a, int b) {
    int posA = pos[a];
    int posB = pos[b];
    for (int i = posA; i < blocks[posA].size(); i++) {
        int element = blocks[posA][i];
        blocks[posB].push_back(element);
        pos[element] = posB;
    }
    blocks[posA].resize(posA);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        blocks[i].push_back(i);
        pos[i] = i;
    }
    char command[5], preposition[5];
    int a, b;
    while (scanf("%s %d %s %d", command, &a, preposition, &b) == 4) {
        if (a == b) {
            continue;
        }
        if (strcmp(command, "move") == 0) {
            if (strcmp(preposition, "onto") == 0) {
                moveOnto(a, b);
            } else {
                moveOver(a, b);
            }
        } else {
            if (strcmp(preposition, "onto") == 0) {
                pileOnto(a, b);
            } else {
                pileOver(a, b);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d:", i);
        for (int j = 0; j < blocks[i].size(); j++) {
            printf(" %d", blocks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
