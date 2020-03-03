#include "dx.h"
void ATOME600T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V6=0;
int V;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=20600;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3794&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+2,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=969; pile[WZ1]=V; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(969,V,jvj+4)*/
l2:if((x[jvj+4]<=0)) goto l4;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[965])( );if(v[102]) goto l3;     /*NORM0(jvj+5,jvj+6)*/
x[jvj+3]=x[jvj+6] ;z[jvj+3]=z[jvj+6];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[760])( );     /*MEMEX0(jvj+3,jvj+5,jvj+7)*/
if((x[jvj+7]==134)) goto l1;
l3:x[jvj+4]=t[x[jvj+4]];
goto l2;
l1:pile[v[22]]=929; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l5;     /*FNDCND0(929,jvj+2,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[235])( );     /*PLUSC2(V4,1006,jvj+3)*/
l5:pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+14)*/
pile[v[22]]=V6; pile[WZ1]=858; pile[WZ2]=jvj+10; 
(*f[46])( );     /*TRI0(V6,858,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+11; 
(*f[189])( );     /*TRI4(jvj+10,v[13],642,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=3794; pile[WZ2]=246; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,3794,246,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=20600; pile[WZ2]=218; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+12,20600,218,jvj+13)*/
pile[v[22]]=jvj+14; pile[WZ1]=(-20); pile[WZ2]=jvj+13; pile[WZ3]=159; pile[WZ4]=jvj+15; 
(*f[298])( );     /*TRIENS1(jvj+14,(-20),jvj+13,159,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+15,1,158,jvj+8)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+8; 
(*f[1296])( );     /*NOUVCONTR0(jvj+3,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+20)*/
pile[v[22]]=V6; pile[WZ1]=858; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(V6,858,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,v[13],642,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=3794; pile[WZ2]=246; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,3794,246,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=20600; pile[WZ2]=218; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+18,20600,218,jvj+19)*/
pile[v[22]]=jvj+20; pile[WZ1]=(-20); pile[WZ2]=jvj+19; pile[WZ3]=159; pile[WZ4]=jvj+21; 
(*f[298])( );     /*TRIENS1(jvj+20,(-20),jvj+19,159,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+21,1,158,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+5; 
(*f[966])( );     /*ELIMINE0(jvj+9,jvj+5)*/
goto l3;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
