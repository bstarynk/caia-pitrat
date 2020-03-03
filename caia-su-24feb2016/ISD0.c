#include "dx.h"
void ISD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V21=0,V18=0;
int V,X,R,T;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=15;
if(v[0]>99700) (*f[6])( );

V=pile[v[22]]; X=pile[v[22]+1]; R=pile[v[22]+2]; T=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,X,V12)*/
V12=pile[WZ2]; 
if((V!=V12)) goto l2;
pile[v[22]]=T; pile[WZ1]=128; pile[WZ2]=R; 
(*f[36])( );     /*PLUSC0(T,128,R)*/
l2:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,X,jvj+3)*/
if((x[jvj+3]!=39)) goto l3;
pile[v[22]]=436; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(436,X,jvj+4)*/
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+4,V21)*/
V21=pile[WZ2]; 
if((V21!=V)) goto l3;
pile[v[22]]=T; pile[WZ1]=128; pile[WZ2]=R; 
(*f[36])( );     /*PLUSC0(T,128,R)*/
l3:x[jvj+13]=w[x[jvj+3]][9];
l4:if((x[jvj+13]>0)) goto l5;
x[jvj+14]=w[x[jvj+3]][8];
l7:if((x[jvj+14]<=0)) goto l11;
x[jvj+7]=s[x[jvj+14]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+14];
pile[v[22]]=jvj+7; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+7,X,jvj+8)*/
x[jvj+15]=x[jvj+8] ;z[jvj+15]=z[jvj+8];
l8:if((x[jvj+15]>0)) goto l9;
x[jvj+14]=t[x[jvj+14]];
goto l7;
l1:x[jvj+9]=x[jvj+1] ;z[jvj+9]=z[jvj+1];
l10:pile[v[22]]=V; pile[WZ1]=jvj+9; pile[WZ2]=R; pile[WZ3]=T; 
(*f[2004])( );     /*ISD0(V,jvj+9,R,T)*/
x[jvj+15]=t[x[jvj+15]];
goto l8;
l5:x[jvj+5]=s[x[jvj+13]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+13];
if((x[jvj+5]==436)) goto l6;
pile[v[22]]=jvj+5; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+5,X,jvj+6)*/
pile[v[22]]=V; pile[WZ1]=jvj+6; pile[WZ2]=R; pile[WZ3]=T; 
(*f[2004])( );     /*ISD0(V,jvj+6,R,T)*/
l6:x[jvj+13]=t[x[jvj+13]];
goto l4;
l9:x[jvj+1]=s[x[jvj+15]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+15];
x[jvj+9]=incon;
if((x[jvj+3]!=39)) goto l1;
pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+1,jvj+2)*/
x[jvj+9]=x[jvj+2] ;z[jvj+9]=z[jvj+2];
goto l10;
l11:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,X,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=78)) goto l12;
pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(436,X,jvj+12)*/
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+12,V18)*/
V18=pile[WZ2]; 
if((V!=V18)) goto l12;
pile[v[22]]=T; pile[WZ1]=159; pile[WZ2]=X; 
(*f[36])( );     /*PLUSC0(T,159,X)*/
l12:v[0]=jvj; v[22]-=4; return;
}
