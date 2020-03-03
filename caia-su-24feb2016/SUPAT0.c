#include "dx.h"
void SUPAT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V9=0,V12=0;
int BL,X,P,BT;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=10320;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==427&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; X=pile[v[22]+1]; P=pile[v[22]+2]; BT=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=d[42];z[jvj+2]=0;
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,X,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]==x[BL])) goto l5;
l4:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,X,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+6,jvj+7)*/
if(x[jvj+7]!=433&&x[jvj+7]!=918) goto l11;
pile[v[22]]=366; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(366,X,jvj+5)*/
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+3,X,jvj+4)*/
pile[v[22]]=BL; pile[WZ1]=jvj+4; pile[WZ2]=X; pile[WZ3]=jvj+3; 
(*f[427])( );     /*SUPAT0(BL,jvj+4,X,jvj+3)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:x[jvj+12]=incon;
pile[v[22]]=120; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(120,X,jvj+10)*/
x[jvj+12]=x[jvj+10] ;z[jvj+12]=z[jvj+10];
l7:x[jvj+11]=x[jvj+12] ;z[jvj+11]=z[jvj+12];
if((x[jvj+11]!=250)) goto l8;
if((V10=w[x[BT]][1])==incon) goto l8;
if((V10!=20)) goto l8;
pile[v[22]]=BT; pile[WZ1]=P; 
(*f[71])( );     /*ENLV0(BT,P)*/
l8:if((V9=w[x[BT]][1])==incon) goto l11;
if((V9==20)) goto l9;
if((V9!=23)) goto l11;
V12=x[X];
if((x[jvj+11]==250)) goto l10;
pile[v[22]]=P; pile[WZ1]=BT; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(P,BT,jvj+11)*/
l10:pile[v[22]]=BT; pile[WZ1]=P; pile[WZ2]=V12; 
(*f[134])( );     /*OTA0(BT,P,V12)*/
goto l11;
l6:x[jvj+12]=250 ;z[jvj+12]=250;
goto l7;
l9:if((x[jvj+11]==250)) goto l11;
pile[v[22]]=P; pile[WZ1]=BT; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(P,BT,jvj+11)*/
goto l11;
}
