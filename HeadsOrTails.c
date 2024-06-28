#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int i,j[3],heads_count=0, tails_count=0;

srand((unsigned int) time(NULL));
for(i=0;i<3;i++){
j[i] = rand() % 2;
}


printf("Tossing a coin...\n");

for (int i = 0; i < 3; i++) {
printf("Round %d: ", i + 1);
if (j[i] == 0) {
    printf("Heads\n");
    heads_count++;
}

else if (j[i] == 1) {
    printf("Tails\n");
    tails_count++;
}
}

printf("Heads: %d, Tails: %d\n", heads_count, tails_count);

if(heads_count > tails_count) printf("You won!");
else printf("You lost!");


return 0;
}
