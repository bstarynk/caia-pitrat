#include "dx.h"
void Z265Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int BXXX;
int BRRR;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=24;
if(v[0]>99700) (*f[6])( );

BXXX=pile[v[22]]; BRRR=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=BXXX; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,BXXX,jvj+1)*/
x[jvj+22]=w[x[jvj+1]][9];
l1:if((x[jvj+22]>0)) goto l2;
x[jvj+23]=w[x[jvj+1]][8];
l5:if((x[jvj+23]<=0)) goto l8;
x[jvj+5]=s[x[jvj+23]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+23];
pile[v[22]]=jvj+5; pile[WZ1]=BXXX; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(jvj+5,BXXX,jvj+6)*/
x[jvj+24]=x[jvj+6] ;z[jvj+24]=z[jvj+6];
l6:if((x[jvj+24]>0)) goto l7;
x[jvj+23]=t[x[jvj+23]];
goto l5;
l2:x[jvj+2]=s[x[jvj+22]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+22];
pile[v[22]]=jvj+2; pile[WZ1]=BXXX; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+2,BXXX,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[1732])( );     /*Z265Z0(jvj+3,jvj+4)*/
if((x[jvj+4]==135)) goto l4;
l3:x[jvj+22]=t[x[jvj+22]];
goto l1;
l4:x[BRRR]=135 ;z[BRRR]=135;
l14:v[0]=jvj; v[22]-=2; return;
l7:x[jvj+7]=s[x[jvj+24]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+24];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1732])( );     /*Z265Z0(jvj+7,jvj+8)*/
if((x[jvj+8]==135)) goto l4;
x[jvj+24]=t[x[jvj+24]];
goto l6;
l8:pile[v[22]]=111; pile[WZ1]=BXXX; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,BXXX,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=1215)) goto l13;
pile[v[22]]=107; pile[WZ1]=BXXX; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,BXXX,jvj+11)*/
l9:if((x[jvj+11]<=0)) goto l13;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=25)) goto l10;
x[jvj+15]=d[20];z[jvj+15]=0;
l11:if((x[jvj+15]<=0)) goto l10;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+16,jvj+12,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=484)) goto l12;
pile[v[22]]=268; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+16,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+12; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+19,jvj+12,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+20,jvj+21)*/
if(x[jvj+21]==96||x[jvj+21]==89||x[jvj+21]==41||x[jvj+21]==20||x[jvj+21]==128||x[jvj+21]==570||x[jvj+21]==1317) goto l4;
l12:x[jvj+15]=t[x[jvj+15]];
goto l11;
l10:x[jvj+11]=t[x[jvj+11]];
goto l9;
l13:x[BRRR]=134 ;z[BRRR]=134;
goto l14;
}
