
/*
** xindex.c -- invert condition returned by index
*/
xindex(array, c, allbut, lastto) char array[], c; int allbut, lastto; {
  if(c==EOF) return -1;
  else if(allbut==NO) return index(array, c);
  else if(index(array, c)>-1) return -1;
  else return lastto+1;
  }
�/|��!:�$:�g9! 9��/|��R:! 9��/�! 9���/+���/��!  ���/�$:�����������;;�!�9���;! 9�! ��!  ���/! 9�!  9�! �!$ 9��/��o0����/! 9�!  9��/�! ���/���/! 9��/��/�!? ���/|���:! 9�! ���/! 9���/#���/��:! 9�! ���/! 9�! 9���/#�