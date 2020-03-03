#include "dx.h"
void DVF3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V4=0,V7=0,V24=0,V26=0,V29=0,V19=0,V20=0,V21=0,V22=0,V23=0,V25=0,V27=0,V28=0,V30=0,V3=0,V15=0;
int V,N,P;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=10477;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1794&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; N=pile[v[22]+1]; P=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=vo[15];z[jvj+3]=vz[15];
x[jvj+4]=x[jvj+3] ;z[jvj+4]=z[jvj+3];
pile[v[22]]=283; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(283,jvj+4,jvj+5)*/
l1:if((x[jvj+5]>0)) goto l2;
pile[v[22]]=V; pile[WZ1]=140; pile[WZ2]=jvj+7; 
(*f[329])( );     /*TRI13(V,140,jvj+7)*/
pile[v[22]]=jvj+4; pile[WZ1]=283; 
(*f[36])( );     /*PLUSC0(jvj+4,283,jvj+7)*/
l10:pile[v[22]]=158; pile[WZ1]=jvj+7; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(158,jvj+7,jvj+12)*/
if((x[jvj+12]==x[N])) goto l4;
pile[v[22]]=10477; pile[WZ1]=V; pile[WZ2]=(-4383); pile[WZ3]=N; pile[WZ4]=jvj+12; 
(*f[1825])( );     /*FAUTE8(10477,V,(-4383),N,jvj+12)*/
l4:pile[v[22]]=176; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(176,jvj+7,jvj+8)*/
l9:pile[v[22]]=158; pile[WZ1]=jvj+7; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(158,jvj+7,jvj+11)*/
l13:pile[v[22]]=176; pile[WZ1]=jvj+7; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(176,jvj+7,jvj+13)*/
if((x[jvj+13]==x[P])) goto l14;
V3=g[10];
if((V3<=0)) goto l14;
V4=vg[10];
if((V4!=0)) goto l5;
if((V3<3)) goto l7;
l5:pile[v[22]]=10; pile[WZ1]=10477; pile[WZ2]=3; pile[WZ3]=(-624); pile[WZ4]=P; pile[WZ5]=(-611); pile[v[22]+6]=V; pile[v[22]+7]=(-657); pile[v[22]+8]=jvj+7; pile[v[22]+9]=(-662); pile[v[22]+10]=jvj+4; pile[v[22]+11]=jvj+9; 
(*f[1830])( );     /*INTERP23(10,10477,3,(-624),P,(-611),V,(-657),jvj+7,(-662),jvj+4,jvj+9)*/
if((x[jvj+9]==135)) goto l6;
l14:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+6,V17)*/
V17=pile[WZ2]; 
if((V17!=V)) goto l3;
x[jvj+7]=x[jvj+6] ;z[jvj+7]=z[jvj+6];
goto l10;
l3:x[jvj+5]=t[x[jvj+5]];
goto l1;
l6:if((V3<4)) goto l7;
goto l14;
l7:pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+4,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=583; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(583,jvj+4,jvj+10)*/
V24=x[P];
V26=x[jvj+13];
V29=x[jvj+10];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V19; pile[WZ2]=10477; 
(*f[98])( );     /*SRA3(135,V19,10477,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=V20; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V20,125,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V21,V,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V24; pile[WZ2]=V22; 
(*f[39])( );     /*SDX0(20,V24,V22,V23)*/
V23=pile[WZ3]; 
pile[WZ1]=V26; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(20,V26,V23,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V25,(-740),V27)*/
V27=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V29; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(20,V29,V27,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V7; pile[WZ2]=V28; 
(*f[39])( );     /*SDX0(41,V7,V28,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; 
(*f[40])( );     /*SLG0(V30)*/
l8:if((V3!=2)) goto l14;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l14;
l11:pile[v[22]]=jvj+7; pile[WZ1]=176; pile[WZ2]=P; 
(*f[35])( );     /*CHGC1(jvj+7,176,P)*/
goto l9;
l12:pile[v[22]]=jvj+7; pile[WZ1]=158; pile[WZ2]=N; 
(*f[35])( );     /*CHGC1(jvj+7,158,N)*/
pile[v[22]]=110; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(110,jvj+7,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=N; 
(*f[1791])( );     /*DVF0(V15,N)*/
goto l13;
}
