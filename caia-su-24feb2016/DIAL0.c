#include "dx.h"
void DIAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V48=0,V49=0,V50=0,V1=0,V51=0,V52=0,V5=0,V28=0,R=0,V19=0,V22=0,V30=0,V35=0,V40=0,V39=0,V58=0,V57=0,V60=0,V59=0,DX=0,V16=0,RS=0,V24=0,V56=0,V53=0,V54=0,V55=0,V3=0,V46=0,V74=0,V75=0,V90=0,V89=0,V86=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=46;
x[jvj+1]=10082;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==104&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l36:R=incon;
(*f[74])( );     /*LK0()*/
V1=bh[v[1]][0];
if((V1==88)) goto l12;
if((V1==76)) goto l13;
if((V1==89)) goto l14;
if((V1==67)) goto l17;
if((V1==69)) goto l21;
if((V1==70)) goto l24;
if((V1==86)) goto l26;
if((V1!=75)) goto l27;
pile[v[22]]=1; 
(*f[258])( );     /*SMV1(1,V24)*/
V24=pile[WZ1]; 
pile[v[22]]=552; pile[WZ1]=727; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(552,727,jvj+9)*/
l9:if((x[jvj+9]<=0)) goto l27;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=110; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(110,jvj+10,V28)*/
V28=pile[WZ2]; 
if((V28!=V24)) goto l10;
pile[v[22]]=109; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(109,jvj+10,jvj+24)*/
V56=x[jvj+24];
pile[v[22]]=jvj+10; 
(*f[308])( );     /*DIAC0(jvj+10)*/
pile[v[22]]=0; pile[WZ1]=V24; 
(*f[37])( );     /*SRA0(0,V24,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V53; pile[WZ2]=228; 
(*f[42])( );     /*SRA1(135,V53,228,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V56; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(20,V56,V54,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; 
(*f[40])( );     /*SLG0(V55)*/
l27:if(V1==88||V1==90||V1==89||V1==86||V1==76||V1==67||V1==84||V1==75||V1==69||V1==70) goto l28;
V5=g[108];
if((V5<=0)) goto l28;
V6=vg[108];
if((V6!=0)) goto l1;
if((V5<3)) goto l3;
l1:pile[v[22]]=108; pile[WZ1]=10082; pile[WZ2]=0; pile[WZ3]=jvj+2; 
(*f[291])( );     /*INTERP4(108,10082,0,jvj+2)*/
if((x[jvj+2]==135)) goto l2;
l28:if(R!=incon) goto l29;
l34:V46=bh[v[1]][0];
if(V46!=88&&V46!=90) goto l36;
l35:x[jvj+1]=incon; v[0]=jvj; return;
l2:if((V5<4)) goto l3;
goto l28;
l3:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V48; pile[WZ2]=10082; 
(*f[98])( );     /*SRA3(135,V48,10082,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V49,125,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V50; pile[WZ1]=V1; 
(*f[38])( );     /*SPC0(V50,V1,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V51; pile[WZ1]=(-4390); 
(*f[37])( );     /*SRA0(V51,(-4390),V52)*/
V52=pile[WZ2]; 
pile[v[22]]=V52; 
(*f[40])( );     /*SLG0(V52)*/
if((V5!=2)) goto l28;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l28;
l5:x[jvj+5]=s[x[jvj+42]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+42];
pile[v[22]]=728; pile[WZ1]=jvj+5; 
(*f[71])( );     /*ENLV0(728,jvj+5)*/
x[jvj+42]=t[x[jvj+42]];
l4:if((x[jvj+42]>0)) goto l5;
pile[v[22]]=258; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(258,jvj+3,jvj+6)*/
x[jvj+43]=x[jvj+6] ;z[jvj+43]=z[jvj+6];
l6:if((x[jvj+43]>0)) goto l7;
x[jvj+34]=x[jvj+3] ;z[jvj+34]=z[jvj+3];
l37:pile[v[22]]=159; pile[WZ1]=jvj+3; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(159,jvj+3,jvj+28)*/
x[jvj+45]=x[jvj+28] ;z[jvj+45]=z[jvj+28];
l38:if((x[jvj+45]>0)) goto l39;
x[jvj+39]=x[jvj+3] ;z[jvj+39]=z[jvj+3];
l45:pile[v[22]]=258; pile[WZ1]=jvj+3; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(258,jvj+3,jvj+36)*/
l46:if((x[jvj+36]<=0)) goto l16;
x[jvj+37]=s[x[jvj+36]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+36];
if((x[jvj+37]==x[jvj+39])) goto l47;
pile[v[22]]=131; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(131,jvj+37,jvj+38)*/
l47:x[jvj+36]=t[x[jvj+36]];
goto l46;
l7:x[jvj+5]=s[x[jvj+43]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+43];
pile[v[22]]=131; pile[WZ1]=jvj+5; 
(*f[71])( );     /*ENLV0(131,jvj+5)*/
x[jvj+43]=t[x[jvj+43]];
goto l6;
l10:x[jvj+9]=t[x[jvj+9]];
goto l9;
l12:pile[v[22]]=1; 
(*f[258])( );     /*SMV1(1,R)*/
R=pile[WZ1]; 
goto l27;
l13:pile[v[22]]=1; 
(*f[258])( );     /*SMV1(1,V19)*/
V19=pile[WZ1]; 
pile[v[22]]=V19; 
(*f[327])( );     /*DIAS1(V19)*/
goto l27;
l14:pile[v[22]]=552; pile[WZ1]=727; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(552,727,jvj+14)*/
pile[v[22]]=96; pile[WZ1]=(-4762); pile[WZ2]=jvj+15; 
(*f[328])( );     /*TRI12(96,(-4762),jvj+15)*/
l15:if((x[jvj+14]<=0)) goto l27;
x[jvj+3]=s[x[jvj+14]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+14];
pile[v[22]]=159; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(159,jvj+3,jvj+4)*/
x[jvj+42]=x[jvj+4] ;z[jvj+42]=z[jvj+4];
goto l4;
l16:x[jvj+14]=t[x[jvj+14]];
goto l15;
l17:V22=bh[v[1]][2];
if((V22==32)) goto l18;
pile[v[22]]=552; pile[WZ1]=727; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(552,727,jvj+16)*/
pile[v[22]]=1; 
(*f[258])( );     /*SMV1(1,V30)*/
V30=pile[WZ1]; 
l19:if((x[jvj+16]<=0)) goto l27;
x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=110; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(110,jvj+17,V35)*/
V35=pile[WZ2]; 
if((V35!=V30)) goto l20;
pile[v[22]]=jvj+17; 
(*f[308])( );     /*DIAC0(jvj+17)*/
l20:x[jvj+16]=t[x[jvj+16]];
goto l19;
l18:pile[v[22]]=184; pile[WZ1]=10664; 
(*f[71])( );     /*ENLV0(184,10664)*/
pile[v[22]]=552; pile[WZ1]=727; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(552,727,jvj+7)*/
l8:if((x[jvj+7]<=0)) goto l27;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; 
(*f[308])( );     /*DIAC0(jvj+8)*/
x[jvj+7]=t[x[jvj+7]];
goto l8;
l21:V40=sepbase+1;
l22:if((V40>sepbloc)) goto l27;
V39=r[V40];
if((V39!=1)) goto l23;
x[jvj+11]=V40 ;z[jvj+11]=(V40<=sepcte) ? V40 : 0;
V58=x[jvj+11];
pile[v[22]]=20; pile[WZ1]=V58; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V58,0,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=V57; 
(*f[40])( );     /*SLG0(V57)*/
pile[v[22]]=184; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(184,jvj+11,jvj+12)*/
x[jvj+44]=x[jvj+12] ;z[jvj+44]=z[jvj+12];
l11:if((x[jvj+44]<=0)) goto l23;
x[jvj+13]=s[x[jvj+44]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+44];
pile[v[22]]=jvj+13; pile[WZ1]=(-4755); 
(*f[326])( );     /*VERC0(jvj+13,(-4755))*/
x[jvj+44]=t[x[jvj+44]];
goto l11;
l23:V40++;
goto l22;
l24:pile[v[22]]=1; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+18; 
(*f[78])( );if(v[102]) goto l27;     /*SMA0(1,36,67,jvj+18)*/
pile[v[22]]=184; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(184,jvj+18,jvj+19)*/
l25:if((x[jvj+19]<=0)) goto l27;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
V60=x[jvj+20];
pile[v[22]]=20; pile[WZ1]=V60; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V60,0,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=V59; 
(*f[40])( );     /*SLG0(V59)*/
pile[v[22]]=jvj+20; pile[WZ1]=(-4755); 
(*f[326])( );     /*VERC0(jvj+20,(-4755))*/
x[jvj+19]=t[x[jvj+19]];
goto l25;
l26:pile[v[22]]=1; pile[WZ1]=jvj+21; 
(*f[79])( );if(v[102]) goto l27;     /*LEXP0(1,jvj+21,DX)*/
DX=pile[WZ2]; 
pile[v[22]]=DX; 
(*f[258])( );     /*SMV1(DX,V16)*/
V16=pile[WZ1]; 
pile[v[22]]=10082; pile[WZ1]=158; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(10082,158,jvj+22)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[30])( );if(v[102]) goto l27;     /*EVL0(jvj+21,jvj+22,RS)*/
RS=pile[WZ2]; 
x[jvj+23]=RS ;z[jvj+23]=(RS<=sepcte) ? RS : 0;
pile[v[22]]=jvj+23; pile[WZ1]=V16; 
(*f[326])( );     /*VERC0(jvj+23,V16)*/
goto l27;
l29:pile[v[22]]=552; pile[WZ1]=727; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(552,727,jvj+25)*/
l30:if((x[jvj+25]>0)) goto l31;
pile[v[22]]=R; pile[WZ1]=110; pile[WZ2]=jvj+27; 
(*f[329])( );     /*TRI13(R,110,jvj+27)*/
pile[v[22]]=727; pile[WZ1]=552; 
(*f[36])( );     /*PLUSC0(727,552,jvj+27)*/
l33:pile[v[22]]=jvj+27; 
(*f[323])( );     /*DIAM0(jvj+27)*/
goto l34;
l31:x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=110; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l32;     /*FNDC1(110,jvj+26,V3)*/
V3=pile[WZ2]; 
if((V3!=R)) goto l32;
x[jvj+27]=x[jvj+26] ;z[jvj+27]=z[jvj+26];
goto l33;
l32:x[jvj+25]=t[x[jvj+25]];
goto l30;
l39:x[jvj+29]=s[x[jvj+45]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+45];
if((x[jvj+29]==x[jvj+34])) goto l40;
pile[v[22]]=728; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(728,jvj+29,jvj+30)*/
l40:x[jvj+45]=t[x[jvj+45]];
goto l38;
l43:pile[v[22]]=jvj+34; pile[WZ1]=728; pile[WZ2]=jvj+29; 
(*f[35])( );     /*CHGC1(jvj+34,728,jvj+29)*/
x[jvj+34]=x[jvj+29] ;z[jvj+34]=z[jvj+29];
goto l37;
l44:pile[v[22]]=122; pile[WZ1]=jvj+29; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(122,jvj+29,jvj+35)*/
V75=x[jvj+35];
x[jvj+46]=x[jvj+28] ;z[jvj+46]=z[jvj+28];
l42:if((x[jvj+46]<=0)) goto l43;
x[jvj+31]=s[x[jvj+46]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+46];
if((x[jvj+31]==x[jvj+34])) goto l41;
pile[v[22]]=122; pile[WZ1]=jvj+31; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(122,jvj+31,jvj+33)*/
V74=x[jvj+33];
if((V74>=V75)) goto l41;
pile[v[22]]=728; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(728,jvj+31,jvj+32)*/
l41:x[jvj+46]=t[x[jvj+46]];
goto l42;
l48:V90=t[V90];
l49:if((V90>0)) goto l50;
pile[v[22]]=110; pile[WZ1]=jvj+37; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(110,jvj+37,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=jvj+39; pile[WZ1]=131; pile[WZ2]=jvj+37; 
(*f[35])( );     /*CHGC1(jvj+39,131,jvj+37)*/
pile[v[22]]=jvj+15; pile[WZ1]=V89; 
(*f[331])( );     /*PLUE3(jvj+15,V89)*/
x[jvj+39]=x[jvj+37] ;z[jvj+39]=z[jvj+37];
goto l45;
l50:V86=s[V90];
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==V86) goto l48;
goto l47;
l51:pile[v[22]]=129; pile[WZ1]=jvj+37; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(129,jvj+37,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[330])( );     /*USD0(jvj+40,jvj+41)*/
V90=x[jvj+41];
goto l49;
}
