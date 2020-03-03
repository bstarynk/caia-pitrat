#include "dx.h"
void DEFEXECA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V8=0,V9=0,V10=0,V11=0,V12=0,V13=0,V14=0,V15=0,V7=0,KR=0,V3=0,V6=0,V5=0,V4=0,V17=0,V18=0,V19=0;
int I;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=11466;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==248&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l1:pile[v[22]]=1414; pile[WZ1]=324; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1414,324,jvj+2)*/
V16=x[jvj+2];
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=(-9683); 
(*f[37])( );     /*SRA0(V8,(-9683),V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=65; 
(*f[249])( );     /*SPC1(V9,65,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=(-9549); 
(*f[37])( );     /*SRA0(V10,(-9549),V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=(-9687); 
(*f[37])( );     /*SRA0(V11,(-9687),V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=(-9693); 
(*f[37])( );     /*SRA0(V12,(-9693),V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V13,58,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V16; pile[WZ2]=V14; 
(*f[39])( );     /*SDX0(23,V16,V14,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=V15; 
(*f[40])( );     /*SLG0(V15)*/
pile[v[22]]=33; 
(*f[346])( );     /*LK1(33)*/
V7=bh[v[1]][0];
KR=V7;
if((KR==46)) goto l2;
pile[v[22]]=(-1); pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+3; 
(*f[78])( );if(v[102]) goto l4;     /*SMA0((-1),64,67,jvj+3)*/
pile[v[22]]=0; 
(*f[107])( );     /*CRC0(0,V3)*/
V3=pile[WZ1]; 
V6=bh[v[1]][V3];
if((V6!=63)) goto l3;
V5=0;
pile[v[22]]=32; pile[WZ1]=jvj+3; 
(*f[115])( );     /*SORBL0(32,jvj+3)*/
pile[v[22]]=V5; 
(*f[656])( );     /*SPLN2(V5,V4)*/
V4=pile[WZ1]; 
pile[v[22]]=V4; 
(*f[288])( );     /*SPLN0(V4)*/
l3:pile[v[22]]=I; pile[WZ1]=jvj+3; 
(*f[657])( );     /*DEFEXECB0(I,jvj+3)*/
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:exit(0);
goto l5;
l4:pile[v[22]]=0; pile[WZ1]=(-9764); 
(*f[37])( );     /*SRA0(0,(-9764),V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=(-9687); 
(*f[37])( );     /*SRA0(V17,(-9687),V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V18,46,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=V19; 
(*f[40])( );     /*SLG0(V19)*/
goto l1;
}
