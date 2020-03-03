#include "dx.h"
void REMONTE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V13=0,V14=0,V15=0,V16=0,V3=0,V10=0,NT=0,V8=0,V17=0;
int I,L,KR;
int M;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=10827;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==368&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; L=pile[v[22]+1]; KR=pile[v[22]+2]; M=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[L] ;z[jvj+2]=z[L];
V17=I;
l11:x[jvj+3]=incon;
if((KR==85)) goto l1;
if((KR!=66)) goto l7;
pile[v[22]]=196; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(196,jvj+2,jvj+3)*/
l5:V10=bh[v[1]][1];
if((V10!=80)) goto l7;
pile[v[22]]=274; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(274,jvj+3,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]==42)) goto l6;
l7:NT=V17;
if(x[jvj+3]!=incon) goto l8;
V3=g[261];
if((V3<=0)) goto l9;
V4=vg[261];
if((V4!=0)) goto l2;
if((V3<3)) goto l4;
l2:pile[v[22]]=261; pile[WZ1]=10827; pile[WZ2]=0; pile[WZ3]=jvj+4; 
(*f[291])( );     /*INTERP4(261,10827,0,jvj+4)*/
if((x[jvj+4]==135)) goto l3;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l1:pile[v[22]]=374; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(374,jvj+2,jvj+3)*/
goto l5;
l3:if((V3<4)) goto l4;
goto l9;
l4:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V13; pile[WZ2]=10827; 
(*f[98])( );     /*SRA3(135,V13,10827,V14)*/
V14=pile[WZ3]; 
pile[v[22]]=V14; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V14,125,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=(-4433); 
(*f[37])( );     /*SRA0(V15,(-4433),V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V16; 
(*f[40])( );     /*SLG0(V16)*/
if((V3!=2)) goto l9;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l9;
l6:x[M]=x[jvj+3] ;z[M]=z[jvj+3];
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l8:if((NT==1)) goto l6;
if((NT<=1)) goto l9;
V8=V17-1;
V17=V8;
x[jvj+2]=x[jvj+3] ;z[jvj+2]=z[jvj+3];
goto l11;
}
