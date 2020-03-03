#include "dx.h"
void BOOTFORALL1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V18=0;
int T,RT,BA,E,C;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=24;
if(v[0]>99700) (*f[6])( );

T=pile[v[22]]; RT=pile[v[22]+1]; BA=pile[v[22]+2]; E=pile[v[22]+3]; C=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+24]=x[E] ;z[jvj+24]=z[E];
V18=x[T];
l1:for(i=x[jvj+24],V7=0;i>0;i=t[i],V7++)  ;
if((V7!=1)) goto l6;
x[jvj+22]=x[jvj+24] ;z[jvj+22]=z[jvj+24];
l2:if((x[jvj+22]<=0)) goto l6;
x[jvj+1]=s[x[jvj+22]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+22];
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=1715)) goto l3;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+4)*/
pile[v[22]]=102; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+1,jvj+5)*/
pile[v[22]]=C; pile[WZ1]=BA; pile[WZ3]=jvj+6; 
(*f[1503])( );if(v[102]) goto l3;     /*BOOTRADA0(C,BA,jvj+5,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=103; pile[WZ1]=jvj+1; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+1,jvj+8)*/
pile[v[22]]=C; pile[WZ1]=BA; pile[WZ3]=jvj+9; 
(*f[1503])( );if(v[102]) goto l3;     /*BOOTRADA0(C,BA,jvj+8,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+10; pile[WZ2]=103; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+17,jvj+10,103,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+7; pile[WZ4]=jvj+18; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+7,jvj+18,jvj+11)*/
pile[v[22]]=RT; pile[WZ1]=107; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(RT,107,jvj+11)*/
V18=x[jvj+1];
x[jvj+24]=x[jvj+4] ;z[jvj+24]=z[jvj+4];
goto l1;
l3:x[jvj+22]=t[x[jvj+22]];
goto l2;
l5:x[jvj+12]=s[x[jvj+23]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+23];
pile[v[22]]=C; pile[WZ1]=BA; pile[WZ2]=jvj+12; pile[WZ3]=jvj+13; 
(*f[1503])( );if(v[102]) goto l7;     /*BOOTRADA0(C,BA,jvj+12,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=50; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,50,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=jvj+14; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+21; 
(*f[298])( );     /*TRIENS1(jvj+14,(-20),jvj+20,107,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+21,22,100,jvj+15)*/
pile[v[22]]=RT; pile[WZ1]=107; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(RT,107,jvj+15)*/
l7:x[jvj+23]=t[x[jvj+23]];
l4:if((x[jvj+23]>0)) goto l5;
v[0]=jvj; v[22]-=5; return;
l6:x[jvj+23]=x[jvj+24] ;z[jvj+23]=z[jvj+24];
goto l4;
}
