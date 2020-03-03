#include "dx.h"
void EAFB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RES=0,V10=0,V12=0,V9=0,V11=0;
int BL,R,K,X,MDF,CP,META;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=11041;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==336&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; R=pile[v[22]+1]; K=pile[v[22]+2]; X=pile[v[22]+3]; MDF=pile[v[22]+4]; CP=pile[v[22]+5]; META=pile[v[22]+6]; v[22]+=7; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
RES=incon;
pile[v[22]]=111; pile[WZ1]=K; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,K,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=1156)) goto l1;
pile[v[22]]=102; pile[WZ1]=K; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,K,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=120)) goto l1;
pile[v[22]]=102; pile[WZ1]=K; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,K,jvj+6)*/
l2:x[jvj+7]=x[jvj+6] ;z[jvj+7]=z[jvj+6];
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+7,jvj+8)*/
pile[v[22]]=BL; pile[WZ1]=R; pile[WZ2]=X; pile[WZ3]=104; pile[WZ4]=jvj+8; pile[WZ5]=META; pile[v[22]+6]=jvj+9; 
(*f[452])( );     /*EAFA1(BL,R,X,104,jvj+8,META,jvj+9)*/
pile[v[22]]=218; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(218,jvj+9,jvj+10)*/
if((x[jvj+10]!=67)) goto l3;
RES=67;
l4:if(RES==incon) goto l5;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; return;
l1:pile[v[22]]=META; pile[WZ1]=CP; pile[WZ2]=MDF; pile[WZ3]=R; pile[WZ4]=K; pile[WZ5]=BL; pile[v[22]+6]=X; 
(*f[337])( );     /*EAFA0(META,CP,MDF,R,K,BL,X)*/
goto l8;
l3:pile[v[22]]=120; pile[WZ1]=jvj+7; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(120,jvj+7,jvj+6)*/
goto l2;
l5:if((x[MDF]!=18)) goto l6;
pile[v[22]]=K; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(K,117,1)*/
l6:if(RES==incon) goto l7;
goto l8;
l7:if((x[MDF]==18)) goto l8;
V10=x[BL];
V12=x[R];
pile[v[22]]=20; pile[WZ1]=V10; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V10,0,V9)*/
V9=pile[WZ3]; 
pile[WZ1]=V12; pile[WZ2]=V9; 
(*f[39])( );     /*SDX0(20,V12,V9,V11)*/
V11=pile[WZ3]; 
pile[v[22]]=V11; 
(*f[40])( );     /*SLG0(V11)*/
goto l8;
}
