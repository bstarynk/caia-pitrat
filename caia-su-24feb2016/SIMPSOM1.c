#include "dx.h"
void SIMPSOM1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V17=0;
int R,BT,RT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=17;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; BT=pile[v[22]+1]; RT=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=485; pile[WZ1]=R; pile[WZ2]=jvj+1; 
(*f[492])( );     /*FIGURE0(485,R,jvj+1)*/
if((x[jvj+1]==135)) goto l1;
l9:v[0]=jvj; v[22]-=3; return;
l1:x[jvj+2]=x[R] ;z[jvj+2]=z[R];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=485)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[1450])( );     /*DECSOM0(jvj+2,jvj+5,jvj+6)*/
pile[v[22]]=447; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(447,jvj+6,jvj+7)*/
if((x[jvj+7]!=68)) goto l2;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+8; 
(*f[1454])( );if(v[102]) goto l2;     /*CRESOM0(jvj+5,jvj+8)*/
v[20]=1;
if((V18=w[x[BT]][1])==incon) goto l9;
if((V18!=23)) goto l10;
V17=x[jvj+2];
pile[v[22]]=BT; pile[WZ1]=RT; pile[WZ2]=V17; 
(*f[134])( );     /*OTA0(BT,RT,V17)*/
pile[v[22]]=RT; pile[WZ1]=BT; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(RT,BT,jvj+8)*/
goto l9;
l2:pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+2,jvj+9)*/
x[jvj+15]=w[x[jvj+9]][9];
l3:if((x[jvj+15]>0)) goto l4;
x[jvj+16]=w[x[jvj+9]][8];
l6:if((x[jvj+16]<=0)) goto l9;
x[jvj+12]=s[x[jvj+16]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+16];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(jvj+12,jvj+2,jvj+13)*/
x[jvj+17]=x[jvj+13] ;z[jvj+17]=z[jvj+13];
l7:if((x[jvj+17]>0)) goto l8;
x[jvj+16]=t[x[jvj+16]];
goto l6;
l4:x[jvj+10]=s[x[jvj+15]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+15];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+2; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+10,jvj+2,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+10; pile[WZ2]=jvj+2; 
(*f[1671])( );     /*SIMPSOM1(jvj+11,jvj+10,jvj+2)*/
l5:x[jvj+15]=t[x[jvj+15]];
goto l3;
l8:x[jvj+14]=s[x[jvj+17]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+17];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+12; pile[WZ2]=jvj+2; 
(*f[1671])( );     /*SIMPSOM1(jvj+14,jvj+12,jvj+2)*/
x[jvj+17]=t[x[jvj+17]];
goto l7;
l10:pile[v[22]]=RT; pile[WZ1]=BT; pile[WZ2]=jvj+8; 
(*f[35])( );     /*CHGC1(RT,BT,jvj+8)*/
goto l9;
}
