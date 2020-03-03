#include "dx.h"
void NATFN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int G=0,V17=0;
int Y,BA;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=11853;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1519&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Y=pile[v[22]]; BA=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1688; pile[WZ1]=Y; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1688,Y,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=1689; pile[WZ1]=Y; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1689,Y,jvj+13)*/
l5:if((x[jvj+13]>0)) goto l6;
pile[v[22]]=1688; pile[WZ1]=Y; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1688,Y,jvj+19)*/
l9:if((x[jvj+19]>0)) goto l10;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=1604)) goto l3;
pile[v[22]]=jvj+3; pile[WZ1]=BA; pile[WZ2]=865; 
(*f[1493])( );     /*NATFNA0(jvj+3,BA,865)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l6:x[jvj+9]=s[x[jvj+13]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+13];
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+9,jvj+14)*/
if((x[jvj+14]!=22)) goto l4;
pile[v[22]]=111; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+9,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+15,jvj+16)*/
V17=x[jvj+16];
if(V17!=1749&&V17!=1905) goto l4;
pile[v[22]]=103; pile[WZ1]=jvj+9; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+9,jvj+17)*/
pile[v[22]]=102; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+9,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=BA; pile[WZ2]=278; 
(*f[1493])( );     /*NATFNA0(jvj+18,BA,278)*/
pile[v[22]]=jvj+17; pile[WZ2]=228; 
(*f[1493])( );     /*NATFNA0(jvj+17,BA,228)*/
l4:pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=22)) goto l8;
pile[v[22]]=111; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+9,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+11,jvj+12)*/
G=x[jvj+12];
if(G==1749||G==1905) goto l7;
l8:pile[v[22]]=jvj+9; pile[WZ1]=BA; pile[WZ2]=228; 
(*f[1493])( );     /*NATFNA0(jvj+9,BA,228)*/
l7:x[jvj+13]=t[x[jvj+13]];
goto l5;
l10:x[jvj+6]=s[x[jvj+19]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+19];
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+6,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]==1604)) goto l11;
l12:pile[v[22]]=jvj+6; pile[WZ1]=BA; pile[WZ2]=865; 
(*f[1493])( );     /*NATFNA0(jvj+6,BA,865)*/
l11:x[jvj+19]=t[x[jvj+19]];
goto l9;
}
