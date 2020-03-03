#include "dx.h"
void USS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0;
int X,R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=14;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,X,V)*/
V=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=253; pile[WZ2]=V; 
(*f[735])( );     /*PLUSC4(R,253,V)*/
l1:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,X,jvj+3)*/
if((x[jvj+3]!=39)) goto l4;
pile[v[22]]=114; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(114,X,jvj+4)*/
l2:if((x[jvj+4]<=0)) goto l4;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+5,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=R; 
(*f[1834])( );     /*USS0(jvj+6,R)*/
l3:x[jvj+4]=t[x[jvj+4]];
goto l2;
l4:x[jvj+12]=w[x[jvj+3]][9];
l5:if((x[jvj+12]>0)) goto l6;
if((x[jvj+3]==39)) goto l11;
x[jvj+13]=w[x[jvj+3]][8];
if((x[jvj+3]!=22)) goto l8;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,X,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]==734)) goto l11;
l8:if((x[jvj+13]<=0)) goto l11;
x[jvj+9]=s[x[jvj+13]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+13];
pile[v[22]]=jvj+9; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(jvj+9,X,jvj+10)*/
x[jvj+14]=x[jvj+10] ;z[jvj+14]=z[jvj+10];
l9:if((x[jvj+14]>0)) goto l10;
x[jvj+13]=t[x[jvj+13]];
goto l8;
l6:x[jvj+7]=s[x[jvj+12]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+12];
if(x[jvj+7]==436||x[jvj+7]==111) goto l7;
pile[v[22]]=jvj+7; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+7,X,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=R; 
(*f[1834])( );     /*USS0(jvj+8,R)*/
l7:x[jvj+12]=t[x[jvj+12]];
goto l5;
l10:x[jvj+11]=s[x[jvj+14]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+14];
pile[v[22]]=jvj+11; pile[WZ1]=R; 
(*f[1834])( );     /*USS0(jvj+11,R)*/
x[jvj+14]=t[x[jvj+14]];
goto l9;
l11:v[0]=jvj; v[22]-=2; return;
}
