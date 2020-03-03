#include "dx.h"
void CALK1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int W=0,V2=0,V8=0,V20=0,V22=0,V24=0,V19=0,V21=0,V23=0,V7=0;
int N,NA,EF,Y,Z;
int EE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=11787;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1246&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; NA=pile[v[22]+1]; EF=pile[v[22]+2]; Y=pile[v[22]+3]; Z=pile[v[22]+4]; EE=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[Y]==250)) goto l5;
pile[v[22]]=Y; pile[WZ1]=jvj+3; 
(*f[938])( );     /*USE0(Y,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=EF; pile[WZ1]=Y; 
(*f[68])( );     /*PLUE0(EF,Y)*/
l5:if((x[Z]==250)) goto l6;
pile[v[22]]=Z; pile[WZ1]=jvj+4; 
(*f[938])( );     /*USE0(Z,jvj+4)*/
l3:if((x[jvj+4]>0)) goto l4;
pile[v[22]]=EF; pile[WZ1]=Z; 
(*f[68])( );     /*PLUE0(EF,Z)*/
l6:pile[v[22]]=1688; pile[WZ1]=N; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1688,N,jvj+5)*/
x[jvj+15]=x[jvj+5] ;z[jvj+15]=z[jvj+5];
l7:if((x[jvj+15]>0)) goto l8;
V7=g[637];
if((V7<=0)) goto l17;
V8=vg[637];
if((V8!=0)) goto l11;
if((V7<3)) goto l12;
l11:pile[v[22]]=637; pile[WZ1]=11787; pile[WZ2]=1; pile[WZ3]=(-625); pile[WZ4]=N; pile[WZ5]=(-3085); pile[v[22]+6]=NA; pile[v[22]+7]=(-735); pile[v[22]+8]=jvj+5; pile[v[22]+9]=(-4885); pile[v[22]+10]=EF; pile[v[22]+11]=jvj+8; 
(*f[1513])( );     /*INTERP19(637,11787,1,(-625),N,(-3085),NA,(-735),jvj+5,(-4885),EF,jvj+8)*/
if((x[jvj+8]==135)) goto l16;
l17:x[jvj+13]=0 ;z[jvj+13]=0;
x[jvj+17]=x[jvj+5] ;z[jvj+17]=z[jvj+5];
l18:if((x[jvj+17]>0)) goto l19;
x[EE]=x[jvj+13] ;z[EE]=z[jvj+13];
l21:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=6; return;
l2:W=s[x[jvj+3]];
pile[v[22]]=NA; pile[WZ1]=273; pile[WZ2]=W; 
(*f[735])( );     /*PLUSC4(NA,273,W)*/
x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:V2=s[x[jvj+4]];
pile[v[22]]=NA; pile[WZ1]=273; pile[WZ2]=V2; 
(*f[735])( );     /*PLUSC4(NA,273,V2)*/
x[jvj+4]=t[x[jvj+4]];
goto l3;
l8:x[jvj+6]=s[x[jvj+15]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+15];
for(a=x[EF];a>0;a=t[a]) if(s[a]==x[jvj+6]) goto l9;
pile[v[22]]=jvj+6; pile[WZ1]=NA; pile[WZ2]=jvj+7; 
(*f[1511])( );if(v[102]) goto l9;     /*CALKA0(jvj+6,NA,jvj+7)*/
if((x[jvj+7]==68)) goto l10;
l9:x[jvj+15]=t[x[jvj+15]];
goto l7;
l10:x[jvj+12]=x[jvj+6] ;z[jvj+12]=z[jvj+6];
pile[v[22]]=EF; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(EF,jvj+12)*/
pile[WZ1]=N; pile[WZ2]=67; pile[WZ3]=NA; 
(*f[1512])( );     /*CALK2(EF,N,67,NA)*/
goto l17;
l12:x[jvj+9]=0 ;z[jvj+9]=0;
x[jvj+16]=x[jvj+5] ;z[jvj+16]=z[jvj+5];
l13:if((x[jvj+16]>0)) goto l14;
pile[v[22]]=273; pile[WZ1]=NA; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(273,NA,jvj+11)*/
V20=x[N];
V22=x[jvj+11];
V24=x[jvj+9];
pile[v[22]]=20; pile[WZ1]=V20; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V20,0,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V22; pile[WZ2]=V19; 
(*f[39])( );     /*SDX0(23,V22,V19,V21)*/
V21=pile[WZ3]; 
pile[WZ1]=V24; pile[WZ2]=V21; 
(*f[39])( );     /*SDX0(23,V24,V21,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=V23; 
(*f[40])( );     /*SLG0(V23)*/
if((V7!=2)) goto l17;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l17;
l14:x[jvj+10]=s[x[jvj+16]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+16];
for(a=x[EF];a>0;a=t[a]) if(s[a]==x[jvj+10]) goto l15;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+10)*/
l15:x[jvj+16]=t[x[jvj+16]];
goto l13;
l16:if((V7<4)) goto l12;
goto l17;
l19:x[jvj+14]=s[x[jvj+17]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+17];
for(a=x[EF];a>0;a=t[a]) if(s[a]==x[jvj+14]) goto l20;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+14)*/
l20:x[jvj+17]=t[x[jvj+17]];
goto l18;
}
