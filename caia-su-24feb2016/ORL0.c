#include "dx.h"
void ORL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int F=0,CC=0,V7=0,V24=0,V28=0,V29=0,V27=0;
int R,NV;
int C;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=10703;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1835&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; NV=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=1; pile[WZ2]=261; pile[WZ3]=1; pile[WZ4]=jvj+8; 
(*f[391])( );     /*QUADRI10(130,1,261,1,jvj+8)*/
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(107,R,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
x[jvj+10]=d[10];z[jvj+10]=0;
l5:if((x[jvj+10]>0)) goto l6;
pile[v[22]]=261; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(261,jvj+8,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+8,V29)*/
V29=pile[WZ2]; 
V27=V28*V29;
C=V27;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=C; v[102]=0;return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=44)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+3,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=21)) goto l4;
pile[v[22]]=jvj+8; pile[WZ1]=130; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+8,130,1)*/
l4:F=x[jvj+5];
if(F!=54&&F!=55&&F!=48&&F!=50) goto l3;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+3,jvj+9)*/
if((x[jvj+9]!=22)) goto l3;
pile[v[22]]=jvj+3; pile[WZ1]=NV; 
(*f[1835])( );if(v[102]) goto l3;     /*ORL0(jvj+3,NV,CC)*/
CC=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=130; pile[WZ2]=CC; 
(*f[186])( );     /*BTC0(jvj+8,130,CC)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l6:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(jvj+11,R,jvj+12)*/
x[jvj+20]=x[jvj+12] ;z[jvj+20]=z[jvj+12];
l7:if((x[jvj+20]>0)) goto l8;
x[jvj+10]=t[x[jvj+10]];
goto l5;
l8:x[jvj+13]=s[x[jvj+20]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+20];
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=39)) goto l9;
pile[v[22]]=111; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+13,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+15,jvj+16)*/
x[jvj+17]=x[jvj+16] ;z[jvj+17]=z[jvj+16];
pile[v[22]]=204; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(204,jvj+17,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=261; pile[WZ2]=V7; 
(*f[186])( );     /*BTC0(jvj+8,261,V7)*/
l9:pile[v[22]]=184; pile[WZ1]=jvj+13; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(184,jvj+13,jvj+18)*/
x[jvj+21]=x[jvj+18] ;z[jvj+21]=z[jvj+18];
l10:if((x[jvj+21]>0)) goto l11;
x[jvj+20]=t[x[jvj+20]];
goto l7;
l11:x[jvj+19]=s[x[jvj+21]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+21];
pile[v[22]]=jvj+19; pile[WZ1]=NV; 
(*f[1835])( );if(v[102]) goto l12;     /*ORL0(jvj+19,NV,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=261; pile[WZ2]=V24; 
(*f[186])( );     /*BTC0(jvj+8,261,V24)*/
l12:x[jvj+21]=t[x[jvj+21]];
goto l10;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
