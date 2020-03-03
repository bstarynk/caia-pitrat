#include "dx.h"
void BALAITER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V10=0,V11=0,V12=0,V15=0,V17=0,V19=0,V21=0,V23=0,V14=0,V16=0,V18=0,V20=0,V22=0,V30=0,V29=0;
int A,BT,X;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=11838;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1319&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; BT=pile[v[22]+1]; X=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=x[A] ;z[jvj+6]=z[A];
l17:x[jvj+16]=incon;
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+6,jvj+7)*/
if(x[jvj+7]==484||x[jvj+7]==1050) goto l6;
x[jvj+8]=d[6];z[jvj+8]=0;
l1:if((x[jvj+8]<=0)) goto l6;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+9,jvj+6,jvj+10)*/
x[jvj+2]=x[jvj+10] ;z[jvj+2]=z[jvj+10];
pile[v[22]]=191; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(191,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l2;
l3:pile[v[22]]=jvj+2; pile[WZ1]=jvj+9; pile[WZ2]=jvj+6; 
(*f[1319])( );     /*BALAITER0(jvj+2,jvj+9,jvj+6)*/
l2:x[jvj+8]=t[x[jvj+8]];
goto l1;
l5:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+6; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(jvj+12,jvj+6,jvj+13)*/
x[jvj+19]=x[jvj+13] ;z[jvj+19]=z[jvj+13];
l7:if((x[jvj+19]>0)) goto l8;
x[jvj+11]=t[x[jvj+11]];
l4:if((x[jvj+11]>0)) goto l5;
if((v[143]!=1)) goto l11;
V13=x[jvj+6];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1248; 
(*f[42])( );     /*SRA1(135,0,1248,V10)*/
V10=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=11728; pile[WZ2]=V10; 
(*f[39])( );     /*SDX0(20,11728,V10,V11)*/
V11=pile[WZ3]; 
pile[WZ1]=V13; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(20,V13,V11,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=V12; 
(*f[40])( );     /*SLG0(V12)*/
l11:pile[v[22]]=jvj+6; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[1572])( );if(v[102]) goto l14;     /*NORMW0(jvj+6,jvj+14,jvj+15)*/
if((v[141]!=1)) goto l12;
V15=x[jvj+14];
V17=x[jvj+6];
V19=x[jvj+15];
V21=x[BT];
V23=x[X];
pile[v[22]]=20; pile[WZ1]=V15; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V15,0,V14)*/
V14=pile[WZ3]; 
pile[WZ1]=V17; pile[WZ2]=V14; 
(*f[39])( );     /*SDX0(20,V17,V14,V16)*/
V16=pile[WZ3]; 
pile[WZ1]=V19; pile[WZ2]=V16; 
(*f[39])( );     /*SDX0(20,V19,V16,V18)*/
V18=pile[WZ3]; 
pile[WZ1]=V21; pile[WZ2]=V18; 
(*f[39])( );     /*SDX0(20,V21,V18,V20)*/
V20=pile[WZ3]; 
pile[WZ1]=V23; pile[WZ2]=V20; 
(*f[39])( );     /*SDX0(20,V23,V20,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; 
(*f[40])( );     /*SLG0(V22)*/
l12:x[jvj+16]=x[jvj+15] ;z[jvj+16]=z[jvj+15];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[760])( );     /*MEMEX0(jvj+6,jvj+16,jvj+17)*/
if((x[jvj+17]==135)) goto l15;
l14:if(x[jvj+16]!=incon) goto l19;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l6:x[jvj+11]=d[87];z[jvj+11]=0;
goto l4;
l8:x[jvj+4]=s[x[jvj+19]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+19];
pile[v[22]]=191; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(191,jvj+4,jvj+5)*/
if((x[jvj+5]==68)) goto l9;
l10:pile[v[22]]=jvj+4; pile[WZ1]=jvj+12; pile[WZ2]=jvj+6; 
(*f[1319])( );     /*BALAITER0(jvj+4,jvj+12,jvj+6)*/
l9:x[jvj+19]=t[x[jvj+19]];
goto l7;
l15:pile[v[22]]=jvj+16; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+16,191,68)*/
goto l16;
l19:if((V30=w[x[BT]][1])==incon) goto l13;
if((V30!=23)) goto l20;
V29=x[jvj+6];
pile[v[22]]=BT; pile[WZ1]=X; pile[WZ2]=V29; 
(*f[134])( );     /*OTA0(BT,X,V29)*/
pile[v[22]]=X; pile[WZ1]=BT; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(X,BT,jvj+16)*/
l13:pile[v[22]]=191; pile[WZ1]=jvj+16; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(191,jvj+16,jvj+18)*/
if((x[jvj+18]==68)) goto l16;
l18:x[jvj+6]=x[jvj+16] ;z[jvj+6]=z[jvj+16];
goto l17;
l20:pile[v[22]]=X; pile[WZ1]=BT; pile[WZ2]=jvj+16; 
(*f[35])( );     /*CHGC1(X,BT,jvj+16)*/
goto l13;
}
