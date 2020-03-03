#include "dx.h"
void FIGURETOTAL1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A,B,S;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=34;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; S=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=x[jvj+32]=incon;
pile[v[22]]=101; pile[WZ1]=B; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,B,jvj+7)*/
if((x[A]==x[jvj+7])) goto l20;
l3:x[jvj+8]=d[51];z[jvj+8]=0;
l1:if((x[jvj+8]>0)) goto l2;
pile[v[22]]=114; pile[WZ1]=B; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(114,B,jvj+12)*/
l5:if((x[jvj+12]>0)) goto l6;
x[jvj+16]=d[52];z[jvj+16]=0;
l8:if((x[jvj+16]>0)) goto l9;
pile[v[22]]=105; pile[WZ1]=B; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(105,B,jvj+21)*/
x[jvj+34]=x[jvj+21] ;z[jvj+34]=z[jvj+21];
l12:if((x[jvj+34]<=0)) goto l15;
x[jvj+1]=s[x[jvj+34]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+34];
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+1,jvj+2)*/
if((x[jvj+2]==73)) goto l13;
l14:pile[v[22]]=A; pile[WZ1]=jvj+1; pile[WZ2]=S; pile[WZ3]=jvj+22; 
(*f[843])( );     /*FIGURETOTAL1(A,jvj+1,S,jvj+22)*/
if((x[jvj+22]==135)) goto l20;
l13:x[jvj+34]=t[x[jvj+34]];
goto l12;
l2:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=B; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+9,B,jvj+10)*/
pile[v[22]]=A; pile[WZ1]=jvj+10; pile[WZ2]=S; pile[WZ3]=jvj+11; 
(*f[843])( );     /*FIGURETOTAL1(A,jvj+10,S,jvj+11)*/
if((x[jvj+11]==135)) goto l20;
l4:x[jvj+8]=t[x[jvj+8]];
goto l1;
l6:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+13,jvj+14)*/
pile[v[22]]=A; pile[WZ1]=jvj+14; pile[WZ2]=S; pile[WZ3]=jvj+15; 
(*f[843])( );     /*FIGURETOTAL1(A,jvj+14,S,jvj+15)*/
if((x[jvj+15]==135)) goto l20;
l7:x[jvj+12]=t[x[jvj+12]];
goto l5;
l9:x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=jvj+17; pile[WZ1]=B; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(jvj+17,B,jvj+18)*/
x[jvj+33]=x[jvj+18] ;z[jvj+33]=z[jvj+18];
l10:if((x[jvj+33]>0)) goto l11;
x[jvj+16]=t[x[jvj+16]];
goto l8;
l11:x[jvj+19]=s[x[jvj+33]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+33];
pile[v[22]]=A; pile[WZ1]=jvj+19; pile[WZ2]=S; pile[WZ3]=jvj+20; 
(*f[843])( );     /*FIGURETOTAL1(A,jvj+19,S,jvj+20)*/
if((x[jvj+20]==135)) goto l20;
x[jvj+33]=t[x[jvj+33]];
goto l10;
l16:x[jvj+21]=t[x[jvj+21]];
l15:if((x[jvj+21]<=0)) goto l21;
x[jvj+23]=s[x[jvj+21]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+21];
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=73)) goto l16;
x[jvj+25]=d[6];z[jvj+25]=0;
l17:if((x[jvj+25]<=0)) goto l16;
x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+23; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+26,jvj+23,jvj+27)*/
x[jvj+5]=x[jvj+27] ;z[jvj+5]=z[jvj+27];
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]==20)) goto l18;
l19:pile[v[22]]=A; pile[WZ1]=jvj+5; pile[WZ2]=S; pile[WZ3]=jvj+28; 
(*f[843])( );     /*FIGURETOTAL1(A,jvj+5,S,jvj+28)*/
if((x[jvj+28]==135)) goto l20;
l18:x[jvj+25]=t[x[jvj+25]];
goto l17;
l20:x[R]=135 ;z[R]=135;
l21:pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,B,jvj+29)*/
if((x[jvj+29]!=39)) goto l23;
pile[v[22]]=111; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,B,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+30,jvj+3)*/
if((x[jvj+3]==10138)) goto l23;
pile[v[22]]=934; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(934,jvj+3,jvj+4)*/
if((x[jvj+4]==68)) goto l23;
l22:pile[v[22]]=252; pile[WZ1]=S; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(252,S,jvj+31)*/
for(a=x[jvj+31];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l23;
pile[v[22]]=S; pile[WZ1]=252; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(S,252,jvj+3)*/
pile[v[22]]=A; pile[WZ1]=jvj+3; pile[WZ2]=S; pile[WZ3]=jvj+32; 
(*f[843])( );     /*FIGURETOTAL1(A,jvj+3,S,jvj+32)*/
l23:if(x[R]==incon) goto l24;
l27:v[0]=jvj; v[22]-=4; return;
l24:if(x[jvj+32]!=incon) goto l25;
l26:x[R]=134 ;z[R]=134;
goto l27;
l25:if((x[jvj+32]!=135)) goto l26;
x[R]=135 ;z[R]=135;
goto l27;
}
