#include "dx.h"
void LISTEVRAI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V4=0,V23=0,V3=0,V13=0,V26=0,V5=0,V15=0,V29=0,V7=0,V17=0,V34=0,V32=0;
int B;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=11930;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==175&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=vo[15];z[jvj+3]=vz[15];
pile[v[22]]=135; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(135,jvj+3,jvj+4)*/
pile[v[22]]=191; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(191,jvj+4,jvj+5)*/
if((x[jvj+5]==68)) goto l10;
l8:pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+4,jvj+12)*/
V17=x[jvj+4];
V34=x[jvj+12];
pile[v[22]]=jvj+4; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+4,191,68)*/
pile[v[22]]=41; pile[WZ1]=V17; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V17,0,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V34; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(20,V34,V32,V4)*/
V4=pile[WZ3]; 
V3=incon;
pile[v[22]]=134; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(134,jvj+4,jvj+6)*/
V11=x[jvj+6];
pile[v[22]]=V4; pile[WZ1]=70; 
(*f[249])( );     /*SPC1(V4,70,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V11; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(41,V11,V23,V3)*/
V3=pile[WZ3]; 
l2:V5=incon;
pile[v[22]]=120; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(120,jvj+4,jvj+7)*/
V13=x[jvj+7];
pile[v[22]]=V3; pile[WZ1]=83; 
(*f[249])( );     /*SPC1(V3,83,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V13; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(41,V13,V26,V5)*/
V5=pile[WZ3]; 
l4:V7=incon;
pile[v[22]]=135; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(135,jvj+4,jvj+8)*/
V15=x[jvj+8];
pile[v[22]]=V5; pile[WZ1]=86; 
(*f[249])( );     /*SPC1(V5,86,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V15; pile[WZ2]=V29; 
(*f[39])( );     /*SDX0(41,V15,V29,V7)*/
V7=pile[WZ3]; 
l9:pile[v[22]]=V7; 
(*f[40])( );     /*SLG0(V7)*/
pile[v[22]]=120; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(120,jvj+4,jvj+9)*/
pile[v[22]]=jvj+9; 
(*f[594])( );     /*LISTEVRAI1(jvj+9)*/
l6:pile[v[22]]=134; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(134,jvj+4,jvj+10)*/
pile[v[22]]=jvj+10; 
(*f[594])( );     /*LISTEVRAI1(jvj+10)*/
l7:pile[v[22]]=135; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(135,jvj+4,jvj+11)*/
pile[v[22]]=jvj+11; 
(*f[594])( );     /*LISTEVRAI1(jvj+11)*/
l10:x[jvj+13]=vo[15];z[jvj+13]=vz[15];
pile[v[22]]=302; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(302,jvj+13,jvj+14)*/
l11:if((x[jvj+14]>0)) goto l12;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l1:V3=V4;
goto l2;
l3:V5=V3;
goto l4;
l5:V7=V5;
goto l9;
l12:x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=191; pile[WZ1]=jvj+15; 
(*f[71])( );     /*ENLV0(191,jvj+15)*/
x[jvj+14]=t[x[jvj+14]];
goto l11;
}
