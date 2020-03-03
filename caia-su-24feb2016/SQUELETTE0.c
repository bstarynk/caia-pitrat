#include "dx.h"
void SQUELETTE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int S,A;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=20;
if(v[0]>99700) (*f[6])( );

S=pile[v[22]]; A=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=226; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(226,A,jvj+14)*/
l4:if((x[jvj+14]>0)) goto l5;
v[0]=jvj; v[22]-=2; return;
l2:if(x[jvj+19]==incon) goto l3;
l7:if((x[jvj+19]==(-99999998))) goto l6;
pile[v[22]]=jvj+19; pile[WZ1]=576; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+19,576,jvj+13)*/
pile[v[22]]=226; pile[WZ1]=jvj+1; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(226,jvj+1,jvj+11)*/
if((x[jvj+11]!=0)) goto l8;
pile[v[22]]=867; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(867,jvj+1,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=867; 
(*f[35])( );     /*CHGC1(jvj+13,867,jvj+12)*/
l8:pile[v[22]]=S; pile[WZ1]=226; pile[WZ2]=jvj+13; 
(*f[774])( );     /*TJPLUS0(S,226,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+1; 
(*f[1287])( );     /*SQUELETTE0(jvj+13,jvj+1)*/
l6:x[jvj+14]=t[x[jvj+14]];
goto l4;
l3:x[jvj+19]=(-99999998);
goto l6;
l5:x[jvj+1]=s[x[jvj+14]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+14];
x[jvj+19]=incon;
pile[v[22]]=576; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(576,jvj+1,jvj+2)*/
x[jvj+20]=x[jvj+2] ;z[jvj+20]=z[jvj+2];
x[jvj+19]=x[jvj+20] ;z[jvj+19]=z[jvj+20];
l1:pile[v[22]]=287; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(287,jvj+1,jvj+3)*/
pile[v[22]]=80; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(80,jvj+1,jvj+4)*/
x[jvj+5]=x[jvj+3] ;z[jvj+5]=z[jvj+3];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[1290])( );if(v[102]) goto l2;     /*DEPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
x[jvj+8]=x[jvj+4] ;z[jvj+8]=z[jvj+4];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[1291])( );if(v[102]) goto l2;     /*CONVEXP0(jvj+8,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
x[jvj+18]=x[jvj+7] ;z[jvj+18]=z[jvj+7];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+10; pile[WZ2]=103; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+16,jvj+10,103,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+17; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+18,jvj+17,jvj+19)*/
goto l7;
}
