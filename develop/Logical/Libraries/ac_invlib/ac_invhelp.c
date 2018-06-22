#include <bur/plctypes.h>
#include <ctype.h>

/* long to ascii conversion */
char * m_ltoa(long value, char *string, int radix)
{
  char tmp[33];
  char *tp = tmp;
  long i;
  unsigned long v;
  int sign;

  if (radix > 36 || radix <= 1)
  {
    return 0;
  }

  sign = (radix == 10 && value < 0);
  if (sign)
    v = -value;
  else
    v = (unsigned long)value;
  while (v || tp == tmp)
  {
    i = v % radix;
    v = v / radix;
    if (i < 10)
      *tp++ = i+'0';
    else
      *tp++ = i + 'a' - 10;
  }


  if (sign)
    *string++ = '-';
  while (tp > tmp)
    *string++ = *--tp;
  *string = 0;
  return string;
}

long m_atol( char* s ){
	long l = 0;
	int sign = 0;
	
	while( *s ){
		if( *s  == '-' ){
			if( sign == 0 )
				sign = -1;
			else
				return 0; /* error: more than one sign */
		}
		if( *s == '+' ){
			if( sign == 0 )
				sign = +1;
			else
				return 0; /* error: more than one sign */			
		}
		if( *s >= '0' && *s <= '9' ){
			l *= 10;			
			l += *s - '0';
		}
		++s;
	}
	if( sign < 0 )
		l = -l;	
	return l;
}




/* case insensitive string comparator */
int strcasecmp( char *s1, char *s2 ){
	do{
		if( tolower( *s1 ) != tolower( *s2 ) ){
			return ( *s1 - *s2 );
		}
		++s1;
		++s2;
	} while (*s1 && *s2);
	if( *s1 != *s2 ) /* different length */
		return -1;
	
	return 0;	
}
