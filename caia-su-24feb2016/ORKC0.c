#include "dx.h"
void ORKC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V15=0,V1=0,A=0,B=0,V6=0,C=0,V12=0,D=0,V14=0;
int N,XP;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=10713;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2018&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; XP=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
D=incon;
pile[v[22]]=238; pile[WZ1]=N; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(238,N,V1)*/
V1=pile[WZ2]; 
A=68;
l2:pile[v[22]]=XP; pile[WZ1]=728; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(XP,728,68)*/
x[jvj+10]=d[108];z[jvj+10]=0;
l3:if((x[jvj+10]>0)) goto l4;
B=67;
if((A!=68)) goto l8;
V6=x[N];
pile[v[22]]=554; pile[WZ1]=XP; pile[WZ2]=V6; 
(*f[134])( );     /*OTA0(554,XP,V6)*/
l8:pile[v[22]]=248; pile[WZ1]=N; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(248,N,jvj+13)*/
l9:if((x[jvj+13]>0)) goto l10;
C=67;
if((A!=68)) goto l12;
V12=x[N];
pile[v[22]]=563; pile[WZ1]=XP; pile[WZ2]=V12; 
(*f[134])( );     /*OTA0(563,XP,V12)*/
l16:V14=x[N];
pile[v[22]]=673; pile[WZ1]=XP; pile[WZ2]=V14; 
(*f[134])( );     /*OTA0(673,XP,V14)*/
l17:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l1:A=67;
goto l2;
l4:x[jvj+3]=s[x[jvj+10]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+10];
pile[v[22]]=447; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(447,jvj+3,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=N; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(jvj+4,N,V3)*/
V3=pile[WZ2]; 
l5:x[jvj+10]=t[x[jvj+10]];
goto l3;
l6:pile[v[22]]=jvj+3; pile[WZ1]=N; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+3,N,jvj+11)*/
B=68;
if((A!=68)) goto l8;
pile[v[22]]=80; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(80,N,jvj+12)*/
if((x[jvj+12]==68)) goto l8;
l7:pile[v[22]]=XP; pile[WZ1]=554; pile[WZ2]=N; 
(*f[36])( );     /*PLUSC0(XP,554,N)*/
goto l8;
l10:x[jvj+5]=s[x[jvj+13]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+13];
pile[v[22]]=161; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(161,jvj+5,jvj+6)*/
pile[v[22]]=122; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(122,jvj+5,jvj+7)*/
pile[v[22]]=447; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(447,jvj+7,jvj+8)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+8; pile[WZ3]=jvj+9; 
(*f[45])( );if(v[102]) goto l11;     /*FNDZ0(jvj+6,jvj+8,V15,jvj+9)*/
V15=pile[WZ2]; 
x[jvj+13]=t[x[jvj+13]];
goto l9;
l11:C=68;
l12:if((A!=67)) goto l14;
if((B==67)) goto l13;
if((C==67)) goto l13;
pile[v[22]]=437; pile[WZ1]=N; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(437,N,jvj+14)*/
if(x[jvj+14]==135||x[jvj+14]==404) goto l13;
l14:if((C!=68)) goto l15;
if((A!=68)) goto l15;
pile[v[22]]=XP; pile[WZ1]=563; pile[WZ2]=N; 
(*f[36])( );     /*PLUSC0(XP,563,N)*/
l15:if(D==incon) goto l16;
if((D==67)) goto l16;
if((D!=68)) goto l17;
pile[v[22]]=XP; pile[WZ1]=673; pile[WZ2]=N; 
(*f[36])( );     /*PLUSC0(XP,673,N)*/
goto l17;
l13:D=68;
goto l14;
}
