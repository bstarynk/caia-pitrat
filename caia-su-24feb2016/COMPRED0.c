#include "dx.h"
void COMPRED0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V76=0,V8=0,V73=0,V74=0,V7=0,V10=0,V11=0,V12=0,V13=0,V14=0,V77=0,V78=0,V79=0,V80=0,V82=0,V83=0,V85=0,V86=0,V87=0,V89=0,V90=0,V91=0,V93=0,V94=0,V95=0,V25=0,V26=0,V27=0,V28=0,V99=0,V100=0,V102=0,V103=0,V104=0,V105=0,V97=0,V98=0,V42=0,V43=0,V47=0,V48=0,V52=0,V54=0,V57=0,V=0,V34=0,V33=0,V62=0,VV=0,V36=0,V35=0,V70=0,V71=0,V72=0,W=0,V38=0,V37=0,V60=0,V61=0,V125=0,V124=0,V126=0,V127=0,V128=0,V130=0,V49=0,V131=0,V133=0,V134=0,V136=0,NQ=0,V137=0,V55=0,V56=0,V110=0,V108=0,V109=0,V111=0,V112=0,V114=0,V115=0,V117=0,V118=0,V120=0,V121=0,V65=0,SA=0,V66=0,SB=0,V67=0,V69=0,V68=0,V141=0,V140=0,V142=0,V143=0,V144=0,V146=0,V147=0,V149=0,V150=0,V152=0,V153=0;
int NM,NRR;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=47;
x[jvj+1]=11496;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1203&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NM=pile[v[22]]; NRR=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=1567; pile[WZ1]=1576; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1567,1576,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
x[jvj+47]=x[jvj+4] ;z[jvj+47]=z[jvj+4];
x[jvj+37]=x[jvj+47] ;z[jvj+37]=z[jvj+47];
l6:if((x[jvj+37]>0)) goto l7;
pile[v[22]]=763; pile[WZ1]=1576; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(763,1576,jvj+18)*/
l20:if((x[jvj+18]>0)) goto l21;
if((x[jvj+47]<=0)) goto l46;
x[jvj+34]=s[x[jvj+47]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+47];
x[jvj+42]=x[jvj+47] ;z[jvj+42]=z[jvj+47];
l23:if((x[jvj+42]<=0)) goto l46;
x[jvj+23]=s[x[jvj+42]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+42];
if((x[jvj+23]!=x[jvj+34])) goto l43;
x[jvj+42]=t[x[jvj+42]];
goto l23;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=642; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+3,V4)*/
V4=pile[WZ2]; 
if((V4==NM)) goto l4;
if((V4==NRR)) goto l4;
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:pile[v[22]]=jvj+4; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+3)*/
goto l3;
l5:V7=V8;
l9:pile[v[22]]=135; pile[WZ1]=V7; pile[WZ2]=936; 
(*f[42])( );     /*SRA1(135,V7,936,V85)*/
V85=pile[WZ3]; 
pile[v[22]]=V85; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V85,58,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V12; pile[WZ2]=V86; 
(*f[39])( );     /*SDX0(41,V12,V86,V87)*/
V87=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V87; pile[WZ2]=1058; 
(*f[42])( );     /*SRA1(135,V87,1058,V89)*/
V89=pile[WZ3]; 
pile[v[22]]=V89; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V89,58,V90)*/
V90=pile[WZ2]; 
pile[v[22]]=V90; pile[WZ1]=V11; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V90,V11,41,V91)*/
V91=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V91; pile[WZ2]=301; 
(*f[42])( );     /*SRA1(135,V91,301,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=V93; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V93,58,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V10; pile[WZ2]=V94; 
(*f[39])( );     /*SDX0(41,V10,V94,V95)*/
V95=pile[WZ3]; 
pile[v[22]]=V95; 
(*f[40])( );     /*SLG0(V95)*/
l8:x[jvj+37]=t[x[jvj+37]];
goto l6;
l7:x[jvj+5]=s[x[jvj+37]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+37];
pile[v[22]]=1527; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(1527,jvj+5,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=1058; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(1058,jvj+5,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(936,jvj+5,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(683,jvj+5,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=642; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+5,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=1202; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1202,jvj+5,jvj+7)*/
pile[v[22]]=135; pile[WZ1]=0; 
(*f[42])( );     /*SRA1(135,0,jvj+7,V77)*/
V77=pile[WZ3]; 
pile[WZ1]=V77; pile[WZ2]=642; 
(*f[42])( );     /*SRA1(135,V77,642,V78)*/
V78=pile[WZ3]; 
pile[v[22]]=V78; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V78,58,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=V79; pile[WZ1]=V14; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V79,V14,41,V80)*/
V80=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V80; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V80,683,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=V82; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V82,58,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=V83; pile[WZ1]=V13; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V83,V13,41,V8)*/
V8=pile[WZ3]; 
V7=incon;
if((x[jvj+47]==0)) goto l5;
pile[v[22]]=901; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(901,jvj+5,jvj+6)*/
if((x[jvj+47]!=x[jvj+6])) goto l5;
V76=x[jvj+47];
pile[v[22]]=135; pile[WZ1]=V8; pile[WZ2]=901; 
(*f[42])( );     /*SRA1(135,V8,901,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V73,58,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V76; pile[WZ2]=V74; 
(*f[39])( );     /*SDX0(23,V76,V74,V7)*/
V7=pile[WZ3]; 
goto l9;
l12:x[jvj+39]=t[x[jvj+39]];
l11:if((x[jvj+39]<=0)) goto l16;
x[jvj+9]=s[x[jvj+39]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+39];
pile[v[22]]=498; pile[WZ1]=jvj+9; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(498,jvj+9,jvj+14)*/
if((x[jvj+10]!=x[jvj+14])) goto l12;
pile[v[22]]=163; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(163,jvj+8,V25)*/
V25=pile[WZ2]; 
pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(163,jvj+9,V26)*/
V26=pile[WZ2]; 
if((V25!=V26)) goto l12;
l15:x[jvj+40]=t[x[jvj+40]];
l13:if((x[jvj+40]>0)) goto l14;
if((x[jvj+17]==0)) goto l18;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=297; 
(*f[42])( );     /*SRA1(135,0,297,V99)*/
V99=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V28; pile[WZ2]=V99; 
(*f[39])( );     /*SDX0(41,V28,V99,V100)*/
V100=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V100; pile[WZ2]=48; 
(*f[42])( );     /*SRA1(135,V100,48,V102)*/
V102=pile[WZ3]; 
pile[WZ1]=V102; pile[WZ2]=67; 
(*f[42])( );     /*SRA1(135,V102,67,V103)*/
V103=pile[WZ3]; 
pile[WZ1]=V103; pile[WZ2]=297; 
(*f[42])( );     /*SRA1(135,V103,297,V104)*/
V104=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V27; pile[WZ2]=V104; 
(*f[39])( );     /*SDX0(41,V27,V104,V105)*/
V105=pile[WZ3]; 
pile[v[22]]=V105; 
(*f[40])( );     /*SLG0(V105)*/
pile[v[22]]=jvj+17; pile[WZ1]=0; pile[WZ2]=2; 
(*f[846])( );     /*SORENSPB0(jvj+17,0,2)*/
l18:x[jvj+41]=t[x[jvj+41]];
l17:if((x[jvj+41]<=0)) goto l22;
x[jvj+15]=s[x[jvj+41]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+41];
x[jvj+38]=x[jvj+47] ;z[jvj+38]=z[jvj+47];
l10:if((x[jvj+38]<=0)) goto l18;
x[jvj+12]=s[x[jvj+38]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+38];
if((x[jvj+12]!=x[jvj+15])) goto l19;
x[jvj+38]=t[x[jvj+38]];
goto l10;
l14:x[jvj+8]=s[x[jvj+40]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+40];
pile[v[22]]=498; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(498,jvj+8,jvj+10)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(jvj+11,jvj+12,jvj+13)*/
x[jvj+39]=x[jvj+13] ;z[jvj+39]=z[jvj+13];
goto l11;
l16:pile[v[22]]=jvj+17; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+8)*/
goto l15;
l19:pile[v[22]]=642; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(642,jvj+12,V27)*/
V27=pile[WZ2]; 
pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(642,jvj+15,V28)*/
V28=pile[WZ2]; 
x[jvj+17]=0 ;z[jvj+17]=0;
pile[v[22]]=jvj+11; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(jvj+11,jvj+15,jvj+16)*/
x[jvj+40]=x[jvj+16] ;z[jvj+40]=z[jvj+16];
goto l13;
l21:x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=297; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(297,jvj+19,jvj+20)*/
x[jvj+11]=x[jvj+20] ;z[jvj+11]=z[jvj+20];
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V97; pile[WZ2]=jvj+19; 
(*f[42])( );     /*SRA1(135,V97,jvj+19,V98)*/
V98=pile[WZ3]; 
pile[v[22]]=V98; 
(*f[40])( );     /*SLG0(V98)*/
x[jvj+41]=x[jvj+47] ;z[jvj+41]=z[jvj+47];
goto l17;
l22:x[jvj+18]=t[x[jvj+18]];
goto l20;
l25:x[jvj+43]=t[x[jvj+43]];
l24:if((x[jvj+43]<=0)) goto l45;
x[jvj+22]=s[x[jvj+43]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+43];
pile[v[22]]=498; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(498,jvj+22,jvj+25)*/
if((x[jvj+27]!=x[jvj+25])) goto l25;
pile[v[22]]=163; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(163,jvj+21,V42)*/
V42=pile[WZ2]; 
pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(163,jvj+22,V43)*/
V43=pile[WZ2]; 
if((V42!=V43)) goto l25;
l26:pile[v[22]]=983; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(983,jvj+27,jvj+28)*/
pile[v[22]]=878; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(878,jvj+28,jvj+29)*/
x[jvj+44]=x[jvj+29] ;z[jvj+44]=z[jvj+29];
l27:if((x[jvj+44]<=0)) goto l45;
x[jvj+26]=s[x[jvj+44]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+44];
pile[v[22]]=163; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(163,jvj+21,V47)*/
V47=pile[WZ2]; 
pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(163,jvj+26,V48)*/
V48=pile[WZ2]; 
if((V47==V48)) goto l28;
x[jvj+44]=t[x[jvj+44]];
goto l27;
l28:pile[v[22]]=1543; pile[WZ1]=jvj+26; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(1543,jvj+26,jvj+30)*/
x[jvj+45]=x[jvj+30] ;z[jvj+45]=z[jvj+30];
l29:if((x[jvj+45]<=0)) goto l45;
x[jvj+31]=s[x[jvj+45]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+45];
pile[v[22]]=642; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(642,jvj+31,V52)*/
V52=pile[WZ2]; 
if((V52!=V49)) goto l30;
pile[v[22]]=1543; pile[WZ1]=jvj+26; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(1543,jvj+26,jvj+32)*/
x[jvj+46]=x[jvj+32] ;z[jvj+46]=z[jvj+32];
l31:if((x[jvj+46]<=0)) goto l45;
x[jvj+33]=s[x[jvj+46]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+46];
pile[v[22]]=642; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(642,jvj+33,V54)*/
V54=pile[WZ2]; 
if((V54!=NQ)) goto l32;
pile[v[22]]=876; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(876,jvj+31,V60)*/
V60=pile[WZ2]; 
pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(876,jvj+33,V61)*/
V61=pile[WZ2]; 
if((V60==V61)) goto l38;
V125=x[jvj+27];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,0,876,V124)*/
V124=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V125; pile[WZ2]=V124; 
(*f[39])( );     /*SDX0(20,V125,V124,V36)*/
V36=pile[WZ3]; 
V35=incon;
pile[v[22]]=163; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(163,jvj+21,V62)*/
V62=pile[WZ2]; 
VV=V62;
pile[v[22]]=V36; pile[WZ1]=VV; 
(*f[37])( );     /*SRA0(V36,VV,V35)*/
V35=pile[WZ2]; 
l37:pile[v[22]]=135; pile[WZ1]=V35; pile[WZ2]=684; 
(*f[42])( );     /*SRA1(135,V35,684,V126)*/
V126=pile[WZ3]; 
pile[v[22]]=V126; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V126,58,V127)*/
V127=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V60; pile[WZ2]=V127; 
(*f[39])( );     /*SDX0(41,V60,V127,V128)*/
V128=pile[WZ3]; 
pile[v[22]]=V128; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V128,(-9543),V130)*/
V130=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V49; pile[WZ2]=V130; 
(*f[39])( );     /*SDX0(41,V49,V130,V131)*/
V131=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V131; pile[WZ2]=338; 
(*f[42])( );     /*SRA1(135,V131,338,V133)*/
V133=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V61; pile[WZ2]=V133; 
(*f[39])( );     /*SDX0(41,V61,V133,V134)*/
V134=pile[WZ3]; 
pile[v[22]]=V134; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V134,(-9543),V136)*/
V136=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NQ; pile[WZ2]=V136; 
(*f[39])( );     /*SDX0(41,NQ,V136,V137)*/
V137=pile[WZ3]; 
pile[v[22]]=V137; 
(*f[40])( );     /*SLG0(V137)*/
l38:pile[v[22]]=493; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(493,jvj+31,V55)*/
V55=pile[WZ2]; 
pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(493,jvj+33,V56)*/
V56=pile[WZ2]; 
if((V55==V56)) goto l40;
V110=x[jvj+27];
pile[v[22]]=15; pile[WZ1]=0; pile[WZ2]=35; 
(*f[41])( );     /*SRB0(15,0,35,V108)*/
V108=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V108; pile[WZ2]=125; 
(*f[42])( );     /*SRA1(135,V108,125,V109)*/
V109=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V110; pile[WZ2]=V109; 
(*f[39])( );     /*SDX0(20,V110,V109,V34)*/
V34=pile[WZ3]; 
V33=incon;
pile[v[22]]=163; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l33;     /*FNDC1(163,jvj+21,V57)*/
V57=pile[WZ2]; 
V=V57;
pile[v[22]]=V34; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V34,V,V33)*/
V33=pile[WZ2]; 
l39:pile[v[22]]=135; pile[WZ1]=V33; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V33,493,V111)*/
V111=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V55; pile[WZ2]=V111; 
(*f[39])( );     /*SDX0(41,V55,V111,V112)*/
V112=pile[WZ3]; 
pile[v[22]]=V112; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V112,(-9543),V114)*/
V114=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V49; pile[WZ2]=V114; 
(*f[39])( );     /*SDX0(41,V49,V114,V115)*/
V115=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V115; pile[WZ2]=338; 
(*f[42])( );     /*SRA1(135,V115,338,V117)*/
V117=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V56; pile[WZ2]=V117; 
(*f[39])( );     /*SDX0(41,V56,V117,V118)*/
V118=pile[WZ3]; 
pile[v[22]]=V118; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V118,(-9543),V120)*/
V120=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NQ; pile[WZ2]=V120; 
(*f[39])( );     /*SDX0(41,NQ,V120,V121)*/
V121=pile[WZ3]; 
pile[v[22]]=V121; 
(*f[40])( );     /*SLG0(V121)*/
l40:pile[v[22]]=936; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(936,jvj+31,V65)*/
V65=pile[WZ2]; 
SA=V65;
pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(936,jvj+33,V66)*/
V66=pile[WZ2]; 
SB=V66;
V67=SA+SB;
V69=SA-SB;
V68=abs(V69);
if((V67<15)) goto l35;
V70=V68*100;
V71=V67*20;
if((V70>V71)) goto l41;
l45:x[jvj+35]=t[x[jvj+35]];
l44:if((x[jvj+35]<=0)) goto l46;
x[jvj+21]=s[x[jvj+35]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+35];
pile[v[22]]=498; pile[WZ1]=jvj+21; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(498,jvj+21,jvj+36)*/
x[jvj+27]=x[jvj+36] ;z[jvj+27]=z[jvj+36];
pile[v[22]]=1363; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(1363,jvj+23,jvj+24)*/
x[jvj+43]=x[jvj+24] ;z[jvj+43]=z[jvj+24];
goto l24;
l30:x[jvj+45]=t[x[jvj+45]];
goto l29;
l32:x[jvj+46]=t[x[jvj+46]];
goto l31;
l33:V33=V34;
goto l39;
l34:V35=V36;
goto l37;
l35:if((V68>3)) goto l41;
goto l45;
l36:V37=V38;
l42:pile[v[22]]=135; pile[WZ1]=V37; pile[WZ2]=684; 
(*f[42])( );     /*SRA1(135,V37,684,V142)*/
V142=pile[WZ3]; 
pile[v[22]]=V142; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V142,58,V143)*/
V143=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=SA; pile[WZ2]=V143; 
(*f[39])( );     /*SDX0(41,SA,V143,V144)*/
V144=pile[WZ3]; 
pile[v[22]]=V144; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V144,(-9543),V146)*/
V146=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V49; pile[WZ2]=V146; 
(*f[39])( );     /*SDX0(41,V49,V146,V147)*/
V147=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V147; pile[WZ2]=338; 
(*f[42])( );     /*SRA1(135,V147,338,V149)*/
V149=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=SB; pile[WZ2]=V149; 
(*f[39])( );     /*SDX0(41,SB,V149,V150)*/
V150=pile[WZ3]; 
pile[v[22]]=V150; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V150,(-9543),V152)*/
V152=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NQ; pile[WZ2]=V152; 
(*f[39])( );     /*SDX0(41,NQ,V152,V153)*/
V153=pile[WZ3]; 
pile[v[22]]=V153; 
(*f[40])( );     /*SLG0(V153)*/
goto l45;
l41:V141=x[jvj+27];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=936; 
(*f[42])( );     /*SRA1(135,0,936,V140)*/
V140=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V141; pile[WZ2]=V140; 
(*f[39])( );     /*SDX0(20,V141,V140,V38)*/
V38=pile[WZ3]; 
V37=incon;
pile[v[22]]=163; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l36;     /*FNDC1(163,jvj+21,V72)*/
V72=pile[WZ2]; 
W=V72;
pile[v[22]]=V38; pile[WZ1]=W; 
(*f[37])( );     /*SRA0(V38,W,V37)*/
V37=pile[WZ2]; 
goto l42;
l43:pile[v[22]]=642; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(642,jvj+34,V49)*/
V49=pile[WZ2]; 
pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(642,jvj+23,NQ)*/
NQ=pile[WZ2]; 
pile[v[22]]=1363; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(1363,jvj+34,jvj+35)*/
goto l44;
l46:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
