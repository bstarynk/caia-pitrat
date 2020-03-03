#include "dx.h"
void COMPILE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0;
int M;
int P;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=10780;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==456&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; P=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[P]=incon;
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=jvj+7; pile[WZ1]=(-3822); 
(*f[331])( );     /*PLUE3(jvj+7,(-3822))*/
pile[v[22]]=365; pile[WZ1]=10169; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(365,10169,jvj+2)*/
l1:if((x[jvj+2]<=0)) goto l3;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+3,V6)*/
V6=pile[WZ2]; 
if((V6!=0)) goto l2;
x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+4]=d[38];z[jvj+4]=0;
pile[v[22]]=140; pile[WZ1]=(-3822); pile[WZ2]=158; pile[WZ3]=20; pile[WZ4]=jvj+5; 
(*f[692])( );     /*QUADRI13(140,(-3822),158,20,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[196])( );     /*PLUF0(jvj+4,jvj+5,jvj+6)*/
pile[v[22]]=M; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(M,jvj+8)*/
pile[v[22]]=jvj+3; pile[WZ1]=283; pile[WZ2]=jvj+6; 
(*f[34])( );     /*CHGC0(jvj+3,283,jvj+6)*/
pile[WZ1]=222; pile[WZ2]=jvj+7; 
(*f[34])( );     /*CHGC0(jvj+3,222,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+15)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3822); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3822),jvj+18)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+8; pile[WZ2]=103; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+16,jvj+8,103,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+17; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+18,jvj+17,jvj+11)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+23)*/
pile[WZ3]=82; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+21)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-609); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(100,21,140,(-609),jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=436; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,436,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; pile[WZ2]=111; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+20,jvj+21,111,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+22; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+23,jvj+22,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+12; 
(*f[180])( );     /*TRIENS0(jvj+11,(-20),107,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ2]=jvj+12; pile[WZ3]=105; pile[WZ4]=jvj+14; 
(*f[298])( );     /*TRIENS1(jvj+13,(-20),jvj+12,105,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+14,42,100,jvj+9)*/
pile[v[22]]=10169; pile[WZ1]=184; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(10169,184,jvj+9)*/
pile[v[22]]=jvj+3; 
(*f[357])( );     /*CL0(jvj+3)*/
x[jvj+10]=x[jvj+3] ;z[jvj+10]=z[jvj+3];
(*f[307])( );     /*EAC1()*/
pile[v[22]]=135; pile[WZ1]=jvj+10; pile[WZ2]=P; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(135,jvj+10,P)*/
l3:pile[v[22]]=10169; 
(*f[360])( );     /*NETBID0(10169)*/
if(x[P]!=incon) goto l5;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
}
