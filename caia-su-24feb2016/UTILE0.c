#include "dx.h"
void UTILE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,V23=0,V17=0,V10=0,V7=0,V12=0,V20=0,V3=0,T=0,V5=0,V21=0;
int K,X;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=10505;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1183&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
K=pile[v[22]]; X=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V23=K;
l5:V20=tu[V23];
if((V20<=0)) goto l6;
pile[v[22]]=V23; pile[WZ1]=V20; 
(*f[1472])( );     /*MONTE0(V23,V20)*/
l6:if((V20!=0)) goto l8;
V3=tt[V23];
x[jvj+6]=V3 ;z[jvj+6]=(V3<=sepcte) ? V3 : 0;
if((X!=0)) goto l1;
if(x[jvj+6]==904||x[jvj+6]==489||x[jvj+6]==580||x[jvj+6]==688||x[jvj+6]==750||x[jvj+6]==472||x[jvj+6]==473||x[jvj+6]==480||x[jvj+6]==481||x[jvj+6]==859||x[jvj+6]==365||x[jvj+6]==875) goto l7;
l1:if(x[jvj+6]!=280&&x[jvj+6]!=164) goto l8;
if((X!=0)) goto l7;
l8:if((V23>0)) goto l9;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l7:pile[v[22]]=855; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(855,jvj+6,T)*/
T=pile[WZ2]; 
V5=tn[V23];
tu[V23]=V23;
pile[v[22]]=V5; pile[WZ1]=V23; 
(*f[1472])( );     /*MONTE0(V5,V23)*/
if((T<1)) goto l8;
pile[v[22]]=849; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(849,jvj+6,jvj+7)*/
if((x[jvj+7]!=20)) goto l4;
V10=ta1[V23];
x[jvj+8]=V10 ;z[jvj+8]=(V10<=sepcte) ? V10 : 0;
pile[v[22]]=746; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(746,jvj+8,jvj+9)*/
pile[v[22]]=642; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+9,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; pile[WZ1]=V23; 
(*f[1472])( );     /*MONTE0(V7,V23)*/
l4:if((T<2)) goto l8;
V12=ta2[V23];
if((V12<=0)) goto l8;
x[jvj+2]=V12 ;z[jvj+2]=(V12<=sepcte) ? V12 : 0;
pile[v[22]]=852; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(852,jvj+6,jvj+10)*/
if((x[jvj+10]!=20)) goto l8;
pile[v[22]]=1081; pile[WZ1]=jvj+2; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1081,jvj+2,jvj+11)*/
if((x[jvj+11]!=0)) goto l2;
pile[v[22]]=746; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(746,jvj+2,jvj+3)*/
pile[v[22]]=642; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+3,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=V23; 
(*f[1472])( );     /*MONTE0(V15,V23)*/
goto l8;
l9:V21=V23-1;
V23=V21;
goto l5;
l2:if((x[jvj+11]<=0)) goto l8;
x[jvj+4]=s[x[jvj+11]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+11];
pile[v[22]]=746; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(746,jvj+4,jvj+5)*/
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+5,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=V23; 
(*f[1472])( );     /*MONTE0(V17,V23)*/
l3:x[jvj+11]=t[x[jvj+11]];
goto l2;
}
