#include "dx.h"
void TOUTSQ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V13=0,V14=0,V15=0,V6=0,DFF=0,V7=0,V12=0;
int N;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=10316;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==419&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+7]=incon;
pile[v[22]]=1; 
(*f[107])( );     /*CRC0(1,V2)*/
V2=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+6; 
(*f[78])( );if(v[102]) goto l5;     /*SMA0(1,64,67,jvj+6)*/
x[jvj+11]=incon;
pile[v[22]]=265; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(265,N,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=jvj+6; pile[WZ1]=158; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+6,158,jvj+11)*/
l4:x[jvj+7]=x[jvj+11] ;z[jvj+7]=z[jvj+11];
pile[v[22]]=N; pile[WZ1]=265; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(N,265,jvj+7)*/
l5:
(*f[74])( );     /*LK0()*/
if(x[jvj+7]!=incon) goto l7;
l10:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=158; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(158,jvj+4,jvj+5)*/
if((x[jvj+5]!=x[jvj+6])) goto l3;
x[jvj+11]=x[jvj+4] ;z[jvj+11]=z[jvj+4];
goto l4;
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l6:x[jvj+12]=433 ;z[jvj+12]=433;
l11:pile[v[22]]=jvj+12; pile[WZ1]=158; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(jvj+12,158,jvj+9)*/
pile[v[22]]=0; pile[WZ1]=jvj+9; 
(*f[321])( );if(v[102]) goto l10;     /*LCANT0(0,jvj+9,V7)*/
V7=pile[WZ2]; 
V12=V7+1;
pile[v[22]]=V12; pile[WZ1]=N; pile[WZ2]=jvj+10; 
(*f[777])( );if(v[102]) goto l10;     /*LIRESAUT0(V12,N,jvj+10)*/
V13=bh[v[1]][V7];
if(V13==93||V13==125) goto l9;
pile[v[22]]=20; pile[WZ1]=10316; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10316,0,V14)*/
V14=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V14; 
(*f[39])( );     /*SDX0(41,1,V14,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=V15; 
(*f[40])( );     /*SLG0(V15)*/
l9:pile[v[22]]=jvj+7; pile[WZ1]=120; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(jvj+7,120,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=366; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(jvj+9,366,jvj+10)*/
pile[v[22]]=N; pile[WZ1]=jvj+9; 
(*f[776])( );     /*TOUTSQ1(N,jvj+9)*/
goto l10;
l7:V6=bh[v[1]][0];
if(V6==32||V6==91||V6==123) goto l8;
pile[v[22]]=(-1); pile[WZ1]=N; pile[WZ2]=jvj+8; 
(*f[734])( );if(v[102]) goto l8;     /*LIRESQ0((-1),N,jvj+8,DFF)*/
DFF=pile[WZ3]; 
pile[v[22]]=jvj+7; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+7,120,jvj+8)*/
pile[v[22]]=N; pile[WZ1]=jvj+8; 
(*f[776])( );     /*TOUTSQ1(N,jvj+8)*/
l8:if(V6!=91&&V6!=123) goto l10;
x[jvj+12]=incon;
if((V6==91)) goto l6;
x[jvj+12]=918 ;z[jvj+12]=918;
goto l11;
}
