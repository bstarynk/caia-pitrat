#include "dx.h"
void MEVALR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V22=0,V23=0,V28=0,V7=0,V30=0,V10=0,V15=0,V16=0,V21=0,V1=0;
int B,X,A;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=10072;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2096&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; X=pile[v[22]+1]; A=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,X,V22)*/
V22=pile[WZ2]; 
x[jvj+21]=x[B] ;z[jvj+21]=z[B];
l1:if((x[jvj+21]<=0)) goto l14;
x[jvj+3]=s[x[jvj+21]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+21];
pile[v[22]]=140; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+3,V23)*/
V23=pile[WZ2]; 
if((V22!=V23)) goto l2;
pile[v[22]]=361; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(361,X,jvj+2)*/
pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(361,jvj+3,jvj+4)*/
if((x[jvj+2]==x[jvj+4])) goto l3;
if((x[jvj+2]==178)) goto l2;
if((x[jvj+4]==178)) goto l2;
l3:x[jvj+6]=x[jvj+3] ;z[jvj+6]=z[jvj+3];
pile[v[22]]=145; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(145,X,jvj+18)*/
l10:pile[v[22]]=110; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(110,X,V15)*/
V15=pile[WZ2]; 
pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(110,jvj+6,V16)*/
V16=pile[WZ2]; 
if((V15!=V16)) goto l13;
l4:pile[v[22]]=158; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(158,X,jvj+5)*/
l6:pile[v[22]]=158; pile[WZ1]=jvj+6; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(158,jvj+6,jvj+8)*/
l9:pile[v[22]]=145; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(145,X,jvj+14)*/
pile[WZ1]=jvj+6; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(145,jvj+6,jvj+15)*/
if((x[jvj+14]!=x[jvj+15])) goto l13;
l11:pile[v[22]]=361; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(361,X,jvj+16)*/
pile[WZ1]=jvj+6; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(361,jvj+6,jvj+17)*/
if((x[jvj+16]!=x[jvj+17])) goto l13;
l8:pile[v[22]]=158; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(158,X,jvj+10)*/
if((x[jvj+11]=w[x[jvj+10]][3])==incon) goto l15;
pile[v[22]]=X; pile[WZ1]=jvj+11; pile[WZ3]=jvj+12; 
(*f[45])( );if(v[102]) goto l15;     /*FNDZ0(X,jvj+11,V28,jvj+12)*/
V28=pile[WZ2]; 
V7=V28;
pile[v[22]]=jvj+6; pile[WZ3]=jvj+13; 
(*f[45])( );if(v[102]) goto l15;     /*FNDZ0(jvj+6,jvj+11,V30,jvj+13)*/
V30=pile[WZ2]; 
V10=V30;
if((V7!=V10)) goto l13;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+21]=t[x[jvj+21]];
goto l1;
l5:pile[v[22]]=158; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(158,jvj+6,jvj+7)*/
l13:V21=x[X];
pile[v[22]]=356; pile[WZ1]=A; pile[WZ2]=V21; 
(*f[134])( );     /*OTA0(356,A,V21)*/
pile[v[22]]=140; pile[WZ1]=V22; pile[WZ2]=361; pile[WZ3]=225; pile[WZ4]=jvj+20; 
(*f[692])( );     /*QUADRI13(140,V22,361,225,jvj+20)*/
pile[v[22]]=A; pile[WZ1]=356; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(A,356,jvj+20)*/
goto l15;
l7:pile[v[22]]=158; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(158,X,jvj+9)*/
goto l13;
l12:pile[v[22]]=361; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(361,X,jvj+19)*/
if((x[jvj+19]==289)) goto l10;
goto l15;
l14:V1=x[X];
pile[v[22]]=356; pile[WZ1]=A; pile[WZ2]=V1; 
(*f[134])( );     /*OTA0(356,A,V1)*/
goto l15;
}
