/*1.
What is the output of the following program: main() { int x=5,y; y=x++; printf(“%d %d”,x,y); }
5 5
5 6
6 6
6 5
2.
What is the output of the following program: main() { int x=5,y; y=++x; printf(“%d %d”,x,y); }
5 5
5 6
6 6
6 5
3.
What is the output of the following program: main() { int x; x=sizeof(4.5); printf(“%d”,x); }
2
4
8
16
4.
What is the output of the following program: main() { int x; x=sizeof(‘a’); printf(“%d”,x); }
1
2
4
8
5.
What is the output of the following program: main() { int x; x=10>6>4; printf(“%d”,x); }
10
4
0
1
6.
What is the output of the following program: main() { int x; x=!5>-2; printf(“%d”,x); }
5
1
0
-2
7.
What is the output of the following program: main() { int x; x=123^200; printf(“%d”,x); }
123
72
179
251
8.
What is the output of the following program: main() { int x; x=90|72; printf(“%d”,x); }
90
72
18
16
9.
What is the output of the following program: main() { int x; x=76&51; printf(“%d”,x); }
127
76
0
51
10.
What is the output of the following program: main() { int x; x=~25; printf(“%d”,x); }
24122826
-25
-26
6
11.
What is the output of the following program: main() { int x; x=12<<3; printf(“%d”,x); }
1
0
96
48
12.
What is the output of the following program: main() { int x; x=5>3&&x=0; printf(“%d”,x); }
1
0
Error
5
13.
What is the output of the following program: main() { int x; x=!5||2; printf(“%d”,x); }
0
1
5
2
14.
What is the output of the following program: main() { int x=3,y=3; x*=4+5; y=y*4+5; printf(“%d %d”,x, y); }
27 17
17 27
27 27
17 17
15.
What is the output of the following program: main() { int x=3,4,5; printf(“%d”,x); }
3
4
5
Error
16.
What is the output of the following program: main() { int x=(3,4,5); printf(“%d”,x); }
3
4
5
Error
17.
What is the output of the following program: main() { int x; x=3,4,5; printf(“%d”,x); }
3
4
5
Error
18.
What is the output of the following program: main() { int x; x=(3,4,5); printf(“%d”,x); }
3
4
5
Error
19.
What is the output of the following program: main() { int x; x=0,1?2,3:4,5; printf(“%d”,x); }
0
2
5
Error
20.
What is the output of the following program: main() { int x; x=(0,1?2,3:4,5); printf(“%d”,x); }
0
2
5
Error
21.
What is the output of the following program: main() { int x=3; if(x) printf(“%d”,x+1); else printf(“%d”,x-1); printf(“%d”,x); }
33
23
43
Error
22.
What is the output of the following program: main() { int x=-1; if(x>0) printf(“A”); printf(“B”); else printf(“C”); printf(“D”); }
AB
CD
ABD
Error
23.
What is the output of the following program: main() { float x=0.7; if(x==0.7) printf(“MySirG”); else printf(“YouTube”); }
Error
MySirG
YouTube
MySirGYouTube
24.
What is the output of the following program: main() { int x=25; if(!x) printf(“%x”,x); else printf(“%o”,x); }
25
19
31
Error
25.
What is the output of the following program: main() { int x=031; if(x) printf(“%x”,x); else printf(“%o”,x); printf(“%d”,x); }
25
19
31
Error
26.
What is the output of the following program: main() { int x=0x19; if(x) printf(“%d”,x); else printf(“%o”,x); }
25
19
31
Error
27.
What is the output of the following program: main() { int x=’0’; if(x) printf(“%c”,x); else printf(“%o”,x); }
0
60
48
Error
28.
What is the output of the following program: main() { int x=0219; if(!x) printf(“%d”,x); else printf(“%x”,x); }
219
db
333
Error
29.
What is the name of header file which contains declaration of printf() function?
conio.h
stdlib.h
stdio.h
process.h
30.
What is the name of header file which contains declaration of getch() function
conio.h
stdlib.h
stdio.h
process.h
*/