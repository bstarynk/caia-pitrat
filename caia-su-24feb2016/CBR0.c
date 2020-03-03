#include "dx.h"
void CBR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=10105;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1637&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,R,jvj+9)*/
if((x[jvj+9]!=42)) goto l10;
pile[v[22]]=105; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(105,R,jvj+10)*/
x[jvj+23]=x[jvj+10] ;z[jvj+23]=z[jvj+10];
l5:if((x[jvj+23]<=0)) goto l10;
x[jvj+11]=s[x[jvj+23]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+23];
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=47)) goto l6;
x[jvj+2]=x[jvj+11] ;z[jvj+2]=z[jvj+11];
x[jvj+24]=x[jvj+10] ;z[jvj+24]=z[jvj+10];
l7:if((x[jvj+24]<=0)) goto l6;
x[jvj+13]=s[x[jvj+24]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+24];
if((x[jvj+11]==x[jvj+13])) goto l8;
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=47)) goto l8;
x[jvj+4]=x[jvj+13] ;z[jvj+4]=z[jvj+13];
pile[v[22]]=337; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(337,jvj+2,jvj+3)*/
l2:pile[v[22]]=337; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(337,jvj+2,jvj+6)*/
pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(337,jvj+4,jvj+7)*/
if((x[jvj+6]==x[jvj+7])) goto l9;
l8:x[jvj+24]=t[x[jvj+24]];
goto l7;
l1:pile[v[22]]=337; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(337,jvj+4,jvj+5)*/
goto l2;
l4:x[jvj+8]=s[x[jvj+22]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+22];
pile[v[22]]=jvj+2; pile[WZ1]=184; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+2,184,jvj+8)*/
x[jvj+22]=t[x[jvj+22]];
l3:if((x[jvj+22]>0)) goto l4;
pile[v[22]]=105; pile[WZ1]=R; pile[WZ2]=V12; 
(*f[134])( );     /*OTA0(105,R,V12)*/
goto l8;
l6:x[jvj+23]=t[x[jvj+23]];
goto l5;
l9:V12=x[jvj+4];
pile[v[22]]=184; pile[WZ1]=jvj+13; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(184,jvj+13,jvj+15)*/
x[jvj+22]=x[jvj+15] ;z[jvj+22]=z[jvj+15];
goto l3;
l10:pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,R,jvj+16)*/
if((x[jvj+16]!=42)) goto l14;
pile[v[22]]=105; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(105,R,jvj+17)*/
l11:if((x[jvj+17]<=0)) goto l14;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+18,jvj+19)*/
if((x[jvj+19]!=47)) goto l12;
pile[v[22]]=184; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(184,jvj+18,jvj+20)*/
x[jvj+25]=x[jvj+20] ;z[jvj+25]=z[jvj+20];
l13:if((x[jvj+25]<=0)) goto l12;
x[jvj+21]=s[x[jvj+25]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+25];
pile[v[22]]=jvj+21; 
(*f[1637])( );     /*CBR0(jvj+21)*/
x[jvj+25]=t[x[jvj+25]];
goto l13;
l12:x[jvj+17]=t[x[jvj+17]];
goto l11;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
