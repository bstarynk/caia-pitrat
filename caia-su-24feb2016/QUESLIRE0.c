#include "dx.h"
void QUESLIRE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,NR=0,K=0,V2=0,A=0,S=0,DF=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=10633;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==500&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V4=bh[v[1]][1];
x[jvj+5]=incon;
if((V4==78)) goto l1;
if((V4==80)) goto l2;
if((V4==84)) goto l3;
if((V4==69)) goto l4;
if((V4==66)) goto l5;
if((V4==83)) goto l6;
if((V4==75)) goto l2;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; v[102]=1;return;
l1:x[jvj+5]=547 ;z[jvj+5]=547;
l7:pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,NR,K)*/
NR=pile[WZ1]; K=pile[WZ2]; 
pile[v[22]]=K; 
(*f[107])( );     /*CRC0(K,V2)*/
V2=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+2; 
(*f[78])( );if(v[102]) goto l10;     /*SMA0(K,64,67,jvj+2)*/
A=V2;
pile[v[22]]=NR; pile[WZ1]=683; pile[WZ2]=jvj+4; 
(*f[46])( );     /*TRI0(NR,683,jvj+4)*/
pile[v[22]]=158; pile[WZ1]=jvj+2; pile[WZ2]=218; pile[WZ3]=jvj+5; pile[WZ4]=jvj+4; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(158,jvj+2,218,jvj+5,jvj+4,R)*/
if((x[jvj+2]==74)) goto l8;
if(x[jvj+2]!=490&&x[jvj+2]!=491&&x[jvj+2]!=1013&&x[jvj+2]!=1014) goto l11;
pile[v[22]]=A; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+3; 
(*f[78])( );if(v[102]) goto l11;     /*SMA0(A,64,67,jvj+3)*/
(*f[107])( );     /*CRC0(A,S)*/
S=pile[WZ1]; 
pile[v[22]]=R; pile[WZ1]=1018; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(R,1018,jvj+3)*/
l9:pile[v[22]]=S; pile[WZ1]=R; 
(*f[321])( );if(v[102]) goto l11;     /*LCANT0(S,R,DF)*/
DF=pile[WZ2]; 
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; v[102]=0;return;
l2:x[jvj+5]=325 ;z[jvj+5]=325;
goto l7;
l3:x[jvj+5]=936 ;z[jvj+5]=936;
goto l7;
l4:x[jvj+5]=876 ;z[jvj+5]=876;
goto l7;
l5:x[jvj+5]=735 ;z[jvj+5]=735;
goto l7;
l6:x[jvj+5]=493 ;z[jvj+5]=493;
goto l7;
l8:S=A;
goto l9;
}
