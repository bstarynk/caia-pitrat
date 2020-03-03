#include "dx.h"
void ACHEVE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V9=0,V7=0,V14=0,V13=0;
int X,S,L;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=10;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; S=pile[v[22]+1]; L=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=x[X] ;z[jvj+6]=z[X];
l7:pile[v[22]]=226; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(226,jvj+6,jvj+7)*/
for(i=x[jvj+7],V7=0;i>0;i=t[i],V7++)  ;
if((V7<=1)) goto l8;
V9=L*V7;
if((V9>=100000)) goto l8;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(0,117,jvj+3)*/
x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
l1:if((x[jvj+8]>0)) goto l2;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+3,V5)*/
V5=pile[WZ2]; 
V14=10000*V5;
V13=V14/V9;
x[jvj+9]=x[jvj+7] ;z[jvj+9]=z[jvj+7];
l4:if((x[jvj+9]>0)) goto l5;
pile[v[22]]=S; pile[WZ1]=117; pile[WZ2]=V13; 
(*f[186])( );     /*BTC0(S,117,V13)*/
l8:if((V7!=1)) goto l9;
if((x[jvj+7]<=0)) goto l9;
x[jvj+10]=s[x[jvj+7]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+7];
x[jvj+6]=x[jvj+10] ;z[jvj+6]=z[jvj+10];
goto l7;
l2:x[jvj+1]=s[x[jvj+8]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+8];
pile[v[22]]=867; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(867,jvj+1,jvj+2)*/
if(x[jvj+2]!=493&&x[jvj+2]!=876&&x[jvj+2]!=1336) goto l3;
pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+3,117,1)*/
l3:x[jvj+8]=t[x[jvj+8]];
goto l1;
l5:x[jvj+4]=s[x[jvj+9]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+9];
pile[v[22]]=867; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(867,jvj+4,jvj+5)*/
if((x[jvj+5]!=178)) goto l6;
pile[v[22]]=jvj+4; pile[WZ1]=S; pile[WZ2]=V9; 
(*f[1530])( );     /*ACHEVE1(jvj+4,S,V9)*/
l6:x[jvj+9]=t[x[jvj+9]];
goto l4;
l9:v[0]=jvj; v[22]-=3; return;
}
