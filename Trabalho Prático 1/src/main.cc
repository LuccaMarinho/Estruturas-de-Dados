#include "bottle.h"
#include "lab.h"

int main() 
{
  
  Lab* lab = new Lab();
  int i;
  char a;

  while(scanf("%d %c", &i, &a) != EOF) 
  {
    if(a == 'i')
      lab->insert(i, 0);

    else if(a == 'r')
      lab->remove(i);

    else if(a == 'p')
      std::cout << lab->measurement(i) << std::endl;
  }
  
  delete lab;

  return 0;
}
