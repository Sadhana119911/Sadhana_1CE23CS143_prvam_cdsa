#include<stdio.h>
#include<string.h>
int count(char name[]) {//counting the number of characters
    int c=0;
    for(int i=0 ; i<strlen(name) ; i++) {
        c++;
    }
    return c;
}
int main() {
    char name[200];
    scanf("%s",name);

    int caseup=0;
    int caselow=0;
    int sum=count(name);
    int countup=0;
    int countlow=0;
    if(sum%2 == 0) {//even count
        for(int i=0 ; i<strlen(name) ; i++) {
            if(name[i] >= 'a' && name[i] <= 'z') {
                name[i] -= 32;
            }
            caseup += name[i];
        }
        printf("Sum of ascii is %d\n",caseup);//printing the ascii value
        int r=0;
        while(caseup != 0) {
            int rem = caseup % 10;
            countup += rem;
            r=r*10+rem;
            caseup=caseup/10;
        }
        printf("sum of ascii digits %d\n",countup);
    }
    else{//odd count
        for(int i=0 ; i<strlen(name) ; i++) {
            if(name[i] >= 'A' && name[i] <= 'Z') {
                name[i] += 32;
            }
            caselow += name[i];
        }
        printf("Sum of ascii value is %d\n",caselow);//printing the ascii value
        int r=0;
        while(caselow != 0) {
            int rem = caselow % 10;
            countlow += rem;
            r=r*10+rem;
            caselow=caselow/10;
        }
        printf("sum of ascii digits %d\n",countlow);
    }
    switch(sum) {//based on the count
        case 1:
        printf("%s you are mental\n",name);
        break;
        case 2:
        printf("%s you are lazy\n",name);
        break;
        case 3:
        printf("%s you are smart\n",name);
        break;
        case 4:
        printf("%s you are talented\n",name);
        break;
        case 5:
        printf("%s you are intelligent\n",name);
        break;
        case 6:
        printf("%s you are fool\n",name);
        break;
        case 7:
        printf("%s you are boring\n",name);
        break;
        case 8:
        printf("%s you are dumb\n",name);
        break;
        case 9:
        printf("%s you are pscyo\n",name);
        break;
        default:
        printf("%s you are legend\n",name);
    }

    return 0;
}