#include "dx.h"
void CMLIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V3=0,V14=0,V12=0,V13=0,V15=0,V17=0,V10=0,V=0,V7=0,V6=0,V21=0,V9=0,V20=0,V28=0,V27=0,V39=0,V58=0,V72=0,V45=0,V42=0,V43=0,V60=0,V61=0,V44=0,V46=0,V47=0,V64=0,V65=0,V48=0,V49=0,V51=0,V52=0,V50=0,V54=0,V55=0,V53=0,V56=0,V69=0,V57=0,V78=0,V97=0,V111=0,V84=0,V81=0,V82=0,V99=0,V100=0,V83=0,V85=0,V86=0,V103=0,V104=0,V87=0,V88=0,V90=0,V91=0,V89=0,V93=0,V94=0,V92=0,V95=0,V108=0,V96=0;
int BL,Q,E,UR;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=11248;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==528&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; Q=pile[v[22]+1]; E=pile[v[22]+2]; UR=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(494,324,jvj+2)*/
l1:if((x[jvj+2]<=0)) goto l12;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=246; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(246,jvj+3,V2)*/
V2=pile[WZ2]; 
if((V2!=BL)) goto l2;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+3,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(109,jvj+3,jvj+4)*/
V14=x[jvj+4];
pile[v[22]]=15; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(15,0,42,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V14; pile[WZ2]=V12; 
(*f[39])( );     /*SDX0(20,V14,V12,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V3; pile[WZ2]=V13; 
(*f[39])( );     /*SDX0(41,V3,V13,V15)*/
V15=pile[WZ3]; 
pile[WZ1]=BL; pile[WZ2]=V15; 
(*f[39])( );     /*SDX0(41,BL,V15,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=V17; 
(*f[40])( );     /*SLG0(V17)*/
l12:pile[v[22]]=1288; pile[WZ1]=Q; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1288,Q,jvj+14)*/
l13:if((x[jvj+14]>0)) goto l14;
if((UR!=43)) goto l9;
x[jvj+24]=x[E] ;z[jvj+24]=z[E];
l4:if((x[jvj+24]<=0)) goto l9;
x[jvj+6]=s[x[jvj+24]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+24];
pile[v[22]]=109; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(109,jvj+6,jvj+10)*/
pile[v[22]]=983; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(983,jvj+10,jvj+11)*/
pile[v[22]]=878; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(878,jvj+11,jvj+12)*/
l10:if((x[jvj+12]<=0)) goto l5;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=163; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(163,jvj+13,V28)*/
V28=pile[WZ2]; 
pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(163,jvj+6,V27)*/
V27=pile[WZ2]; 
if((V28==V27)) goto l11;
x[jvj+12]=t[x[jvj+12]];
goto l10;
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
l3:V6=V7;
l8:pile[v[22]]=V6; 
(*f[40])( );     /*SLG0(V6)*/
pile[v[22]]=1288; pile[WZ1]=jvj+5; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1288,jvj+5,jvj+19)*/
l24:if((x[jvj+19]>0)) goto l25;
l7:x[jvj+26]=t[x[jvj+26]];
l6:if((x[jvj+26]<=0)) goto l5;
x[jvj+9]=s[x[jvj+26]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+26];
pile[v[22]]=246; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(246,jvj+9,V9)*/
V9=pile[WZ2]; 
if((V9!=BL)) goto l7;
pile[v[22]]=5; pile[WZ1]=0; pile[WZ2]=46; 
(*f[41])( );     /*SRB0(5,0,46,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V21; pile[WZ2]=V20; 
(*f[39])( );     /*SDX0(20,V21,V20,V7)*/
V7=pile[WZ3]; 
V6=incon;
pile[v[22]]=163; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,jvj+5,V10)*/
V10=pile[WZ2]; 
V=V10;
pile[v[22]]=V7; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V7,V,V6)*/
V6=pile[WZ2]; 
goto l8;
l5:x[jvj+24]=t[x[jvj+24]];
goto l4;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l11:x[jvj+25]=x[jvj+13] ;z[jvj+25]=z[jvj+13];
pile[v[22]]=109; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(109,jvj+6,jvj+7)*/
x[jvj+5]=x[jvj+25] ;z[jvj+5]=z[jvj+25];
pile[v[22]]=1288; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1288,jvj+5,jvj+8)*/
V21=x[jvj+7];
x[jvj+26]=x[jvj+8] ;z[jvj+26]=z[jvj+8];
goto l6;
l14:x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=246; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(246,jvj+15,V39)*/
V39=pile[WZ2]; 
if((V39!=BL)) goto l23;
pile[v[22]]=763; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(763,jvj+15,jvj+16)*/
pile[v[22]]=218; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(218,jvj+15,jvj+17)*/
x[jvj+27]=x[jvj+16] ;z[jvj+27]=z[jvj+16];
l15:if((x[jvj+27]<=0)) goto l23;
x[jvj+18]=s[x[jvj+27]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+27];
pile[v[22]]=117; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(117,jvj+18,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+17; 
(*f[42])( );     /*SRA1(135,0,jvj+17,V72)*/
V72=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V58; pile[WZ2]=V72; 
(*f[39])( );     /*SDX0(41,V58,V72,V45)*/
V45=pile[WZ3]; 
V44=incon;
pile[v[22]]=737; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(737,jvj+18,V42)*/
V42=pile[WZ2]; 
V43=V42;
pile[v[22]]=135; pile[WZ1]=V45; pile[WZ2]=737; 
(*f[42])( );     /*SRA1(135,V45,737,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=V60; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V60,58,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=V61; pile[WZ1]=V43; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V61,V43,41,V44)*/
V44=pile[WZ3]; 
l16:V48=incon;
pile[v[22]]=846; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(846,jvj+18,V46)*/
V46=pile[WZ2]; 
V47=V46;
pile[v[22]]=135; pile[WZ1]=V44; pile[WZ2]=846; 
(*f[42])( );     /*SRA1(135,V44,846,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=V64; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V64,58,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V47; pile[WZ2]=V65; 
(*f[39])( );     /*SDX0(41,V47,V65,V48)*/
V48=pile[WZ3]; 
l17:V57=incon;
pile[v[22]]=737; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(737,jvj+18,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=846; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(846,jvj+18,V51)*/
V51=pile[WZ2]; 
V52=V51;
if((V52<=0)) goto l20;
V50=V49;
V54=V50*10000;
V55=V50+V52;
V53=V54/V55;
V56=V54/V52;
pile[v[22]]=41; pile[WZ1]=V56; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(41,V56,V48,V69)*/
V69=pile[WZ3]; 
pile[WZ1]=V53; pile[WZ2]=V69; 
(*f[39])( );     /*SDX0(41,V53,V69,V57)*/
V57=pile[WZ3]; 
l18:pile[v[22]]=V57; 
(*f[40])( );     /*SLG0(V57)*/
l19:x[jvj+27]=t[x[jvj+27]];
goto l15;
l20:V57=V48;
goto l18;
l21:V48=V44;
goto l17;
l22:V44=V45;
goto l16;
l23:x[jvj+14]=t[x[jvj+14]];
goto l13;
l25:x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=246; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(246,jvj+20,V78)*/
V78=pile[WZ2]; 
if((V78!=BL)) goto l34;
pile[v[22]]=763; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(763,jvj+20,jvj+21)*/
pile[v[22]]=218; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(218,jvj+20,jvj+22)*/
x[jvj+28]=x[jvj+21] ;z[jvj+28]=z[jvj+21];
l26:if((x[jvj+28]<=0)) goto l34;
x[jvj+23]=s[x[jvj+28]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+28];
pile[v[22]]=117; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(117,jvj+23,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+22; 
(*f[42])( );     /*SRA1(135,0,jvj+22,V111)*/
V111=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V97; pile[WZ2]=V111; 
(*f[39])( );     /*SDX0(41,V97,V111,V84)*/
V84=pile[WZ3]; 
V83=incon;
pile[v[22]]=737; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(737,jvj+23,V81)*/
V81=pile[WZ2]; 
V82=V81;
pile[v[22]]=135; pile[WZ1]=V84; pile[WZ2]=737; 
(*f[42])( );     /*SRA1(135,V84,737,V99)*/
V99=pile[WZ3]; 
pile[v[22]]=V99; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V99,58,V100)*/
V100=pile[WZ2]; 
pile[v[22]]=V100; pile[WZ1]=V82; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V100,V82,41,V83)*/
V83=pile[WZ3]; 
l27:V87=incon;
pile[v[22]]=846; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(846,jvj+23,V85)*/
V85=pile[WZ2]; 
V86=V85;
pile[v[22]]=135; pile[WZ1]=V83; pile[WZ2]=846; 
(*f[42])( );     /*SRA1(135,V83,846,V103)*/
V103=pile[WZ3]; 
pile[v[22]]=V103; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V103,58,V104)*/
V104=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V86; pile[WZ2]=V104; 
(*f[39])( );     /*SDX0(41,V86,V104,V87)*/
V87=pile[WZ3]; 
l28:V96=incon;
pile[v[22]]=737; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(737,jvj+23,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=846; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(846,jvj+23,V90)*/
V90=pile[WZ2]; 
V91=V90;
if((V91<=0)) goto l31;
V89=V88;
V93=V89*10000;
V94=V89+V91;
V92=V93/V94;
V95=V93/V91;
pile[v[22]]=41; pile[WZ1]=V95; pile[WZ2]=V87; 
(*f[39])( );     /*SDX0(41,V95,V87,V108)*/
V108=pile[WZ3]; 
pile[WZ1]=V92; pile[WZ2]=V108; 
(*f[39])( );     /*SDX0(41,V92,V108,V96)*/
V96=pile[WZ3]; 
l29:pile[v[22]]=V96; 
(*f[40])( );     /*SLG0(V96)*/
l30:x[jvj+28]=t[x[jvj+28]];
goto l26;
l31:V96=V87;
goto l29;
l32:V87=V83;
goto l28;
l33:V83=V84;
goto l27;
l34:x[jvj+19]=t[x[jvj+19]];
goto l24;
}
