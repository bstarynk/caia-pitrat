#include "dx.h"
void ATOME597T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,X=0,V9=0,V5=0;
int V;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=20597;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3807&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=202; pile[WZ1]=V; pile[WZ2]=jvj+7; 
(*f[1948])( );if(v[102]) goto l5;     /*FNDOND0(202,V,jvj+7)*/
if((x[jvj+7]!=68)) goto l5;
V6=0;
pile[v[22]]=509; pile[WZ2]=jvj+3; 
(*f[1969])( );     /*FNDEND0(509,V,jvj+3)*/
pile[v[22]]=V; pile[WZ1]=jvj+4; 
(*f[1290])( );if(v[102]) goto l4;     /*DEPEXP0(V,jvj+4)*/
l1:if((x[jvj+3]<=0)) goto l4;
x[jvj+5]=s[x[jvj+3]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+3];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[3806])( );if(v[102]) goto l2;     /*DEFINEDBY0(jvj+5,jvj+4,jvj+6)*/
V9=x[jvj+6];
l3:if((V9<=0)) goto l2;
X=s[V9];
;
V9=t[V9];
goto l3;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:for(i=V6,V5=0;i>0;i=t[i],V5++)  ;
if((V5<2)) goto l5;
pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+13)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(206,715,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+10; 
(*f[189])( );     /*TRI4(jvj+9,v[13],642,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=3805; pile[WZ2]=246; pile[WZ3]=jvj+11; 
(*f[189])( );     /*TRI4(jvj+10,3805,246,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=20597; pile[WZ2]=218; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+11,20597,218,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=(-20); pile[WZ2]=jvj+12; pile[WZ3]=159; pile[WZ4]=jvj+14; 
(*f[298])( );     /*TRIENS1(jvj+13,(-20),jvj+12,159,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=289; pile[WZ2]=158; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+14,289,158,jvj+8)*/
pile[v[22]]=jvj+8; 
(*f[481])( );     /*STOCKER0(jvj+8)*/
l5:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
