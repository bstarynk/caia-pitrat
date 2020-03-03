#include "dx.h"
void ATOME211T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V11=0,V5=0;
int D;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=20211;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3503&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1287; pile[WZ1]=D; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1287,D,jvj+12)*/
if((x[jvj+12]!=0)) goto l9;
pile[v[22]]=202; pile[WZ2]=jvj+13; 
(*f[1948])( );if(v[102]) goto l9;     /*FNDOND0(202,D,jvj+13)*/
if((x[jvj+13]!=68)) goto l9;
x[jvj+6]=0 ;z[jvj+6]=0;
pile[v[22]]=365; pile[WZ2]=jvj+3; 
(*f[1969])( );     /*FNDEND0(365,D,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
for(i=x[jvj+6],V5=0;i>0;i=t[i],V5++)  ;
if((V5>=20)) goto l9;
x[jvj+11]=0 ;z[jvj+11]=0;
l4:if((x[jvj+6]>0)) goto l5;
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+19)*/
pile[v[22]]=602; pile[WZ1]=715; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(602,715,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,v[13],642,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=3500; pile[WZ2]=246; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,3500,246,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=20211; pile[WZ2]=218; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+17,20211,218,jvj+18)*/
pile[v[22]]=jvj+19; pile[WZ1]=(-20); pile[WZ2]=jvj+18; pile[WZ3]=159; pile[WZ4]=jvj+20; 
(*f[298])( );     /*TRIENS1(jvj+19,(-20),jvj+18,159,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=289; pile[WZ2]=158; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+20,289,158,jvj+14)*/
pile[v[22]]=jvj+14; 
(*f[481])( );     /*STOCKER0(jvj+14)*/
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+4,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=jvj+5; 
(*f[1007])( );if(v[102]) goto l3;     /*DECFACTPREM0(V8,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=1260; pile[WZ2]=jvj+7; 
(*f[300])( );     /*TRI10(jvj+5,1260,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+7)*/
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l5:x[jvj+8]=s[x[jvj+6]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+6];
pile[v[22]]=1260; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1260,jvj+8,jvj+9)*/
x[jvj+21]=x[jvj+9] ;z[jvj+21]=z[jvj+9];
l6:if((x[jvj+21]>0)) goto l7;
x[jvj+6]=t[x[jvj+6]];
goto l4;
l7:x[jvj+10]=s[x[jvj+21]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+21];
pile[v[22]]=510; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(510,jvj+10,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=jvj+11; pile[WZ1]=V11; 
(*f[207])( );     /*PLUE2(jvj+11,V11)*/
l8:x[jvj+21]=t[x[jvj+21]];
goto l6;
}
