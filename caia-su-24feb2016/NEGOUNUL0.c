#include "dx.h"
void NEGOUNUL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V4=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=17;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,A,I)*/
I=pile[WZ2]; 
if((I<=0)) goto l5;
l6:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,A,jvj+5)*/
if((x[jvj+5]!=484)) goto l7;
pile[v[22]]=A; pile[WZ1]=jvj+6; 
(*f[200])( );if(v[102]) goto l7;     /*NDD0(A,jvj+6)*/
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(164,jvj+6,V4)*/
V4=pile[WZ2]; 
if((V4<=0)) goto l5;
l7:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,A,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]==52)) goto l8;
if((x[jvj+8]==596)) goto l9;
if((x[jvj+8]==486)) goto l12;
if((x[jvj+8]!=485)) goto l13;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,A,jvj+17)*/
l3:if((x[jvj+17]<=0)) goto l5;
x[jvj+3]=s[x[jvj+17]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+17];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[1586])( );     /*NEGOUNUL0(jvj+3,jvj+4)*/
if((x[jvj+4]==135)) goto l4;
l13:x[R]=134 ;z[R]=134;
l14:v[0]=jvj; v[22]-=2; return;
l2:x[jvj+16]=t[x[jvj+16]];
l1:if((x[jvj+16]<=0)) goto l5;
x[jvj+1]=s[x[jvj+16]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+16];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[1586])( );     /*NEGOUNUL0(jvj+1,jvj+2)*/
if((x[jvj+2]==135)) goto l2;
goto l13;
l4:x[jvj+17]=t[x[jvj+17]];
goto l3;
l5:x[R]=135 ;z[R]=135;
goto l14;
l8:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,A,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[1353])( );     /*POSOUNUL0(jvj+9,jvj+10)*/
if((x[jvj+10]==135)) goto l5;
goto l13;
l9:pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,A,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[997])( );if(v[102]) goto l13;     /*IMPAIR0(jvj+11,jvj+12)*/
if((x[jvj+12]==135)) goto l10;
goto l13;
l10:pile[v[22]]=jvj+11; pile[WZ1]=jvj+13; 
(*f[1352])( );     /*POSITIF0(jvj+11,jvj+13)*/
if((x[jvj+13]==135)) goto l11;
goto l13;
l11:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,A,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[1586])( );     /*NEGOUNUL0(jvj+14,jvj+15)*/
if((x[jvj+15]==135)) goto l5;
goto l13;
l12:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,A,jvj+16)*/
goto l1;
}
