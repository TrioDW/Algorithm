#include <stdio.h>


int is_palindromic_number(unsigned int n) {

    char numm[5];
    sprintf(numm, "%d", n);
  
    int cnt = 0;
    
    while (n != 0) {
        n /= 10;
        cnt++;
    }
    
    if (cnt % 2 == 0) {                          
        for (int i = 0; i < (cnt/2); i++) {
            if (numm[i] != numm[cnt-i-1]) {
                return 0;
            }
        }
        return 1;
    }
    else {                                       
        for (int i = 0; i < ((cnt-1)/2); i++) {
            if (numm[i] != numm[cnt-i-1])
                return 0;
        }
        return 1;
    }
}

int main(void) {
  unsigned int num;

  while (1) 
  {
    scanf("%d", &num);

    if (num == 0)
      return 0;
  
    if (is_palindromic_number(num))
      printf("yes\n");
    else
      printf("no\n");
  }
  
  return 0;
}