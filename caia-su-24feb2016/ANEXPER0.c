#include "dx.h"
void ANEXPER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V=0,V2=0,V1=0,V8=0,V22=0,V19=0,V20=0,V21=0,V23=0,V24=0,V25=0,V26=0,V3=0,V16=0,V15=0,V83=0,V118=0,V114=0,V115=0,V117=0,V85=0,V84=0,V119=0,V107=0,V108=0,V109=0,V110=0,V111=0,V94=0,V140=0,V141=0,V143=0,V144=0,V145=0,V96=0,V93=0,V125=0,V126=0,V95=0,V129=0,V130=0,V99=0,V147=0,V148=0,V150=0,V151=0,V152=0,V154=0,V155=0,V156=0,V158=0,V159=0,V160=0,V103=0,V102=0,V138=0,V136=0,V137=0,V106=0,V133=0,V134=0,V132=0,V89=0,V90=0,V124=0,V122=0,V88=0,V121=0;
int M,BL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=10917;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1266&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; BL=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V3=g[500];
if((V3<=0)) goto l7;
V4=vg[500];
if((V4!=0)) goto l1;
if((V3<3)) goto l4;
l1:pile[v[22]]=500; pile[WZ1]=10917; pile[WZ2]=0; pile[WZ3]=(-604); pile[WZ4]=BL; pile[WZ5]=jvj+2; 
(*f[232])( );     /*INTERP3(500,10917,0,(-604),BL,jvj+2)*/
if((x[jvj+2]==135)) goto l3;
l7:pile[v[22]]=683; pile[WZ1]=M; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(683,M,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=860; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(860,M,jvj+5)*/
x[jvj+6]=d[58];z[jvj+6]=0;
l8:if((x[jvj+6]<=0)) goto l12;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=BL; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+7,BL,jvj+8)*/
x[jvj+18]=x[jvj+8] ;z[jvj+18]=z[jvj+8];
l9:if((x[jvj+18]>0)) goto l10;
x[jvj+6]=t[x[jvj+6]];
goto l8;
l2:V1=V2;
l5:pile[v[22]]=135; pile[WZ1]=V1; pile[WZ2]=jvj+3; 
(*f[42])( );     /*SRA1(135,V1,jvj+3,V23)*/
V23=pile[WZ3]; 
pile[WZ1]=V23; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V23,683,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=V24; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V24,58,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=V8; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V25,V8,41,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=V26; 
(*f[40])( );     /*SLG0(V26)*/
l6:if((V3!=2)) goto l7;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l7;
l3:if((V3<4)) goto l4;
goto l7;
l4:pile[v[22]]=683; pile[WZ1]=M; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(683,M,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=860; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(860,M,jvj+3)*/
pile[v[22]]=498; pile[WZ1]=BL; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(498,BL,jvj+4)*/
V22=x[jvj+4];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V19; pile[WZ2]=10917; 
(*f[98])( );     /*SRA3(135,V19,10917,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=V20; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V20,125,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V22; pile[WZ2]=V21; 
(*f[39])( );     /*SDX0(20,V22,V21,V2)*/
V2=pile[WZ3]; 
V1=incon;
pile[v[22]]=163; pile[WZ1]=BL; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(163,BL,V)*/
V=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V2,V,V1)*/
V1=pile[WZ2]; 
goto l5;
l10:x[jvj+9]=s[x[jvj+18]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+18];
pile[v[22]]=683; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(683,jvj+9,V15)*/
V15=pile[WZ2]; 
if((V15!=V16)) goto l11;
pile[v[22]]=860; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(860,jvj+9,jvj+10)*/
if((x[jvj+10]!=x[jvj+5])) goto l11;
if((x[jvj+7]==1252)) goto l23;
if((x[jvj+7]!=1251)) goto l14;
pile[v[22]]=893; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(893,jvj+9,jvj+11)*/
pile[v[22]]=1049; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1049,jvj+9,jvj+12)*/
for(i=x[jvj+12],V83=0;i>0;i=t[i],V83++)  ;
V118=x[jvj+12];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1251; 
(*f[42])( );     /*SRA1(135,0,1251,V114)*/
V114=pile[WZ3]; 
pile[WZ1]=V114; pile[WZ2]=jvj+11; 
(*f[42])( );     /*SRA1(135,V114,jvj+11,V115)*/
V115=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V83; pile[WZ2]=V115; 
(*f[39])( );     /*SDX0(41,V83,V115,V117)*/
V117=pile[WZ3]; 
pile[v[22]]=V117; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V117,(-4670),V85)*/
V85=pile[WZ2]; 
V84=incon;
if((V83>1)) goto l24;
V84=V85;
l13:pile[v[22]]=23; pile[WZ1]=V118; pile[WZ2]=V84; 
(*f[39])( );     /*SDX0(23,V118,V84,V119)*/
V119=pile[WZ3]; 
pile[v[22]]=V119; 
(*f[40])( );     /*SLG0(V119)*/
l14:if(x[jvj+7]!=944&&x[jvj+7]!=1250) goto l11;
pile[v[22]]=876; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(876,jvj+9,V107)*/
V107=pile[WZ2]; 
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(493,jvj+9,V108)*/
V108=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(936,jvj+9,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=1005; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(1005,jvj+9,V110)*/
V110=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+9,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=893; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(893,jvj+9,jvj+13)*/
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(683,jvj+9,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+7; 
(*f[42])( );     /*SRA1(135,0,jvj+7,V140)*/
V140=pile[WZ3]; 
pile[WZ1]=V140; pile[WZ2]=jvj+13; 
(*f[42])( );     /*SRA1(135,V140,jvj+13,V141)*/
V141=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V111; pile[WZ2]=V141; 
(*f[39])( );     /*SDX0(41,V111,V141,V143)*/
V143=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V143; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V143,683,V144)*/
V144=pile[WZ3]; 
pile[v[22]]=V144; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V144,58,V145)*/
V145=pile[WZ2]; 
pile[v[22]]=V145; pile[WZ1]=V94; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V145,V94,41,V96)*/
V96=pile[WZ3]; 
V95=incon;
pile[v[22]]=359; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(359,jvj+9,V93)*/
V93=pile[WZ2]; 
if((V93==V94)) goto l20;
pile[v[22]]=135; pile[WZ1]=V96; pile[WZ2]=359; 
(*f[42])( );     /*SRA1(135,V96,359,V125)*/
V125=pile[WZ3]; 
pile[v[22]]=V125; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V125,58,V126)*/
V126=pile[WZ2]; 
pile[v[22]]=V126; pile[WZ1]=V93; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V126,V93,41,V95)*/
V95=pile[WZ3]; 
l15:V99=incon;
pile[v[22]]=935; pile[WZ1]=jvj+9; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(935,jvj+9,jvj+14)*/
pile[v[22]]=135; pile[WZ1]=V95; pile[WZ2]=935; 
(*f[42])( );     /*SRA1(135,V95,935,V129)*/
V129=pile[WZ3]; 
pile[v[22]]=V129; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V129,58,V130)*/
V130=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V130; pile[WZ2]=jvj+14; 
(*f[42])( );     /*SRA1(135,V130,jvj+14,V99)*/
V99=pile[WZ3]; 
l16:pile[v[22]]=135; pile[WZ1]=V99; pile[WZ2]=1005; 
(*f[42])( );     /*SRA1(135,V99,1005,V147)*/
V147=pile[WZ3]; 
pile[v[22]]=V147; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V147,61,V148)*/
V148=pile[WZ2]; 
pile[v[22]]=V148; pile[WZ1]=V110; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V148,V110,41,V150)*/
V150=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V150; pile[WZ2]=936; 
(*f[42])( );     /*SRA1(135,V150,936,V151)*/
V151=pile[WZ3]; 
pile[v[22]]=V151; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V151,58,V152)*/
V152=pile[WZ2]; 
pile[v[22]]=V152; pile[WZ1]=V109; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V152,V109,41,V154)*/
V154=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V154; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V154,493,V155)*/
V155=pile[WZ3]; 
pile[v[22]]=V155; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V155,61,V156)*/
V156=pile[WZ2]; 
pile[v[22]]=V156; pile[WZ1]=V108; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V156,V108,41,V158)*/
V158=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V158; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V158,876,V159)*/
V159=pile[WZ3]; 
pile[v[22]]=V159; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V159,61,V160)*/
V160=pile[WZ2]; 
pile[v[22]]=V160; pile[WZ1]=V107; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V160,V107,41,V103)*/
V103=pile[WZ3]; 
V102=incon;
pile[v[22]]=1081; pile[WZ1]=jvj+9; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1081,jvj+9,jvj+15)*/
if((x[jvj+15]!=0)) goto l18;
V102=V103;
l17:V106=incon;
pile[v[22]]=901; pile[WZ1]=jvj+9; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(901,jvj+9,jvj+16)*/
V138=x[jvj+16];
pile[v[22]]=135; pile[WZ1]=V102; pile[WZ2]=901; 
(*f[42])( );     /*SRA1(135,V102,901,V136)*/
V136=pile[WZ3]; 
pile[v[22]]=V136; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V136,58,V137)*/
V137=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V138; pile[WZ2]=V137; 
(*f[39])( );     /*SDX0(23,V138,V137,V106)*/
V106=pile[WZ3]; 
pile[v[22]]=V106; 
(*f[40])( );     /*SLG0(V106)*/
l11:x[jvj+18]=t[x[jvj+18]];
goto l9;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l18:V134=x[jvj+15];
pile[v[22]]=135; pile[WZ1]=V103; pile[WZ2]=1081; 
(*f[42])( );     /*SRA1(135,V103,1081,V132)*/
V132=pile[WZ3]; 
pile[v[22]]=V132; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V132,58,V133)*/
V133=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V134; pile[WZ2]=V133; 
(*f[39])( );     /*SDX0(23,V134,V133,V102)*/
V102=pile[WZ3]; 
goto l17;
l19:V99=V95;
goto l16;
l20:V95=V96;
goto l15;
l22:pile[v[22]]=V90; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V90,83,V89)*/
V89=pile[WZ2]; 
l21:pile[v[22]]=V89; 
(*f[40])( );     /*SLG0(V89)*/
goto l14;
l23:pile[v[22]]=405; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(405,jvj+9,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=893; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(893,jvj+9,jvj+17)*/
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1252; 
(*f[42])( );     /*SRA1(135,0,1252,V121)*/
V121=pile[WZ3]; 
pile[WZ1]=V121; pile[WZ2]=jvj+17; 
(*f[42])( );     /*SRA1(135,V121,jvj+17,V122)*/
V122=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V88; pile[WZ2]=V122; 
(*f[39])( );     /*SDX0(41,V88,V122,V124)*/
V124=pile[WZ3]; 
pile[v[22]]=V124; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V124,(-4670),V90)*/
V90=pile[WZ2]; 
V89=incon;
if((V88>1)) goto l22;
V89=V90;
goto l21;
l24:pile[v[22]]=V85; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V85,83,V84)*/
V84=pile[WZ2]; 
goto l13;
}
