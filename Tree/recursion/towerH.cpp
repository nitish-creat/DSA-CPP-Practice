#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 0)
        return;

    // n-1 disks ko source se auxiliary par bhejna
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // largest disk ko source se destination par bhejna
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // n-1 disks ko auxiliary se destination par bhejna
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

void tower(int n, char s, char a,char d){
    if(n==0){
        return;
    }
    tower(n-1,s,d,a);
    printf("Move disk %d from %c to %c\n",n,s,d);
    tower(n-1,a,s,d);
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);

    towerOfHanoi(n, 'A', 'B', 'C');
    printf("\n");
    tower(n,'a','b','c');
    return 0;
}
