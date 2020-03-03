#include "dx.h"
void EXAPBMSG2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V16=0,N=0,V3=0,V17=0,V=0,V6=0,V5=0,V20=0,D=0,V13=0,V12=0,V21=0,V10=0,V9=0,V22=0,C=0,V14=0,V18=0,A=0,V7=0,V183=0,V158=0,V161=0,V160=0,V165=0,V164=0,V163=0,V332=0,V170=0,V173=0,V336=0,V335=0,V337=0,V339=0,V340=0,V341=0;
int G,M;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=11229;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==857&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
G=pile[v[22]]; M=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=M; 
(*f[42])( );     /*SRA1(135,0,M,V2)*/
V2=pile[WZ3]; 
;
pile[v[22]]=V2; 
(*f[40])( );     /*SLG0(V2)*/
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(250,158,jvj+7)*/
x[jvj+14]=x[G] ;z[jvj+14]=z[G];
l13:if((x[jvj+14]>0)) goto l14;
for(i=x[G],V163=0;i>0;i=t[i],V163++)  ;
V158=incon;
V158=0;
pile[v[22]]=41; pile[WZ1]=V163; pile[WZ2]=V158; 
(*f[39])( );     /*SDX0(41,V163,V158,V332)*/
V332=pile[WZ3]; 
pile[v[22]]=V332; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V332,(-4670),V161)*/
V161=pile[WZ2]; 
V160=incon;
if((V163>1)) goto l18;
V160=V161;
l20:pile[v[22]]=V160; 
(*f[40])( );     /*SLG0(V160)*/
pile[v[22]]=763; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(763,jvj+7,jvj+8)*/
l21:if((x[jvj+8]>0)) goto l22;
l25:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l1:V3=0;
l16:V183=x[jvj+6];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+7; 
(*f[1176])( );     /*STOMSG0(jvj+3,jvj+7)*/
pile[v[22]]=20; pile[WZ1]=V183; pile[WZ2]=V3; 
(*f[39])( );     /*SDX0(20,V183,V3,V6)*/
V6=pile[WZ3]; 
V5=incon;
pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(163,jvj+3,V17)*/
V17=pile[WZ2]; 
V=V17;
pile[v[22]]=V6; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V6,V,V5)*/
V5=pile[WZ2]; 
l3:V7=incon;
pile[v[22]]=510; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(510,jvj+3,V18)*/
V18=pile[WZ2]; 
A=V18;
pile[v[22]]=41; pile[WZ1]=A; pile[WZ2]=V5; 
(*f[39])( );     /*SDX0(41,A,V5,V10)*/
V10=pile[WZ3]; 
V9=incon;
x[jvj+13]=incon;
pile[v[22]]=145; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(145,jvj+3,jvj+4)*/
x[jvj+15]=x[jvj+4] ;z[jvj+15]=z[jvj+4];
x[jvj+13]=x[jvj+15] ;z[jvj+13]=z[jvj+15];
l6:x[jvj+5]=x[jvj+13] ;z[jvj+5]=z[jvj+13];
pile[v[22]]=331; pile[WZ1]=jvj+5; 
(*f[219])( );if(v[102]) goto l8;     /*FNDC2(331,jvj+5,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=V21; 
(*f[38])( );     /*SPC0(V10,V21,V13)*/
V13=pile[WZ2]; 
V12=incon;
pile[v[22]]=332; pile[WZ1]=jvj+5; 
(*f[219])( );if(v[102]) goto l5;     /*FNDC2(332,jvj+5,V20)*/
V20=pile[WZ2]; 
D=V20;
pile[v[22]]=V13; pile[WZ1]=D; 
(*f[38])( );     /*SPC0(V13,D,V12)*/
V12=pile[WZ2]; 
l7:V9=V12;
l9:V14=incon;
pile[v[22]]=515; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(515,jvj+3,V22)*/
V22=pile[WZ2]; 
C=V22;
pile[v[22]]=V9; pile[WZ1]=C; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V9,C,41,V14)*/
V14=pile[WZ3]; 
l11:V7=V14;
l17:pile[v[22]]=V7; 
(*f[40])( );     /*SLG0(V7)*/
l15:x[jvj+14]=t[x[jvj+14]];
goto l13;
l2:V5=V6;
goto l3;
l4:x[jvj+13]=66 ;z[jvj+13]=66;
goto l6;
l5:V12=V13;
goto l7;
l8:V9=V10;
goto l9;
l10:V14=V9;
goto l11;
l12:V7=V5;
goto l17;
l14:x[jvj+3]=s[x[jvj+14]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+14];
pile[v[22]]=109; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(109,jvj+3,jvj+6)*/
V3=incon;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(117,jvj+3,V16)*/
V16=pile[WZ2]; 
N=V16;
pile[v[22]]=N; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(N,0,42,V3)*/
V3=pile[WZ3]; 
goto l16;
l18:pile[v[22]]=V161; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V161,83,V160)*/
V160=pile[WZ2]; 
goto l20;
l19:pile[v[22]]=V165; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V165,83,V164)*/
V164=pile[WZ2]; 
l24:pile[v[22]]=V164; 
(*f[40])( );     /*SLG0(V164)*/
l23:x[jvj+8]=t[x[jvj+8]];
goto l21;
l22:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=109; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(109,jvj+9,jvj+10)*/
pile[v[22]]=878; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(878,jvj+10,jvj+11)*/
for(i=x[jvj+11],V170=0;i>0;i=t[i],V170++)  ;
pile[v[22]]=159; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(159,jvj+9,jvj+12)*/
for(i=x[jvj+12],V173=0;i>0;i=t[i],V173++)  ;
V336=x[jvj+10];
pile[v[22]]=20; pile[WZ1]=V336; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V336,0,V335)*/
V335=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V173; pile[WZ2]=V335; 
(*f[39])( );     /*SDX0(41,V173,V335,V337)*/
V337=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V337; pile[WZ2]=301; 
(*f[42])( );     /*SRA1(135,V337,301,V339)*/
V339=pile[WZ3]; 
pile[v[22]]=V339; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V339,(-740),V340)*/
V340=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V170; pile[WZ2]=V340; 
(*f[39])( );     /*SDX0(41,V170,V340,V341)*/
V341=pile[WZ3]; 
pile[v[22]]=V341; pile[WZ1]=(-2986); 
(*f[37])( );     /*SRA0(V341,(-2986),V165)*/
V165=pile[WZ2]; 
V164=incon;
if((V170>1)) goto l19;
V164=V165;
goto l24;
}
