#include "dx.h"
void VOBJ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V14=0,V16=0,V11=0,V12=0,V13=0,V15=0;
int HIST,A,B,C;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=11348;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3040&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
HIST=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; C=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=incon;
pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,B,jvj+4)*/
pile[v[22]]=B; pile[WZ1]=jvj+2; 
(*f[200])( );if(v[102]) goto l2;     /*NDD0(B,jvj+2)*/
l1:pile[v[22]]=A; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(A,jvj+2,jvj+3)*/
if((x[jvj+3]==x[C])) goto l9;
l3:x[jvj+5]=x[jvj+2] ;z[jvj+5]=z[jvj+2];
if((v[111]!=0)) goto l4;
pile[v[22]]=A; pile[WZ1]=HIST; pile[WZ2]=jvj+5; pile[WZ3]=C; 
(*f[1767])( );     /*ARCHIVE3(A,HIST,jvj+5,C)*/
l4:z[jvj+5]=(-1);
pile[v[22]]=jvj+5; pile[WZ1]=A; pile[WZ2]=C; 
(*f[35])( );     /*CHGC1(jvj+5,A,C)*/
if((x[A]!=202)) goto l8;
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=1418; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1418,jvj+9,jvj+10)*/
if((x[jvj+10]!=68)) goto l8;
pile[v[22]]=B; 
(*f[1595])( );     /*CRETUND0(B)*/
if((v[133]<=0)) goto l8;
x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=365; pile[WZ1]=B; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(365,B,jvj+6)*/
l5:if((x[jvj+6]>0)) goto l6;
V14=x[B];
V16=x[jvj+8];
pile[v[22]]=0; pile[WZ1]=5; 
(*f[178])( );     /*SPLO0(0,5,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=11348; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(20,11348,V11,V12)*/
V12=pile[WZ3]; 
pile[WZ1]=V14; pile[WZ2]=V12; 
(*f[39])( );     /*SDX0(20,V14,V12,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V16; pile[WZ2]=V13; 
(*f[39])( );     /*SDX0(23,V16,V13,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=V15; 
(*f[40])( );     /*SLG0(V15)*/
l8:pile[v[22]]=A; pile[WZ1]=jvj+5; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(A,jvj+5,HIST)*/
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l2:x[jvj+2]=x[B] ;z[jvj+2]=z[B];
goto l1;
l6:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+7,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=V10; 
(*f[207])( );     /*PLUE2(jvj+8,V10)*/
l7:x[jvj+6]=t[x[jvj+6]];
goto l5;
}
