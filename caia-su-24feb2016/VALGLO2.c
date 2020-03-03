#include "dx.h"
void VALGLO2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V6=0,V12=0,V10=0,V14=0,V11=0,V9=0;
int Z,RN;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=16;
if(v[0]>99700) (*f[6])( );

Z=pile[v[22]]; RN=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
RES=incon;
pile[v[22]]=159; pile[WZ1]=Z; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(159,Z,jvj+1)*/
l1:if((x[jvj+1]<=0)) goto l16;
x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=258; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(258,jvj+2,jvj+3)*/
x[jvj+15]=x[jvj+3] ;z[jvj+15]=z[jvj+3];
l2:if((x[jvj+15]>0)) goto l3;
x[jvj+1]=t[x[jvj+1]];
goto l1;
l3:x[jvj+4]=s[x[jvj+15]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+15];
pile[v[22]]=274; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(274,jvj+4,jvj+5)*/
if((x[jvj+5]!=616)) goto l4;
RES=(-9999999);
l16:pile[v[22]]=0; pile[WZ1]=204; pile[WZ2]=jvj+13; 
(*f[46])( );     /*TRI0(0,204,jvj+13)*/
pile[v[22]]=159; pile[WZ1]=Z; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(159,Z,jvj+8)*/
l6:if((x[jvj+8]>0)) goto l7;
if(RES==incon) goto l12;
l13:pile[v[22]]=274; pile[WZ1]=Z; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(274,Z,jvj+14)*/
pile[v[22]]=RES; pile[WZ1]=jvj+14; pile[WZ2]=RN; 
(*f[1145])( );     /*TRIE0(RES,jvj+14,RN)*/
l15:v[0]=jvj; v[22]-=3; pile[v[22]+2]=RES; v[102]=0;return;
l4:x[jvj+15]=t[x[jvj+15]];
goto l2;
l5:V6=V9;
l11:pile[v[22]]=jvj+13; pile[WZ1]=204; pile[WZ2]=V6; 
(*f[186])( );     /*BTC0(jvj+13,204,V6)*/
l10:x[jvj+16]=t[x[jvj+16]];
l9:if((x[jvj+16]<=0)) goto l8;
x[jvj+11]=s[x[jvj+16]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+16];
pile[v[22]]=117; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+11,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=274; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(274,jvj+11,jvj+12)*/
pile[v[22]]=510; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(510,jvj+12,V14)*/
V14=pile[WZ2]; 
V11=V12*V14;
V9=V10*V11;
V6=incon;
pile[v[22]]=550; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(550,jvj+6,jvj+7)*/
if((x[jvj+7]!=52)) goto l5;
V17=(-V9);
V6=V17;
goto l11;
l7:x[jvj+6]=s[x[jvj+8]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+8];
pile[v[22]]=1002; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1002,jvj+6,jvj+9)*/
pile[v[22]]=610; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(610,jvj+9,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=258; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(258,jvj+6,jvj+10)*/
x[jvj+16]=x[jvj+10] ;z[jvj+16]=z[jvj+10];
goto l9;
l8:x[jvj+8]=t[x[jvj+8]];
goto l6;
l12:pile[v[22]]=204; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(204,jvj+13,RES)*/
RES=pile[WZ2]; 
goto l13;
l14:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
