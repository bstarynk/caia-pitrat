#include "dx.h"
void SORATT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V3=0,V5=0,V4=0,K=0,M=0,V7=0,AT=0,V9=0,BT=0,V10=0,V13=0,V11=0,V20=0,V22=0,V19=0,V21=0,V15=0,V18=0,V16=0,V24=0,V26=0,V23=0,V25=0;
int L;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=10880;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==158&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
AT=BT=incon;
V2=L+1;
V1=V2+1;
V3=bh[v[1]][V1];
V5=V1+1;
V4=bh[v[1]][V5];
K=V3;
M=V4;
if((K==69)) goto l3;
pile[v[22]]=256; pile[WZ1]=100; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(256,100,jvj+2)*/
l1:if((x[jvj+2]<=0)) goto l14;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=162; pile[WZ1]=jvj+3; 
(*f[219])( );if(v[102]) goto l2;     /*FNDC2(162,jvj+3,V7)*/
V7=pile[WZ2]; 
if((K!=V7)) goto l2;
AT=x[jvj+3];
if((K==69)) goto l3;
l8:V10=1;
l7:if((V10>sepbase)) goto l10;
V13=r[V10];
if((V13!=1)) goto l9;
if((V11=w[V10][1])==incon) goto l9;
if((V11!=AT)) goto l9;
V20=V10;
V22=V10;
pile[v[22]]=41; pile[WZ1]=V20; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V20,0,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V22; pile[WZ2]=V19; 
(*f[39])( );     /*SDX0(20,V22,V19,V21)*/
V21=pile[WZ3]; 
pile[v[22]]=V21; 
(*f[40])( );     /*SLG0(V21)*/
l9:V10++;
goto l7;
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
l3:pile[v[22]]=256; pile[WZ1]=100; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(256,100,jvj+4)*/
l4:if((x[jvj+4]<=0)) goto l6;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=162; pile[WZ1]=jvj+5; 
(*f[219])( );if(v[102]) goto l5;     /*FNDC2(162,jvj+5,V9)*/
V9=pile[WZ2]; 
if((M!=V9)) goto l5;
BT=x[jvj+5];
l6:if(AT!=incon) goto l8;
l10:if(BT!=incon) goto l12;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l5:x[jvj+4]=t[x[jvj+4]];
goto l4;
l12:V15=1;
l11:if((V15>sepbase)) goto l14;
V18=r[V15];
if((V18!=1)) goto l13;
if((V16=w[V15][2])==incon) goto l13;
if((V16!=BT)) goto l13;
V24=V15;
V26=V15;
pile[v[22]]=41; pile[WZ1]=V24; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V24,0,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V26; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(20,V26,V23,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; 
(*f[40])( );     /*SLG0(V25)*/
l13:V15++;
goto l11;
}
