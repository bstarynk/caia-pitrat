#include "dx.h"
void VARCONNU0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VB=0,V10=0,V=0,K=0,VV=0,V18=0;
int X,E;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; E=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=X; pile[WZ1]=jvj+1; 
(*f[703])( );     /*USW0(X,jvj+1)*/
l1:if((x[jvj+1]<=0)) goto l9;
VB=s[x[jvj+1]];
if((VB==(-3629))) goto l2;
if((VB==(-6470))) goto l2;
if((VB==(-4349))) goto l2;
for(a=x[E];a>0;a=t[a]) if(s[a]==VB) goto l2;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,X,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=50)) goto l10;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,X,jvj+11)*/
x[jvj+12]=x[jvj+11] ;z[jvj+12]=z[jvj+11];
l3:if((x[jvj+12]<=0)) goto l10;
x[jvj+2]=s[x[jvj+12]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+12];
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=22)) goto l4;
pile[v[22]]=102; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+2,jvj+4)*/
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+4,V10)*/
V10=pile[WZ2]; 
V=V10;
for(a=x[E];a>0;a=t[a]) if(s[a]==V) goto l4;
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+2,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+5,jvj+6)*/
K=x[jvj+6];
if(K==25||K==44) goto l5;
l4:x[jvj+12]=t[x[jvj+12]];
goto l3;
l2:x[jvj+1]=t[x[jvj+1]];
goto l1;
l7:VV=s[V18];
if((VV==V)) goto l8;
if((VV==(-3629))) goto l8;
for(a=x[E];a>0;a=t[a]) if(s[a]==VV) goto l8;
l10:x[RES]=67 ;z[RES]=67;
l11:v[0]=jvj; v[22]-=3; return;
l8:V18=t[V18];
l6:if((V18>0)) goto l7;
x[jvj+11]=t[x[jvj+11]];
l5:if((x[jvj+11]<=0)) goto l9;
x[jvj+7]=s[x[jvj+11]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+11];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[703])( );     /*USW0(jvj+7,jvj+8)*/
V18=x[jvj+8];
goto l6;
l9:x[RES]=68 ;z[RES]=68;
goto l11;
}
