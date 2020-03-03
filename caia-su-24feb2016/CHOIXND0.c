#include "dx.h"
void CHOIXND0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V14=0,V23=0,V22=0,V19=0,V20=0,V18=0,V24=0,V30=0,V36=0,V32=0,V31=0,V27=0,V25=0,V29=0,V28=0,V7=0,V37=0,V39=0,V40=0,V42=0,V38=0,V41=0,V34=0;
int P;
int H;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=10;
if(v[0]>99700) (*f[6])( );

P=pile[v[22]]; H=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=vo[12];z[jvj+5]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(860,jvj+5,jvj+6)*/
if(x[jvj+6]==228||x[jvj+6]==967||x[jvj+6]==682) goto l6;
pile[v[22]]=226; pile[WZ1]=P; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(226,P,jvj+7)*/
l4:if((x[jvj+7]<=0)) goto l6;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=867; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(867,jvj+8,jvj+9)*/
if((x[jvj+9]!=178)) goto l5;
x[H]=x[jvj+8] ;z[H]=z[jvj+8];
l8:v[0]=jvj; v[22]-=2; v[102]=0;return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=867; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(867,jvj+2,jvj+3)*/
if((x[jvj+3]!=178)) goto l3;
pile[v[22]]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+2)*/
l3:x[jvj+1]=t[x[jvj+1]];
l1:if((x[jvj+1]>0)) goto l2;
if((x[jvj+4]==0)) goto l7;
for(i=x[jvj+4],V13=0;i>0;i=t[i],V13++)  ;
V24=1;
V30=49;
V31=incon;
V36=v[V30];
V32=V36%1000000;
if((V32>0)) goto l12;
V31=137643;
l11:v[V30]=V31;
V27=V13+1;
V25=V27-V24;
V29=v[49]%V25;
V28=V24+V29;
V7=V28;
V14=x[jvj+4];
V23=V7;
V22=V14;
l9:if((V23==1)) goto l10;
if((V23<=1)) goto l7;
if((V22<=0)) goto l7;
V19=t[V22];
if((V19<=0)) goto l7;
V20=V23-1;
V22=V19;
V23=V20;
goto l9;
l5:x[jvj+7]=t[x[jvj+7]];
goto l4;
l6:if(x[jvj+6]!=228&&x[jvj+6]!=967&&x[jvj+6]!=682) goto l7;
x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=226; pile[WZ1]=P; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(226,P,jvj+1)*/
goto l1;
l7:v[0]=jvj; v[22]-=2; v[102]=1;return;
l10:V18=s[V22];
x[jvj+10]=V18 ;z[jvj+10]=(V18<=sepcte) ? V18 : 0;
x[H]=x[jvj+10] ;z[H]=z[jvj+10];
goto l8;
l12:V34=V32%100000;
V41=V32/100000;
V38=V34*10;
V42=V34/10000;
V40=V41+V42;
V39=V40%10;
V37=V38+V39;
V31=V37;
goto l11;
}
