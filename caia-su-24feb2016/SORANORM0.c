#include "dx.h"
void SORANORM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V25=0,V23=0,V24=0,V26=0,V27=0,V28=0,X=0,V30=0,V4=0,V8=0,V34=0,V9=0,V13=0,V38=0,V14=0,V18=0,V42=0,V19=0,V33=0,V32=0,V37=0,V36=0,V41=0,V40=0,V45=0,V44=0;
int P;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=11035;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==385&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=117; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,P,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(218,P,jvj+2)*/
pile[v[22]]=109; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(109,P,jvj+3)*/
V25=x[jvj+3];
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=61; 
(*f[41])( );     /*SRB0(10,0,61,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V25; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(20,V25,V23,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=0; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(41,0,V24,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V26; pile[WZ2]=jvj+2; 
(*f[42])( );     /*SRA1(135,V26,jvj+2,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V1; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(41,V1,V27,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; 
(*f[40])( );     /*SLG0(V28)*/
l5:pile[v[22]]=447; pile[WZ1]=P; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(447,P,jvj+4)*/
V4=incon;
pile[v[22]]=391; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(391,P,X)*/
X=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=X; 
(*f[37])( );     /*SRA0(0,X,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V30,58,V4)*/
V4=pile[WZ2]; 
l6:V33=x[jvj+4];
pile[v[22]]=20; pile[WZ1]=V33; pile[WZ2]=V4; 
(*f[39])( );     /*SDX0(20,V33,V4,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; 
(*f[40])( );     /*SLG0(V32)*/
l7:pile[v[22]]=459; pile[WZ1]=P; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(459,P,jvj+5)*/
V9=incon;
pile[v[22]]=747; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(747,P,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V8; 
(*f[37])( );     /*SRA0(0,V8,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V34,58,V9)*/
V9=pile[WZ2]; 
l8:V37=x[jvj+5];
pile[v[22]]=20; pile[WZ1]=V37; pile[WZ2]=V9; 
(*f[39])( );     /*SDX0(20,V37,V9,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=V36; 
(*f[40])( );     /*SLG0(V36)*/
l9:pile[v[22]]=475; pile[WZ1]=P; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(475,P,jvj+6)*/
V14=incon;
pile[v[22]]=1128; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(1128,P,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V13; 
(*f[37])( );     /*SRA0(0,V13,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V38,58,V14)*/
V14=pile[WZ2]; 
l10:V41=x[jvj+6];
pile[v[22]]=20; pile[WZ1]=V41; pile[WZ2]=V14; 
(*f[39])( );     /*SDX0(20,V41,V14,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=V40; 
(*f[40])( );     /*SLG0(V40)*/
l11:pile[v[22]]=502; pile[WZ1]=P; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(502,P,jvj+7)*/
V19=incon;
pile[v[22]]=1129; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(1129,P,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V18; 
(*f[37])( );     /*SRA0(0,V18,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V42,58,V19)*/
V19=pile[WZ2]; 
l12:V45=x[jvj+7];
pile[v[22]]=20; pile[WZ1]=V45; pile[WZ2]=V19; 
(*f[39])( );     /*SDX0(20,V45,V19,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; 
(*f[40])( );     /*SLG0(V44)*/
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:V4=0;
goto l6;
l2:V9=0;
goto l8;
l3:V14=0;
goto l10;
l4:V19=0;
goto l12;
}
