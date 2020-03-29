/* TTI AI course report (2012/04/25) Y. Sasaki */

#include "stdio.h"

void depth_first_search(int start, int goal);
void breadth_first_search(int start, int goal);
void Astar_search(int start, int goal);

char name[14] = {'A','D','E','F','I','J','L','M','P','Q','U','V','W','Y' };
int x[14] = { 1,4,5,1,4,5,2,3,1,2,1,2,3,5};
int y[14] = { 5,5,5,4,4,4,3,3,2,2,1,1,1,1};
int link[14][14] =

// A D E F I J L M P Q U V W Y

{ { 0,1,0,1,0,0,0,0,0,0,0,0,0,0 }, //A

{ 0,0,1,0,1,0,0,0,0,0,0,0,0,0 }, //D

{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0 }, //E

{ 0,0,0,0,0,0,0,1,1,0,0,0,0,0 }, //F

{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0 }, //I

{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0 }, //J

{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0 }, //L

{ 0,0,0,0,0,1,1,0,0,0,0,0,1,0 }, //M

{ 0,0,0,0,0,0,0,0,0,1,1,0,0,0 }, //P

{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0 }, //Q

{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0 }, //U

{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0 }, //V

{ 0,0,0,0,0,0,0,0,0,0,0,1,0,1 }, //W

{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0 } //Y

};

void main() {

  depth_first_search(0,13);

  breadth_first_search(0,13);

  Astar_search(0,13);

  getchar();
}

void depth_first_search(int start, int goal) { 

  int open_list[100];
  int head = 0;
  int tail = 0;
  int target;
  int i;

  printf( "--- Depth FirstSearch Result ---\n" );

  open_list[head] = start;

  while ( head >= 0 ) { /* whileOpen List is not empty. */
      target = open_list[head];
      head--;
      printf( "%c ", name[target] );

      if ( target == goal ) { break; }

      for( i=13 ; i>0 ; i-- ) {
          if ( link[target][i] ) {
              head++;
              open_list[head] = i;
          }
      }
  }

  printf( "\n\n" );

}

void breadth_first_search(int start, int goal) {
  printf( "--- Breadth First Search Result ---\n" );
}

void Astar_search(int start, int goal) {
  printf( "--- A* Search Result ---\n" );
}
