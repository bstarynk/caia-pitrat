#include "dx.h"
void NDD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V38=0,V4=0,V40=0,V30=0,V42=0,V24=0,V44=0;
int A;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=28;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=277; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(277,A,jvj+1)*/
if(x[jvj+1]!=480&&x[jvj+1]!=481) goto l1;
x[R]=x[A] ;z[R]=z[A];
l12:v[0]=jvj; v[22]-=2; v[102]=0;return;
l1:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,A,jvj+2)*/
if((x[jvj+2]==484)) goto l2;
if((x[jvj+2]!=1050)) goto l11;
pile[v[22]]=111; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,A,jvj+15)*/
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+15,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,A,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+18]=w[x[jvj+17]][3])==incon) goto l11;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+18; pile[WZ3]=jvj+19; 
(*f[45])( );if(v[102]) goto l11;     /*FNDZ0(jvj+16,jvj+18,V42,jvj+19)*/
V42=pile[WZ2]; 
x[jvj+20]=vo[16];z[jvj+20]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(454,jvj+20,jvj+21)*/
l7:if((x[jvj+21]<=0)) goto l11;
x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=436; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(436,jvj+22,jvj+23)*/
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+23,V24)*/
V24=pile[WZ2]; 
if((V24!=V30)) goto l8;
pile[v[22]]=481; pile[WZ1]=jvj+22; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(481,jvj+22,jvj+24)*/
x[jvj+28]=x[jvj+24] ;z[jvj+28]=z[jvj+24];
l9:if((x[jvj+28]<=0)) goto l8;
x[jvj+25]=s[x[jvj+28]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+28];
pile[v[22]]=jvj+25; pile[WZ1]=jvj+18; pile[WZ3]=jvj+26; 
(*f[45])( );if(v[102]) goto l10;     /*FNDZ0(jvj+25,jvj+18,V44,jvj+26)*/
V44=pile[WZ2]; 
if((V42!=V44)) goto l10;
x[R]=x[jvj+25] ;z[R]=z[jvj+25];
goto l12;
l2:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,A,jvj+3)*/
pile[v[22]]=140; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+3,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,A,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+6]=w[x[jvj+5]][3])==incon) goto l11;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+6; pile[WZ3]=jvj+7; 
(*f[45])( );if(v[102]) goto l11;     /*FNDZ0(jvj+4,jvj+6,V38,jvj+7)*/
V38=pile[WZ2]; 
x[jvj+8]=vo[16];z[jvj+8]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(454,jvj+8,jvj+9)*/
l3:if((x[jvj+9]<=0)) goto l11;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=436; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(436,jvj+10,jvj+11)*/
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+11,V4)*/
V4=pile[WZ2]; 
if((V4!=V10)) goto l4;
pile[v[22]]=480; pile[WZ1]=jvj+10; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(480,jvj+10,jvj+12)*/
x[jvj+27]=x[jvj+12] ;z[jvj+27]=z[jvj+12];
l5:if((x[jvj+27]<=0)) goto l4;
x[jvj+13]=s[x[jvj+27]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+27];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+6; pile[WZ3]=jvj+14; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(jvj+13,jvj+6,V40,jvj+14)*/
V40=pile[WZ2]; 
if((V38!=V40)) goto l6;
x[R]=x[jvj+13] ;z[R]=z[jvj+13];
goto l12;
l4:x[jvj+9]=t[x[jvj+9]];
goto l3;
l6:x[jvj+27]=t[x[jvj+27]];
goto l5;
l8:x[jvj+21]=t[x[jvj+21]];
goto l7;
l10:x[jvj+28]=t[x[jvj+28]];
goto l9;
l11:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
