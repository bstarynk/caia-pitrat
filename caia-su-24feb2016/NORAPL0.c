#include "dx.h"
void NORAPL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V39=0,V29=0,V45=0,V60=0;
int NY;
int NX,NT;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=10747;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1447&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NY=pile[v[22]]; NX=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=NY; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,NY,jvj+5)*/
if((x[jvj+5]==41)) goto l2;
if((x[jvj+5]==20)) goto l4;
if((x[jvj+5]==21)) goto l5;
if((x[jvj+5]==89)) goto l6;
if((x[jvj+5]==22)) goto l7;
if((x[jvj+5]==1050)) goto l9;
if((x[jvj+5]!=484)) goto l11;
pile[v[22]]=102; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,NY,jvj+2)*/
pile[v[22]]=162; pile[WZ1]=jvj+2; 
(*f[219])( );if(v[102]) goto l1;     /*FNDC2(162,jvj+2,V39)*/
V39=pile[WZ2]; 
if((V39==42)) goto l10;
l1:pile[v[22]]=NY; pile[WZ1]=jvj+3; 
(*f[200])( );if(v[102]) goto l11;     /*NDD0(NY,jvj+3)*/
pile[v[22]]=489; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(489,jvj+3,jvj+4)*/
if((x[jvj+4]!=0)) goto l10;
l11:pile[v[22]]=130; pile[WZ1]=NY; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,NY,V45)*/
V45=pile[WZ2]; 
if((V45>=0)) goto l12;
pile[v[22]]=738; pile[WZ2]=NX; 
(*f[1663])( );if(v[102]) goto l12;     /*ESIMP0(738,NY,NX,NT)*/
NT=pile[WZ3]; 
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NT; v[102]=0;return;
l2:pile[v[22]]=773; pile[WZ1]=NY; pile[WZ2]=NX; 
(*f[1663])( );if(v[102]) goto l3;     /*ESIMP0(773,NY,NX,NT)*/
NT=pile[WZ3]; 
goto l18;
l3:pile[v[22]]=774; pile[WZ1]=NY; pile[WZ2]=NX; 
(*f[1663])( );if(v[102]) goto l11;     /*ESIMP0(774,NY,NX,NT)*/
NT=pile[WZ3]; 
goto l18;
l4:pile[v[22]]=830; pile[WZ1]=NY; pile[WZ2]=NX; 
(*f[1663])( );if(v[102]) goto l11;     /*ESIMP0(830,NY,NX,NT)*/
NT=pile[WZ3]; 
goto l18;
l5:pile[v[22]]=665; pile[WZ1]=NY; pile[WZ2]=NX; 
(*f[1663])( );if(v[102]) goto l11;     /*ESIMP0(665,NY,NX,NT)*/
NT=pile[WZ3]; 
goto l18;
l6:pile[v[22]]=774; pile[WZ1]=NY; pile[WZ2]=NX; 
(*f[1663])( );if(v[102]) goto l11;     /*ESIMP0(774,NY,NX,NT)*/
NT=pile[WZ3]; 
goto l18;
l7:pile[v[22]]=111; pile[WZ1]=NY; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,NY,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+6,jvj+7)*/
pile[v[22]]=827; pile[WZ1]=NY; pile[WZ3]=NX; 
(*f[1665])( );if(v[102]) goto l8;     /*ESIMP2(827,NY,jvj+7,NX,NT)*/
NT=pile[WZ4]; 
goto l18;
l8:pile[v[22]]=155; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(155,jvj+7,jvj+8)*/
if((x[jvj+8]==67)) goto l11;
pile[v[22]]=107; pile[WZ1]=NY; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,NY,jvj+9)*/
for(i=x[jvj+9],V29=0;i>0;i=t[i],V29++)  ;
if(V29!=0&&V29!=1) goto l11;
pile[v[22]]=825; pile[WZ2]=V29; pile[WZ3]=NX; 
(*f[1664])( );if(v[102]) goto l11;     /*ESIMP1(825,NY,V29,NX,NT)*/
NT=pile[WZ4]; 
goto l18;
l9:pile[v[22]]=102; pile[WZ1]=NY; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,NY,jvj+10)*/
pile[v[22]]=NY; pile[WZ1]=jvj+11; 
(*f[200])( );if(v[102]) goto l11;     /*NDD0(NY,jvj+11)*/
pile[v[22]]=489; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(489,jvj+11,jvj+12)*/
if((x[jvj+12]==0)) goto l11;
pile[v[22]]=1176; pile[WZ1]=NY; pile[WZ2]=NX; 
(*f[1663])( );if(v[102]) goto l11;     /*ESIMP0(1176,NY,NX,NT)*/
NT=pile[WZ3]; 
goto l18;
l10:pile[v[22]]=549; pile[WZ1]=NY; pile[WZ2]=NX; 
(*f[1663])( );if(v[102]) goto l11;     /*ESIMP0(549,NY,NX,NT)*/
NT=pile[WZ3]; 
goto l18;
l12:if(V45!=0&&V45!=1) goto l13;
pile[v[22]]=772; pile[WZ1]=NY; pile[WZ2]=V45; pile[WZ3]=NX; 
(*f[1664])( );if(v[102]) goto l13;     /*ESIMP1(772,NY,V45,NX,NT)*/
NT=pile[WZ4]; 
goto l18;
l13:pile[v[22]]=111; pile[WZ1]=NY; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,NY,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=52)) goto l14;
pile[v[22]]=738; pile[WZ1]=NY; pile[WZ2]=NX; 
(*f[1663])( );if(v[102]) goto l14;     /*ESIMP0(738,NY,NX,NT)*/
NT=pile[WZ3]; 
goto l18;
l14:pile[v[22]]=101; pile[WZ1]=NY; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,NY,jvj+15)*/
if(x[jvj+15]!=135&&x[jvj+15]!=134) goto l15;
pile[v[22]]=826; pile[WZ3]=NX; 
(*f[1665])( );if(v[102]) goto l15;     /*ESIMP2(826,NY,jvj+15,NX,NT)*/
NT=pile[WZ4]; 
goto l18;
l15:pile[v[22]]=100; pile[WZ1]=NY; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,NY,jvj+16)*/
if((x[jvj+16]!=484)) goto l17;
x[jvj+17]=vo[14];z[jvj+17]=vz[14];
pile[v[22]]=1334; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1334,jvj+17,jvj+18)*/
if((x[jvj+18]==0)) goto l17;
pile[v[22]]=1333; pile[WZ1]=NY; pile[WZ2]=NX; 
(*f[1663])( );if(v[102]) goto l17;     /*ESIMP0(1333,NY,NX,V60)*/
V60=pile[WZ3]; 
l17:x[NX]=NT=incon;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
