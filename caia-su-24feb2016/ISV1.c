#include "dx.h"
void ISV1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V7=0,V9=0,V20=0;
int X,S,TL;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=10301;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1801&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; S=pile[v[22]+1]; TL=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V7=x[X];
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=V7; 
(*f[134])( );     /*OTA0(302,TL,V7)*/
pile[v[22]]=102; pile[WZ1]=X; 
(*f[71])( );     /*ENLV0(102,X)*/
pile[v[22]]=193; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(193,X,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=S; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(S,X,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=193; pile[WZ2]=V9; 
(*f[177])( );     /*CHGC4(jvj+8,193,V9)*/
l2:pile[v[22]]=248; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(248,X,jvj+9)*/
l3:if((x[jvj+9]>0)) goto l4;
x[jvj+13]=d[105];z[jvj+13]=0;
l6:if((x[jvj+13]>0)) goto l7;
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l1:pile[v[22]]=122; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(122,jvj+3,jvj+4)*/
V3=x[jvj+3];
pile[v[22]]=248; pile[WZ1]=X; pile[WZ2]=V3; 
(*f[134])( );     /*OTA0(248,X,V3)*/
pile[v[22]]=jvj+4; 
(*f[71])( );     /*ENLV0(jvj+4,X)*/
l5:x[jvj+9]=t[x[jvj+9]];
goto l3;
l4:x[jvj+3]=s[x[jvj+9]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+9];
pile[v[22]]=161; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(161,jvj+3,jvj+10)*/
x[jvj+7]=x[jvj+10] ;z[jvj+7]=z[jvj+10];
if((x[jvj+7]==x[X])) goto l1;
pile[v[22]]=122; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(122,jvj+3,jvj+5)*/
pile[v[22]]=S; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(S,X,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+7; 
(*f[1380])( );     /*RECZ0(jvj+5,jvj+7,jvj+6)*/
goto l5;
l7:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=jvj+14; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+14,X,jvj+15)*/
x[jvj+11]=x[jvj+15] ;z[jvj+11]=z[jvj+15];
pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+14,X,jvj+16)*/
pile[v[22]]=248; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(248,jvj+16,jvj+17)*/
l10:if((x[jvj+17]<=0)) goto l12;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=122; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(122,jvj+18,jvj+19)*/
if((x[jvj+19]!=x[jvj+14])) goto l11;
pile[v[22]]=161; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(161,jvj+18,jvj+20)*/
if((x[jvj+20]!=x[X])) goto l11;
V20=x[jvj+18];
pile[v[22]]=248; pile[WZ1]=jvj+16; pile[WZ2]=V20; 
(*f[134])( );     /*OTA0(248,jvj+16,V20)*/
l11:x[jvj+17]=t[x[jvj+17]];
goto l10;
l12:pile[v[22]]=jvj+14; pile[WZ1]=X; 
(*f[71])( );     /*ENLV0(jvj+14,X)*/
if((x[jvj+11]==x[X])) goto l8;
pile[v[22]]=248; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(248,jvj+11,jvj+12)*/
if((x[jvj+12]!=0)) goto l8;
pile[v[22]]=jvj+11; pile[WZ1]=TL; 
(*f[1383])( );     /*ISV0(jvj+11,TL)*/
l8:x[jvj+13]=t[x[jvj+13]];
goto l6;
}
