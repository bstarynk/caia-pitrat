#include "dx.h"
void USMC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V58=0,V80=0,V101=0,V96=0,V107=0,V123=0,V115=0,V77=0,V71=0;
int X,P;
int E,H;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=37;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; P=pile[v[22]+1]; E=pile[v[22]+2]; H=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+34]=0 ;z[jvj+34]=0;
x[E]=x[jvj+34] ;z[E]=z[jvj+34];
x[H]=x[jvj+34] ;z[H]=z[jvj+34];
x[jvj+17]=68 ;z[jvj+17]=68;
pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,X,V58)*/
V58=pile[WZ2]; 
if(V58==(-3629)||V58==(-4348)||V58==(-4349)||V58==(-3704)||V58==(-1761)||V58==(-1278)||V58==(-3031)||V58==(-5598)||V58==(-6170)||V58==(-6470)||V58==(-10635)||V58==(-10974)||V58==(-11168)) goto l2;
pile[v[22]]=E; pile[WZ1]=V58; 
(*f[331])( );     /*PLUE3(E,V58)*/
l2:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,X,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=228)) goto l3;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,X,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=228; pile[WZ2]=E; pile[WZ3]=H; pile[WZ4]=P; 
(*f[1115])( );     /*USMC1(jvj+9,228,E,H,P)*/
l3:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,X,jvj+10)*/
if((x[jvj+10]!=22)) goto l4;
pile[v[22]]=1045; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1045,jvj+8,jvj+11)*/
if((x[jvj+11]!=68)) goto l4;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,X,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=278; pile[WZ2]=E; pile[WZ3]=H; pile[WZ4]=P; 
(*f[1115])( );     /*USMC1(jvj+12,278,E,H,P)*/
l4:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,X,jvj+13)*/
x[jvj+35]=w[x[jvj+13]][8];
l5:if((x[jvj+35]>0)) goto l6;
x[jvj+37]=w[x[jvj+13]][9];
l11:if((x[jvj+37]<=0)) goto l14;
x[jvj+18]=s[x[jvj+37]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+37];
if((x[jvj+18]==436)) goto l12;
pile[v[22]]=jvj+18; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+18,X,jvj+19)*/
if((x[jvj+13]!=22)) goto l13;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,X,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+3,jvj+4)*/
x[jvj+1]=x[jvj+4] ;z[jvj+1]=z[jvj+4];
if(x[jvj+1]==228||x[jvj+1]==178) goto l12;
if((x[jvj+18]!=103)) goto l13;
pile[v[22]]=1045; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1045,jvj+1,jvj+2)*/
if((x[jvj+2]==68)) goto l12;
l13:pile[v[22]]=jvj+19; pile[WZ1]=jvj+17; pile[WZ2]=E; pile[WZ3]=H; pile[WZ4]=P; 
(*f[1115])( );     /*USMC1(jvj+19,jvj+17,E,H,P)*/
l12:x[jvj+37]=t[x[jvj+37]];
goto l11;
l1:x[jvj+16]=x[jvj+5] ;z[jvj+16]=z[jvj+5];
l10:pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; pile[WZ2]=E; pile[WZ3]=H; pile[WZ4]=P; 
(*f[1115])( );     /*USMC1(jvj+16,jvj+17,E,H,P)*/
x[jvj+36]=t[x[jvj+36]];
l9:if((x[jvj+36]<=0)) goto l7;
x[jvj+5]=s[x[jvj+36]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+36];
x[jvj+16]=incon;
if((x[jvj+13]!=39)) goto l1;
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+5,jvj+6)*/
x[jvj+16]=x[jvj+6] ;z[jvj+16]=z[jvj+6];
goto l10;
l6:x[jvj+14]=s[x[jvj+35]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+35];
if((x[jvj+14]!=113)) goto l8;
if((x[P]==68)) goto l7;
l8:pile[v[22]]=jvj+14; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(jvj+14,X,jvj+15)*/
x[jvj+36]=x[jvj+15] ;z[jvj+36]=z[jvj+15];
goto l9;
l7:x[jvj+35]=t[x[jvj+35]];
goto l5;
l14:pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(436,X,jvj+20)*/
pile[v[22]]=140; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+20,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=H; pile[WZ1]=V80; 
(*f[331])( );     /*PLUE3(H,V80)*/
l15:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,X,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]==25)) goto l17;
if((x[jvj+22]!=44)) goto l22;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,X,jvj+26)*/
pile[v[22]]=140; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+26,V107)*/
V107=pile[WZ2]; 
pile[v[22]]=H; pile[WZ1]=V107; 
(*f[331])( );     /*PLUE3(H,V107)*/
l19:pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=128)) goto l22;
pile[v[22]]=128; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(128,jvj+26,jvj+28)*/
l20:if((x[jvj+28]<=0)) goto l22;
x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=140; pile[WZ1]=jvj+29; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+29,V123)*/
V123=pile[WZ2]; 
V115=V123;
pile[v[22]]=H; pile[WZ1]=V115; 
(*f[331])( );     /*PLUE3(H,V115)*/
l21:x[jvj+28]=t[x[jvj+28]];
goto l20;
l17:x[jvj+23]=d[20];z[jvj+23]=0;
l16:if((x[jvj+23]<=0)) goto l22;
x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=jvj+24; pile[WZ1]=X; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+24,X,jvj+25)*/
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(140,jvj+25,V101)*/
V101=pile[WZ2]; 
V96=V101;
pile[v[22]]=H; pile[WZ1]=V96; 
(*f[331])( );     /*PLUE3(H,V96)*/
l18:x[jvj+23]=t[x[jvj+23]];
goto l16;
l22:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,X,jvj+30)*/
if((x[jvj+30]!=39)) goto l25;
pile[v[22]]=113; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(113,X,jvj+31)*/
l23:if((x[jvj+31]<=0)) goto l25;
x[jvj+32]=s[x[jvj+31]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+31];
pile[v[22]]=102; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,jvj+32,jvj+33)*/
pile[v[22]]=140; pile[WZ1]=jvj+33; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(140,jvj+33,V77)*/
V77=pile[WZ2]; 
V71=V77;
pile[v[22]]=H; pile[WZ1]=V71; 
(*f[331])( );     /*PLUE3(H,V71)*/
l24:x[jvj+31]=t[x[jvj+31]];
goto l23;
l25:v[0]=jvj; v[22]-=4; return;
}
