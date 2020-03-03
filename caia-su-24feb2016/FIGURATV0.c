#include "dx.h"
void FIGURATV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0;
int B,A,V;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=27;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; V=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,B,jvj+1)*/
if((x[jvj+1]!=43)) goto l4;
pile[v[22]]=103; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,B,jvj+2)*/
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+2,V13)*/
V13=pile[WZ2]; 
if((V!=V13)) goto l4;
pile[v[22]]=102; pile[WZ1]=B; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,B,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[A]==x[jvj+4])) goto l1;
l4:x[jvj+5]=d[51];z[jvj+5]=0;
l2:if((x[jvj+5]>0)) goto l3;
pile[v[22]]=658; pile[WZ1]=B; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(658,B,jvj+9)*/
l6:if((x[jvj+9]>0)) goto l7;
pile[v[22]]=114; pile[WZ1]=B; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(114,B,jvj+12)*/
l8:if((x[jvj+12]>0)) goto l9;
x[jvj+16]=d[10];z[jvj+16]=0;
l11:if((x[jvj+16]>0)) goto l12;
pile[v[22]]=184; pile[WZ1]=B; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(184,B,jvj+21)*/
l15:if((x[jvj+21]>0)) goto l16;
x[R]=134 ;z[R]=134;
l19:v[0]=jvj; v[22]-=4; return;
l1:x[R]=135 ;z[R]=135;
goto l19;
l3:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=B; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+6,B,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=A; pile[WZ2]=V; pile[WZ3]=jvj+8; 
(*f[1133])( );     /*FIGURATV0(jvj+7,A,V,jvj+8)*/
if((x[jvj+8]==135)) goto l1;
l5:x[jvj+5]=t[x[jvj+5]];
goto l2;
l7:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=A; pile[WZ2]=V; pile[WZ3]=jvj+11; 
(*f[1133])( );     /*FIGURATV0(jvj+10,A,V,jvj+11)*/
if((x[jvj+11]==68)) goto l1;
x[jvj+9]=t[x[jvj+9]];
goto l6;
l9:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+13,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=A; pile[WZ2]=V; pile[WZ3]=jvj+15; 
(*f[1133])( );     /*FIGURATV0(jvj+14,A,V,jvj+15)*/
if((x[jvj+15]==68)) goto l1;
l10:x[jvj+12]=t[x[jvj+12]];
goto l8;
l12:x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=jvj+17; pile[WZ1]=B; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(jvj+17,B,jvj+18)*/
x[jvj+26]=x[jvj+18] ;z[jvj+26]=z[jvj+18];
l13:if((x[jvj+26]>0)) goto l14;
x[jvj+16]=t[x[jvj+16]];
goto l11;
l14:x[jvj+19]=s[x[jvj+26]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+26];
pile[v[22]]=jvj+19; pile[WZ1]=A; pile[WZ2]=V; pile[WZ3]=jvj+20; 
(*f[1133])( );     /*FIGURATV0(jvj+19,A,V,jvj+20)*/
if((x[jvj+20]==135)) goto l1;
x[jvj+26]=t[x[jvj+26]];
goto l13;
l16:x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=107; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(107,jvj+22,jvj+23)*/
x[jvj+27]=x[jvj+23] ;z[jvj+27]=z[jvj+23];
l17:if((x[jvj+27]>0)) goto l18;
x[jvj+21]=t[x[jvj+21]];
goto l15;
l18:x[jvj+24]=s[x[jvj+27]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+27];
pile[v[22]]=jvj+24; pile[WZ1]=A; pile[WZ2]=V; pile[WZ3]=jvj+25; 
(*f[1133])( );     /*FIGURATV0(jvj+24,A,V,jvj+25)*/
if((x[jvj+25]==68)) goto l1;
x[jvj+27]=t[x[jvj+27]];
goto l17;
}
