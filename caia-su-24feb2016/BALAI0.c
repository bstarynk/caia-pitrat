#include "dx.h"
void BALAI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V22=0,V24=0,V28=0,V21=0,V23=0,NT=0,V25=0,V27=0,V31=0,V29=0,V30=0,V32=0,V55=0,V61=0,V60=0,V69=0,V71=0,V65=0,V66=0,V67=0,V59=0,V57=0,V62=0,V58=0,V70=0,V72=0,V44=0,V43=0;
int A;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=46;
x[jvj+1]=10749;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1149&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[A] ;z[jvj+2]=z[A];
l4:x[jvj+13]=d[87];z[jvj+13]=0;
l2:if((x[jvj+13]>0)) goto l3;
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=484)) goto l1;
pile[v[22]]=102; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+2,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+4,jvj+5)*/
if(x[jvj+5]==96||x[jvj+5]==89||x[jvj+5]==41||x[jvj+5]==20||x[jvj+5]==128||x[jvj+5]==570||x[jvj+5]==1317) goto l15;
l1:pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+2,jvj+8)*/
if((x[jvj+8]!=1050)) goto l9;
pile[v[22]]=102; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+2,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+9,jvj+10)*/
if(x[jvj+10]==96||x[jvj+10]==89||x[jvj+10]==41||x[jvj+10]==20||x[jvj+10]==128||x[jvj+10]==570||x[jvj+10]==1317) goto l15;
l9:x[jvj+16]=d[6];z[jvj+16]=0;
l8:if((x[jvj+16]<=0)) goto l15;
x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+2; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+17,jvj+2,jvj+18)*/
x[jvj+6]=x[jvj+18] ;z[jvj+6]=z[jvj+18];
pile[v[22]]=191; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(191,jvj+6,jvj+7)*/
if((x[jvj+7]==68)) goto l10;
l11:x[jvj+45]=x[jvj+6] ;z[jvj+45]=z[jvj+6];
l22:x[jvj+2]=x[jvj+45] ;z[jvj+2]=z[jvj+45];
goto l4;
l3:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+2; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(jvj+14,jvj+2,jvj+15)*/
x[jvj+44]=x[jvj+15] ;z[jvj+44]=z[jvj+15];
l5:if((x[jvj+44]>0)) goto l6;
x[jvj+13]=t[x[jvj+13]];
goto l2;
l6:x[jvj+11]=s[x[jvj+44]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+44];
pile[v[22]]=191; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(191,jvj+11,jvj+12)*/
if((x[jvj+12]!=68)) goto l7;
x[jvj+44]=t[x[jvj+44]];
goto l5;
l7:x[jvj+45]=x[jvj+11] ;z[jvj+45]=z[jvj+11];
goto l22;
l10:x[jvj+16]=t[x[jvj+16]];
goto l8;
l13:x[jvj+19]=t[x[jvj+19]];
l12:if((x[jvj+19]<=0)) goto l16;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+2; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+20,jvj+2,jvj+21)*/
V22=x[jvj+21];
V24=x[jvj+2];
V28=x[jvj+27];
pile[v[22]]=20; pile[WZ1]=V22; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V22,0,V21)*/
V21=pile[WZ3]; 
pile[WZ1]=V24; pile[WZ2]=V21; 
(*f[39])( );     /*SDX0(20,V24,V21,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=V23; 
(*f[40])( );     /*SLG0(V23)*/
pile[v[22]]=41; pile[WZ1]=NT; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,NT,0,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V28; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(20,V28,V25,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=V27; 
(*f[40])( );     /*SLG0(V27)*/
l16:x[jvj+45]=x[jvj+27] ;z[jvj+45]=z[jvj+27];
if((v[177]<=0)) goto l14;
if((v[178]<=0)) goto l14;
x[jvj+22]=vo[16];z[jvj+22]=vz[16];
pile[v[22]]=502; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(502,jvj+22,jvj+23)*/
pile[v[22]]=102; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+23,jvj+24)*/
x[jvj+31]=vo[16];z[jvj+31]=vz[16];
pile[v[22]]=1371; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(1371,jvj+31,jvj+32)*/
l23:if((x[jvj+32]>0)) goto l29;
x[jvj+33]=vo[14];z[jvj+33]=vz[14];
pile[v[22]]=258; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(258,jvj+33,jvj+34)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+35; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+35)*/
x[jvj+36]=vo[14];z[jvj+36]=vz[14];
x[jvj+37]=vo[16];z[jvj+37]=vz[16];
pile[v[22]]=1371; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(1371,jvj+37,jvj+38)*/
pile[v[22]]=jvj+36; pile[WZ1]=258; 
(*f[34])( );     /*CHGC0(jvj+36,258,jvj+38)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+37; 
(*f[30])( );if(v[102]) goto l14;     /*EVL0(jvj+35,jvj+37,V55)*/
V55=pile[WZ2]; 
if((V55==135)) goto l25;
pile[v[22]]=929; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(929,jvj+36,V61)*/
V61=pile[WZ2]; 
V60=V55;
V69=x[jvj+24];
V71=V60;
pile[v[22]]=70; pile[WZ1]=0; pile[WZ2]=35; 
(*f[41])( );     /*SRB0(70,0,35,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=V65; 
(*f[40])( );     /*SLG0(V65)*/
pile[v[22]]=20; pile[WZ1]=10743; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10743,0,V66)*/
V66=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V66; pile[WZ2]=104; 
(*f[42])( );     /*SRA1(135,V66,104,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V61; pile[WZ2]=V67; 
(*f[39])( );     /*SDX0(41,V61,V67,V59)*/
V59=pile[WZ3]; 
V58=incon;
pile[v[22]]=929; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(929,jvj+24,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V59; pile[WZ2]=929; 
(*f[42])( );     /*SRA1(135,V59,929,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V57; pile[WZ2]=V62; 
(*f[39])( );     /*SDX0(41,V57,V62,V58)*/
V58=pile[WZ3]; 
l24:pile[v[22]]=20; pile[WZ1]=V69; pile[WZ2]=V58; 
(*f[39])( );     /*SDX0(20,V69,V58,V70)*/
V70=pile[WZ3]; 
pile[WZ1]=V71; pile[WZ2]=V70; 
(*f[39])( );     /*SDX0(20,V71,V70,V72)*/
V72=pile[WZ3]; 
pile[v[22]]=V72; 
(*f[40])( );     /*SLG0(V72)*/
l25:pile[v[22]]=jvj+36; pile[WZ1]=258; pile[WZ2]=jvj+34; 
(*f[34])( );     /*CHGC0(jvj+36,258,jvj+34)*/
l14:if((v[177]<=0)) goto l22;
x[jvj+25]=vo[16];z[jvj+25]=vz[16];
pile[v[22]]=502; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(502,jvj+25,jvj+26)*/
V31=x[jvj+26];
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(10,0,32,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; 
(*f[40])( );     /*SLG0(V29)*/
pile[v[22]]=20; pile[WZ1]=V31; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V31,0,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; 
(*f[40])( );     /*SLG0(V30)*/
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(10,0,32,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; 
(*f[40])( );     /*SLG0(V32)*/
goto l22;
l15:pile[v[22]]=jvj+2; pile[WZ1]=jvj+27; 
(*f[1447])( );if(v[102]) goto l19;     /*NORAPL0(jvj+2,jvj+27,NT)*/
NT=pile[WZ2]; 
if((v[177]<=0)) goto l16;
x[jvj+19]=d[88];z[jvj+19]=0;
goto l12;
l18:x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+2; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(jvj+29,jvj+2,jvj+30)*/
x[jvj+45]=x[jvj+30] ;z[jvj+45]=z[jvj+30];
pile[v[22]]=jvj+2; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+2,191,68)*/
goto l22;
l19:x[jvj+28]=d[88];z[jvj+28]=0;
l17:if((x[jvj+28]>0)) goto l18;
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l20:x[jvj+28]=t[x[jvj+28]];
goto l17;
l28:x[jvj+32]=t[x[jvj+32]];
goto l23;
l29:x[jvj+40]=s[x[jvj+32]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+32];
pile[v[22]]=319; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(319,jvj+40,jvj+41)*/
pile[v[22]]=130; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+41,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=274; pile[WZ1]=jvj+40; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(274,jvj+40,jvj+42)*/
pile[v[22]]=489; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(489,jvj+42,jvj+43)*/
x[jvj+46]=x[jvj+43] ;z[jvj+46]=z[jvj+43];
l27:if((x[jvj+46]<=0)) goto l28;
x[jvj+39]=s[x[jvj+46]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+46];
pile[v[22]]=130; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+39,V44)*/
V44=pile[WZ2]; 
if((V44!=V43)) goto l14;
l26:x[jvj+46]=t[x[jvj+46]];
goto l27;
l30:V58=V59;
goto l24;
}
