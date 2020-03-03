#include "dx.h"
void SORPROVANT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V12=0,V13=0,L=0,V17=0,V16=0,V15=0,V5=0,V6=0,V24=0,V38=0,V31=0,V32=0,V33=0,V35=0,V36=0,V37=0,V39=0,V27=0,V40=0,V41=0,V42=0,V45=0,V30=0,V43=0,V44=0,V48=0,V62=0,V55=0,V56=0,V57=0,V59=0,V60=0,V61=0,V63=0,V51=0,V64=0,V65=0,V66=0,V69=0,V54=0,V67=0,V68=0,V87=0,V100=0,V101=0,V102=0,V103=0,V95=0,V94=0,V104=0,V105=0,V106=0,V107=0,V108=0,V109=0,V111=0,V114=0,V118=0,V98=0,V112=0,V113=0,V79=0,V80=0,V84=0;
int N,ND,U;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=42;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; ND=pile[v[22]+1]; U=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V14=x[N];
pile[v[22]]=0; pile[WZ1]=5; 
(*f[178])( );     /*SPLO0(0,5,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V14; pile[WZ2]=V12; 
(*f[39])( );     /*SDX0(20,V14,V12,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=V13; 
(*f[40])( );     /*SLG0(V13)*/
pile[v[22]]=107; pile[WZ1]=N; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(107,N,jvj+1)*/
if((x[jvj+1]==0)) goto l4;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=107; 
(*f[42])( );     /*SRA1(135,0,107,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=V15; 
(*f[40])( );     /*SLG0(V15)*/
l1:if((x[jvj+1]<=0)) goto l4;
L=s[x[jvj+1]];
V17=L;
pile[v[22]]=20; pile[WZ1]=V17; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V17,0,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=V16; 
(*f[40])( );     /*SLG0(V16)*/
x[jvj+1]=t[x[jvj+1]];
goto l1;
l3:x[jvj+2]=t[x[jvj+2]];
l2:if((x[jvj+2]<=0)) goto l6;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=683; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(683,jvj+3,V5)*/
V5=pile[WZ2]; 
if((V5!=ND)) goto l3;
pile[v[22]]=934; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(934,jvj+3,jvj+4)*/
if((x[jvj+4]!=x[U])) goto l3;
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(683,jvj+3,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=934; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(934,jvj+3,jvj+12)*/
V62=x[jvj+12];
pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V55; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V55,683,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=V56; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V56,58,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=V48; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V57,V48,41,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V59; pile[WZ2]=934; 
(*f[42])( );     /*SRA1(135,V59,934,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=V60; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V60,58,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V62; pile[WZ2]=V61; 
(*f[39])( );     /*SDX0(20,V62,V61,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=V63; 
(*f[40])( );     /*SLG0(V63)*/
l12:pile[v[22]]=159; pile[WZ1]=jvj+3; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(159,jvj+3,jvj+13)*/
l13:if((x[jvj+13]>0)) goto l14;
l6:v[0]=jvj; v[22]-=3; return;
l4:if((x[U]==250)) goto l5;
pile[v[22]]=1538; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1538,N,jvj+2)*/
goto l2;
l5:pile[v[22]]=1538; pile[WZ1]=N; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1538,N,jvj+5)*/
for(i=x[jvj+5],V6=0;i>0;i=t[i],V6++)  ;
if((V6>1)) goto l17;
if((V6!=1)) goto l6;
if((x[jvj+5]<=0)) goto l6;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=683; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(683,jvj+6,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=934; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(934,jvj+6,jvj+7)*/
V38=x[jvj+7];
pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V31; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V31,683,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V32,58,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=V24; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V33,V24,41,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V35; pile[WZ2]=934; 
(*f[42])( );     /*SRA1(135,V35,934,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=V36; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V36,58,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V38; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(20,V38,V37,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; 
(*f[40])( );     /*SLG0(V39)*/
l7:pile[v[22]]=159; pile[WZ1]=jvj+6; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(159,jvj+6,jvj+8)*/
l8:if((x[jvj+8]>0)) goto l9;
goto l6;
l9:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=110; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(110,jvj+9,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=288; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(288,jvj+9,jvj+10)*/
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V40; pile[WZ2]=jvj+10; 
(*f[42])( );     /*SRA1(135,V40,jvj+10,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; pile[WZ1]=V27; 
(*f[37])( );     /*SRA0(V41,V27,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; 
(*f[40])( );     /*SLG0(V42)*/
pile[v[22]]=1489; pile[WZ1]=jvj+9; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1489,jvj+9,jvj+11)*/
V45=x[jvj+11];
l10:if((V45<=0)) goto l11;
V30=s[V45];
V43=V30;
pile[v[22]]=20; pile[WZ1]=V43; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V43,0,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; 
(*f[40])( );     /*SLG0(V44)*/
V45=t[V45];
goto l10;
l11:x[jvj+8]=t[x[jvj+8]];
goto l8;
l14:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=110; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(110,jvj+14,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=288; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(288,jvj+14,jvj+15)*/
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V64; pile[WZ2]=jvj+15; 
(*f[42])( );     /*SRA1(135,V64,jvj+15,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=V65; pile[WZ1]=V51; 
(*f[37])( );     /*SRA0(V65,V51,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=V66; 
(*f[40])( );     /*SLG0(V66)*/
pile[v[22]]=1489; pile[WZ1]=jvj+14; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1489,jvj+14,jvj+16)*/
V69=x[jvj+16];
l15:if((V69<=0)) goto l16;
V54=s[V69];
V67=V54;
pile[v[22]]=20; pile[WZ1]=V67; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V67,0,V68)*/
V68=pile[WZ3]; 
pile[v[22]]=V68; 
(*f[40])( );     /*SLG0(V68)*/
V69=t[V69];
goto l15;
l16:x[jvj+13]=t[x[jvj+13]];
goto l13;
l17:x[jvj+37]=0 ;z[jvj+37]=0;
x[jvj+33]=x[jvj+37] ;z[jvj+33]=z[jvj+37];
pile[v[22]]=1538; pile[WZ1]=N; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1538,N,jvj+17)*/
l18:if((x[jvj+17]>0)) goto l28;
x[jvj+38]=x[jvj+33] ;z[jvj+38]=z[jvj+33];
l19:if((x[jvj+38]>0)) goto l20;
goto l6;
l20:x[jvj+18]=s[x[jvj+38]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+38];
pile[v[22]]=110; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(110,jvj+18,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=288; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(288,jvj+18,jvj+19)*/
pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V100)*/
V100=pile[WZ2]; 
pile[v[22]]=5; pile[WZ1]=V100; pile[WZ2]=38; 
(*f[41])( );     /*SRB0(5,V100,38,V101)*/
V101=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V101; pile[WZ2]=jvj+19; 
(*f[42])( );     /*SRA1(135,V101,jvj+19,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=V102; pile[WZ1]=V87; 
(*f[37])( );     /*SRA0(V102,V87,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=V103; 
(*f[40])( );     /*SLG0(V103)*/
pile[v[22]]=1538; pile[WZ1]=N; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(1538,N,jvj+20)*/
x[jvj+39]=x[jvj+20] ;z[jvj+39]=z[jvj+20];
l21:if((x[jvj+39]<=0)) goto l27;
x[jvj+21]=s[x[jvj+39]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+39];
pile[v[22]]=683; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(683,jvj+21,V95)*/
V95=pile[WZ2]; 
pile[v[22]]=159; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(159,jvj+21,jvj+22)*/
pile[v[22]]=934; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(934,jvj+21,jvj+23)*/
x[jvj+40]=x[jvj+22] ;z[jvj+40]=z[jvj+22];
l22:if((x[jvj+40]<=0)) goto l26;
x[jvj+24]=s[x[jvj+40]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+40];
pile[v[22]]=110; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(110,jvj+24,V94)*/
V94=pile[WZ2]; 
if((V94!=V87)) goto l25;
pile[v[22]]=288; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(288,jvj+24,jvj+25)*/
if((x[jvj+25]!=x[jvj+19])) goto l25;
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V104)*/
V104=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V104; pile[WZ2]=934; 
(*f[42])( );     /*SRA1(135,V104,934,V105)*/
V105=pile[WZ3]; 
pile[v[22]]=V105; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V105,58,V106)*/
V106=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V106; pile[WZ2]=jvj+23; 
(*f[42])( );     /*SRA1(135,V106,jvj+23,V107)*/
V107=pile[WZ3]; 
pile[WZ1]=V107; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V107,683,V108)*/
V108=pile[WZ3]; 
pile[v[22]]=V108; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V108,58,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=V109; pile[WZ1]=V95; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V109,V95,41,V111)*/
V111=pile[WZ3]; 
pile[v[22]]=V111; 
(*f[40])( );     /*SLG0(V111)*/
pile[v[22]]=1489; pile[WZ1]=jvj+24; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(1489,jvj+24,jvj+26)*/
if((x[jvj+26]!=0)) goto l23;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=66; 
(*f[42])( );     /*SRA1(135,0,66,V114)*/
V114=pile[WZ3]; 
pile[v[22]]=V114; 
(*f[40])( );     /*SLG0(V114)*/
l23:V118=x[jvj+26];
l24:if((V118<=0)) goto l25;
V98=s[V118];
V112=V98;
pile[v[22]]=20; pile[WZ1]=V112; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V112,0,V113)*/
V113=pile[WZ3]; 
pile[v[22]]=V113; 
(*f[40])( );     /*SLG0(V113)*/
V118=t[V118];
goto l24;
l25:x[jvj+40]=t[x[jvj+40]];
goto l22;
l26:x[jvj+39]=t[x[jvj+39]];
goto l21;
l27:x[jvj+38]=t[x[jvj+38]];
goto l19;
l28:x[jvj+27]=s[x[jvj+17]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+17];
pile[v[22]]=159; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(159,jvj+27,jvj+28)*/
x[jvj+41]=x[jvj+28] ;z[jvj+41]=z[jvj+28];
l29:if((x[jvj+41]>0)) goto l30;
x[jvj+17]=t[x[jvj+17]];
goto l18;
l30:x[jvj+29]=s[x[jvj+41]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+41];
pile[v[22]]=110; pile[WZ1]=jvj+29; 
(*f[44])( );if(v[102]) goto l33;     /*FNDC1(110,jvj+29,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=288; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(288,jvj+29,jvj+30)*/
V80=V79;
x[jvj+31]=x[jvj+30] ;z[jvj+31]=z[jvj+30];
x[jvj+32]=incon;
x[jvj+42]=x[jvj+33] ;z[jvj+42]=z[jvj+33];
l31:if((x[jvj+42]>0)) goto l35;
pile[v[22]]=110; pile[WZ1]=V80; pile[WZ2]=288; pile[WZ3]=jvj+31; pile[WZ4]=jvj+32; 
(*f[692])( );     /*QUADRI13(110,V80,288,jvj+31,jvj+32)*/
l32:x[jvj+34]=x[jvj+32] ;z[jvj+34]=z[jvj+32];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[68])( );     /*PLUE0(jvj+33,jvj+34)*/
l33:x[jvj+41]=t[x[jvj+41]];
goto l29;
l34:x[jvj+42]=t[x[jvj+42]];
goto l31;
l35:x[jvj+35]=s[x[jvj+42]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+42];
pile[v[22]]=110; pile[WZ1]=jvj+35; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(110,jvj+35,V84)*/
V84=pile[WZ2]; 
if((V84!=V80)) goto l34;
pile[v[22]]=288; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(288,jvj+35,jvj+36)*/
if((x[jvj+36]!=x[jvj+31])) goto l34;
x[jvj+32]=x[jvj+35] ;z[jvj+32]=z[jvj+35];
goto l32;
}
