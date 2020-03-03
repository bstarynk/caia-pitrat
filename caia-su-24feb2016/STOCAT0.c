#include "dx.h"
void STOCAT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V3=0,V7=0,V8=0,V6=0,V4=0;
int BL,NR,E;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=9;
x[jvj+1]=11151;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==782&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; NR=pile[v[22]+1]; E=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1212; pile[WZ1]=BL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1212,BL,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=NR; pile[WZ1]=683; pile[WZ2]=jvj+4; 
(*f[46])( );     /*TRI0(NR,683,jvj+4)*/
pile[v[22]]=BL; pile[WZ1]=1212; 
(*f[36])( );     /*PLUSC0(BL,1212,jvj+4)*/
pile[v[22]]=1001; pile[WZ1]=BL; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1001,BL,jvj+6)*/
l6:if((x[jvj+6]>0)) goto l7;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=683; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(683,jvj+3,V2)*/
V2=pile[WZ2]; 
if((V2!=NR)) goto l3;
V3=x[jvj+3];
pile[v[22]]=1212; pile[WZ1]=BL; pile[WZ2]=V3; 
(*f[134])( );     /*OTA0(1212,BL,V3)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:pile[v[22]]=737; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(737,jvj+5,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=737; pile[WZ2]=V7; 
(*f[186])( );     /*BTC0(jvj+4,737,V7)*/
l5:pile[v[22]]=846; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(846,jvj+5,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=846; pile[WZ2]=V8; 
(*f[186])( );     /*BTC0(jvj+4,846,V8)*/
l8:x[jvj+6]=t[x[jvj+6]];
goto l6;
l7:x[jvj+5]=s[x[jvj+6]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+6];
pile[v[22]]=683; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(683,jvj+5,V6)*/
V6=pile[WZ2]; 
if((V6!=NR)) goto l8;
x[jvj+9]=x[E] ;z[jvj+9]=z[E];
l11:if((x[jvj+9]>0)) goto l13;
V4=134;
l9:if((V4==135)) goto l4;
goto l8;
l12:V4=135;
goto l9;
l13:x[jvj+7]=s[x[jvj+9]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+9];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[806])( );     /*EQVALSYM0(jvj+7,jvj+5,jvj+8)*/
if((x[jvj+8]==135)) goto l12;
x[jvj+9]=t[x[jvj+9]];
goto l11;
}
