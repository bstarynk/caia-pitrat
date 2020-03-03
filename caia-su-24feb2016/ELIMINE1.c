#include "dx.h"
void ELIMINE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V4=0,V3=0,V10=0,V11=0,V70=0,V61=0,V62=0,V63=0,V65=0,V66=0,V68=0,V69=0,V71=0,V5=0,V46=0,V2=0,V16=0,V15=0,V20=0,V47=0;
int A,HIST,S;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=40;
x[jvj+1]=10368;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1752&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; HIST=pile[v[22]+1]; S=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
z[A]=(-1);
pile[v[22]]=101; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,A,jvj+3)*/
if((x[jvj+3]==134)) goto l31;
l1:if((v[244]>0)) goto l4;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,A,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=625)) goto l4;
pile[v[22]]=160; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(160,A,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=41)) goto l4;
x[jvj+8]=d[20];z[jvj+8]=0;
l2:if((x[jvj+8]<=0)) goto l4;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+9,A,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=484)) goto l3;
pile[v[22]]=268; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(268,jvj+9,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=A; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+12,A,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=41)) goto l3;
pile[v[22]]=jvj+10; pile[WZ1]=jvj+15; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(jvj+10,jvj+15)*/
pile[v[22]]=489; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(489,jvj+15,jvj+16)*/
if((x[jvj+16]==0)) goto l31;
l3:x[jvj+8]=t[x[jvj+8]];
goto l2;
l4:x[jvj+17]=x[A] ;z[jvj+17]=z[A];
pile[v[22]]=jvj+17; 
(*f[1321])( );     /*ENLISENVNOM0(jvj+17)*/
x[jvj+22]=vo[13];z[jvj+22]=vz[13];
pile[v[22]]=120; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(120,jvj+22,jvj+23)*/
pile[v[22]]=jvj+17; 
(*f[1322])( );     /*ENLISNOM0(jvj+17,jvj+22,jvj+23)*/
l14:x[jvj+24]=x[jvj+22] ;z[jvj+24]=z[jvj+22];
pile[v[22]]=120; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(120,jvj+24,jvj+25)*/
x[jvj+26]=x[jvj+25] ;z[jvj+26]=z[jvj+25];
pile[v[22]]=319; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(319,jvj+26,jvj+27)*/
if((x[jvj+27]!=x[jvj+17])) goto l15;
pile[v[22]]=120; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(120,jvj+26,jvj+28)*/
pile[v[22]]=jvj+24; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+24,120,jvj+28)*/
l15:pile[v[22]]=120; pile[WZ1]=jvj+24; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(120,jvj+24,jvj+22)*/
goto l14;
l7:V3=V4;
l9:if(V3!=incon) goto l10;
l11:if((V5!=2)) goto l31;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
l31:if((x[S]!=67)) goto l32;
pile[v[22]]=HIST; 
(*f[1323])( );     /*ESTCEFINI0(HIST)*/
l32:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l8:if((V5>=4)) goto l11;
pile[v[22]]=244; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(244,jvj+17,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=929; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(929,jvj+17,V11)*/
V11=pile[WZ2]; 
V70=x[jvj+17];
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
pile[v[22]]=1070; pile[WZ1]=jvj+17; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1070,jvj+17,jvj+19)*/
if((x[jvj+19]!=68)) goto l6;
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
l13:x[jvj+29]=634 ;z[jvj+29]=634;
l17:if(x[jvj+29]!=incon) goto l18;
l19:pile[v[22]]=jvj+17; pile[WZ1]=jvj+30; 
(*f[887])( );     /*VARND0(jvj+17,jvj+30)*/
V2=x[jvj+17];
l20:if((x[jvj+30]>0)) goto l21;
x[jvj+21]=vo[16];z[jvj+21]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+21; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(509,jvj+21,jvj+33)*/
for(a=x[jvj+33];a>0;a=t[a]) if(s[a]==x[jvj+17]) goto l23;
l24:pile[v[22]]=1087; pile[WZ1]=jvj+21; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(1087,jvj+21,jvj+35)*/
l25:if((x[jvj+35]>0)) goto l26;
V5=g[330];
if((V5<=0)) goto l31;
V6=vg[330];
if((V6!=0)) goto l5;
if((V5<3)) goto l8;
l5:pile[v[22]]=330; pile[WZ1]=10368; pile[WZ2]=1; pile[WZ3]=(-601); pile[WZ4]=jvj+17; pile[WZ5]=jvj+18; 
(*f[232])( );     /*INTERP3(330,10368,1,(-601),jvj+17,jvj+18)*/
if((x[jvj+18]==135)) goto l8;
goto l31;
l16:if((v[111]!=0)) goto l19;
x[jvj+29]=incon;
pile[v[22]]=218; pile[WZ1]=HIST; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(218,HIST,jvj+20)*/
if((x[jvj+20]!=11016)) goto l12;
x[jvj+29]=1203 ;z[jvj+29]=1203;
l12:if(x[jvj+29]==incon) goto l13;
goto l17;
l18:pile[v[22]]=jvj+29; pile[WZ1]=HIST; pile[WZ2]=jvj+17; 
(*f[1320])( );     /*ARCHIVE1(jvj+29,HIST,jvj+17)*/
goto l19;
l21:x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
z[jvj+31]=(-1);
pile[v[22]]=509; pile[WZ1]=jvj+31; pile[WZ2]=V2; 
(*f[134])( );     /*OTA0(509,jvj+31,V2)*/
pile[v[22]]=868; pile[WZ1]=jvj+17; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(868,jvj+17,jvj+32)*/
if((x[jvj+32]!=55)) goto l22;
pile[v[22]]=969; pile[WZ1]=jvj+31; pile[WZ2]=V2; 
(*f[134])( );     /*OTA0(969,jvj+31,V2)*/
l22:x[jvj+30]=t[x[jvj+30]];
goto l20;
l23:x[jvj+34]=vo[14];z[jvj+34]=vz[14];
pile[v[22]]=220; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(220,jvj+34,V16)*/
V16=pile[WZ2]; 
V15=V16+1;
V20=x[jvj+17];
vv[39]=V15;
pile[v[22]]=509; pile[WZ1]=jvj+21; pile[WZ2]=V20; 
(*f[134])( );     /*OTA0(509,jvj+21,V20)*/
pile[v[22]]=jvj+34; pile[WZ1]=220; pile[WZ2]=V15; 
(*f[43])( );     /*CHGC2(jvj+34,220,V15)*/
goto l24;
l26:x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=509; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(509,jvj+36,jvj+37)*/
x[jvj+40]=x[jvj+37] ;z[jvj+40]=z[jvj+37];
l27:if((x[jvj+40]>0)) goto l28;
x[jvj+35]=t[x[jvj+35]];
goto l25;
l28:x[jvj+38]=s[x[jvj+40]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+40];
pile[v[22]]=jvj+38; pile[WZ1]=jvj+17; pile[WZ2]=jvj+39; 
(*f[760])( );     /*MEMEX0(jvj+38,jvj+17,jvj+39)*/
if((x[jvj+39]==135)) goto l30;
l29:x[jvj+40]=t[x[jvj+40]];
goto l27;
l30:V47=x[jvj+38];
pile[v[22]]=509; pile[WZ1]=jvj+36; pile[WZ2]=V47; 
(*f[134])( );     /*OTA0(509,jvj+36,V47)*/
if((x[jvj+37]!=0)) goto l29;
V46=x[jvj+36];
pile[v[22]]=1087; pile[WZ1]=jvj+21; pile[WZ2]=V46; 
(*f[134])( );     /*OTA0(1087,jvj+21,V46)*/
goto l29;
}
