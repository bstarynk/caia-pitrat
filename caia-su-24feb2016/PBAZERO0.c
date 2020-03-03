#include "dx.h"
void PBAZERO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,V25=0,V92=0,V45=0,V46=0,V47=0,V48=0,V49=0,V50=0,V51=0,V52=0,V53=0,V54=0,V55=0,V56=0,V57=0,V58=0,V59=0,V60=0,V61=0,V62=0,V97=0,V1=0,V2=0,V3=0,V4=0,V5=0,V6=0,V7=0,V8=0,V40=0,V41=0,V42=0,V43=0,V108=0,V106=0,V107=0,V110=0,V101=0,V104=0,V111=0,V32=0,V10=0,V11=0,V12=0,V13=0,V14=0,V15=0,V16=0,V17=0,V18=0,V19=0,V20=0,V21=0,V22=0,V23=0,V90=0,V63=0,V64=0,V65=0,V66=0,V67=0,V68=0,V69=0,V70=0,V71=0,V72=0,V73=0,V74=0,V75=0,V76=0,V77=0,V78=0,V79=0,V80=0,V81=0,V82=0,V83=0,V84=0,V85=0,V86=0;
int UR,F;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=10975;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==145&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
UR=pile[v[22]]; F=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=120; pile[WZ1]=1055; 
(*f[71])( );     /*ENLV0(120,1055)*/
pile[v[22]]=1051; pile[WZ1]=1243; 
(*f[71])( );     /*ENLV0(1051,1243)*/
pile[v[22]]=120; pile[WZ1]=978; 
(*f[71])( );     /*ENLV0(120,978)*/
pile[v[22]]=937; pile[WZ1]=994; 
(*f[71])( );     /*ENLV0(937,994)*/
pile[v[22]]=120; pile[WZ1]=1097; 
(*f[71])( );     /*ENLV0(120,1097)*/
pile[v[22]]=1051; pile[WZ1]=994; 
(*f[71])( );     /*ENLV0(1051,994)*/
pile[v[22]]=120; pile[WZ1]=1263; 
(*f[71])( );     /*ENLV0(120,1263)*/
pile[v[22]]=924; pile[WZ1]=117; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(924,117,0)*/
pile[v[22]]=966; pile[WZ1]=1076; 
(*f[43])( );     /*CHGC2(966,1076,0)*/
pile[v[22]]=1136; pile[WZ1]=117; 
(*f[43])( );     /*CHGC2(1136,117,0)*/
pile[v[22]]=1221; pile[WZ1]=1167; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(1221,1167,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=994; pile[WZ2]=V97; 
(*f[43])( );     /*CHGC2(994,1167,V97)*/
l5:x[jvj+4]=d[14];z[jvj+4]=0;
l3:if((x[jvj+4]>0)) goto l4;
pile[v[22]]=994; pile[WZ1]=0; pile[WZ2]=994; pile[WZ3]=80; 
(*f[285])( );     /*ENLY0(994,0,994,80,V1,V2)*/
V1=pile[WZ4]; V2=pile[WZ5]; 
pile[WZ1]=V2; pile[WZ2]=V1; pile[WZ3]=120; 
(*f[285])( );     /*ENLY0(994,V2,V1,120,V3,V4)*/
V3=pile[WZ4]; V4=pile[WZ5]; 
pile[v[22]]=924; pile[WZ1]=0; pile[WZ2]=924; 
(*f[285])( );     /*ENLY0(924,0,924,120,V5,V6)*/
V5=pile[WZ4]; V6=pile[WZ5]; 
pile[WZ1]=V6; pile[WZ2]=V5; pile[WZ3]=1109; 
(*f[285])( );     /*ENLY0(924,V6,V5,1109,V7,V8)*/
V7=pile[WZ4]; V8=pile[WZ5]; 
pile[v[22]]=966; pile[WZ1]=0; pile[WZ2]=966; pile[WZ3]=80; 
(*f[285])( );     /*ENLY0(966,0,966,80,V40,V41)*/
V40=pile[WZ4]; V41=pile[WZ5]; 
pile[WZ1]=V41; pile[WZ2]=V40; pile[WZ3]=120; 
(*f[285])( );     /*ENLY0(966,V41,V40,120,V42,V43)*/
V42=pile[WZ4]; V43=pile[WZ5]; 
pile[v[22]]=1097; pile[WZ1]=1242; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(1097,1242,0)*/
pile[v[22]]=1055; 
(*f[43])( );     /*CHGC2(1055,1242,0)*/
pile[v[22]]=978; 
(*f[43])( );     /*CHGC2(978,1242,0)*/
x[jvj+8]=d[15];z[jvj+8]=0;
l8:if((x[jvj+8]>0)) goto l9;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(1484,854,V108)*/
V108=pile[WZ2]; 
V106=sepfacts+1;
V107=sepfacts+V108;
l12:if((V106>V107)) goto l21;
V110=r[V106];
if((V110!=1)) goto l13;
x[jvj+2]=V106 ;z[jvj+2]=(V106<=sepcte) ? V106 : 0;
pile[v[22]]=905; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(905,jvj+2,V101)*/
V101=pile[WZ2]; 
if((V101!=(-9113))) goto l19;
pile[v[22]]=983; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(983,jvj+2,jvj+12)*/
x[jvj+15]=x[jvj+12] ;z[jvj+15]=z[jvj+12];
x[jvj+13]=d[16];z[jvj+13]=0;
l14:if((x[jvj+13]<=0)) goto l19;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(jvj+14,jvj+15,jvj+16)*/
x[jvj+25]=x[jvj+16] ;z[jvj+25]=z[jvj+16];
l15:if((x[jvj+25]>0)) goto l16;
x[jvj+13]=t[x[jvj+13]];
goto l14;
l2:if((V104<=3)) goto l18;
l17:x[jvj+25]=t[x[jvj+25]];
goto l15;
l4:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=117; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+5,117,0)*/
pile[v[22]]=1246; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1246,jvj+5,jvj+6)*/
x[jvj+23]=x[jvj+6] ;z[jvj+23]=z[jvj+6];
l6:if((x[jvj+23]>0)) goto l7;
x[jvj+4]=t[x[jvj+4]];
goto l3;
l7:x[jvj+7]=s[x[jvj+23]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+23];
pile[v[22]]=jvj+7; pile[WZ1]=1245; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+7,1245,0)*/
x[jvj+23]=t[x[jvj+23]];
goto l6;
l9:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=159; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(159,jvj+9,jvj+10)*/
x[jvj+24]=x[jvj+10] ;z[jvj+24]=z[jvj+10];
l10:if((x[jvj+24]>0)) goto l11;
x[jvj+8]=t[x[jvj+8]];
goto l8;
l11:x[jvj+11]=s[x[jvj+24]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+24];
pile[v[22]]=jvj+11; pile[WZ1]=1245; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+11,1245,0)*/
x[jvj+24]=t[x[jvj+24]];
goto l10;
l16:x[jvj+17]=s[x[jvj+25]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+25];
pile[v[22]]=683; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(683,jvj+17,V104)*/
V104=pile[WZ2]; 
if((F==(-5963))) goto l2;
if((F!=(-9009))) goto l17;
if((V104==4)) goto l18;
goto l17;
l18:V111=x[jvj+17];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=V111; 
(*f[134])( );     /*OTA0(jvj+14,jvj+15,V111)*/
goto l17;
l19:pile[v[22]]=983; pile[WZ1]=jvj+2; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(983,jvj+2,jvj+18)*/
if((F==(-11721))) goto l20;
pile[v[22]]=905; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(905,jvj+2,V24)*/
V24=pile[WZ2]; 
if((V24==F)) goto l20;
l1:pile[v[22]]=905; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(905,jvj+2,V25)*/
V25=pile[WZ2]; 
if((V25==(-9113))) goto l20;
l13:V106++;
goto l12;
l20:V32=x[jvj+18];
pile[v[22]]=jvj+18; pile[WZ1]=0; pile[WZ2]=V32; pile[WZ3]=737; 
(*f[285])( );     /*ENLY0(jvj+18,0,V32,737,V10,V11)*/
V10=pile[WZ4]; V11=pile[WZ5]; 
pile[WZ1]=V11; pile[WZ2]=V10; pile[WZ3]=846; 
(*f[285])( );     /*ENLY0(jvj+18,V11,V10,846,V12,V13)*/
V12=pile[WZ4]; V13=pile[WZ5]; 
pile[WZ1]=V13; pile[WZ2]=V12; pile[WZ3]=1001; 
(*f[285])( );     /*ENLY0(jvj+18,V13,V12,1001,V14,V15)*/
V14=pile[WZ4]; V15=pile[WZ5]; 
pile[WZ1]=V15; pile[WZ2]=V14; pile[WZ3]=1051; 
(*f[285])( );     /*ENLY0(jvj+18,V15,V14,1051,V16,V17)*/
V16=pile[WZ4]; V17=pile[WZ5]; 
pile[WZ1]=V17; pile[WZ2]=V16; pile[WZ3]=1133; 
(*f[285])( );     /*ENLY0(jvj+18,V17,V16,1133,V18,V19)*/
V18=pile[WZ4]; V19=pile[WZ5]; 
pile[WZ1]=V19; pile[WZ2]=V18; pile[WZ3]=1135; 
(*f[285])( );     /*ENLY0(jvj+18,V19,V18,1135,V20,V21)*/
V20=pile[WZ4]; V21=pile[WZ5]; 
pile[WZ1]=V21; pile[WZ2]=V20; pile[WZ3]=1212; 
(*f[285])( );     /*ENLY0(jvj+18,V21,V20,1212,V22,V23)*/
V22=pile[WZ4]; V23=pile[WZ5]; 
goto l13;
l21:pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(457,324,jvj+19)*/
l22:if((x[jvj+19]>0)) goto l23;
l27:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l23:x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=905; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(905,jvj+20,V90)*/
V90=pile[WZ2]; 
if((V90!=F)) goto l24;
pile[v[22]]=983; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(983,jvj+20,jvj+21)*/
pile[v[22]]=878; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(878,jvj+21,jvj+22)*/
x[jvj+26]=x[jvj+22] ;z[jvj+26]=z[jvj+22];
l25:if((x[jvj+26]<=0)) goto l24;
x[jvj+3]=s[x[jvj+26]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+26];
V92=x[jvj+3];
if((UR!=84)) goto l26;
pile[v[22]]=jvj+3; pile[WZ1]=0; pile[WZ2]=V92; pile[WZ3]=493; 
(*f[285])( );     /*ENLY0(jvj+3,0,V92,493,V45,V46)*/
V45=pile[WZ4]; V46=pile[WZ5]; 
pile[WZ1]=V46; pile[WZ2]=V45; pile[WZ3]=718; 
(*f[285])( );     /*ENLY0(jvj+3,V46,V45,718,V47,V48)*/
V47=pile[WZ4]; V48=pile[WZ5]; 
pile[WZ1]=V48; pile[WZ2]=V47; pile[WZ3]=844; 
(*f[285])( );     /*ENLY0(jvj+3,V48,V47,844,V49,V50)*/
V49=pile[WZ4]; V50=pile[WZ5]; 
pile[WZ1]=V50; pile[WZ2]=V49; pile[WZ3]=1081; 
(*f[285])( );     /*ENLY0(jvj+3,V50,V49,1081,V51,V52)*/
V51=pile[WZ4]; V52=pile[WZ5]; 
pile[WZ1]=V52; pile[WZ2]=V51; pile[WZ3]=1179; 
(*f[285])( );     /*ENLY0(jvj+3,V52,V51,1179,V53,V54)*/
V53=pile[WZ4]; V54=pile[WZ5]; 
pile[WZ1]=V54; pile[WZ2]=V53; pile[WZ3]=1180; 
(*f[285])( );     /*ENLY0(jvj+3,V54,V53,1180,V55,V56)*/
V55=pile[WZ4]; V56=pile[WZ5]; 
pile[WZ1]=V56; pile[WZ2]=V55; pile[WZ3]=1190; 
(*f[285])( );     /*ENLY0(jvj+3,V56,V55,1190,V57,V58)*/
V57=pile[WZ4]; V58=pile[WZ5]; 
pile[WZ1]=V58; pile[WZ2]=V57; pile[WZ3]=1209; 
(*f[285])( );     /*ENLY0(jvj+3,V58,V57,1209,V59,V60)*/
V59=pile[WZ4]; V60=pile[WZ5]; 
pile[WZ1]=V60; pile[WZ2]=V59; pile[WZ3]=1364; 
(*f[285])( );     /*ENLY0(jvj+3,V60,V59,1364,V61,V62)*/
V61=pile[WZ4]; V62=pile[WZ5]; 
l26:pile[v[22]]=jvj+3; pile[WZ1]=0; pile[WZ2]=V92; pile[WZ3]=876; 
(*f[285])( );     /*ENLY0(jvj+3,0,V92,876,V63,V64)*/
V63=pile[WZ4]; V64=pile[WZ5]; 
pile[WZ1]=V64; pile[WZ2]=V63; pile[WZ3]=944; 
(*f[285])( );     /*ENLY0(jvj+3,V64,V63,944,V65,V66)*/
V65=pile[WZ4]; V66=pile[WZ5]; 
pile[WZ1]=V66; pile[WZ2]=V65; pile[WZ3]=964; 
(*f[285])( );     /*ENLY0(jvj+3,V66,V65,964,V67,V68)*/
V67=pile[WZ4]; V68=pile[WZ5]; 
pile[WZ1]=V68; pile[WZ2]=V67; pile[WZ3]=965; 
(*f[285])( );     /*ENLY0(jvj+3,V68,V67,965,V69,V70)*/
V69=pile[WZ4]; V70=pile[WZ5]; 
pile[WZ1]=V70; pile[WZ2]=V69; pile[WZ3]=967; 
(*f[285])( );     /*ENLY0(jvj+3,V70,V69,967,V71,V72)*/
V71=pile[WZ4]; V72=pile[WZ5]; 
pile[WZ1]=V72; pile[WZ2]=V71; pile[WZ3]=1051; 
(*f[285])( );     /*ENLY0(jvj+3,V72,V71,1051,V73,V74)*/
V73=pile[WZ4]; V74=pile[WZ5]; 
pile[WZ1]=V74; pile[WZ2]=V73; pile[WZ3]=1244; 
(*f[285])( );     /*ENLY0(jvj+3,V74,V73,1244,V75,V76)*/
V75=pile[WZ4]; V76=pile[WZ5]; 
pile[WZ1]=V76; pile[WZ2]=V75; pile[WZ3]=1250; 
(*f[285])( );     /*ENLY0(jvj+3,V76,V75,1250,V77,V78)*/
V77=pile[WZ4]; V78=pile[WZ5]; 
pile[WZ1]=V78; pile[WZ2]=V77; pile[WZ3]=1251; 
(*f[285])( );     /*ENLY0(jvj+3,V78,V77,1251,V79,V80)*/
V79=pile[WZ4]; V80=pile[WZ5]; 
pile[WZ1]=V80; pile[WZ2]=V79; pile[WZ3]=1252; 
(*f[285])( );     /*ENLY0(jvj+3,V80,V79,1252,V81,V82)*/
V81=pile[WZ4]; V82=pile[WZ5]; 
pile[WZ1]=V82; pile[WZ2]=V81; pile[WZ3]=1265; 
(*f[285])( );     /*ENLY0(jvj+3,V82,V81,1265,V83,V84)*/
V83=pile[WZ4]; V84=pile[WZ5]; 
pile[WZ1]=V84; pile[WZ2]=V83; pile[WZ3]=1266; 
(*f[285])( );     /*ENLY0(jvj+3,V84,V83,1266,V85,V86)*/
V85=pile[WZ4]; V86=pile[WZ5]; 
x[jvj+26]=t[x[jvj+26]];
goto l25;
l24:x[jvj+19]=t[x[jvj+19]];
goto l22;
}
