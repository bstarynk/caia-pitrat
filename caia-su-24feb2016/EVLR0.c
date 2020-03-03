#include "dx.h"
void EVLR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int W=0,RR=0;
int TL,X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

TL=pile[v[22]]; X=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=525; pile[WZ1]=TL; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(525,TL,jvj+7)*/
if((x[jvj+7]==0)) goto l5;
pile[v[22]]=753; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(753,TL,jvj+4)*/
if((x[jvj+4]!=0)) goto l4;
x[jvj+3]=0 ;z[jvj+3]=0;
x[jvj+1]=d[1];z[jvj+1]=0;
l1:if((x[jvj+7]>0)) goto l2;
pile[v[22]]=TL; pile[WZ1]=753; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(TL,753,jvj+3)*/
l4:pile[v[22]]=753; pile[WZ1]=TL; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(753,TL,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[195])( );     /*CPE0(jvj+5,jvj+6)*/
pile[v[22]]=X; pile[WZ1]=128; pile[WZ2]=jvj+6; 
(*f[34])( );     /*CHGC0(X,128,jvj+6)*/
l5:v[0]=jvj; v[22]-=2; return;
l2:W=s[x[jvj+7]];
pile[v[22]]=W; 
(*f[194])( );if(v[102]) goto l3;     /*MNV0(W,RR)*/
RR=pile[WZ1]; 
pile[v[22]]=(-200); pile[WZ1]=416; pile[WZ2]=jvj+8; 
(*f[46])( );     /*TRI0((-200),416,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=41; pile[WZ2]=158; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+8,41,158,jvj+9)*/
pile[v[22]]=130; pile[WZ1]=RR; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+9; pile[WZ5]=jvj+2; 
(*f[197])( );     /*QUADRI5(130,RR,140,W,jvj+9,jvj+2)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[196])( );     /*PLUF0(jvj+1,jvj+2,jvj+3)*/
l3:x[jvj+7]=t[x[jvj+7]];
goto l1;
}
