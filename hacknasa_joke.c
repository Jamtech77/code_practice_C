#include "stdio.h"
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

int main(void){
  int i = 0;
  
  for (i = 0; i <= 100; i++) {
      printf("\r Hacking NASA :%d %%", i);
      Sleep(50);
      if(i % 20 == 0) {
          puts("");
          Sleep(100);
      }
      if( i > 95) Sleep(200);
  }
  printf(" Entered in NASA successfully.");
  
  return 0;
}
