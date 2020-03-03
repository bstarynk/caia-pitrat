#include "dx.h"
void MONICREVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V30=0,JJ=0,V11=0,V21=0,V23=0,J=0,I=0,V42=0,NK=0,V36=0,V35=0,V43=0,V52=0,V51=0,V48=0,V47=0,V37=0,V44=0,V45=0,V10=0;
int RS;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=36;
x[jvj+1]=11491;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2043&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RS=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+8]=0 ;z[jvj+8]=0;
x[jvj+2]=vo[13];z[jvj+2]=vz[13];
pile[v[22]]=717; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(717,jvj+2,jvj+3)*/
pile[v[22]]=718; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(718,jvj+3,jvj+4)*/
l1:if((x[jvj+4]<=0)) goto l3;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=218; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+5,jvj+6)*/
pile[v[22]]=1600; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1600,jvj+6,jvj+7)*/
if((x[jvj+7]!=68)) goto l2;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+5)*/
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l3:x[jvj+36]=x[jvj+8] ;z[jvj+36]=z[jvj+8];
if((v[229]<=0)) goto l5;
x[jvj+28]=vo[14];z[jvj+28]=vz[14];
pile[v[22]]=929; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(929,jvj+28,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=11491; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11491,0,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V37; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(41,V37,V44,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; 
(*f[40])( );     /*SLG0(V45)*/
x[jvj+33]=x[jvj+36] ;z[jvj+33]=z[jvj+36];
l21:if((x[jvj+33]<=0)) goto l5;
x[jvj+23]=s[x[jvj+33]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+33];
pile[v[22]]=218; pile[WZ1]=jvj+23; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(218,jvj+23,jvj+27)*/
V48=x[jvj+27];
pile[v[22]]=20; pile[WZ1]=V48; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V48,0,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=V47; 
(*f[40])( );     /*SLG0(V47)*/
pile[v[22]]=159; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(159,jvj+23,jvj+24)*/
x[jvj+32]=x[jvj+24] ;z[jvj+32]=z[jvj+24];
l18:if((x[jvj+32]<=0)) goto l22;
x[jvj+25]=s[x[jvj+32]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+32];
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+25,jvj+26)*/
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(110,jvj+25,V43)*/
V43=pile[WZ2]; 
x[jvj+22]=x[jvj+26] ;z[jvj+22]=z[jvj+26];
V52=x[jvj+22];
pile[v[22]]=0; pile[WZ1]=V43; 
(*f[37])( );     /*SRA0(0,V43,V36)*/
V36=pile[WZ2]; 
V35=incon;
pile[v[22]]=929; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(929,jvj+22,V42)*/
V42=pile[WZ2]; 
NK=V42;
pile[v[22]]=41; pile[WZ1]=NK; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(41,NK,V36,V35)*/
V35=pile[WZ3]; 
l20:pile[v[22]]=20; pile[WZ1]=V52; pile[WZ2]=V35; 
(*f[39])( );     /*SDX0(20,V52,V35,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; 
(*f[40])( );     /*SLG0(V51)*/
l19:x[jvj+32]=t[x[jvj+32]];
goto l18;
l4:x[jvj+34]=s[x[jvj+21]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+21];
x[RS]=x[jvj+34] ;z[RS]=z[jvj+34];
l24:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; v[102]=0;return;
l5:x[jvj+21]=0 ;z[jvj+21]=0;
V10=incon;
x[jvj+29]=x[jvj+36] ;z[jvj+29]=z[jvj+36];
l9:if((x[jvj+29]>0)) goto l10;
if((x[jvj+21]>0)) goto l4;
l23:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; v[102]=1;return;
l6:pile[v[22]]=160; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(160,jvj+9,jvj+12)*/
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+12,V30)*/
V30=pile[WZ2]; 
JJ=V30;
V11=JJ;
l15:if((V11==(-99999998))) goto l13;
I=V11;
if(V10==incon) goto l25;
if((I==V10)) goto l16;
if((I>=V10)) goto l25;
l13:x[jvj+30]=t[x[jvj+30]];
l11:if((x[jvj+30]>0)) goto l12;
x[jvj+29]=t[x[jvj+29]];
goto l9;
l7:V11=(-99999998);
goto l13;
l8:x[jvj+31]=x[jvj+15] ;z[jvj+31]=z[jvj+15];
l14:x[jvj+9]=x[jvj+31] ;z[jvj+9]=z[jvj+31];
V11=incon;
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]==625)) goto l6;
if((x[jvj+11]!=1280)) goto l7;
pile[v[22]]=103; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+9,jvj+13)*/
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+13,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=jvj+9; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(160,jvj+9,jvj+14)*/
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+14,V23)*/
V23=pile[WZ2]; 
if((V23!=0)) goto l7;
J=V21;
V11=J;
goto l15;
l10:x[jvj+17]=s[x[jvj+29]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+29];
pile[v[22]]=159; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(159,jvj+17,jvj+18)*/
x[jvj+30]=x[jvj+18] ;z[jvj+30]=z[jvj+18];
goto l11;
l12:x[jvj+19]=s[x[jvj+30]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+30];
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+19,jvj+20)*/
x[jvj+15]=x[jvj+20] ;z[jvj+15]=z[jvj+20];
x[jvj+31]=incon;
pile[v[22]]=1603; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1603,jvj+15,jvj+16)*/
x[jvj+35]=x[jvj+16] ;z[jvj+35]=z[jvj+16];
x[jvj+31]=x[jvj+35] ;z[jvj+31]=z[jvj+35];
goto l14;
l17:V35=V36;
goto l20;
l22:x[jvj+33]=t[x[jvj+33]];
goto l21;
l25:V10=I;
x[jvj+21]=0 ;z[jvj+21]=0;
l16:pile[v[22]]=jvj+21; pile[WZ1]=jvj+17; 
(*f[68])( );     /*PLUE0(jvj+21,jvj+17)*/
goto l13;
}
