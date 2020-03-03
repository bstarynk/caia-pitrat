#include "dx.h"
void CRECOMBI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0;
int EE,P,S;
int EY;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=11377;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3751&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
EE=pile[v[22]]; P=pile[v[22]+1]; S=pile[v[22]+2]; EY=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+13]=x[EY]=incon;
x[jvj+25]=0 ;z[jvj+25]=0;
x[EY]=x[jvj+25] ;z[EY]=z[jvj+25];
pile[v[22]]=S; pile[WZ1]=jvj+3; 
(*f[4013])( );if(v[102]) goto l7;     /*COMBI0(S,jvj+3)*/
if((x[jvj+3]!=68)) goto l7;
x[jvj+13]=0 ;z[jvj+13]=0;
x[jvj+4]=d[119];z[jvj+4]=0;
x[jvj+6]=x[S] ;z[jvj+6]=z[S];
l1:x[jvj+5]=x[jvj+6] ;z[jvj+5]=z[jvj+6];
pile[v[22]]=459; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(459,jvj+5,jvj+7)*/
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,jvj+7,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=218; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+5,jvj+8)*/
pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+8,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[1290])( );if(v[102]) goto l2;     /*DEPEXP0(jvj+9,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1280; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,1280,jvj+18)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=P; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,P,jvj+20)*/
pile[WZ3]=V10; pile[WZ4]=jvj+16; 
(*f[192])( );     /*QUADRI4(100,41,130,V10,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=160; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,160,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; pile[WZ2]=111; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+17,jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=103; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+19,jvj+20,103,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+21; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+11,jvj+21,jvj+12)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[196])( );     /*PLUF0(jvj+4,jvj+12,jvj+13)*/
l2:pile[v[22]]=120; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(120,jvj+5,jvj+6)*/
goto l1;
l3:if(x[jvj+13]!=incon) goto l4;
l6:if(x[EY]!=incon) goto l7;
l5:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l4:pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[299])( );     /*COPEL0(jvj+13,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=111; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,111,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+14; pile[WZ2]=107; pile[WZ3]=jvj+24; 
(*f[301])( );     /*TRI11(jvj+23,jvj+14,107,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+24,22,100,jvj+15)*/
pile[v[22]]=EY; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(EY,jvj+15)*/
pile[v[22]]=S; pile[WZ1]=EY; pile[WZ2]=P; 
(*f[4031])( );     /*CRECOMBI1(S,EY,P)*/
goto l6;
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
}
