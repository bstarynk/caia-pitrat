#include "dx.h"
void ELIMPARNOUVPB1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V13=0,V21=0,V=0,V45=0,V39=0,V40=0,V41=0,V42=0,V43=0,V44=0,V46=0,V17=0,V19=0,V20=0,V28=0,V55=0,V48=0,V49=0,V50=0,V51=0,V52=0,V53=0,V54=0,V27=0,V10=0,V25=0,V37=0,V33=0,V34=0,V35=0,V36=0,V73=0,V71=0,V65=0,V86=0,V84=0,V78=0;
int AL,B,E;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=41;
x[jvj+1]=10874;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==975&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
AL=pile[v[22]]; B=pile[v[22]+1]; E=pile[v[22]+2]; RES=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=jvj+3; pile[WZ1]=B; 
(*f[68])( );     /*PLUE0(jvj+3,B)*/
x[jvj+35]=x[E] ;z[jvj+35]=z[E];
l1:if((x[jvj+35]>0)) goto l2;
x[jvj+9]=x[jvj+3] ;z[jvj+9]=z[jvj+3];
pile[v[22]]=159; pile[WZ1]=721; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(159,721,jvj+5)*/
l3:if((x[jvj+5]>0)) goto l4;
pile[v[22]]=191; pile[WZ1]=B; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(191,B,jvj+18)*/
if((x[jvj+18]!=68)) goto l17;
x[RES]=67 ;z[RES]=67;
l20:x[jvj+38]=x[E] ;z[jvj+38]=z[E];
l18:if((x[jvj+38]>0)) goto l19;
x[jvj+39]=x[jvj+9] ;z[jvj+39]=z[jvj+9];
l24:if((x[jvj+39]>0)) goto l25;
l26:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
l2:x[jvj+4]=s[x[jvj+35]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+35];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+4)*/
x[jvj+35]=t[x[jvj+35]];
goto l1;
l4:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+6,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=1018; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1018,jvj+6,jvj+7)*/
pile[v[22]]=107; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+8)*/
pile[v[22]]=V2; pile[WZ1]=jvj+7; pile[WZ3]=jvj+9; 
(*f[1123])( );     /*NMEILLEURS0(V2,jvj+7,jvj+8,jvj+9)*/
l5:x[jvj+5]=t[x[jvj+5]];
goto l3;
l7:x[jvj+36]=t[x[jvj+36]];
l6:if((x[jvj+36]<=0)) goto l21;
x[jvj+13]=s[x[jvj+36]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+36];
pile[v[22]]=163; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(163,jvj+13,V13)*/
V13=pile[WZ2]; 
if((V13!=V)) goto l7;
pile[v[22]]=397; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(397,jvj+13,jvj+21)*/
if((x[jvj+21]!=68)) goto l21;
V25=x[jvj+13];
pile[v[22]]=983; pile[WZ1]=AL; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(983,AL,jvj+15)*/
pile[v[22]]=878; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(878,jvj+15,jvj+16)*/
x[jvj+37]=x[jvj+16] ;z[jvj+37]=z[jvj+16];
l11:if((x[jvj+37]<=0)) goto l13;
x[jvj+17]=s[x[jvj+37]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+37];
pile[v[22]]=163; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(163,jvj+17,V17)*/
V17=pile[WZ2]; 
if((V17!=V)) goto l12;
V19=x[jvj+17];
pile[v[22]]=878; pile[WZ1]=jvj+15; pile[WZ2]=V19; 
(*f[134])( );     /*OTA0(878,jvj+15,V19)*/
l12:x[jvj+37]=t[x[jvj+37]];
goto l11;
l9:if((V20<4)) goto l10;
l27:x[jvj+40]=924 ;z[jvj+40]=924;
x[jvj+23]=x[jvj+40] ;z[jvj+23]=z[jvj+40];
l28:pile[v[22]]=120; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(120,jvj+23,jvj+24)*/
pile[v[22]]=698; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(698,jvj+24,jvj+25)*/
V71=incon;
pile[v[22]]=163; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l33;     /*FNDC1(163,jvj+25,V73)*/
V73=pile[WZ2]; 
if((V73!=V)) goto l33;
pile[v[22]]=109; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(109,jvj+25,jvj+26)*/
if((x[jvj+26]!=x[AL])) goto l33;
V71=68;
l29:V65=V71;
if((V65==68)) goto l32;
if((V65!=67)) goto l34;
x[jvj+23]=x[jvj+24] ;z[jvj+23]=z[jvj+24];
goto l28;
l10:V45=x[AL];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V39; pile[WZ2]=10874; 
(*f[98])( );     /*SRA3(135,V39,10874,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V40; 
(*f[39])( );     /*SDX0(41,1,V40,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V41,125,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V42; pile[WZ2]=634; 
(*f[42])( );     /*SRA1(135,V42,634,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V45; pile[WZ2]=V43; 
(*f[39])( );     /*SDX0(20,V45,V43,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V44,V,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; 
(*f[40])( );     /*SLG0(V46)*/
if((V20!=2)) goto l27;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l27;
l13:V20=g[483];
if((V20<=0)) goto l27;
V21=vg[483];
if((V21!=0)) goto l8;
if((V20<3)) goto l10;
l8:pile[v[22]]=483; pile[WZ1]=10874; pile[WZ2]=1; pile[WZ3]=(-2978); pile[WZ4]=AL; pile[WZ5]=(-611); pile[v[22]+6]=V; pile[v[22]+7]=jvj+14; 
(*f[218])( );     /*INTERP2(483,10874,1,(-2978),AL,(-611),V,jvj+14)*/
if((x[jvj+14]==135)) goto l9;
goto l27;
l15:if((V27<4)) goto l16;
goto l20;
l16:V55=x[AL];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V48; pile[WZ2]=10874; 
(*f[98])( );     /*SRA3(135,V48,10874,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V49; 
(*f[39])( );     /*SDX0(41,2,V49,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V50,125,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V51; pile[WZ2]=67; 
(*f[42])( );     /*SRA1(135,V51,67,V52)*/
V52=pile[WZ3]; 
pile[WZ1]=V52; pile[WZ2]=51; 
(*f[42])( );     /*SRA1(135,V52,51,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V55; pile[WZ2]=V53; 
(*f[39])( );     /*SDX0(20,V55,V53,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=V54; 
(*f[40])( );     /*SLG0(V54)*/
if((V27!=2)) goto l20;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l20;
l17:x[RES]=68 ;z[RES]=68;
V27=g[484];
if((V27<=0)) goto l20;
V28=vg[484];
if((V28!=0)) goto l14;
if((V27<3)) goto l16;
l14:pile[v[22]]=484; pile[WZ1]=10874; pile[WZ2]=1; pile[WZ3]=(-2978); pile[WZ4]=AL; pile[WZ5]=jvj+19; 
(*f[232])( );     /*INTERP3(484,10874,1,(-2978),AL,jvj+19)*/
if((x[jvj+19]==135)) goto l15;
goto l20;
l19:x[jvj+10]=s[x[jvj+38]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+38];
pile[v[22]]=191; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(191,jvj+10,jvj+11)*/
if((x[jvj+11]==68)) goto l21;
l22:pile[v[22]]=1078; pile[WZ1]=jvj+10; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(1078,jvj+10,jvj+20)*/
pile[v[22]]=163; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(163,jvj+20,V10)*/
V10=pile[WZ2]; 
V=V10;
if((V==(-7141))) goto l21;
pile[v[22]]=878; pile[WZ1]=AL; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(878,AL,jvj+12)*/
x[jvj+36]=x[jvj+12] ;z[jvj+36]=z[jvj+12];
goto l6;
l23:pile[v[22]]=878; pile[WZ1]=AL; pile[WZ2]=V25; 
(*f[134])( );     /*OTA0(878,AL,V25)*/
l21:x[jvj+38]=t[x[jvj+38]];
goto l18;
l25:x[jvj+22]=s[x[jvj+39]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+39];
V37=x[jvj+22];
pile[v[22]]=jvj+22; pile[WZ1]=0; pile[WZ2]=V37; pile[WZ3]=191; 
(*f[285])( );     /*ENLY0(jvj+22,0,V37,191,V33,V34)*/
V33=pile[WZ4]; V34=pile[WZ5]; 
pile[WZ1]=V34; pile[WZ2]=V33; pile[WZ3]=741; 
(*f[285])( );     /*ENLY0(jvj+22,V34,V33,741,V35,V36)*/
V35=pile[WZ4]; V36=pile[WZ5]; 
x[jvj+39]=t[x[jvj+39]];
goto l24;
l31:pile[v[22]]=120; pile[WZ1]=jvj+23; 
(*f[71])( );     /*ENLV0(120,jvj+23)*/
l30:pile[v[22]]=120; pile[WZ1]=jvj+24; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(120,jvj+24,jvj+27)*/
pile[v[22]]=jvj+23; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+23,120,jvj+27)*/
goto l28;
l32:pile[v[22]]=120; pile[WZ1]=jvj+24; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(120,jvj+24,jvj+28)*/
goto l30;
l33:V71=67;
goto l29;
l34:x[jvj+41]=978 ;z[jvj+41]=978;
x[jvj+29]=x[jvj+41] ;z[jvj+29]=z[jvj+41];
l35:pile[v[22]]=120; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(120,jvj+29,jvj+30)*/
pile[v[22]]=698; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(698,jvj+30,jvj+31)*/
V84=incon;
pile[v[22]]=163; pile[WZ1]=jvj+31; 
(*f[44])( );if(v[102]) goto l40;     /*FNDC1(163,jvj+31,V86)*/
V86=pile[WZ2]; 
if((V86!=V)) goto l40;
pile[v[22]]=109; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(109,jvj+31,jvj+32)*/
if((x[jvj+32]!=x[AL])) goto l40;
V84=68;
l36:V78=V84;
if((V78==68)) goto l39;
if((V78!=67)) goto l23;
x[jvj+29]=x[jvj+30] ;z[jvj+29]=z[jvj+30];
goto l35;
l38:pile[v[22]]=120; pile[WZ1]=jvj+29; 
(*f[71])( );     /*ENLV0(120,jvj+29)*/
l37:pile[v[22]]=120; pile[WZ1]=jvj+30; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(120,jvj+30,jvj+33)*/
pile[v[22]]=jvj+29; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+29,120,jvj+33)*/
goto l35;
l39:pile[v[22]]=120; pile[WZ1]=jvj+30; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(120,jvj+30,jvj+34)*/
goto l37;
l40:V84=67;
goto l36;
}
