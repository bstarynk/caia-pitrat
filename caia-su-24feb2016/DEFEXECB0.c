#include "dx.h"
void DEFEXECB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V1=0,V25=0,V30=0,V18=0,V19=0,V20=0,V21=0,V22=0,V23=0,V24=0,V26=0,V27=0,V28=0,V29=0,V15=0,V12=0,V11=0,RR=0,DX=0,V14=0,V31=0,V32=0,V33=0,V16=0;
int I,N;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; N=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l5:pile[v[22]]=878; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(878,N,jvj+3)*/
for(i=x[jvj+3],V1=0;i>0;i=t[i],V1++)  ;
if((V1==1)) goto l1;
if((V1<=1)) goto l11;
x[jvj+2]=0 ;z[jvj+2]=0;
x[jvj+9]=x[jvj+3] ;z[jvj+9]=z[jvj+3];
l2:if((x[jvj+9]>0)) goto l3;
V25=x[N];
V30=x[jvj+2];
pile[v[22]]=0; pile[WZ1]=(-9683); 
(*f[37])( );     /*SRA0(0,(-9683),V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=65; 
(*f[249])( );     /*SPC1(V18,65,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=(-9695); 
(*f[37])( );     /*SRA0(V19,(-9695),V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=(-9549); 
(*f[37])( );     /*SRA0(V20,(-9549),V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=(-9699); 
(*f[37])( );     /*SRA0(V21,(-9699),V22)*/
V22=pile[WZ2]; 
pile[v[22]]=V22; pile[WZ1]=(-9546); 
(*f[37])( );     /*SRA0(V22,(-9546),V23)*/
V23=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V25; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(20,V25,V23,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=V24; pile[WZ1]=(-9687); 
(*f[37])( );     /*SRA0(V24,(-9687),V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=(-9693); 
(*f[37])( );     /*SRA0(V26,(-9693),V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V27,58,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V30; pile[WZ2]=V28; 
(*f[39])( );     /*SDX0(23,V30,V28,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; 
(*f[40])( );     /*SLG0(V29)*/
pile[v[22]]=33; 
(*f[346])( );     /*LK1(33)*/
pile[v[22]]=(-1); 
(*f[131])( );     /*SMV0((-1),RR,DX)*/
RR=pile[WZ1]; DX=pile[WZ2]; 
l6:if((x[jvj+3]>0)) goto l7;
pile[v[22]]=68; pile[WZ1]=158; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(68,158,jvj+7)*/
V16=bh[v[1]][0];
if((V16==46)) goto l13;
if((V16==70)) goto l14;
if((V16!=80)) goto l10;
pile[v[22]]=I; pile[WZ1]=N; 
(*f[657])( );     /*DEFEXECB0(I,N)*/
l12:pile[v[22]]=jvj+7; pile[WZ1]=158; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+7,158,67)*/
l10:pile[v[22]]=158; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(158,jvj+7,jvj+8)*/
if((x[jvj+8]!=68)) goto l11;
pile[v[22]]=0; pile[WZ1]=(-9764); 
(*f[37])( );     /*SRA0(0,(-9764),V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=(-9549); 
(*f[37])( );     /*SRA0(V31,(-9549),V32)*/
V32=pile[WZ2]; 
pile[v[22]]=V32; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V32,46,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; 
(*f[40])( );     /*SLG0(V33)*/
goto l5;
l1:if((x[jvj+3]<=0)) goto l11;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=N; pile[WZ1]=jvj+4; pile[WZ2]=I; 
(*f[1055])( );     /*DEFEXECD0(N,jvj+4,I)*/
l11:v[0]=jvj; v[22]-=2; return;
l3:x[jvj+1]=s[x[jvj+9]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+9];
pile[v[22]]=163; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+1,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=V9; 
(*f[331])( );     /*PLUE3(jvj+2,V9)*/
l4:x[jvj+9]=t[x[jvj+9]];
goto l2;
l7:x[jvj+5]=s[x[jvj+3]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+3];
pile[v[22]]=163; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(163,jvj+5,V14)*/
V14=pile[WZ2]; 
if((V14!=RR)) goto l8;
x[jvj+6]=x[jvj+5] ;z[jvj+6]=z[jvj+5];
V15=bh[v[1]][DX];
if((V15!=63)) goto l9;
V12=0;
pile[v[22]]=jvj+5; 
(*f[407])( );     /*SORDONNEES0(jvj+5)*/
pile[v[22]]=V12; 
(*f[656])( );     /*SPLN2(V12,V11)*/
V11=pile[WZ1]; 
pile[v[22]]=V11; 
(*f[288])( );     /*SPLN0(V11)*/
l9:pile[v[22]]=N; pile[WZ1]=jvj+6; pile[WZ2]=I; 
(*f[1055])( );     /*DEFEXECD0(N,jvj+6,I)*/
goto l11;
l8:x[jvj+3]=t[x[jvj+3]];
goto l6;
l13:exit(0);
goto l10;
l14:pile[v[22]]=I; 
(*f[248])( );     /*DEFEXECA0(I)*/
goto l12;
}
