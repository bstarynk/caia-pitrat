#include "dx.h"
void LISTEVRAI1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V2=0,V19=0,V1=0,V11=0,V22=0,V3=0,V13=0,V25=0,V5=0,V15=0,V30=0,V28=0;
int A;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=11930;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==594&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[A] ;z[jvj+3]=z[A];
l1:pile[v[22]]=191; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(191,jvj+3,jvj+4)*/
if((x[jvj+4]==68)) goto l11;
l9:pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+3,jvj+11)*/
V15=x[jvj+3];
V30=x[jvj+11];
pile[v[22]]=jvj+3; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+3,191,68)*/
pile[v[22]]=41; pile[WZ1]=V15; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V15,0,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V30; pile[WZ2]=V28; 
(*f[39])( );     /*SDX0(20,V30,V28,V2)*/
V2=pile[WZ3]; 
V1=incon;
pile[v[22]]=134; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(134,jvj+3,jvj+5)*/
V9=x[jvj+5];
pile[v[22]]=V2; pile[WZ1]=70; 
(*f[249])( );     /*SPC1(V2,70,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V9; pile[WZ2]=V19; 
(*f[39])( );     /*SDX0(41,V9,V19,V1)*/
V1=pile[WZ3]; 
l3:V3=incon;
pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(120,jvj+3,jvj+6)*/
V11=x[jvj+6];
pile[v[22]]=V1; pile[WZ1]=83; 
(*f[249])( );     /*SPC1(V1,83,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V11; pile[WZ2]=V22; 
(*f[39])( );     /*SDX0(41,V11,V22,V3)*/
V3=pile[WZ3]; 
l5:V5=incon;
pile[v[22]]=135; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(135,jvj+3,jvj+7)*/
V13=x[jvj+7];
pile[v[22]]=V3; pile[WZ1]=86; 
(*f[249])( );     /*SPC1(V3,86,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V13; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(41,V13,V25,V5)*/
V5=pile[WZ3]; 
l10:pile[v[22]]=V5; 
(*f[40])( );     /*SLG0(V5)*/
pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(120,jvj+3,jvj+8)*/
pile[v[22]]=jvj+8; 
(*f[594])( );     /*LISTEVRAI1(jvj+8)*/
l7:pile[v[22]]=134; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(134,jvj+3,jvj+9)*/
pile[v[22]]=jvj+9; 
(*f[594])( );     /*LISTEVRAI1(jvj+9)*/
l8:pile[v[22]]=135; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(135,jvj+3,jvj+10)*/
x[jvj+3]=x[jvj+10] ;z[jvj+3]=z[jvj+10];
goto l1;
l2:V1=V2;
goto l3;
l4:V3=V1;
goto l5;
l6:V5=V3;
goto l10;
l11:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
