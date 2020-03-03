#include "dx.h"
void INSTANTIE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V20=0,V19=0;
int BT,RR,R,B;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=15;
if(v[0]>99700) (*f[6])( );

BT=pile[v[22]]; RR=pile[v[22]+1]; R=pile[v[22]+2]; B=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,R,jvj+3)*/
if((x[jvj+3]!=484)) goto l3;
pile[v[22]]=R; pile[WZ1]=jvj+4; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(R,jvj+4)*/
x[jvj+12]=x[B] ;z[jvj+12]=z[B];
l1:if((x[jvj+12]<=0)) goto l3;
x[jvj+1]=s[x[jvj+12]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+12];
pile[v[22]]=274; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(274,jvj+1,jvj+2)*/
if((x[jvj+2]!=x[jvj+4])) goto l2;
pile[v[22]]=319; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(319,jvj+1,jvj+5)*/
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+5,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V11; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(100,41,130,V11,jvj+11)*/
if((V20=w[x[BT]][1])==incon) goto l10;
if((V20!=23)) goto l11;
V19=x[R];
pile[v[22]]=BT; pile[WZ1]=RR; pile[WZ2]=V19; 
(*f[134])( );     /*OTA0(BT,RR,V19)*/
pile[v[22]]=RR; pile[WZ1]=BT; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(RR,BT,jvj+11)*/
l10:v[0]=jvj; v[22]-=4; return;
l2:x[jvj+12]=t[x[jvj+12]];
goto l1;
l3:x[jvj+13]=w[x[jvj+3]][9];
l4:if((x[jvj+13]>0)) goto l5;
x[jvj+14]=w[x[jvj+3]][8];
l7:if((x[jvj+14]<=0)) goto l10;
x[jvj+8]=s[x[jvj+14]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+14];
pile[v[22]]=jvj+8; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(jvj+8,R,jvj+9)*/
x[jvj+15]=x[jvj+9] ;z[jvj+15]=z[jvj+9];
l8:if((x[jvj+15]>0)) goto l9;
x[jvj+14]=t[x[jvj+14]];
goto l7;
l5:x[jvj+6]=s[x[jvj+13]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+13];
pile[v[22]]=jvj+6; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+6,R,jvj+7)*/
pile[WZ3]=B; 
(*f[1146])( );     /*INSTANTIE1(jvj+6,R,jvj+7,B)*/
l6:x[jvj+13]=t[x[jvj+13]];
goto l4;
l9:x[jvj+10]=s[x[jvj+15]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+15];
pile[v[22]]=jvj+8; pile[WZ1]=R; pile[WZ2]=jvj+10; pile[WZ3]=B; 
(*f[1146])( );     /*INSTANTIE1(jvj+8,R,jvj+10,B)*/
x[jvj+15]=t[x[jvj+15]];
goto l8;
l11:pile[v[22]]=RR; pile[WZ1]=BT; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(RR,BT,jvj+11)*/
goto l10;
}
