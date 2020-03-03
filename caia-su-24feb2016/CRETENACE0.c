#include "dx.h"
void CRETENACE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V5=0;
int N,M;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=10961;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==424&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; M=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(645,597,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=M; pile[WZ1]=683; pile[WZ2]=jvj+4; 
(*f[46])( );     /*TRI0(M,683,jvj+4)*/
pile[v[22]]=597; pile[WZ1]=645; 
(*f[36])( );     /*PLUSC0(597,645,jvj+4)*/
l4:pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(645,597,jvj+5)*/
l5:if((x[jvj+5]<=0)) goto l9;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=683; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(683,jvj+6,V5)*/
V5=pile[WZ2]; 
if((V5!=N)) goto l6;
pile[v[22]]=265; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(265,jvj+6,jvj+7)*/
l7:if((x[jvj+7]<=0)) goto l9;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=158; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(158,jvj+8,jvj+9)*/
pile[v[22]]=120; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(120,jvj+8,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
pile[v[22]]=120; pile[WZ2]=158; pile[WZ3]=jvj+9; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(120,jvj+11,158,jvj+9,jvj+12)*/
pile[v[22]]=jvj+4; pile[WZ1]=265; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+4,265,jvj+12)*/
l8:x[jvj+7]=t[x[jvj+7]];
goto l7;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=683; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(683,jvj+3,V2)*/
V2=pile[WZ2]; 
if((V2!=M)) goto l3;
x[jvj+4]=x[jvj+3] ;z[jvj+4]=z[jvj+3];
pile[v[22]]=265; 
(*f[71])( );     /*ENLV0(265,jvj+3)*/
goto l4;
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l6:x[jvj+5]=t[x[jvj+5]];
goto l5;
l9:pile[v[22]]=265; pile[WZ1]=jvj+4; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(265,jvj+4,jvj+13)*/
l10:if((x[jvj+13]>0)) goto l11;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l11:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=120; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(120,jvj+14,jvj+15)*/
x[jvj+16]=d[12];z[jvj+16]=0;
l13:if((x[jvj+16]<=0)) goto l12;
x[jvj+19]=s[x[jvj+16]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+16];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+19; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+19,jvj+17)*/
pile[WZ3]=989; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,989,jvj+18)*/
pile[v[22]]=68; pile[WZ1]=jvj+18; pile[WZ2]=38; pile[WZ3]=jvj+15; pile[WZ4]=jvj+17; pile[WZ5]=597; pile[v[22]+6]=jvj+15; 
(*f[337])( );     /*EAFA0(68,jvj+18,38,jvj+15,jvj+17,597,jvj+15)*/
x[jvj+16]=t[x[jvj+16]];
goto l13;
l12:x[jvj+13]=t[x[jvj+13]];
goto l10;
}
