#include "dx.h"
void POLYDEC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,V24=0,V17=0,I=0,V7=0,V35=0;
int A,K,E;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=19;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; K=pile[v[22]+1]; E=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V35=K;
x[jvj+5]=x[A] ;z[jvj+5]=z[A];
l7:pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=484)) goto l8;
x[jvj+7]=d[194];z[jvj+7]=0;
pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=510; pile[WZ3]=1; pile[WZ4]=jvj+8; 
(*f[391])( );     /*QUADRI10(117,1,510,1,jvj+8)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; pile[WZ2]=E; 
(*f[196])( );     /*PLUF0(jvj+7,jvj+8,E)*/
l8:pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+5,I)*/
I=pile[WZ2]; 
if((I==0)) goto l9;
x[jvj+9]=d[194];z[jvj+9]=0;
pile[v[22]]=117; pile[WZ1]=0; pile[WZ2]=510; pile[WZ3]=I; pile[WZ4]=jvj+10; 
(*f[391])( );     /*QUADRI10(117,0,510,I,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; pile[WZ2]=E; 
(*f[196])( );     /*PLUF0(jvj+9,jvj+10,E)*/
l9:pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+5,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]==486)) goto l10;
if((x[jvj+12]==52)) goto l11;
if((x[jvj+12]!=485)) goto l13;
pile[v[22]]=107; pile[WZ1]=jvj+5; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,jvj+5,jvj+17)*/
l12:if((x[jvj+17]<=0)) goto l13;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=jvj+18; pile[WZ1]=V35; pile[WZ2]=E; 
(*f[3577])( );     /*POLYDEC0(jvj+18,V35,E)*/
x[jvj+17]=t[x[jvj+17]];
goto l12;
l2:x[jvj+1]=s[x[jvj+13]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+13];
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+1,jvj+2)*/
if((x[jvj+2]!=484)) goto l3;
pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+3,117,1)*/
l3:x[jvj+13]=t[x[jvj+13]];
l1:if((x[jvj+13]>0)) goto l2;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+3,V15)*/
V15=pile[WZ2]; 
x[jvj+14]=d[194];z[jvj+14]=0;
pile[WZ1]=V15; pile[WZ2]=510; pile[WZ3]=V17; pile[WZ4]=jvj+15; 
(*f[391])( );     /*QUADRI10(117,V15,510,V17,jvj+15)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=E; 
(*f[196])( );     /*PLUF0(jvj+14,jvj+15,E)*/
l13:v[0]=jvj; v[22]-=3; return;
l5:x[jvj+4]=s[x[jvj+19]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+19];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+4,V24)*/
V24=pile[WZ2]; 
V17=V24;
l14:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(0,117,jvj+3)*/
goto l1;
l6:x[jvj+19]=t[x[jvj+19]];
l4:if((x[jvj+19]>0)) goto l5;
V17=1;
goto l14;
l10:pile[v[22]]=107; pile[WZ1]=jvj+5; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,jvj+5,jvj+13)*/
V17=incon;
x[jvj+19]=x[jvj+13] ;z[jvj+19]=z[jvj+13];
goto l4;
l11:pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+5,jvj+16)*/
V7=(-V35);
x[jvj+5]=x[jvj+16] ;z[jvj+5]=z[jvj+16];
V35=V7;
goto l7;
}
