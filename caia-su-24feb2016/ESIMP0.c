#include "dx.h"
void ESIMP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V30=0,V32=0,V23=0,V24=0,V25=0,V26=0,V27=0,V29=0,V31=0,V1=0;
int T,NY;
int NX,NT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=10741;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1663&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
T=pile[v[22]]; NY=pile[v[22]+1]; NX=pile[v[22]+2]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[T]==774)) goto l1;
if((x[T]==773)) goto l2;
if((x[T]==830)) goto l3;
if((x[T]==549)) goto l4;
if((x[T]==665)) goto l5;
if((x[T]==738)) goto l6;
if((x[T]==1176)) goto l7;
if((x[T]==1333)) goto l8;
if((x[T]!=26)) goto l14;
pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1863])( );if(v[102]) goto l14;     /*Z271Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
l12:V1=g[264];
if((V1<=0)) goto l15;
V2=vg[264];
if((V2!=0)) goto l9;
if((V1<3)) goto l11;
l9:pile[v[22]]=264; pile[WZ1]=10741; pile[WZ2]=0; pile[WZ3]=(-620); pile[WZ4]=T; pile[WZ5]=(-3188); pile[v[22]+6]=NY; pile[v[22]+7]=(-3141); pile[v[22]+8]=NT; pile[v[22]+9]=jvj+3; 
(*f[1340])( );     /*INTERP16(264,10741,0,(-620),T,(-3188),NY,(-3141),NT,jvj+3)*/
if((x[jvj+3]==135)) goto l10;
l15:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=NT; v[102]=0;return;
l1:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1855])( );if(v[102]) goto l14;     /*Z58Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l12;
l2:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1856])( );if(v[102]) goto l14;     /*Z59Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l12;
l3:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1857])( );if(v[102]) goto l14;     /*Z65Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l12;
l4:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1858])( );if(v[102]) goto l14;     /*Z145Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l12;
l5:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1859])( );if(v[102]) goto l14;     /*Z146Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l12;
l6:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1860])( );if(v[102]) goto l14;     /*Z148Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l12;
l7:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1861])( );if(v[102]) goto l14;     /*Z155Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l12;
l8:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1862])( );if(v[102]) goto l14;     /*Z269Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l12;
l10:if((V1<4)) goto l11;
goto l15;
l11:V30=x[T];
V32=x[NY];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V23; pile[WZ2]=10741; 
(*f[98])( );     /*SRA3(135,V23,10741,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(41,1,V24,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V25,125,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NT; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(41,NT,V26,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V30; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(20,V30,V27,V29)*/
V29=pile[WZ3]; 
pile[WZ1]=V32; pile[WZ2]=V29; 
(*f[39])( );     /*SDX0(20,V32,V29,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=V31; 
(*f[40])( );     /*SLG0(V31)*/
if((V1!=2)) goto l15;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l15;
l14:x[NX]=NT=incon;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
}
