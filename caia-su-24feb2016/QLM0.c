#include "dx.h"
void QLM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=42;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,X,jvj+15)*/
if((x[jvj+15]!=22)) goto l9;
pile[v[22]]=111; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,X,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+16,jvj+17)*/
pile[v[22]]=11; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(11,jvj+17,jvj+18)*/
if((x[jvj+18]!=135)) goto l5;
pile[v[22]]=268; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+17,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+19; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+19,jvj+20)*/
pile[v[22]]=X; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[35])( );     /*CHGC1(X,111,jvj+20)*/
l5:if(x[jvj+17]!=143&&x[jvj+17]!=394) goto l9;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,X,jvj+1)*/
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,jvj+1,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=186)) goto l1;
pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+1,jvj+23)*/
pile[v[22]]=X; pile[WZ1]=102; 
(*f[35])( );     /*CHGC1(X,102,jvj+23)*/
l1:pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]==186)) goto l7;
l2:pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+1,jvj+4)*/
if((x[jvj+4]!=22)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+1,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+5,jvj+6)*/
pile[v[22]]=11; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(11,jvj+6,jvj+7)*/
if((x[jvj+7]==135)) goto l7;
l6:pile[v[22]]=jvj+1; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=186; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,186,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+37; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+37,jvj+25)*/
pile[v[22]]=X; pile[WZ1]=102; pile[WZ2]=jvj+25; 
(*f[35])( );     /*CHGC1(X,102,jvj+25)*/
l7:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,X,jvj+8)*/
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+8,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]!=186)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+8,jvj+28)*/
pile[v[22]]=X; pile[WZ1]=103; 
(*f[35])( );     /*CHGC1(X,103,jvj+28)*/
l3:pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]==186)) goto l9;
l4:pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+8,jvj+11)*/
if((x[jvj+11]!=22)) goto l8;
pile[v[22]]=111; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+8,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+12,jvj+13)*/
pile[v[22]]=11; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(11,jvj+13,jvj+14)*/
if((x[jvj+14]==135)) goto l9;
l8:pile[v[22]]=jvj+8; pile[WZ1]=jvj+29; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=186; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,186,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+39; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+29,jvj+39,jvj+30)*/
pile[v[22]]=X; pile[WZ1]=103; pile[WZ2]=jvj+30; 
(*f[35])( );     /*CHGC1(X,103,jvj+30)*/
l9:x[jvj+40]=w[x[jvj+15]][9];
l10:if((x[jvj+40]>0)) goto l11;
x[jvj+41]=w[x[jvj+15]][8];
l13:if((x[jvj+41]<=0)) goto l16;
x[jvj+33]=s[x[jvj+41]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+41];
pile[v[22]]=jvj+33; pile[WZ1]=X; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(jvj+33,X,jvj+34)*/
x[jvj+42]=x[jvj+34] ;z[jvj+42]=z[jvj+34];
l14:if((x[jvj+42]>0)) goto l15;
x[jvj+41]=t[x[jvj+41]];
goto l13;
l11:x[jvj+31]=s[x[jvj+40]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+40];
pile[v[22]]=jvj+31; pile[WZ1]=X; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+31,X,jvj+32)*/
pile[v[22]]=jvj+32; 
(*f[2188])( );     /*QLM0(jvj+32)*/
l12:x[jvj+40]=t[x[jvj+40]];
goto l10;
l15:x[jvj+35]=s[x[jvj+42]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+42];
pile[v[22]]=jvj+35; 
(*f[2188])( );     /*QLM0(jvj+35)*/
x[jvj+42]=t[x[jvj+42]];
goto l14;
l16:v[0]=jvj; v[22]-=1; return;
}
