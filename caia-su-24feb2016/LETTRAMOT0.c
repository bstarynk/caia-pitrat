#include "dx.h"
void LETTRAMOT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V7=0,L=0,V8=0,J=0,V9=0,A=0,V3=0;
int P;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=26083;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2326&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+7]=0 ;z[jvj+7]=0;
I=1;
l5:if((I<=P)) goto l7;
x[NNNE]=x[jvj+7] ;z[NNNE]=z[jvj+7];
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l3:x[jvj+3]=d[76];z[jvj+3]=0;
l4:if((x[jvj+2]<=0)) goto l9;
A=s[x[jvj+2]];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+9)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+14)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+16; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+16)*/
pile[v[22]]=jvj+14; pile[WZ1]=111; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+14,111,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+15; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+16,jvj+15,jvj+13)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=A; pile[WZ4]=jvj+11; 
(*f[272])( );     /*QUADRI9(100,89,162,A,jvj+11)*/
pile[v[22]]=jvj+9; pile[WZ1]=111; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(jvj+9,111,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; pile[WZ2]=103; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+10,jvj+11,103,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+12; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+12,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[196])( );     /*PLUF0(jvj+3,jvj+4,jvj+5)*/
x[jvj+2]=t[x[jvj+2]];
goto l4;
l6:I++;
goto l5;
l7:pile[v[22]]=I; pile[WZ1]=(-630); 
(*f[3979])( );if(v[102]) goto l6;     /*LONGUEUR0(I,(-630),V3)*/
V3=pile[WZ2]; 
J=1;
l8:if((J>V3)) goto l6;
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=J; pile[WZ1]=I; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l9;     /*FTAB0(J,I,(-630),V9)*/
V9=pile[WZ3]; 
x[jvj+2]=0 ;z[jvj+2]=0;
pile[v[22]]=I; pile[WZ1]=(-612); 
(*f[3979])( );if(v[102]) goto l3;     /*LONGUEUR0(I,(-612),V7)*/
V7=pile[WZ2]; 
L=1;
l1:if((L>V7)) goto l3;
pile[v[22]]=L; pile[WZ1]=I; pile[WZ2]=(-612); 
(*f[202])( );if(v[102]) goto l2;     /*FMATRICE0(L,I,(-612),V8)*/
V8=pile[WZ3]; 
pile[v[22]]=jvj+2; pile[WZ1]=V8; 
(*f[467])( );     /*PLUE4(jvj+2,V8)*/
l2:L++;
goto l1;
l9:pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[299])( );     /*COPEL0(jvj+5,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=111; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,111,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+6; pile[WZ2]=107; pile[WZ3]=jvj+19; 
(*f[301])( );     /*TRI11(jvj+18,jvj+6,107,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+19,22,100,jvj+8)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[522])( );     /*PLUB2(jvj+7,jvj+8)*/
J++;
goto l8;
}
