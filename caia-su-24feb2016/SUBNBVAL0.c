#include "dx.h"
void SUBNBVAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V37=0,V36=0;
int BT,Z,R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=29;
if(v[0]>99700) (*f[6])( );

BT=pile[v[22]]; Z=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,R,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=1273)) goto l4;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,R,jvj+12)*/
pile[v[22]]=102; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,R,jvj+3)*/
x[jvj+9]=0 ;z[jvj+9]=0;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
x[jvj+5]=d[76];z[jvj+5]=0;
l2:if((x[jvj+12]>0)) goto l3;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+13; 
(*f[299])( );     /*COPEL0(jvj+9,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1215; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+13; pile[WZ2]=107; pile[WZ3]=jvj+25; 
(*f[301])( );     /*TRI11(jvj+24,jvj+13,107,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+25,22,100,jvj+26)*/
if((V37=w[x[BT]][1])==incon) goto l4;
if((V37!=23)) goto l13;
V36=x[R];
pile[v[22]]=BT; pile[WZ1]=Z; pile[WZ2]=V36; 
(*f[134])( );     /*OTA0(BT,Z,V36)*/
pile[v[22]]=Z; pile[WZ1]=BT; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(Z,BT,jvj+26)*/
l4:pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,R,jvj+14)*/
x[jvj+27]=w[x[jvj+14]][9];
l5:if((x[jvj+27]>0)) goto l6;
x[jvj+28]=w[x[jvj+14]][8];
l8:if((x[jvj+28]<=0)) goto l12;
x[jvj+17]=s[x[jvj+28]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+28];
pile[v[22]]=jvj+17; pile[WZ1]=R; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(jvj+17,R,jvj+18)*/
x[jvj+29]=x[jvj+18] ;z[jvj+29]=z[jvj+18];
l9:if((x[jvj+29]>0)) goto l10;
x[jvj+28]=t[x[jvj+28]];
goto l8;
l1:x[jvj+19]=x[jvj+1] ;z[jvj+19]=z[jvj+1];
l11:pile[v[22]]=jvj+17; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[1950])( );     /*SUBNBVAL0(jvj+17,R,jvj+19)*/
x[jvj+29]=t[x[jvj+29]];
goto l9;
l3:x[jvj+6]=s[x[jvj+12]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+12];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+4; pile[WZ2]=103; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+21,jvj+4,103,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+7; pile[WZ4]=jvj+22; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+7,jvj+22,jvj+8)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[196])( );     /*PLUF0(jvj+5,jvj+8,jvj+9)*/
x[jvj+12]=t[x[jvj+12]];
goto l2;
l6:x[jvj+15]=s[x[jvj+27]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+27];
pile[v[22]]=jvj+15; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+15,R,jvj+16)*/
(*f[1950])( );     /*SUBNBVAL0(jvj+15,R,jvj+16)*/
l7:x[jvj+27]=t[x[jvj+27]];
goto l5;
l10:x[jvj+1]=s[x[jvj+29]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+29];
x[jvj+19]=incon;
if((x[jvj+14]!=39)) goto l1;
pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+1,jvj+2)*/
x[jvj+19]=x[jvj+2] ;z[jvj+19]=z[jvj+2];
goto l11;
l12:v[0]=jvj; v[22]-=3; return;
l13:pile[v[22]]=Z; pile[WZ1]=BT; pile[WZ2]=jvj+26; 
(*f[35])( );     /*CHGC1(Z,BT,jvj+26)*/
goto l4;
}
