#include "dx.h"
void CHEROBJ1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X,R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=26;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=101; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,X,jvj+9)*/
pile[v[22]]=R; pile[WZ1]=jvj+9; 
(*f[68])( );     /*PLUE0(R,jvj+9)*/
l7:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,X,jvj+10)*/
x[jvj+25]=w[x[jvj+10]][9];
x[jvj+23]=incon;
if((x[jvj+10]!=22)) goto l3;
pile[v[22]]=111; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,X,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+4,jvj+1)*/
x[jvj+3]=incon;
if((x[jvj+1]!=650)) goto l1;
pile[v[22]]=20; pile[WZ1]=103; pile[WZ2]=jvj+3; 
(*f[409])( );     /*TRI14(20,103,jvj+3)*/
l2:if((x[jvj+3]==(-99999998))) goto l3;
x[jvj+23]=x[jvj+3] ;z[jvj+23]=z[jvj+3];
l8:x[jvj+21]=x[jvj+23] ;z[jvj+21]=z[jvj+23];
x[jvj+26]=w[x[jvj+10]][8];
x[jvj+24]=incon;
if((x[jvj+10]!=22)) goto l6;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,X,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+8,jvj+5)*/
x[jvj+7]=incon;
if((x[jvj+5]!=649)) goto l4;
pile[v[22]]=20; pile[WZ1]=107; pile[WZ2]=jvj+7; 
(*f[409])( );     /*TRI14(20,107,jvj+7)*/
l5:if((x[jvj+7]==(-99999998))) goto l6;
x[jvj+24]=x[jvj+7] ;z[jvj+24]=z[jvj+7];
l9:x[jvj+22]=x[jvj+24] ;z[jvj+22]=z[jvj+24];
x[jvj+18]=x[jvj+21] ;z[jvj+18]=z[jvj+21];
l10:if((x[jvj+18]>0)) goto l11;
x[jvj+19]=x[jvj+22] ;z[jvj+19]=z[jvj+22];
l13:if((x[jvj+19]<=0)) goto l16;
x[jvj+13]=s[x[jvj+19]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+19];
pile[v[22]]=jvj+13; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(jvj+13,X,jvj+14)*/
x[jvj+20]=x[jvj+14] ;z[jvj+20]=z[jvj+14];
l14:if((x[jvj+20]>0)) goto l15;
x[jvj+19]=t[x[jvj+19]];
goto l13;
l1:pile[v[22]]=729; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(729,jvj+1,jvj+2)*/
if((x[jvj+2]!=278)) goto l3;
x[jvj+16]=0 ;z[jvj+16]=0;
x[jvj+3]=x[jvj+16] ;z[jvj+3]=z[jvj+16];
goto l2;
l3:x[jvj+23]=x[jvj+25] ;z[jvj+23]=z[jvj+25];
goto l8;
l4:pile[v[22]]=729; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(729,jvj+5,jvj+6)*/
if((x[jvj+6]!=278)) goto l6;
x[jvj+17]=0 ;z[jvj+17]=0;
x[jvj+7]=x[jvj+17] ;z[jvj+7]=z[jvj+17];
goto l5;
l6:x[jvj+24]=x[jvj+26] ;z[jvj+24]=z[jvj+26];
goto l9;
l11:x[jvj+11]=s[x[jvj+18]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+18];
pile[v[22]]=jvj+11; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+11,X,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=R; 
(*f[842])( );     /*CHEROBJ1(jvj+12,R)*/
l12:x[jvj+18]=t[x[jvj+18]];
goto l10;
l15:x[jvj+15]=s[x[jvj+20]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+20];
pile[v[22]]=jvj+15; pile[WZ1]=R; 
(*f[842])( );     /*CHEROBJ1(jvj+15,R)*/
x[jvj+20]=t[x[jvj+20]];
goto l14;
l16:v[0]=jvj; v[22]-=2; return;
}
