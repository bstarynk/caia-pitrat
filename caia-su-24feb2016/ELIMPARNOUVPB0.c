#include "dx.h"
void ELIMPARNOUVPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V10=0,V18=0,V=0,V49=0,V43=0,V44=0,V45=0,V46=0,V47=0,V48=0,V50=0,V14=0,V16=0,V17=0,V32=0,V25=0,V28=0,V27=0,V29=0,V35=0,V24=0,V53=0,V7=0,V22=0,V41=0,V37=0,V38=0,V39=0,V40=0,V73=0,V71=0,V65=0,V86=0,V84=0,V78=0;
int AL,E,ST;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=45;
x[jvj+1]=10874;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==768&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
AL=pile[v[22]]; E=pile[v[22]+1]; ST=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+7]=x[E] ;z[jvj+7]=z[E];
pile[v[22]]=159; pile[WZ1]=721; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(159,721,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
if((x[ST]!=68)) goto l22;
x[jvj+41]=x[E] ;z[jvj+41]=z[E];
l16:if((x[jvj+41]<=0)) goto l22;
x[jvj+19]=s[x[jvj+41]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+41];
pile[v[22]]=1078; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1078,jvj+19,jvj+22)*/
pile[v[22]]=163; pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(163,jvj+22,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=741; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(741,jvj+19,V35)*/
V35=pile[WZ2]; 
V24=V29;
pile[v[22]]=878; pile[WZ1]=AL; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(878,AL,jvj+16)*/
x[jvj+40]=x[jvj+16] ;z[jvj+40]=z[jvj+16];
l12:if((x[jvj+40]<=0)) goto l17;
x[jvj+17]=s[x[jvj+40]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+40];
pile[v[22]]=163; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(163,jvj+17,V32)*/
V32=pile[WZ2]; 
if((V32!=V24)) goto l13;
V25=incon;
pile[v[22]]=397; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(397,jvj+17,jvj+18)*/
pile[v[22]]=0; pile[WZ1]=(-89); 
(*f[38])( );     /*SPC0(0,(-89),V25)*/
V25=pile[WZ2]; 
l18:pile[v[22]]=V25; pile[WZ1]=V24; 
(*f[37])( );     /*SRA0(V25,V24,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V35; pile[WZ2]=V53; 
(*f[39])( );     /*SDX0(41,V35,V53,V28)*/
V28=pile[WZ3]; 
V27=incon;
pile[v[22]]=191; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(191,jvj+19,jvj+20)*/
x[jvj+21]=x[jvj+20] ;z[jvj+21]=z[jvj+20];
pile[v[22]]=135; pile[WZ1]=V28; pile[WZ2]=jvj+21; 
(*f[42])( );     /*SRA1(135,V28,jvj+21,V27)*/
V27=pile[WZ3]; 
l19:pile[v[22]]=V27; 
(*f[40])( );     /*SLG0(V27)*/
pile[v[22]]=jvj+19; 
(*f[853])( );     /*SORESSAI0(jvj+19)*/
l17:x[jvj+41]=t[x[jvj+41]];
goto l16;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+4,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=1018; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1018,jvj+4,jvj+5)*/
pile[v[22]]=107; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,jvj+4,jvj+6)*/
pile[v[22]]=V2; pile[WZ1]=jvj+5; pile[WZ3]=jvj+7; 
(*f[1123])( );     /*NMEILLEURS0(V2,jvj+5,jvj+6,jvj+7)*/
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l5:x[jvj+38]=t[x[jvj+38]];
l4:if((x[jvj+38]<=0)) goto l23;
x[jvj+11]=s[x[jvj+38]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+38];
pile[v[22]]=163; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+11,V10)*/
V10=pile[WZ2]; 
if((V10!=V)) goto l5;
pile[v[22]]=397; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(397,jvj+11,jvj+24)*/
if((x[jvj+24]!=68)) goto l23;
V22=x[jvj+11];
pile[v[22]]=983; pile[WZ1]=AL; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(983,AL,jvj+13)*/
pile[v[22]]=878; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(878,jvj+13,jvj+14)*/
x[jvj+39]=x[jvj+14] ;z[jvj+39]=z[jvj+14];
l9:if((x[jvj+39]<=0)) goto l11;
x[jvj+15]=s[x[jvj+39]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+39];
pile[v[22]]=163; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(163,jvj+15,V14)*/
V14=pile[WZ2]; 
if((V14!=V)) goto l10;
V16=x[jvj+15];
pile[v[22]]=878; pile[WZ1]=jvj+13; pile[WZ2]=V16; 
(*f[134])( );     /*OTA0(878,jvj+13,V16)*/
l10:x[jvj+39]=t[x[jvj+39]];
goto l9;
l7:if((V17<4)) goto l8;
l29:x[jvj+44]=924 ;z[jvj+44]=924;
x[jvj+26]=x[jvj+44] ;z[jvj+26]=z[jvj+44];
l30:pile[v[22]]=120; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(120,jvj+26,jvj+27)*/
pile[v[22]]=698; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(698,jvj+27,jvj+28)*/
V71=incon;
pile[v[22]]=163; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(163,jvj+28,V73)*/
V73=pile[WZ2]; 
if((V73!=V)) goto l35;
pile[v[22]]=109; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(109,jvj+28,jvj+29)*/
if((x[jvj+29]!=x[AL])) goto l35;
V71=68;
l31:V65=V71;
if((V65==68)) goto l34;
if((V65!=67)) goto l36;
x[jvj+26]=x[jvj+27] ;z[jvj+26]=z[jvj+27];
goto l30;
l8:V49=x[AL];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V43; pile[WZ2]=10874; 
(*f[98])( );     /*SRA3(135,V43,10874,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(41,1,V44,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V45,125,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V46; pile[WZ2]=634; 
(*f[42])( );     /*SRA1(135,V46,634,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V49; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(20,V49,V47,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V48,V,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V50; 
(*f[40])( );     /*SLG0(V50)*/
if((V17!=2)) goto l29;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l29;
l11:V17=g[483];
if((V17<=0)) goto l29;
V18=vg[483];
if((V18!=0)) goto l6;
if((V17<3)) goto l8;
l6:pile[v[22]]=483; pile[WZ1]=10874; pile[WZ2]=0; pile[WZ3]=(-2978); pile[WZ4]=AL; pile[WZ5]=(-611); pile[v[22]+6]=V; pile[v[22]+7]=jvj+12; 
(*f[218])( );     /*INTERP2(483,10874,0,(-2978),AL,(-611),V,jvj+12)*/
if((x[jvj+12]==135)) goto l7;
goto l29;
l13:x[jvj+40]=t[x[jvj+40]];
goto l12;
l14:V25=0;
goto l18;
l15:V27=V28;
goto l19;
l21:x[jvj+8]=s[x[jvj+42]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+42];
pile[v[22]]=191; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(191,jvj+8,jvj+9)*/
if((x[jvj+9]==68)) goto l23;
l24:pile[v[22]]=1078; pile[WZ1]=jvj+8; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(1078,jvj+8,jvj+23)*/
pile[v[22]]=163; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(163,jvj+23,V7)*/
V7=pile[WZ2]; 
V=V7;
if((V==(-7141))) goto l23;
pile[v[22]]=878; pile[WZ1]=AL; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(878,AL,jvj+10)*/
x[jvj+38]=x[jvj+10] ;z[jvj+38]=z[jvj+10];
goto l4;
l22:x[jvj+42]=x[E] ;z[jvj+42]=z[E];
l20:if((x[jvj+42]>0)) goto l21;
x[jvj+43]=x[jvj+7] ;z[jvj+43]=z[jvj+7];
l26:if((x[jvj+43]>0)) goto l27;
l28:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l25:pile[v[22]]=878; pile[WZ1]=AL; pile[WZ2]=V22; 
(*f[134])( );     /*OTA0(878,AL,V22)*/
l23:x[jvj+42]=t[x[jvj+42]];
goto l20;
l27:x[jvj+25]=s[x[jvj+43]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+43];
V41=x[jvj+25];
pile[v[22]]=jvj+25; pile[WZ1]=0; pile[WZ2]=V41; pile[WZ3]=191; 
(*f[285])( );     /*ENLY0(jvj+25,0,V41,191,V37,V38)*/
V37=pile[WZ4]; V38=pile[WZ5]; 
pile[WZ1]=V38; pile[WZ2]=V37; pile[WZ3]=741; 
(*f[285])( );     /*ENLY0(jvj+25,V38,V37,741,V39,V40)*/
V39=pile[WZ4]; V40=pile[WZ5]; 
x[jvj+43]=t[x[jvj+43]];
goto l26;
l33:pile[v[22]]=120; pile[WZ1]=jvj+26; 
(*f[71])( );     /*ENLV0(120,jvj+26)*/
l32:pile[v[22]]=120; pile[WZ1]=jvj+27; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(120,jvj+27,jvj+30)*/
pile[v[22]]=jvj+26; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+26,120,jvj+30)*/
goto l30;
l34:pile[v[22]]=120; pile[WZ1]=jvj+27; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(120,jvj+27,jvj+31)*/
goto l32;
l35:V71=67;
goto l31;
l36:x[jvj+45]=978 ;z[jvj+45]=978;
x[jvj+32]=x[jvj+45] ;z[jvj+32]=z[jvj+45];
l37:pile[v[22]]=120; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(120,jvj+32,jvj+33)*/
pile[v[22]]=698; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(698,jvj+33,jvj+34)*/
V84=incon;
pile[v[22]]=163; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l42;     /*FNDC1(163,jvj+34,V86)*/
V86=pile[WZ2]; 
if((V86!=V)) goto l42;
pile[v[22]]=109; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(109,jvj+34,jvj+35)*/
if((x[jvj+35]!=x[AL])) goto l42;
V84=68;
l38:V78=V84;
if((V78==68)) goto l41;
if((V78!=67)) goto l25;
x[jvj+32]=x[jvj+33] ;z[jvj+32]=z[jvj+33];
goto l37;
l40:pile[v[22]]=120; pile[WZ1]=jvj+32; 
(*f[71])( );     /*ENLV0(120,jvj+32)*/
l39:pile[v[22]]=120; pile[WZ1]=jvj+33; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(120,jvj+33,jvj+36)*/
pile[v[22]]=jvj+32; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+32,120,jvj+36)*/
goto l37;
l41:pile[v[22]]=120; pile[WZ1]=jvj+33; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(120,jvj+33,jvj+37)*/
goto l39;
l42:V84=67;
goto l38;
}
