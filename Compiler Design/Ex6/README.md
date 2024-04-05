> INPUT

// input is from a file named inputslr.txt

// use e for epsilon

// no white spaces

E->BB

B->cB|d

> OUTPUT

>> Grammar:

E->BB

B->cB|d
 
>> FIRST:

B = {c,d}

E = {c,d}
 
>> FOLLOW:

B = {$,c,d}

E = {$}
 

>> Productions:

r1: B->cB

r2: B->d

r3: E->BB
 
>> Graph:
 
I0:

E'->.E

B->.cB|.d

E->.BB
 
I1:

E'->E.
 
I2:

B->.cB|.d|c.B
 
I3:

B->d.
 
I4:

B->cB.
 
I5:

B->.cB|.d

E->B.B

 
I6:

E->BB.
 
>> Edges:

I0 -> E -> I1

I0 -> c -> I2

I0 -> d -> I3

I0 -> B -> I5

I2 -> c -> I2

I2 -> d -> I3

I2 -> B -> I4

I5 -> c -> I2

I5 -> d -> I3

I5 -> B -> I6

>> Parsing Table:

St.             Action & Goto

        $       c       d       B       E

I0      -       S2      S3      5       1

I1      AC      -       -       -       -

I2      -       S2      S3      4       -

I3      r2      r2      r2      -       -

I4      r1      r1      r1      -       -

I5      -       S2      S3      6       -

I6      r3      -       -
