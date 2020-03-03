#include "dx.h"
void VG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V3=0,V4=0,V7=0,V18=0,V28=0,V32=0,V54=0,V44=0,V45=0,V46=0,V47=0,V48=0,V49=0,V50=0,V52=0,V53=0,V27=0,V39=0,V62=0,V56=0,V57=0,V58=0,V59=0,V60=0,V61=0,V63=0,V64=0,V38=0,V37=0,V26=0,V77=0,V78=0,V83=0,V84=0,V89=0,V90=0,V95=0,V96=0,V101=0,V102=0;
int X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=49;
x[jvj+1]=10557;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==85&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=311; pile[WZ1]=324; 
(*f[71])( );     /*ENLV0(311,324)*/
pile[v[22]]=450; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(450,324,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
x[jvj+29]=10061 ;z[jvj+29]=10061;
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(128,X,jvj+28)*/
l37:if((x[jvj+28]>0)) goto l39;
V77=x[jvj+29];
pile[v[22]]=jvj+29; pile[WZ1]=109; pile[WZ2]=jvj+4; 
(*f[54])( );     /*TRI1(jvj+29,109,jvj+4)*/
pile[v[22]]=X; pile[WZ1]=128; 
(*f[36])( );     /*PLUSC0(X,128,jvj+4)*/
pile[v[22]]=20; pile[WZ1]=V77; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V77,0,V78)*/
V78=pile[WZ3]; 
pile[v[22]]=V78; 
(*f[40])( );     /*SLG0(V78)*/
pile[v[22]]=324; pile[WZ1]=311; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(324,311,jvj+29)*/
l3:pile[v[22]]=X; pile[WZ1]=jvj+4; 
(*f[277])( );     /*VV0(X,jvj+4)*/
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1484,854,V5)*/
V5=pile[WZ2]; 
V3=sepfacts+1;
V4=sepfacts+V5;
l4:if((V3>V4)) goto l7;
V7=r[V3];
if((V7!=1)) goto l5;
x[jvj+33]=V3 ;z[jvj+33]=(V3<=sepcte) ? V3 : 0;
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(128,X,jvj+32)*/
l40:if((x[jvj+32]>0)) goto l42;
V83=x[jvj+33];
pile[v[22]]=jvj+33; pile[WZ1]=109; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(jvj+33,109,jvj+5)*/
pile[v[22]]=X; pile[WZ1]=128; 
(*f[36])( );     /*PLUSC0(X,128,jvj+5)*/
pile[v[22]]=20; pile[WZ1]=V83; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V83,0,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=V84; 
(*f[40])( );     /*SLG0(V84)*/
pile[v[22]]=324; pile[WZ1]=311; pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(324,311,jvj+33)*/
l6:pile[v[22]]=X; pile[WZ1]=jvj+5; 
(*f[277])( );     /*VV0(X,jvj+5)*/
l5:V3++;
goto l4;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=324; pile[WZ1]=311; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(324,311,jvj+3)*/
x[jvj+2]=t[x[jvj+2]];
goto l1;
l7:pile[v[22]]=159; pile[WZ1]=316; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(159,316,jvj+6)*/
l8:if((x[jvj+6]>0)) goto l9;
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(457,324,jvj+10)*/
l12:if((x[jvj+10]>0)) goto l13;
pile[v[22]]=311; pile[WZ1]=324; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(311,324,jvj+12)*/
x[jvj+47]=x[jvj+12] ;z[jvj+47]=z[jvj+12];
l15:if((x[jvj+47]>0)) goto l16;
pile[v[22]]=311; pile[WZ1]=324; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(311,324,jvj+24)*/
pile[v[22]]=363; pile[WZ1]=240; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(363,240,jvj+25)*/
l30:if((x[jvj+25]>0)) goto l31;
pile[v[22]]=724; pile[WZ1]=240; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(724,240,jvj+26)*/
l33:if((x[jvj+26]>0)) goto l34;
l36:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l9:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(109,jvj+7,jvj+8)*/
x[jvj+37]=x[jvj+8] ;z[jvj+37]=z[jvj+8];
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(128,X,jvj+36)*/
l43:if((x[jvj+36]>0)) goto l45;
V89=x[jvj+37];
pile[v[22]]=jvj+37; pile[WZ1]=109; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(jvj+37,109,jvj+9)*/
pile[v[22]]=X; pile[WZ1]=128; 
(*f[36])( );     /*PLUSC0(X,128,jvj+9)*/
pile[v[22]]=20; pile[WZ1]=V89; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V89,0,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=V90; 
(*f[40])( );     /*SLG0(V90)*/
pile[v[22]]=324; pile[WZ1]=311; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(324,311,jvj+37)*/
l11:pile[v[22]]=X; pile[WZ1]=jvj+9; 
(*f[277])( );     /*VV0(X,jvj+9)*/
l10:x[jvj+6]=t[x[jvj+6]];
goto l8;
l13:x[jvj+41]=s[x[jvj+10]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+10];
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(128,X,jvj+40)*/
l46:if((x[jvj+40]>0)) goto l48;
V95=x[jvj+41];
pile[v[22]]=jvj+41; pile[WZ1]=109; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+41,109,jvj+11)*/
pile[v[22]]=X; pile[WZ1]=128; 
(*f[36])( );     /*PLUSC0(X,128,jvj+11)*/
pile[v[22]]=20; pile[WZ1]=V95; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V95,0,V96)*/
V96=pile[WZ3]; 
pile[v[22]]=V96; 
(*f[40])( );     /*SLG0(V96)*/
pile[v[22]]=324; pile[WZ1]=311; pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(324,311,jvj+41)*/
l14:pile[v[22]]=X; pile[WZ1]=jvj+11; 
(*f[277])( );     /*VV0(X,jvj+11)*/
x[jvj+10]=t[x[jvj+10]];
goto l12;
l16:x[jvj+15]=s[x[jvj+47]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+47];
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(128,X,jvj+44)*/
l49:if((x[jvj+44]>0)) goto l51;
V101=x[jvj+15];
pile[v[22]]=jvj+15; pile[WZ1]=109; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+15,109,jvj+13)*/
pile[v[22]]=X; pile[WZ1]=128; 
(*f[36])( );     /*PLUSC0(X,128,jvj+13)*/
pile[v[22]]=20; pile[WZ1]=V101; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V101,0,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=V102; 
(*f[40])( );     /*SLG0(V102)*/
pile[v[22]]=324; pile[WZ1]=311; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(324,311,jvj+15)*/
l17:pile[v[22]]=311; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(311,jvj+13,jvj+14)*/
pile[v[22]]=jvj+15; pile[WZ1]=311; 
(*f[34])( );     /*CHGC0(jvj+15,311,jvj+14)*/
pile[v[22]]=365; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(365,jvj+15,jvj+16)*/
x[jvj+48]=x[jvj+16] ;z[jvj+48]=z[jvj+16];
l18:if((x[jvj+48]>0)) goto l19;
x[jvj+47]=t[x[jvj+47]];
goto l15;
l19:x[jvj+17]=s[x[jvj+48]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+48];
pile[v[22]]=130; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+17,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=313; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(313,jvj+17,jvj+18)*/
x[jvj+49]=x[jvj+18] ;z[jvj+49]=z[jvj+18];
l21:if((x[jvj+49]<=0)) goto l20;
x[jvj+19]=s[x[jvj+49]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+49];
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==x[jvj+19]) goto l22;
pile[v[22]]=V18; pile[WZ1]=jvj+19; pile[WZ2]=jvj+15; 
(*f[278])( );     /*VK0(V18,jvj+19,jvj+15)*/
l22:x[jvj+49]=t[x[jvj+49]];
goto l21;
l20:x[jvj+48]=t[x[jvj+48]];
goto l18;
l24:if((V27<4)) goto l25;
l35:x[jvj+26]=t[x[jvj+26]];
goto l33;
l25:pile[v[22]]=117; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(117,jvj+20,V32)*/
V32=pile[WZ2]; 
V54=x[jvj+27];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V44; pile[WZ2]=10557; 
(*f[98])( );     /*SRA3(135,V44,10557,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V45; 
(*f[39])( );     /*SDX0(41,1,V45,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=V46; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V46,125,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V47; pile[WZ2]=32; 
(*f[42])( );     /*SRA1(135,V47,32,V48)*/
V48=pile[WZ3]; 
pile[WZ1]=V48; pile[WZ2]=722; 
(*f[42])( );     /*SRA1(135,V48,722,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V32; pile[WZ2]=V49; 
(*f[39])( );     /*SDX0(41,V32,V49,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V50,(-9543),V52)*/
V52=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V54; pile[WZ2]=V52; 
(*f[39])( );     /*SDX0(20,V54,V52,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; 
(*f[40])( );     /*SLG0(V53)*/
l26:if((V27!=2)) goto l35;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l35;
l28:if((V38<4)) goto l29;
l32:x[jvj+25]=t[x[jvj+25]];
goto l30;
l29:V62=x[jvj+22];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V56; pile[WZ2]=10557; 
(*f[98])( );     /*SRA3(135,V56,10557,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(41,2,V57,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=V58; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V58,125,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V59; pile[WZ2]=37; 
(*f[42])( );     /*SRA1(135,V59,37,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V62; pile[WZ2]=V60; 
(*f[39])( );     /*SDX0(20,V62,V60,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=V61; pile[WZ1]=(-1318); 
(*f[37])( );     /*SRA0(V61,(-1318),V63)*/
V63=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V63; pile[WZ2]=363; 
(*f[42])( );     /*SRA1(135,V63,363,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=V64; 
(*f[40])( );     /*SLG0(V64)*/
if((V38!=2)) goto l32;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l32;
l31:x[jvj+22]=s[x[jvj+25]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+25];
for(a=x[jvj+24];a>0;a=t[a]) if(s[a]==x[jvj+22]) goto l32;
V37=x[jvj+22];
pile[v[22]]=363; pile[WZ1]=240; pile[WZ2]=V37; 
(*f[134])( );     /*OTA0(363,240,V37)*/
V38=g[153];
if((V38<=0)) goto l32;
V39=vg[153];
if((V39!=0)) goto l27;
if((V38<3)) goto l29;
l27:pile[v[22]]=153; pile[WZ1]=10557; pile[WZ2]=0; pile[WZ3]=34; pile[WZ4]=jvj+22; pile[WZ5]=jvj+23; 
(*f[232])( );     /*INTERP3(153,10557,0,34,jvj+22,jvj+23)*/
if((x[jvj+23]==135)) goto l28;
goto l32;
l34:x[jvj+20]=s[x[jvj+26]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+26];
pile[v[22]]=109; pile[WZ1]=jvj+20; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(109,jvj+20,jvj+27)*/
for(a=x[jvj+24];a>0;a=t[a]) if(s[a]==x[jvj+27]) goto l35;
V26=x[jvj+20];
pile[v[22]]=724; pile[WZ1]=240; pile[WZ2]=V26; 
(*f[134])( );     /*OTA0(724,240,V26)*/
V27=g[152];
if((V27<=0)) goto l35;
V28=vg[152];
if((V28!=0)) goto l23;
if((V27<3)) goto l25;
l23:pile[v[22]]=152; pile[WZ1]=10557; pile[WZ2]=0; pile[WZ3]=(-625); pile[WZ4]=jvj+20; pile[WZ5]=jvj+21; 
(*f[232])( );     /*INTERP3(152,10557,0,(-625),jvj+20,jvj+21)*/
if((x[jvj+21]==135)) goto l24;
goto l35;
l38:x[jvj+28]=t[x[jvj+28]];
goto l37;
l39:x[jvj+30]=s[x[jvj+28]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+28];
pile[v[22]]=109; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(109,jvj+30,jvj+31)*/
if((x[jvj+31]!=x[jvj+29])) goto l38;
x[jvj+4]=x[jvj+30] ;z[jvj+4]=z[jvj+30];
goto l3;
l41:x[jvj+32]=t[x[jvj+32]];
goto l40;
l42:x[jvj+34]=s[x[jvj+32]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+32];
pile[v[22]]=109; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(109,jvj+34,jvj+35)*/
if((x[jvj+35]!=x[jvj+33])) goto l41;
x[jvj+5]=x[jvj+34] ;z[jvj+5]=z[jvj+34];
goto l6;
l44:x[jvj+36]=t[x[jvj+36]];
goto l43;
l45:x[jvj+38]=s[x[jvj+36]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+36];
pile[v[22]]=109; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(109,jvj+38,jvj+39)*/
if((x[jvj+39]!=x[jvj+37])) goto l44;
x[jvj+9]=x[jvj+38] ;z[jvj+9]=z[jvj+38];
goto l11;
l47:x[jvj+40]=t[x[jvj+40]];
goto l46;
l48:x[jvj+42]=s[x[jvj+40]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+40];
pile[v[22]]=109; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(109,jvj+42,jvj+43)*/
if((x[jvj+43]!=x[jvj+41])) goto l47;
x[jvj+11]=x[jvj+42] ;z[jvj+11]=z[jvj+42];
goto l14;
l50:x[jvj+44]=t[x[jvj+44]];
goto l49;
l51:x[jvj+45]=s[x[jvj+44]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+44];
pile[v[22]]=109; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(109,jvj+45,jvj+46)*/
if((x[jvj+46]!=x[jvj+15])) goto l50;
x[jvj+13]=x[jvj+45] ;z[jvj+13]=z[jvj+45];
goto l17;
}
