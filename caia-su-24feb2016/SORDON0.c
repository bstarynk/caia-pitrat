#include "dx.h"
void SORDON0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V1=0,V=0,DXX=0,DX=0,V20=0,V19=0,V26=0,V27=0,V28=0,V5=0,V4=0,P=0,V12=0,V9=0,V23=0,I=0,V17=0,V10=0,V22=0;
int DD;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=14;
if(v[0]>99700) (*f[6])( );

DD=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l19:x[jvj+4]=incon;
pile[v[22]]=58; 
(*f[346])( );     /*LK1(58)*/
V1=bh[v[1]][0];
if((V1==32)) goto l18;
pile[v[22]]=(-1); 
(*f[131])( );     /*SMV0((-1),V,DXX)*/
V=pile[WZ1]; DXX=pile[WZ2]; 
pile[v[22]]=128; pile[WZ1]=DD; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(128,DD,jvj+1)*/
l1:if((x[jvj+1]<=0)) goto l18;
x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+2,V3)*/
V3=pile[WZ2]; 
if((V3!=V)) goto l2;
x[jvj+3]=x[jvj+2] ;z[jvj+3]=z[jvj+2];
DX=DXX;
pile[v[22]]=158; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(158,jvj+3,jvj+4)*/
if((x[jvj+4]==531)) goto l3;
if((x[jvj+4]!=41)) goto l4;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+3,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+3,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V20; 
(*f[37])( );     /*SRA0(0,V20,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V26,58,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V19; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(41,V19,V27,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; 
(*f[40])( );     /*SLG0(V28)*/
l4:V5=DX+1;
V4=bh[v[1]][V5];
if((V4!=32)) goto l5;
if(x[jvj+4]!=incon) goto l15;
l18:V22=bh[v[1]][0];
if((V22!=32)) goto l19;
v[0]=jvj; v[22]-=1; return;
l2:x[jvj+1]=t[x[jvj+1]];
goto l1;
l3:pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=41; pile[WZ2]=0; 
(*f[759])( );     /*XU0(jvj+5,41,0)*/
goto l4;
l5:pile[v[22]]=V5; 
(*f[135])( );     /*LND3(V5,P)*/
P=pile[WZ1]; 
if(x[jvj+4]!=incon) goto l14;
goto l18;
l8:x[jvj+14]=t[x[jvj+14]];
l7:if((x[jvj+14]<=0)) goto l17;
x[jvj+7]=s[x[jvj+14]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+14];
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+7,V12)*/
V12=pile[WZ2]; 
if((V12!=V9)) goto l8;
pile[v[22]]=355; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(355,jvj+7,jvj+8)*/
pile[v[22]]=41; pile[WZ1]=V9; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V9,0,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=V23; pile[WZ1]=32; 
(*f[249])( );     /*SPC1(V23,32,I)*/
I=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=I; 
(*f[759])( );     /*XU0(jvj+8,jvj+9,I)*/
l17:V9++;
l16:if((V9>V10)) goto l18;
x[jvj+9]=incon;
if((x[jvj+4]==979)) goto l9;
x[jvj+9]=89 ;z[jvj+9]=89;
l6:pile[v[22]]=128; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(128,jvj+3,jvj+6)*/
x[jvj+14]=x[jvj+6] ;z[jvj+14]=z[jvj+6];
goto l7;
l9:x[jvj+9]=41 ;z[jvj+9]=41;
goto l6;
l12:x[jvj+10]=t[x[jvj+10]];
l11:if((x[jvj+10]<=0)) goto l18;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=117; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(117,jvj+11,V17)*/
V17=pile[WZ2]; 
if((V17!=P)) goto l12;
pile[v[22]]=355; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(355,jvj+11,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; pile[WZ2]=0; 
(*f[759])( );     /*XU0(jvj+12,jvj+13,0)*/
goto l18;
l13:x[jvj+13]=41 ;z[jvj+13]=41;
l10:pile[v[22]]=128; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(128,jvj+3,jvj+10)*/
goto l11;
l14:if(x[jvj+4]!=453&&x[jvj+4]!=979&&x[jvj+4]!=1027) goto l18;
x[jvj+13]=incon;
if((x[jvj+4]==979)) goto l13;
x[jvj+13]=89 ;z[jvj+13]=89;
goto l10;
l15:if(x[jvj+4]!=453&&x[jvj+4]!=979&&x[jvj+4]!=1027) goto l18;
pile[v[22]]=951; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(951,jvj+3,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(510,jvj+3,V10)*/
V10=pile[WZ2]; 
goto l16;
}
