#include "dx.h"
void CREXPERTISE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int FF=0,V20=0,V22=0,V27=0,V25=0,V26=0;
int F,BL;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=11822;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==577&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
F=pile[v[22]]; BL=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[BL]!=250)) goto l7;
x[jvj+14]=0 ;z[jvj+14]=0;
V20=sepnouv+1;
l4:if((V20<=sepfacts)) goto l6;
x[jvj+15]=x[jvj+14] ;z[jvj+15]=z[jvj+14];
l11:V27=x[F];
pile[v[22]]=20; pile[WZ1]=11822; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11822,0,V25)*/
V25=pile[WZ3]; 
pile[WZ1]=V27; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(20,V27,V25,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=V26; 
(*f[40])( );     /*SLG0(V26)*/
x[jvj+19]=x[jvj+15] ;z[jvj+19]=z[jvj+15];
l8:if((x[jvj+19]>0)) goto l9;
pile[v[22]]=jvj+15; pile[WZ1]=F; 
(*f[944])( );     /*CREXA0(jvj+15,F)*/
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l3:pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+5,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=22)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+9,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[F]!=x[jvj+12])) goto l2;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+14,jvj+2)*/
l5:V20++;
goto l4;
l6:V22=r[V20];
if((V22!=1)) goto l5;
x[jvj+2]=V20 ;z[jvj+2]=(V20<=sepcte) ? V20 : 0;
pile[v[22]]=1923; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1923,jvj+2,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==901) goto l5;
pile[v[22]]=1689; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1689,jvj+2,jvj+3)*/
pile[v[22]]=1867; pile[WZ1]=145; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1867,145,jvj+4)*/
x[jvj+18]=x[jvj+3] ;z[jvj+18]=z[jvj+3];
l1:if((x[jvj+18]<=0)) goto l5;
x[jvj+5]=s[x[jvj+18]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+18];
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=22)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+5,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+7,jvj+8)*/
FF=x[jvj+8];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==FF) goto l3;
l2:x[jvj+18]=t[x[jvj+18]];
goto l1;
l7:pile[v[22]]=20; pile[WZ1]=BL; pile[WZ2]=jvj+15; 
(*f[409])( );     /*TRI14(20,BL,jvj+15)*/
goto l11;
l9:x[jvj+16]=s[x[jvj+19]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+19];
pile[v[22]]=1840; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1840,jvj+16,jvj+17)*/
pile[v[22]]=jvj+17; 
(*f[172])( );     /*SORBL1(jvj+17)*/
l10:x[jvj+19]=t[x[jvj+19]];
goto l8;
}
