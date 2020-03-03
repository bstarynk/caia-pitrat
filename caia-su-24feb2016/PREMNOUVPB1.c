#include "dx.h"
void PREMNOUVPB1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V12=0,V14=0,V16=0,V17=0,V15=0,V2=0,V6=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=16;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+13]=V2=x[R]=x[jvj+1]=incon;
pile[v[22]]=120; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(120,A,jvj+1)*/
pile[v[22]]=698; pile[WZ1]=jvj+1; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(698,jvj+1,jvj+14)*/
pile[v[22]]=163; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(163,jvj+14,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(109,jvj+14,jvj+15)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+13; 
(*f[46])( );     /*TRI0(0,117,jvj+13)*/
pile[v[22]]=1268; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1268,936,V16)*/
V16=pile[WZ2]; 
x[jvj+8]=924 ;z[jvj+8]=924;
l4:pile[v[22]]=120; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(120,jvj+8,jvj+9)*/
pile[v[22]]=698; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(698,jvj+9,jvj+10)*/
x[jvj+4]=x[jvj+10] ;z[jvj+4]=z[jvj+10];
pile[v[22]]=683; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(683,jvj+4,V17)*/
V17=pile[WZ2]; 
if((V17!=3)) goto l5;
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(936,jvj+4,V15)*/
V15=pile[WZ2]; 
if((V15>V16)) goto l5;
pile[v[22]]=109; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(109,jvj+4,jvj+11)*/
x[jvj+5]=x[jvj+11] ;z[jvj+5]=z[jvj+11];
pile[v[22]]=1054; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1054,jvj+5,jvj+12)*/
x[jvj+2]=x[jvj+12] ;z[jvj+2]=z[jvj+12];
if((x[jvj+2]==x[jvj+15])) goto l1;
pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1054,jvj+2,jvj+3)*/
if((x[jvj+3]==x[jvj+15])) goto l1;
l5:x[jvj+8]=x[jvj+9] ;z[jvj+8]=z[jvj+9];
goto l4;
l1:pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+4,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=878; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(878,jvj+5,jvj+6)*/
x[jvj+16]=x[jvj+6] ;z[jvj+16]=z[jvj+6];
l2:if((x[jvj+16]<=0)) goto l5;
x[jvj+7]=s[x[jvj+16]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+16];
pile[v[22]]=163; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,jvj+7,V12)*/
V12=pile[WZ2]; 
if((V12!=V13)) goto l3;
pile[v[22]]=897; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(897,jvj+7,V14)*/
V14=pile[WZ2]; 
if((V14!=V6)) goto l3;
pile[v[22]]=jvj+13; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+13,117,1)*/
goto l5;
l3:x[jvj+16]=t[x[jvj+16]];
goto l2;
l6:if(x[jvj+13]!=incon) goto l7;
l8:if(V2!=incon) goto l9;
l10:if(x[R]==incon) goto l11;
l14:if(x[R]!=incon) goto l15;
l13:v[0]=jvj; v[22]-=2; v[102]=1;return;
l7:pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+13,V2)*/
V2=pile[WZ2]; 
goto l8;
l9:if((V2>3)) goto l10;
x[R]=x[jvj+14] ;z[R]=z[jvj+14];
goto l10;
l11:if(x[jvj+1]!=incon) goto l12;
goto l14;
l12:pile[v[22]]=jvj+1; pile[WZ1]=R; 
(*f[1532])( );if(v[102]) goto l14;     /*PREMNOUVPB1(jvj+1,R)*/
goto l14;
l15:v[0]=jvj; v[22]-=2; v[102]=0;return;
}
