#include "dx.h"
void EVLB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VL=0,V24=0,V19=0,V17=0,V8=0,V14=0,V3=0,R=0,TZZ=0,S=0,V38=0,V41=0,V67=0,V61=0,V62=0,V63=0,V64=0,V65=0,V66=0,V37=0,V44=0,V75=0,V69=0,V70=0,V71=0,V72=0,V73=0,V74=0,V43=0,V51=0,V50=0,V54=0,V57=0,V58=0,V87=0,V88=0;
int Z,BL,INT;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=47;
x[jvj+1]=10517;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1048&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Z=pile[v[22]]; BL=pile[v[22]+1]; INT=pile[v[22]+2]; RES=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
VL=x[jvj+2]=incon;
pile[v[22]]=130; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,Z,VL)*/
VL=pile[WZ2]; 
l9:x[jvj+13]=vo[20];z[jvj+13]=vz[20];
pile[v[22]]=INT; pile[WZ1]=jvj+13; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(INT,jvj+13,jvj+2)*/
pile[v[22]]=1690; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1690,jvj+2,jvj+3)*/
if((x[jvj+3]!=68)) goto l10;
z[jvj+2]=(-1);
l10:if(VL==incon) goto l4;
l11:pile[v[22]]=BL; pile[WZ1]=VL; pile[WZ2]=jvj+14; 
(*f[133])( );if(v[102]) goto l40;     /*TLDEBL1(BL,VL,jvj+14)*/
if(x[jvj+2]!=incon) goto l14;
l41:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l2:x[jvj+4]=s[x[jvj+44]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+44];
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+4,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+5,V24)*/
V24=pile[WZ2]; 
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==V24) goto l3;
l8:x[jvj+45]=t[x[jvj+45]];
l7:if((x[jvj+45]<=0)) goto l6;
x[jvj+11]=s[x[jvj+45]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+45];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(jvj+10,jvj+11,jvj+12)*/
for(i=x[jvj+12],V17=0;i>0;i=t[i],V17++)  ;
if((V17!=V19)) goto l8;
x[jvj+44]=x[jvj+9] ;z[jvj+44]=z[jvj+9];
l1:if((x[jvj+44]>0)) goto l2;
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(130,jvj+11,VL)*/
VL=pile[WZ2]; 
goto l11;
l3:x[jvj+44]=t[x[jvj+44]];
goto l1;
l4:pile[v[22]]=365; pile[WZ1]=BL; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(365,BL,jvj+6)*/
x[jvj+7]=d[81];z[jvj+7]=0;
l5:if((x[jvj+7]<=0)) goto l40;
x[jvj+10]=s[x[jvj+7]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+7];
if((x[jvj+8]=w[x[jvj+10]][3])==incon) goto l6;
pile[v[22]]=jvj+8; pile[WZ1]=Z; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(jvj+8,Z,jvj+9)*/
for(i=x[jvj+9],V19=0;i>0;i=t[i],V19++)  ;
x[jvj+45]=x[jvj+6] ;z[jvj+45]=z[jvj+6];
goto l7;
l6:x[jvj+7]=t[x[jvj+7]];
goto l5;
l13:if(V8==incon) goto l16;
l15:if((V8==(-99999998))) goto l16;
if((V8==0)) goto l16;
pile[v[22]]=jvj+2; pile[WZ1]=498; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+2,498,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=V8; pile[WZ2]=130; pile[WZ3]=jvj+40; 
(*f[189])( );     /*TRI4(jvj+39,V8,130,jvj+40)*/
pile[v[22]]=109; pile[WZ1]=BL; pile[WZ2]=111; pile[WZ3]=Z; pile[WZ4]=jvj+40; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(109,BL,111,Z,jvj+40,jvj+17)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+17; 
(*f[29])( );     /*EVLR0(jvj+14,jvj+17)*/
pile[v[22]]=499; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(499,jvj+2,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=jvj+17; pile[WZ1]=499; pile[WZ2]=V14; 
(*f[43])( );     /*CHGC2(jvj+17,499,V14)*/
l17:pile[v[22]]=114; pile[WZ1]=Z; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(114,Z,jvj+19)*/
l18:if((x[jvj+19]>0)) goto l19;
pile[v[22]]=135; pile[WZ1]=jvj+14; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(135,jvj+14,jvj+25)*/
x[jvj+26]=vo[20];z[jvj+26]=vz[20];
S=v[1];
v[1]=1;
pile[v[22]]=jvj+26; pile[WZ1]=INT; pile[WZ2]=jvj+17; 
(*f[35])( );     /*CHGC1(jvj+26,INT,jvj+17)*/
pile[v[22]]=jvj+25; pile[WZ2]=RES; 
(*f[208])( );     /*EVLX0(jvj+25,INT,RES)*/
v[1]=S;
pile[v[22]]=jvj+26; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(jvj+26,INT,jvj+2)*/
if((x[RES]!=134)) goto l42;
pile[v[22]]=113; pile[WZ1]=Z; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(113,Z,jvj+37)*/
l38:if((x[jvj+37]<=0)) goto l42;
x[jvj+31]=s[x[jvj+37]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+37];
pile[v[22]]=102; pile[WZ1]=jvj+31; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(102,jvj+31,jvj+38)*/
pile[v[22]]=140; pile[WZ1]=jvj+38; 
(*f[44])( );if(v[102]) goto l39;     /*FNDC1(140,jvj+38,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(103,jvj+31,jvj+32)*/
pile[v[22]]=140; pile[WZ1]=jvj+32; 
(*f[44])( );if(v[102]) goto l39;     /*FNDC1(140,jvj+32,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=128; pile[WZ1]=jvj+17; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(128,jvj+17,jvj+33)*/
x[jvj+46]=x[jvj+33] ;z[jvj+46]=z[jvj+33];
l33:if((x[jvj+46]<=0)) goto l39;
x[jvj+34]=s[x[jvj+46]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+46];
pile[v[22]]=140; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(140,jvj+34,V50)*/
V50=pile[WZ2]; 
if((V50!=V51)) goto l34;
pile[v[22]]=128; pile[WZ1]=jvj+2; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(128,jvj+2,jvj+35)*/
x[jvj+47]=x[jvj+35] ;z[jvj+47]=z[jvj+35];
l35:if((x[jvj+47]>0)) goto l36;
pile[v[22]]=jvj+2; pile[WZ1]=128; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+2,128,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=140; pile[WZ2]=V58; 
(*f[177])( );     /*CHGC4(jvj+34,140,V58)*/
l39:x[jvj+37]=t[x[jvj+37]];
goto l38;
l14:pile[v[22]]=366; pile[WZ1]=jvj+2; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(366,jvj+2,jvj+18)*/
if((x[jvj+18]!=67)) goto l16;
V8=incon;
pile[v[22]]=109; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(109,jvj+2,jvj+15)*/
if((x[jvj+15]!=x[BL])) goto l12;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+2,V8)*/
V8=pile[WZ2]; 
l12:pile[v[22]]=449; pile[WZ1]=jvj+2; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(449,jvj+2,jvj+16)*/
if((x[jvj+16]!=x[BL])) goto l13;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+2,V8)*/
V8=pile[WZ2]; 
goto l15;
l16:pile[v[22]]=Z; pile[WZ1]=jvj+2; pile[WZ2]=jvj+14; pile[WZ3]=RES; 
(*f[1367])( );if(v[102]) goto l29;     /*EVLG0(Z,jvj+2,jvj+14,RES)*/
l42:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l19:x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=103; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(103,jvj+20,jvj+21)*/
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+21,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+20; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,jvj+20,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+2; pile[WZ3]=jvj+23; 
(*f[80])( );if(v[102]) goto l20;     /*EVL1(jvj+22,jvj+2,R,jvj+23,TZZ)*/
R=pile[WZ2]; TZZ=pile[WZ4]; 
x[jvj+42]=R ;z[jvj+42]=(x[jvj+23]==20&&R<=sepcte) ? R : (x[jvj+23]==41) ? (-1000) : 0;
if((x[jvj+43]=w[x[jvj+23]][3])==incon) goto l20;
pile[v[22]]=TZZ; pile[WZ1]=416; pile[WZ2]=jvj+41; 
(*f[46])( );     /*TRI0(TZZ,416,jvj+41)*/
pile[v[22]]=140; pile[WZ1]=V3; pile[WZ2]=158; pile[WZ3]=jvj+23; pile[WZ4]=jvj+41; pile[WZ5]=jvj+24; 
(*f[48])( );     /*QUADRI1(140,V3,158,jvj+23,jvj+41,jvj+24)*/
V87=x[jvj+42];
V88=z[jvj+42];
pile[v[22]]=jvj+24; pile[WZ1]=V87; pile[WZ2]=jvj+43; pile[WZ3]=V88; 
(*f[49])( );     /*CHP0(jvj+24,V87,jvj+43,V88)*/
pile[v[22]]=jvj+17; pile[WZ1]=128; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+17,128,jvj+24)*/
l20:x[jvj+19]=t[x[jvj+19]];
goto l18;
l22:if((V37<4)) goto l23;
l32:x[jvj+30]=t[x[jvj+30]];
l30:if((x[jvj+30]>0)) goto l31;
V43=g[65];
if((V43<=0)) goto l41;
V44=vg[65];
if((V44!=0)) goto l25;
if((V43<3)) goto l27;
l25:pile[v[22]]=65; pile[WZ1]=10517; pile[WZ2]=0; pile[WZ3]=(-608); pile[WZ4]=Z; pile[WZ5]=(-596); pile[v[22]+6]=jvj+2; pile[v[22]+7]=jvj+29; 
(*f[187])( );     /*INTERP0(65,10517,0,(-608),Z,(-596),jvj+2,jvj+29)*/
if((x[jvj+29]==135)) goto l26;
goto l41;
l23:pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(140,jvj+27,V41)*/
V41=pile[WZ2]; 
V67=x[jvj+27];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V61; pile[WZ2]=10517; 
(*f[98])( );     /*SRA3(135,V61,10517,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V62; 
(*f[39])( );     /*SDX0(41,3,V62,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=V63; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V63,125,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=V64; pile[WZ1]=V41; 
(*f[37])( );     /*SRA0(V64,V41,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V67; pile[WZ2]=257; pile[WZ3]=V65; 
(*f[390])( );     /*SDX3(20,V67,257,V65,V66)*/
V66=pile[WZ4]; 
pile[v[22]]=V66; 
(*f[40])( );     /*SLG0(V66)*/
l24:if((V37!=2)) goto l32;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l32;
l26:if((V43<4)) goto l27;
goto l41;
l27:V75=x[jvj+2];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V69; pile[WZ2]=10517; 
(*f[98])( );     /*SRA3(135,V69,10517,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V70; 
(*f[39])( );     /*SDX0(41,2,V70,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=V71; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V71,125,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=V72; pile[WZ1]=Z; 
(*f[344])( );if(v[102]) goto l28;     /*XX1(V72,Z,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V75; pile[WZ2]=257; pile[WZ3]=V73; 
(*f[390])( );     /*SDX3(20,V75,257,V73,V74)*/
V74=pile[WZ4]; 
pile[v[22]]=V74; 
(*f[40])( );     /*SLG0(V74)*/
l28:if((V43!=2)) goto l41;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l41;
l29:pile[v[22]]=128; pile[WZ1]=jvj+2; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(128,jvj+2,jvj+30)*/
goto l30;
l31:x[jvj+27]=s[x[jvj+30]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+30];
V37=g[66];
if((V37<=0)) goto l32;
V38=vg[66];
if((V38!=0)) goto l21;
if((V37<3)) goto l23;
l21:pile[v[22]]=66; pile[WZ1]=10517; pile[WZ2]=0; pile[WZ3]=(-625); pile[WZ4]=jvj+27; pile[WZ5]=jvj+28; 
(*f[232])( );     /*INTERP3(66,10517,0,(-625),jvj+27,jvj+28)*/
if((x[jvj+28]==135)) goto l22;
goto l32;
l34:x[jvj+46]=t[x[jvj+46]];
goto l33;
l36:x[jvj+36]=s[x[jvj+47]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+47];
pile[v[22]]=140; pile[WZ1]=jvj+36; 
(*f[44])( );if(v[102]) goto l37;     /*FNDC1(140,jvj+36,V54)*/
V54=pile[WZ2]; 
if((V54!=V58)) goto l37;
V57=x[jvj+36];
pile[v[22]]=128; pile[WZ1]=jvj+2; pile[WZ2]=V57; 
(*f[134])( );     /*OTA0(128,jvj+2,V57)*/
l37:x[jvj+47]=t[x[jvj+47]];
goto l35;
l40:if(x[jvj+2]!=incon) goto l29;
goto l41;
}
