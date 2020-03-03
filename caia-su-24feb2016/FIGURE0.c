#include "dx.h"
void FIGURE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A,B;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=21;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=101; pile[WZ1]=B; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,B,jvj+1)*/
if((x[A]==x[jvj+1])) goto l1;
l4:x[jvj+2]=d[51];z[jvj+2]=0;
l2:if((x[jvj+2]>0)) goto l3;
pile[v[22]]=184; pile[WZ1]=B; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(184,B,jvj+6)*/
l6:if((x[jvj+6]>0)) goto l7;
pile[v[22]]=658; pile[WZ1]=B; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(658,B,jvj+9)*/
l8:if((x[jvj+9]>0)) goto l9;
pile[v[22]]=114; pile[WZ1]=B; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(114,B,jvj+12)*/
l10:if((x[jvj+12]>0)) goto l11;
x[jvj+16]=d[238];z[jvj+16]=0;
l13:if((x[jvj+16]>0)) goto l14;
x[R]=134 ;z[R]=134;
l17:v[0]=jvj; v[22]-=3; return;
l1:x[R]=135 ;z[R]=135;
goto l17;
l3:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=B; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+3,B,jvj+4)*/
pile[v[22]]=A; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[492])( );     /*FIGURE0(A,jvj+4,jvj+5)*/
if((x[jvj+5]==135)) goto l1;
l5:x[jvj+2]=t[x[jvj+2]];
goto l2;
l7:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=A; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[492])( );     /*FIGURE0(A,jvj+7,jvj+8)*/
if((x[jvj+8]==135)) goto l1;
x[jvj+6]=t[x[jvj+6]];
goto l6;
l9:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=A; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[492])( );     /*FIGURE0(A,jvj+10,jvj+11)*/
if((x[jvj+11]==135)) goto l1;
x[jvj+9]=t[x[jvj+9]];
goto l8;
l11:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+13,jvj+14)*/
pile[v[22]]=A; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[492])( );     /*FIGURE0(A,jvj+14,jvj+15)*/
if((x[jvj+15]==135)) goto l1;
l12:x[jvj+12]=t[x[jvj+12]];
goto l10;
l14:x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=jvj+17; pile[WZ1]=B; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(jvj+17,B,jvj+18)*/
x[jvj+21]=x[jvj+18] ;z[jvj+21]=z[jvj+18];
l15:if((x[jvj+21]>0)) goto l16;
x[jvj+16]=t[x[jvj+16]];
goto l13;
l16:x[jvj+19]=s[x[jvj+21]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+21];
pile[v[22]]=A; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[492])( );     /*FIGURE0(A,jvj+19,jvj+20)*/
if((x[jvj+20]==135)) goto l1;
x[jvj+21]=t[x[jvj+21]];
goto l15;
}
