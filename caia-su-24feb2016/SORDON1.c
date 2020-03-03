#include "dx.h"
void SORDON1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V3=0,V11=0,I=0,V9=0,V8=0,V14=0,V15=0,V16=0,V4=0;
int H;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

H=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=158; pile[WZ1]=H; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(158,H,jvj+1)*/
if((x[jvj+1]==531)) goto l5;
if((x[jvj+1]!=41)) goto l6;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,H,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,H,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V9; 
(*f[37])( );     /*SRA0(0,V9,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=V14; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V14,58,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V8; pile[WZ2]=V15; 
(*f[39])( );     /*SDX0(41,V8,V15,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=V16; 
(*f[40])( );     /*SLG0(V16)*/
l6:if(x[jvj+1]!=453&&x[jvj+1]!=979&&x[jvj+1]!=1027) goto l9;
pile[v[22]]=951; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(951,H,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(510,H,V4)*/
V4=pile[WZ2]; 
l7:if((V3>V4)) goto l9;
x[jvj+5]=incon;
if((x[jvj+1]==979)) goto l4;
x[jvj+5]=89 ;z[jvj+5]=89;
l1:pile[v[22]]=128; pile[WZ1]=H; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(128,H,jvj+2)*/
x[jvj+7]=x[jvj+2] ;z[jvj+7]=z[jvj+2];
l2:if((x[jvj+7]<=0)) goto l8;
x[jvj+3]=s[x[jvj+7]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+7];
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+3,V6)*/
V6=pile[WZ2]; 
if((V6!=V3)) goto l3;
pile[v[22]]=355; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(355,jvj+3,jvj+4)*/
pile[v[22]]=41; pile[WZ1]=V3; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V3,0,V11)*/
V11=pile[WZ3]; 
pile[v[22]]=V11; pile[WZ1]=32; 
(*f[249])( );     /*SPC1(V11,32,I)*/
I=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; pile[WZ2]=I; 
(*f[759])( );     /*XU0(jvj+4,jvj+5,I)*/
l8:V3++;
goto l7;
l3:x[jvj+7]=t[x[jvj+7]];
goto l2;
l4:x[jvj+5]=41 ;z[jvj+5]=41;
goto l1;
l5:pile[v[22]]=101; pile[WZ1]=H; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,H,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=41; pile[WZ2]=0; 
(*f[759])( );     /*XU0(jvj+6,41,0)*/
goto l6;
l9:v[0]=jvj; v[22]-=1; return;
}
