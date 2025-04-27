#include <stdio.h>
#include <stdlib.h>

/* improved version of v3.c ? */

struct numbers
{
  int n;
  int *nums;
};

int n;
struct numbers *numbers;

void
create_numbers (struct numbers **nrs, int *n)
{
  *n = 3;
  *nrs = malloc ((sizeof (struct numbers) * 3));
  struct numbers *nm = *nrs;
  for (int i = 0; i < 3; i++)
    {
      nm->n = i + 1;
      nm->nums = malloc (sizeof (int) * (i + 1));
      for (int j = 0; j < i + 1; j++)
        nm->nums[j] = i + j;
      nm++;
    }
}

void
output_report ()
{ 
  puts ("numbers"); 
  for (int i = 0; i < numbers->n; i++)
    printf ("Number: %d\n", numbers->nums[i]);
  printf ("\n");
}

int
main (int argc, char **argv)
{
  create_numbers (&numbers, &n);
  for (int i = 0; i < 2; i++)
    {
      output_report ();
      numbers++;
    }

  // reset numbers;
  numbers -= 2;
  // free all that
  for (int i=0; i<3; ++i) {
    free (numbers[i].nums);
  }
  free (numbers);
  return 0;
}

