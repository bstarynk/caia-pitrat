#include "dx.h"
void TOUCHEFINALE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V15=0;
int A,AA,BT;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=11791;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1507&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; AA=pile[v[22]+1]; BT=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=incon;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,A,jvj+3)*/
l1:pile[v[22]]=101; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,A,jvj+4)*/
pile[v[22]]=1756; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1756,jvj+4,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+5; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+5,jvj+11)*/
if((V16=w[x[BT]][1])==incon) goto l2;
if((V16!=23)) goto l11;
V15=x[A];
pile[v[22]]=BT; pile[WZ1]=AA; pile[WZ2]=V15; 
(*f[134])( );     /*OTA0(BT,AA,V15)*/
pile[v[22]]=AA; pile[WZ1]=BT; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(AA,BT,jvj+11)*/
l2:if(x[jvj+3]!=incon) goto l3;
l10:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l3:x[jvj+12]=w[x[jvj+3]][9];
l4:if((x[jvj+12]>0)) goto l5;
x[jvj+13]=w[x[jvj+3]][8];
l7:if((x[jvj+13]<=0)) goto l10;
x[jvj+8]=s[x[jvj+13]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+13];
pile[v[22]]=jvj+8; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(jvj+8,A,jvj+9)*/
x[jvj+14]=x[jvj+9] ;z[jvj+14]=z[jvj+9];
l8:if((x[jvj+14]>0)) goto l9;
x[jvj+13]=t[x[jvj+13]];
goto l7;
l5:x[jvj+6]=s[x[jvj+12]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+12];
pile[v[22]]=jvj+6; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+6,A,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ2]=jvj+6; 
(*f[1507])( );     /*TOUCHEFINALE1(jvj+7,A,jvj+6)*/
l6:x[jvj+12]=t[x[jvj+12]];
goto l4;
l9:x[jvj+10]=s[x[jvj+14]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+14];
pile[v[22]]=jvj+10; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[1507])( );     /*TOUCHEFINALE1(jvj+10,A,jvj+8)*/
x[jvj+14]=t[x[jvj+14]];
goto l8;
l11:pile[v[22]]=AA; pile[WZ1]=BT; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(AA,BT,jvj+11)*/
goto l2;
}
