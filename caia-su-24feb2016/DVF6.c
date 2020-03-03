#include "dx.h"
void DVF6(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V21=0,V5=0,V8=0,V28=0,V30=0,V33=0,V23=0,V24=0,V25=0,V26=0,V27=0,V29=0,V31=0,V32=0,V34=0,V4=0,V19=0;
int W,V;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=10477;z[jvj+1]=(-100);
x[jvj+2]=6;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1977&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
W=pile[v[22]]; V=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=x[jvj+10]=x[jvj+11]=incon;
x[jvj+3]=vo[15];z[jvj+3]=vz[15];
x[jvj+4]=x[jvj+3] ;z[jvj+4]=z[jvj+3];
pile[v[22]]=283; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(283,jvj+4,jvj+5)*/
x[jvj+18]=x[jvj+5] ;z[jvj+18]=z[jvj+5];
l1:if((x[jvj+18]<=0)) goto l3;
x[jvj+6]=s[x[jvj+18]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+18];
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+6,V14)*/
V14=pile[WZ2]; 
if((V14!=W)) goto l2;
x[jvj+9]=x[jvj+6] ;z[jvj+9]=z[jvj+6];
l3:if((x[jvj+5]>0)) goto l4;
pile[v[22]]=V; pile[WZ1]=140; pile[WZ2]=jvj+8; 
(*f[329])( );     /*TRI13(V,140,jvj+8)*/
pile[v[22]]=jvj+4; pile[WZ1]=283; 
(*f[36])( );     /*PLUSC0(jvj+4,283,jvj+8)*/
l6:if(x[jvj+9]!=incon) goto l7;
l21:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+18]=t[x[jvj+18]];
goto l1;
l4:x[jvj+7]=s[x[jvj+5]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+5];
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+7,V21)*/
V21=pile[WZ2]; 
if((V21!=V)) goto l5;
x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
goto l6;
l5:x[jvj+5]=t[x[jvj+5]];
goto l3;
l7:pile[v[22]]=158; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(158,jvj+9,jvj+10)*/
l8:pile[v[22]]=176; pile[WZ1]=jvj+9; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(176,jvj+9,jvj+11)*/
l15:if(x[jvj+10]!=incon) goto l16;
l18:if(x[jvj+11]!=incon) goto l9;
goto l21;
l9:pile[v[22]]=176; pile[WZ1]=jvj+8; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(176,jvj+8,jvj+12)*/
l20:pile[v[22]]=176; pile[WZ1]=jvj+8; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(176,jvj+8,jvj+17)*/
if((x[jvj+17]==x[jvj+11])) goto l21;
V4=g[10];
if((V4<=0)) goto l21;
V5=vg[10];
if((V5!=0)) goto l10;
if((V4<3)) goto l12;
l10:pile[v[22]]=10; pile[WZ1]=10477; pile[WZ2]=6; pile[WZ3]=(-624); pile[WZ4]=jvj+11; pile[WZ5]=(-611); pile[v[22]+6]=V; pile[v[22]+7]=(-657); pile[v[22]+8]=jvj+8; pile[v[22]+9]=(-662); pile[v[22]+10]=jvj+4; pile[v[22]+11]=jvj+13; 
(*f[1830])( );     /*INTERP23(10,10477,6,(-624),jvj+11,(-611),V,(-657),jvj+8,(-662),jvj+4,jvj+13)*/
if((x[jvj+13]==135)) goto l11;
goto l21;
l11:if((V4<4)) goto l12;
goto l21;
l12:pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+4,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=583; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(583,jvj+4,jvj+14)*/
V28=x[jvj+11];
V30=x[jvj+17];
V33=x[jvj+14];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V23; pile[WZ2]=10477; 
(*f[98])( );     /*SRA3(135,V23,10477,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=V24; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V24,125,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V25,V,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V28; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(20,V28,V26,V27)*/
V27=pile[WZ3]; 
pile[WZ1]=V30; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(20,V30,V27,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V29,(-740),V31)*/
V31=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V33; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(20,V33,V31,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V8; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(41,V8,V32,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=V34; 
(*f[40])( );     /*SLG0(V34)*/
l13:if((V4!=2)) goto l21;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l21;
l16:pile[v[22]]=158; pile[WZ1]=jvj+8; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(158,jvj+8,jvj+16)*/
if((x[jvj+16]==x[jvj+10])) goto l14;
pile[v[22]]=10477; pile[WZ1]=V; pile[WZ2]=(-4383); pile[WZ3]=jvj+10; pile[WZ4]=jvj+16; 
(*f[1825])( );     /*FAUTE8(10477,V,(-4383),jvj+10,jvj+16)*/
l14:pile[v[22]]=158; pile[WZ1]=jvj+8; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(158,jvj+8,jvj+15)*/
goto l18;
l17:pile[v[22]]=jvj+8; pile[WZ1]=158; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(jvj+8,158,jvj+10)*/
pile[v[22]]=110; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(110,jvj+8,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=jvj+10; 
(*f[1791])( );     /*DVF0(V19,jvj+10)*/
goto l18;
l19:pile[v[22]]=jvj+8; pile[WZ1]=176; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(jvj+8,176,jvj+11)*/
goto l20;
}
