#include "dx.h"
void ELIMINE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int S=0,V6=0,V4=0,V3=0,V10=0,V11=0,V70=0,V61=0,V62=0,V63=0,V65=0,V66=0,V68=0,V69=0,V71=0,V5=0,V46=0,V2=0,V16=0,V15=0,V20=0,V47=0;
int HIST,A;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=10368;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==966&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
HIST=pile[v[22]]; A=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
S=incon;
z[A]=(-1);
S=67;
pile[v[22]]=101; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,A,jvj+2)*/
if((x[jvj+2]==134)) goto l33;
l1:if((v[244]>0)) goto l4;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,A,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=625)) goto l4;
pile[v[22]]=160; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(160,A,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=41)) goto l4;
x[jvj+7]=d[20];z[jvj+7]=0;
l2:if((x[jvj+7]<=0)) goto l4;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+8,A,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=484)) goto l3;
pile[v[22]]=268; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(268,jvj+8,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=A; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+11,A,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=41)) goto l3;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+14; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(jvj+9,jvj+14)*/
pile[v[22]]=489; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(489,jvj+14,jvj+15)*/
if((x[jvj+15]==0)) goto l33;
l3:x[jvj+7]=t[x[jvj+7]];
goto l2;
l4:x[jvj+16]=x[A] ;z[jvj+16]=z[A];
pile[v[22]]=jvj+16; 
(*f[1321])( );     /*ENLISENVNOM0(jvj+16)*/
x[jvj+21]=vo[13];z[jvj+21]=vz[13];
pile[v[22]]=120; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(120,jvj+21,jvj+22)*/
pile[v[22]]=jvj+16; 
(*f[1322])( );     /*ENLISNOM0(jvj+16,jvj+21,jvj+22)*/
l14:x[jvj+23]=x[jvj+21] ;z[jvj+23]=z[jvj+21];
pile[v[22]]=120; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(120,jvj+23,jvj+24)*/
x[jvj+25]=x[jvj+24] ;z[jvj+25]=z[jvj+24];
pile[v[22]]=319; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(319,jvj+25,jvj+26)*/
if((x[jvj+26]!=x[jvj+16])) goto l15;
pile[v[22]]=120; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(120,jvj+25,jvj+27)*/
pile[v[22]]=jvj+23; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+23,120,jvj+27)*/
l15:pile[v[22]]=120; pile[WZ1]=jvj+23; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(120,jvj+23,jvj+21)*/
goto l14;
l7:V3=V4;
l9:if(V3!=incon) goto l10;
l11:if((V5!=2)) goto l31;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
l31:if(S!=incon) goto l32;
l34:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l8:if((V5>=4)) goto l11;
pile[v[22]]=244; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(244,jvj+16,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=929; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(929,jvj+16,V11)*/
V11=pile[WZ2]; 
V70=x[jvj+16];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=634; 
(*f[42])( );     /*SRA1(135,0,634,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=V61; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V61,91,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=V62; pile[WZ1]=V11; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V62,V11,41,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=V63; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V63,93,V4)*/
V4=pile[WZ2]; 
V3=incon;
pile[v[22]]=1070; pile[WZ1]=jvj+16; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1070,jvj+16,jvj+18)*/
if((x[jvj+18]!=68)) goto l6;
pile[v[22]]=V4; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V4,42,V3)*/
V3=pile[WZ2]; 
l6:if(V3==incon) goto l7;
goto l9;
l10:pile[v[22]]=V3; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V3,40,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=V65; pile[WZ1]=V10; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V65,V10,41,V66)*/
V66=pile[WZ3]; 
pile[v[22]]=V66; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V66,41,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V70; pile[WZ2]=V68; 
(*f[39])( );     /*SDX0(20,V70,V68,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=V69; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l11;     /*SORHIST1(V69,HIST,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=V71; 
(*f[40])( );     /*SLG0(V71)*/
goto l11;
l13:x[jvj+28]=634 ;z[jvj+28]=634;
l17:if(x[jvj+28]!=incon) goto l18;
l19:pile[v[22]]=jvj+16; pile[WZ1]=jvj+29; 
(*f[887])( );     /*VARND0(jvj+16,jvj+29)*/
V2=x[jvj+16];
l20:if((x[jvj+29]>0)) goto l21;
x[jvj+20]=vo[16];z[jvj+20]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+20; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(509,jvj+20,jvj+32)*/
for(a=x[jvj+32];a>0;a=t[a]) if(s[a]==x[jvj+16]) goto l23;
l24:pile[v[22]]=1087; pile[WZ1]=jvj+20; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(1087,jvj+20,jvj+34)*/
l25:if((x[jvj+34]>0)) goto l26;
V5=g[330];
if((V5<=0)) goto l31;
V6=vg[330];
if((V6!=0)) goto l5;
if((V5<3)) goto l8;
l5:pile[v[22]]=330; pile[WZ1]=10368; pile[WZ2]=0; pile[WZ3]=(-601); pile[WZ4]=jvj+16; pile[WZ5]=jvj+17; 
(*f[232])( );     /*INTERP3(330,10368,0,(-601),jvj+16,jvj+17)*/
if((x[jvj+17]==135)) goto l8;
goto l31;
l16:if((v[111]!=0)) goto l19;
x[jvj+28]=incon;
pile[v[22]]=218; pile[WZ1]=HIST; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(218,HIST,jvj+19)*/
if((x[jvj+19]!=11016)) goto l12;
x[jvj+28]=1203 ;z[jvj+28]=1203;
l12:if(x[jvj+28]==incon) goto l13;
goto l17;
l18:pile[v[22]]=jvj+28; pile[WZ1]=HIST; pile[WZ2]=jvj+16; 
(*f[1320])( );     /*ARCHIVE1(jvj+28,HIST,jvj+16)*/
goto l19;
l21:x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
z[jvj+30]=(-1);
pile[v[22]]=509; pile[WZ1]=jvj+30; pile[WZ2]=V2; 
(*f[134])( );     /*OTA0(509,jvj+30,V2)*/
pile[v[22]]=868; pile[WZ1]=jvj+16; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(868,jvj+16,jvj+31)*/
if((x[jvj+31]!=55)) goto l22;
pile[v[22]]=969; pile[WZ1]=jvj+30; pile[WZ2]=V2; 
(*f[134])( );     /*OTA0(969,jvj+30,V2)*/
l22:x[jvj+29]=t[x[jvj+29]];
goto l20;
l23:x[jvj+33]=vo[14];z[jvj+33]=vz[14];
pile[v[22]]=220; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(220,jvj+33,V16)*/
V16=pile[WZ2]; 
V15=V16+1;
V20=x[jvj+16];
vv[39]=V15;
pile[v[22]]=509; pile[WZ1]=jvj+20; pile[WZ2]=V20; 
(*f[134])( );     /*OTA0(509,jvj+20,V20)*/
pile[v[22]]=jvj+33; pile[WZ1]=220; pile[WZ2]=V15; 
(*f[43])( );     /*CHGC2(jvj+33,220,V15)*/
goto l24;
l26:x[jvj+35]=s[x[jvj+34]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+34];
pile[v[22]]=509; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(509,jvj+35,jvj+36)*/
x[jvj+39]=x[jvj+36] ;z[jvj+39]=z[jvj+36];
l27:if((x[jvj+39]>0)) goto l28;
x[jvj+34]=t[x[jvj+34]];
goto l25;
l28:x[jvj+37]=s[x[jvj+39]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+39];
pile[v[22]]=jvj+37; pile[WZ1]=jvj+16; pile[WZ2]=jvj+38; 
(*f[760])( );     /*MEMEX0(jvj+37,jvj+16,jvj+38)*/
if((x[jvj+38]==135)) goto l30;
l29:x[jvj+39]=t[x[jvj+39]];
goto l27;
l30:V47=x[jvj+37];
pile[v[22]]=509; pile[WZ1]=jvj+35; pile[WZ2]=V47; 
(*f[134])( );     /*OTA0(509,jvj+35,V47)*/
if((x[jvj+36]!=0)) goto l29;
V46=x[jvj+35];
pile[v[22]]=1087; pile[WZ1]=jvj+20; pile[WZ2]=V46; 
(*f[134])( );     /*OTA0(1087,jvj+20,V46)*/
goto l29;
l32:if((S==67)) goto l33;
goto l34;
l33:pile[v[22]]=HIST; 
(*f[1323])( );     /*ESTCEFINI0(HIST)*/
goto l34;
}
