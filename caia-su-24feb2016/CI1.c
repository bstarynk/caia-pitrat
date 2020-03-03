#include "dx.h"
void CI1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,K=0,V11=0,V22=0,V14=0,V25=0;
int TL;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=14;
if(v[0]>99700) (*f[6])( );

TL=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(302,TL,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
v[0]=jvj; v[22]-=1; return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+2,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=39)) goto l3;
pile[v[22]]=113; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(113,jvj+3,jvj+5)*/
x[jvj+13]=x[jvj+5] ;z[jvj+13]=z[jvj+5];
l4:if((x[jvj+13]>0)) goto l5;
pile[v[22]]=114; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(114,jvj+3,jvj+9)*/
x[jvj+14]=x[jvj+9] ;z[jvj+14]=z[jvj+9];
l7:if((x[jvj+14]<=0)) goto l3;
x[jvj+10]=s[x[jvj+14]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+14];
pile[v[22]]=103; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+10,jvj+11)*/
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+11,V22)*/
V22=pile[WZ2]; 
V14=V22;
V25=V14;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V25; pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(100,21,140,V25,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=103; pile[WZ2]=jvj+12; 
(*f[35])( );     /*CHGC1(jvj+10,103,jvj+12)*/
l8:x[jvj+14]=t[x[jvj+14]];
goto l7;
l3:x[jvj+1]=t[x[jvj+1]];
goto l1;
l5:x[jvj+6]=s[x[jvj+13]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+13];
pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+6,jvj+7)*/
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+7,V8)*/
V8=pile[WZ2]; 
K=V8;
V11=K;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V11; pile[WZ4]=jvj+8; 
(*f[270])( );     /*QUADRI7(100,21,140,V11,jvj+8)*/
pile[v[22]]=jvj+6; pile[WZ1]=103; pile[WZ2]=jvj+8; 
(*f[35])( );     /*CHGC1(jvj+6,103,jvj+8)*/
l6:x[jvj+13]=t[x[jvj+13]];
goto l4;
}
