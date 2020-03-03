#include "dx.h"
void MENAMONIT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V30=0,P=0,V62=0,V63=0,V64=0,V65=0,V66=0,V67=0,V68=0,V69=0,V29=0,V14=0,V12=0,V13=0,V16=0,V10=0,V9=0,V5=0,V21=0,V19=0,V20=0,V23=0,V17=0,V6=0,V46=0,V42=0,V43=0,V44=0,V45=0,V47=0,V48=0,V50=0,V51=0,V56=0,V52=0,V53=0,V54=0,V55=0,V57=0,V58=0,V60=0,V39=0,V37=0,V38=0,V41=0,V36=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=10958;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1279&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
P=x[jvj+9]=V5=x[jvj+3]=incon;
pile[v[22]]=0; pile[WZ1]=927; pile[WZ2]=jvj+9; 
(*f[46])( );     /*TRI0(0,927,jvj+9)*/
x[jvj+2]=vo[13];z[jvj+2]=vz[13];
pile[v[22]]=717; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(717,jvj+2,jvj+3)*/
x[jvj+5]=x[jvj+3] ;z[jvj+5]=z[jvj+3];
l1:x[jvj+4]=x[jvj+5] ;z[jvj+4]=z[jvj+5];
pile[v[22]]=718; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(718,jvj+4,jvj+6)*/
x[jvj+23]=x[jvj+6] ;z[jvj+23]=z[jvj+6];
l2:if((x[jvj+23]>0)) goto l3;
pile[v[22]]=120; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(120,jvj+4,jvj+5)*/
goto l1;
l3:x[jvj+7]=s[x[jvj+23]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+23];
pile[v[22]]=218; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(218,jvj+7,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=927; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+8,927,1)*/
pile[v[22]]=jvj+9; 
(*f[186])( );     /*BTC0(jvj+9,927,1)*/
l4:x[jvj+23]=t[x[jvj+23]];
goto l2;
l6:if((V29>=4)) goto l7;
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V62; pile[WZ2]=10958; 
(*f[98])( );     /*SRA3(135,V62,10958,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=V63; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V63,125,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=15; pile[WZ1]=V64; pile[WZ2]=64; 
(*f[41])( );     /*SRB0(15,V64,64,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=10958; pile[WZ2]=V65; 
(*f[39])( );     /*SDX0(20,10958,V65,V66)*/
V66=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V66; pile[WZ2]=927; 
(*f[42])( );     /*SRA1(135,V66,927,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=V67; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V67,58,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=V68; pile[WZ1]=P; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V68,P,41,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=V69; 
(*f[40])( );     /*SLG0(V69)*/
l7:if((V29!=2)) goto l21;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
l21:if(x[jvj+3]!=incon) goto l22;
l27:pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(1484,854,V39)*/
V39=pile[WZ2]; 
V37=sepfacts+1;
V38=sepfacts+V39;
l28:if((V37>V38)) goto l30;
V41=r[V37];
if((V41!=1)) goto l29;
x[jvj+22]=V37 ;z[jvj+22]=(V37<=sepcte) ? V37 : 0;
V36=s[x[jvj+22]];
if((V36!=68)) goto l29;
pile[v[22]]=927; pile[WZ1]=jvj+22; 
(*f[71])( );     /*ENLV0(927,jvj+22)*/
l29:V37++;
goto l28;
l8:V29=g[529];
if((V29<=0)) goto l21;
V30=vg[529];
if((V30!=0)) goto l5;
if((V29<3)) goto l6;
l5:pile[v[22]]=529; pile[WZ1]=10958; pile[WZ2]=0; pile[WZ3]=(-624); pile[WZ4]=P; pile[WZ5]=jvj+10; 
(*f[612])( );     /*INTERP9(529,10958,0,(-624),P,jvj+10)*/
if((x[jvj+10]==135)) goto l6;
goto l21;
l9:if(x[jvj+9]!=incon) goto l10;
goto l21;
l10:pile[v[22]]=927; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(927,jvj+9,P)*/
P=pile[WZ2]; 
if(P!=incon) goto l8;
goto l21;
l12:V12++;
l11:if((V12>V13)) goto l27;
V16=r[V12];
if((V16!=1)) goto l12;
x[jvj+11]=V12 ;z[jvj+11]=(V12<=sepcte) ? V12 : 0;
V10=s[x[jvj+11]];
if((V10!=68)) goto l12;
pile[v[22]]=927; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(927,jvj+11,V9)*/
V9=pile[WZ2]; 
if((V9!=V5)) goto l12;
pile[v[22]]=1033; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1033,jvj+11,jvj+12)*/
if((x[jvj+12]!=68)) goto l12;
V56=x[jvj+11];
x[jvj+16]=x[jvj+3] ;z[jvj+16]=z[jvj+3];
l16:x[jvj+15]=x[jvj+16] ;z[jvj+15]=z[jvj+16];
pile[v[22]]=718; pile[WZ1]=jvj+15; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(718,jvj+15,jvj+17)*/
x[jvj+24]=x[jvj+17] ;z[jvj+24]=z[jvj+17];
l17:if((x[jvj+24]>0)) goto l18;
pile[v[22]]=120; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(120,jvj+15,jvj+16)*/
goto l16;
l13:pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(1484,854,V21)*/
V21=pile[WZ2]; 
V19=sepfacts+1;
V20=sepfacts+V21;
l14:if((V19>V20)) goto l24;
V23=r[V19];
if((V23!=1)) goto l15;
x[jvj+13]=V19 ;z[jvj+13]=(V19<=sepcte) ? V19 : 0;
V17=s[x[jvj+13]];
if((V17!=68)) goto l15;
pile[v[22]]=1033; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1033,jvj+13,jvj+14)*/
if((x[jvj+14]!=68)) goto l15;
pile[v[22]]=927; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(927,jvj+13,V6)*/
V6=pile[WZ2]; 
if(V6>V5) V5=V6;
l15:V19++;
goto l14;
l18:x[jvj+18]=s[x[jvj+24]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+24];
pile[v[22]]=218; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(218,jvj+18,jvj+19)*/
if((x[jvj+19]!=x[jvj+11])) goto l19;
pile[v[22]]=jvj+18; 
(*f[824])( );     /*ENLISENV0(jvj+18)*/
l19:x[jvj+24]=t[x[jvj+24]];
goto l17;
l20:if((V5<=3000)) goto l26;
x[jvj+20]=vo[13];z[jvj+20]=vz[13];
x[jvj+21]=vo[14];z[jvj+21]=vz[14];
V46=x[jvj+11];
pile[v[22]]=jvj+20; pile[WZ1]=901; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+20,901,jvj+11)*/
pile[v[22]]=15; pile[WZ1]=0; pile[WZ2]=35; 
(*f[41])( );     /*SRB0(15,0,35,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=10958; pile[WZ2]=V42; 
(*f[39])( );     /*SDX0(20,10958,V42,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V43; pile[WZ2]=901; 
(*f[42])( );     /*SRA1(135,V43,901,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V46; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(20,V46,V44,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V45,40,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=V5; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V47,V5,41,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V48; pile[WZ2]=154; 
(*f[42])( );     /*SRA1(135,V48,154,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V50,41,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V51; 
(*f[40])( );     /*SLG0(V51)*/
pile[v[22]]=jvj+21; pile[WZ1]=901; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+21,901,jvj+11)*/
l26:pile[v[22]]=15; pile[WZ1]=0; pile[WZ2]=64; 
(*f[41])( );     /*SRB0(15,0,64,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=10958; pile[WZ2]=V52; 
(*f[39])( );     /*SDX0(20,10958,V52,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V53; pile[WZ2]=854; 
(*f[42])( );     /*SRA1(135,V53,854,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V56; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(20,V56,V54,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V55,(-9813),V57)*/
V57=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V5; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(41,V5,V57,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V58; pile[WZ2]=154; 
(*f[42])( );     /*SRA1(135,V58,154,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=V60; 
(*f[40])( );     /*SLG0(V60)*/
goto l27;
l22:if(P!=incon) goto l23;
goto l27;
l23:if((P<=3000)) goto l27;
V5=(-999999);
if(V5!=incon) goto l13;
l24:if(V5!=incon) goto l25;
goto l27;
l25:if((V5<=500)) goto l27;
if((V5==(-999999))) goto l27;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(1484,854,V14)*/
V14=pile[WZ2]; 
V12=sepfacts+1;
V13=sepfacts+V14;
goto l11;
l30:x[jvj+1]=incon; v[0]=jvj; return;
}
