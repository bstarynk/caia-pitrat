#include "dx.h"
void ATOME504T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0;
int V;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=20504;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3788&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=202; pile[WZ1]=V; pile[WZ2]=jvj+2; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(202,V,jvj+2)*/
if((x[jvj+2]!=68)) goto l6;
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+3,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=365; pile[WZ1]=V; pile[WZ2]=jvj+4; 
(*f[1969])( );     /*FNDEND0(365,V,jvj+4)*/
pile[v[22]]=489; pile[WZ2]=jvj+5; 
(*f[1969])( );     /*FNDEND0(489,V,jvj+5)*/
x[jvj+24]=x[jvj+5] ;z[jvj+24]=z[jvj+5];
l1:if((x[jvj+24]<=0)) goto l6;
x[jvj+6]=s[x[jvj+24]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+24];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[1029])( );     /*DIFFAPP0(jvj+6,jvj+4,jvj+7)*/
if((x[jvj+7]==135)) goto l4;
l2:x[jvj+24]=t[x[jvj+24]];
goto l1;
l4:x[jvj+25]=x[jvj+5] ;z[jvj+25]=z[jvj+5];
l3:if((x[jvj+25]<=0)) goto l2;
x[jvj+8]=s[x[jvj+25]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+25];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[1029])( );     /*DIFFAPP0(jvj+8,jvj+4,jvj+9)*/
if((x[jvj+9]==135)) goto l7;
l5:x[jvj+25]=t[x[jvj+25]];
goto l3;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l7:pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+16)*/
pile[v[22]]=V8; pile[WZ1]=858; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0(V8,858,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,v[13],642,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=3788; pile[WZ2]=246; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,3788,246,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=20504; pile[WZ2]=218; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+14,20504,218,jvj+15)*/
pile[v[22]]=jvj+16; pile[WZ1]=(-20); pile[WZ2]=jvj+15; pile[WZ3]=159; pile[WZ4]=jvj+17; 
(*f[298])( );     /*TRIENS1(jvj+16,(-20),jvj+15,159,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+17,1,158,jvj+10)*/
pile[v[22]]=489; pile[WZ1]=V; pile[WZ2]=jvj+6; 
(*f[1569])( );     /*DELIER0(489,V,jvj+6,jvj+10)*/
pile[v[22]]=101; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+22)*/
pile[v[22]]=V8; pile[WZ1]=858; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(V8,858,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,v[13],642,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=3788; pile[WZ2]=246; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,3788,246,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=20504; pile[WZ2]=218; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+20,20504,218,jvj+21)*/
pile[v[22]]=jvj+22; pile[WZ1]=(-20); pile[WZ2]=jvj+21; pile[WZ3]=159; pile[WZ4]=jvj+23; 
(*f[298])( );     /*TRIENS1(jvj+22,(-20),jvj+21,159,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+23,1,158,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=365; pile[WZ2]=V; pile[WZ3]=jvj+8; 
(*f[1753])( );     /*LIER1(jvj+11,365,V,jvj+8)*/
goto l5;
}
