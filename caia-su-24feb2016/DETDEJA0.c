#include "dx.h"
void DETDEJA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,VV=0,V=0,V25=0,F=0,V13=0,V43=0,V38=0,V28=0;
int N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=11033;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==305&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,N,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=69)) goto l4;
pile[v[22]]=108; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(108,jvj+2,jvj+4)*/
pile[v[22]]=762; pile[WZ1]=N; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(762,N,jvj+5)*/
l1:if((x[jvj+4]<=0)) goto l4;
x[jvj+6]=s[x[jvj+4]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+4];
pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+6,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+7,V10)*/
V10=pile[WZ2]; 
VV=V10;
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==VV) goto l3;
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l3:pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+6,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=576)) goto l2;
V=VV;
pile[v[22]]=N; pile[WZ1]=757; pile[WZ2]=V; 
(*f[177])( );     /*CHGC4(N,757,V)*/
pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,N,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+18,jvj+19)*/
if((x[jvj+19]!=69)) goto l10;
pile[v[22]]=108; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(108,jvj+18,jvj+20)*/
pile[v[22]]=762; pile[WZ1]=N; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(762,N,jvj+21)*/
l7:if((x[jvj+20]<=0)) goto l10;
x[jvj+22]=s[x[jvj+20]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+20];
pile[v[22]]=103; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+22,jvj+23)*/
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+23,V38)*/
V38=pile[WZ2]; 
V28=V38;
for(a=x[jvj+21];a>0;a=t[a]) if(s[a]==V28) goto l9;
l8:x[jvj+20]=t[x[jvj+20]];
goto l7;
l4:pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,N,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=69)) goto l10;
pile[v[22]]=108; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(108,jvj+10,jvj+12)*/
pile[v[22]]=762; pile[WZ1]=N; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(762,N,jvj+13)*/
l5:if((x[jvj+12]<=0)) goto l10;
x[jvj+14]=s[x[jvj+12]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+12];
pile[v[22]]=103; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+14,jvj+15)*/
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+15,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+14; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+14,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+16,jvj+17)*/
F=x[jvj+17];
if(F!=749&&F!=756) goto l6;
V43=x[jvj+13];
if((V43<=0)) goto l6;
V13=s[V43];
V=V13;
l6:x[jvj+12]=t[x[jvj+12]];
goto l5;
l9:if((V28==V)) goto l8;
pile[v[22]]=102; pile[WZ1]=jvj+22; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+22,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=576)) goto l8;
pile[v[22]]=N; pile[WZ1]=321; pile[WZ2]=V28; 
(*f[177])( );     /*CHGC4(N,321,V28)*/
goto l8;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
