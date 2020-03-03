#include "dx.h"
void PUTCST0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V12=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=11819;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1974&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,A,jvj+11)*/
if((x[jvj+11]!=484)) goto l5;
pile[v[22]]=111; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,A,jvj+12)*/
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+12,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,A,jvj+8)*/
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(454,jvj+2,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l5;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=436; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(436,jvj+4,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+5,V5)*/
V5=pile[WZ2]; 
if((V5!=V12)) goto l2;
pile[v[22]]=480; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(480,jvj+4,jvj+6)*/
l3:if((x[jvj+6]<=0)) goto l5;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[760])( );     /*MEMEX0(jvj+7,jvj+8,jvj+9)*/
if((x[jvj+9]==135)) goto l4;
x[jvj+6]=t[x[jvj+6]];
goto l3;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:pile[v[22]]=489; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(489,jvj+7,jvj+10)*/
if((x[jvj+10]<=0)) goto l5;
x[jvj+13]=s[x[jvj+10]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+10];
pile[v[22]]=jvj+13; pile[WZ1]=R; 
(*f[255])( );     /*COPEXP0(jvj+13,R)*/
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
}
