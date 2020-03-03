#include "dx.h"
void SORSOL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,T=0,V1=0,V20=0,V21=0,J=0,V5=0,V8=0,V24=0,V25=0,V26=0,I=0,A=0,V30=0,V10=0,V9=0,V17=0,B=0,V31=0,V11=0,V18=0,C=0,V34=0,V13=0,V28=0,V38=0;
int X;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=256; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(256,X,jvj+1)*/
V2=x[jvj+1];
T=V2;
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(493,X,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,0,493,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=V20; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V20,58,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V1; pile[WZ2]=V21; 
(*f[39])( );     /*SDX0(41,V1,V21,J)*/
J=pile[WZ3]; 
if((T==0)) goto l11;
if((T<=0)) goto l6;
V5=s[T];
x[jvj+2]=V5 ;z[jvj+2]=(V5<=sepcte) ? V5 : 0;
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=436; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(436,jvj+2,jvj+4)*/
V8=t[T];
pile[v[22]]=J; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(J,44,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V24; pile[WZ1]=jvj+4; 
(*f[344])( );if(v[102]) goto l6;     /*XX1(V24,jvj+4,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V25,61,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=jvj+3; 
(*f[344])( );if(v[102]) goto l6;     /*XX1(V26,jvj+3,I)*/
I=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=I; 
(*f[1726])( );     /*SORSOL1(V8,I)*/
l6:pile[v[22]]=1051; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1051,X,jvj+7)*/
l7:if((x[jvj+7]>0)) goto l8;
v[0]=jvj; v[22]-=1; return;
l1:V9=V10;
l2:V11=incon;
pile[v[22]]=510; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(510,jvj+5,V17)*/
V17=pile[WZ2]; 
B=V17;
pile[v[22]]=135; pile[WZ1]=V9; pile[WZ2]=297; 
(*f[42])( );     /*SRA1(135,V9,297,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=B; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(41,B,V31,V11)*/
V11=pile[WZ3]; 
l4:V13=incon;
pile[v[22]]=515; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(515,jvj+5,V18)*/
V18=pile[WZ2]; 
C=V18;
pile[v[22]]=135; pile[WZ1]=V11; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V11,493,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=C; pile[WZ2]=V34; 
(*f[39])( );     /*SDX0(41,C,V34,V13)*/
V13=pile[WZ3]; 
l10:pile[v[22]]=V13; 
(*f[40])( );     /*SLG0(V13)*/
l9:x[jvj+7]=t[x[jvj+7]];
goto l7;
l3:V11=V9;
goto l4;
l5:V13=V11;
goto l10;
l8:x[jvj+5]=s[x[jvj+7]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+7];
pile[v[22]]=158; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(158,jvj+5,jvj+8)*/
pile[v[22]]=135; pile[WZ1]=0; 
(*f[42])( );     /*SRA1(135,0,jvj+8,V10)*/
V10=pile[WZ3]; 
V9=incon;
pile[v[22]]=208; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(208,jvj+5,jvj+6)*/
A=x[jvj+6];
V30=A;
pile[v[22]]=20; pile[WZ1]=V30; pile[WZ2]=V10; 
(*f[39])( );     /*SDX0(20,V30,V10,V9)*/
V9=pile[WZ3]; 
goto l2;
l11:V28=0;
V38=J;
if((V38<0)) goto l6;
pile[v[22]]=V38; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V38,3)*/
goto l6;
}
