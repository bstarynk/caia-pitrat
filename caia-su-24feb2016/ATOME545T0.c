#include "dx.h"
void ATOME545T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V4=0,V14=0,V10=0;
int V;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=20545;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3790&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+2,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=509; pile[WZ1]=V; pile[WZ2]=jvj+6; 
(*f[1969])( );     /*FNDEND0(509,V,jvj+6)*/
l4:if((x[jvj+6]<=0)) goto l7;
x[jvj+4]=s[x[jvj+6]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+6];
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V7; 
(*f[207])( );     /*PLUE2(jvj+3,V7)*/
l1:pile[v[22]]=1006; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1006,jvj+4,jvj+5)*/
V14=x[jvj+5];
l2:if((V14>0)) goto l3;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+7; 
(*f[965])( );if(v[102]) goto l5;     /*NORM0(jvj+4,jvj+7)*/
x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[760])( );     /*MEMEX0(jvj+8,jvj+4,jvj+9)*/
if((x[jvj+9]==134)) goto l6;
l5:x[jvj+6]=t[x[jvj+6]];
goto l4;
l3:V4=s[V14];
pile[v[22]]=jvj+3; pile[WZ1]=V4; 
(*f[207])( );     /*PLUE2(jvj+3,V4)*/
V14=t[V14];
goto l2;
l6:pile[v[22]]=jvj+8; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+8,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+16)*/
pile[v[22]]=V10; pile[WZ1]=858; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0(V10,858,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,v[13],642,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=3790; pile[WZ2]=246; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,3790,246,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=20545; pile[WZ2]=218; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+14,20545,218,jvj+15)*/
pile[v[22]]=jvj+16; pile[WZ1]=(-20); pile[WZ2]=jvj+15; pile[WZ3]=159; pile[WZ4]=jvj+17; 
(*f[298])( );     /*TRIENS1(jvj+16,(-20),jvj+15,159,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+17,1,158,jvj+10)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+10; 
(*f[1296])( );     /*NOUVCONTR0(jvj+8,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+22)*/
pile[v[22]]=V10; pile[WZ1]=858; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(V10,858,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,v[13],642,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=3790; pile[WZ2]=246; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,3790,246,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=20545; pile[WZ2]=218; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+20,20545,218,jvj+21)*/
pile[v[22]]=jvj+22; pile[WZ1]=(-20); pile[WZ2]=jvj+21; pile[WZ3]=159; pile[WZ4]=jvj+23; 
(*f[298])( );     /*TRIENS1(jvj+22,(-20),jvj+21,159,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+23,1,158,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+4; 
(*f[966])( );     /*ELIMINE0(jvj+11,jvj+4)*/
goto l5;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
