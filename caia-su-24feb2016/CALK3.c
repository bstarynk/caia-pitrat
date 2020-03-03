#include "dx.h"
void CALK3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int W=0,V6=0,V17=0,V19=0,V21=0,V16=0,V18=0,V20=0,V5=0;
int Y,NA,EZ,EF,N;
int EE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=11787;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1922&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
Y=pile[v[22]]; NA=pile[v[22]+1]; EZ=pile[v[22]+2]; EF=pile[v[22]+3]; N=pile[v[22]+4]; EE=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[Y]==250)) goto l5;
pile[v[22]]=Y; pile[WZ1]=jvj+3; 
(*f[938])( );     /*USE0(Y,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=EF; pile[WZ1]=Y; 
(*f[68])( );     /*PLUE0(EF,Y)*/
l5:x[jvj+13]=x[EZ] ;z[jvj+13]=z[EZ];
l3:if((x[jvj+13]>0)) goto l4;
V5=g[637];
if((V5<=0)) goto l14;
V6=vg[637];
if((V6!=0)) goto l8;
if((V5<3)) goto l9;
l8:pile[v[22]]=637; pile[WZ1]=11787; pile[WZ2]=3; pile[WZ3]=(-625); pile[WZ4]=N; pile[WZ5]=(-3085); pile[v[22]+6]=NA; pile[v[22]+7]=(-735); pile[v[22]+8]=EZ; pile[v[22]+9]=(-4885); pile[v[22]+10]=EF; pile[v[22]+11]=jvj+6; 
(*f[1513])( );     /*INTERP19(637,11787,3,(-625),N,(-3085),NA,(-735),EZ,(-4885),EF,jvj+6)*/
if((x[jvj+6]==135)) goto l13;
l14:x[jvj+11]=0 ;z[jvj+11]=0;
x[jvj+15]=x[EZ] ;z[jvj+15]=z[EZ];
l15:if((x[jvj+15]>0)) goto l16;
x[EE]=x[jvj+11] ;z[EE]=z[jvj+11];
l18:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=6; return;
l2:W=s[x[jvj+3]];
pile[v[22]]=NA; pile[WZ1]=273; pile[WZ2]=W; 
(*f[735])( );     /*PLUSC4(NA,273,W)*/
x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+4]=s[x[jvj+13]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+13];
for(a=x[EF];a>0;a=t[a]) if(s[a]==x[jvj+4]) goto l6;
pile[v[22]]=jvj+4; pile[WZ1]=NA; pile[WZ2]=jvj+5; 
(*f[1511])( );if(v[102]) goto l6;     /*CALKA0(jvj+4,NA,jvj+5)*/
if((x[jvj+5]==68)) goto l7;
l6:x[jvj+13]=t[x[jvj+13]];
goto l3;
l7:x[jvj+10]=x[jvj+4] ;z[jvj+10]=z[jvj+4];
pile[v[22]]=EF; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(EF,jvj+10)*/
pile[WZ1]=N; pile[WZ2]=67; pile[WZ3]=NA; 
(*f[1512])( );     /*CALK2(EF,N,67,NA)*/
goto l14;
l9:x[jvj+7]=0 ;z[jvj+7]=0;
x[jvj+14]=x[EZ] ;z[jvj+14]=z[EZ];
l10:if((x[jvj+14]>0)) goto l11;
pile[v[22]]=273; pile[WZ1]=NA; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(273,NA,jvj+9)*/
V17=x[N];
V19=x[jvj+9];
V21=x[jvj+7];
pile[v[22]]=20; pile[WZ1]=V17; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V17,0,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V19; pile[WZ2]=V16; 
(*f[39])( );     /*SDX0(23,V19,V16,V18)*/
V18=pile[WZ3]; 
pile[WZ1]=V21; pile[WZ2]=V18; 
(*f[39])( );     /*SDX0(23,V21,V18,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=V20; 
(*f[40])( );     /*SLG0(V20)*/
if((V5!=2)) goto l14;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l14;
l11:x[jvj+8]=s[x[jvj+14]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+14];
for(a=x[EF];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l12;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+8)*/
l12:x[jvj+14]=t[x[jvj+14]];
goto l10;
l13:if((V5<4)) goto l9;
goto l14;
l16:x[jvj+12]=s[x[jvj+15]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+15];
for(a=x[EF];a>0;a=t[a]) if(s[a]==x[jvj+12]) goto l17;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+12)*/
l17:x[jvj+15]=t[x[jvj+15]];
goto l15;
}
