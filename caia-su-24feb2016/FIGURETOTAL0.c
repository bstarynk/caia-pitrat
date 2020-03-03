#include "dx.h"
void FIGURETOTAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A,B;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=35;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=x[jvj+33]=incon;
pile[v[22]]=101; pile[WZ1]=B; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,B,jvj+1)*/
if((x[A]!=x[jvj+1])) goto l28;
x[R]=135 ;z[R]=135;
l28:pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(250,158,jvj+11)*/
if(x[R]==incon) goto l3;
l21:pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,B,jvj+30)*/
if((x[jvj+30]!=39)) goto l23;
pile[v[22]]=111; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,B,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+31,jvj+4)*/
if((x[jvj+4]==10138)) goto l23;
pile[v[22]]=934; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(934,jvj+4,jvj+5)*/
if((x[jvj+5]==68)) goto l23;
l22:pile[v[22]]=252; pile[WZ1]=jvj+11; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(252,jvj+11,jvj+32)*/
for(a=x[jvj+32];a>0;a=t[a]) if(s[a]==x[jvj+4]) goto l23;
pile[v[22]]=jvj+11; pile[WZ1]=252; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(jvj+11,252,jvj+4)*/
pile[v[22]]=A; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; pile[WZ3]=jvj+33; 
(*f[843])( );     /*FIGURETOTAL1(A,jvj+4,jvj+11,jvj+33)*/
l23:if(x[R]==incon) goto l24;
l27:v[0]=jvj; v[22]-=3; return;
l2:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=B; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+9,B,jvj+10)*/
pile[v[22]]=A; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; pile[WZ3]=jvj+12; 
(*f[843])( );     /*FIGURETOTAL1(A,jvj+10,jvj+11,jvj+12)*/
if((x[jvj+12]==135)) goto l5;
l4:x[jvj+8]=t[x[jvj+8]];
l1:if((x[jvj+8]>0)) goto l2;
pile[v[22]]=114; pile[WZ1]=B; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(114,B,jvj+13)*/
l6:if((x[jvj+13]>0)) goto l7;
x[jvj+17]=d[52];z[jvj+17]=0;
l9:if((x[jvj+17]>0)) goto l10;
pile[v[22]]=105; pile[WZ1]=B; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(105,B,jvj+22)*/
x[jvj+35]=x[jvj+22] ;z[jvj+35]=z[jvj+22];
l13:if((x[jvj+35]<=0)) goto l16;
x[jvj+2]=s[x[jvj+35]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+35];
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]==73)) goto l14;
l15:pile[v[22]]=A; pile[WZ1]=jvj+2; pile[WZ2]=jvj+11; pile[WZ3]=jvj+23; 
(*f[843])( );     /*FIGURETOTAL1(A,jvj+2,jvj+11,jvj+23)*/
if((x[jvj+23]==135)) goto l5;
l14:x[jvj+35]=t[x[jvj+35]];
goto l13;
l3:x[jvj+8]=d[51];z[jvj+8]=0;
goto l1;
l5:x[R]=135 ;z[R]=135;
goto l21;
l7:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=102; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+14,jvj+15)*/
pile[v[22]]=A; pile[WZ1]=jvj+15; pile[WZ2]=jvj+11; pile[WZ3]=jvj+16; 
(*f[843])( );     /*FIGURETOTAL1(A,jvj+15,jvj+11,jvj+16)*/
if((x[jvj+16]==135)) goto l5;
l8:x[jvj+13]=t[x[jvj+13]];
goto l6;
l10:x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=jvj+18; pile[WZ1]=B; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(jvj+18,B,jvj+19)*/
x[jvj+34]=x[jvj+19] ;z[jvj+34]=z[jvj+19];
l11:if((x[jvj+34]>0)) goto l12;
x[jvj+17]=t[x[jvj+17]];
goto l9;
l12:x[jvj+20]=s[x[jvj+34]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+34];
pile[v[22]]=A; pile[WZ1]=jvj+20; pile[WZ2]=jvj+11; pile[WZ3]=jvj+21; 
(*f[843])( );     /*FIGURETOTAL1(A,jvj+20,jvj+11,jvj+21)*/
if((x[jvj+21]==135)) goto l5;
x[jvj+34]=t[x[jvj+34]];
goto l11;
l17:x[jvj+22]=t[x[jvj+22]];
l16:if((x[jvj+22]<=0)) goto l21;
x[jvj+24]=s[x[jvj+22]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+22];
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=73)) goto l17;
x[jvj+26]=d[6];z[jvj+26]=0;
l18:if((x[jvj+26]<=0)) goto l17;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+24; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+27,jvj+24,jvj+28)*/
x[jvj+6]=x[jvj+28] ;z[jvj+6]=z[jvj+28];
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]==20)) goto l19;
l20:pile[v[22]]=A; pile[WZ1]=jvj+6; pile[WZ2]=jvj+11; pile[WZ3]=jvj+29; 
(*f[843])( );     /*FIGURETOTAL1(A,jvj+6,jvj+11,jvj+29)*/
if((x[jvj+29]==135)) goto l5;
l19:x[jvj+26]=t[x[jvj+26]];
goto l18;
l24:if(x[jvj+33]!=incon) goto l25;
l26:x[R]=134 ;z[R]=134;
goto l27;
l25:if((x[jvj+33]!=135)) goto l26;
x[R]=135 ;z[R]=135;
goto l27;
}
