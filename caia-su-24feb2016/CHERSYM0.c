#include "dx.h"
void CHERSYM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int FF=0,XK=0,V11=0,V10=0,V9=0,V36=0,V37=0,V56=0,V84=0,V78=0,V79=0,V80=0,V81=0,V82=0,V83=0,V53=0,V85=0,V87=0,V55=0,V28=0,V48=0,V103=0,V102=0,V110=0,V109=0,V114=0,V116=0,V124=0;
int HIST;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=76;
x[jvj+1]=11071;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3049&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
HIST=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+54]=x[jvj+17]=FF=XK=incon;
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l40;     /*FNDC1(905,jvj+2,FF)*/
FF=pile[WZ2]; 
XK=v[244];
v[244]=0;
if((FF!=(-5963))) goto l40;
pile[v[22]]=1035; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(1035,jvj+2,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=509; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(509,jvj+2,jvj+5)*/
l1:if((x[jvj+5]>0)) goto l2;
x[jvj+15]=0 ;z[jvj+15]=0;
pile[v[22]]=509; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(509,jvj+2,jvj+9)*/
l4:if((x[jvj+9]>0)) goto l5;
for(i=x[jvj+15],V10=0;i>0;i=t[i],V10++)  ;
V9=3*V10;
if((V9<=V11)) goto l40;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[3986])( );     /*SIMPLIFENS0(jvj+15,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=FF; pile[WZ2]=jvj+17; 
(*f[3987])( );if(v[102]) goto l40;     /*REGSYM0(jvj+16,FF,jvj+17)*/
x[jvj+54]=x[jvj+16] ;z[jvj+54]=z[jvj+16];
l40:x[jvj+67]=vo[12];z[jvj+67]=vz[12];
pile[v[22]]=1121; pile[WZ1]=jvj+67; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(1121,jvj+67,V114)*/
V114=pile[WZ2]; 
if((V114>=0)) goto l44;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(117,jvj+67,V116)*/
V116=pile[WZ2]; 
x[jvj+68]=924 ;z[jvj+68]=924;
l41:pile[v[22]]=120; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(120,jvj+68,jvj+69)*/
pile[v[22]]=698; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(698,jvj+69,jvj+70)*/
pile[v[22]]=1104; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[33])( );     /*FNDE0(1104,jvj+70,jvj+71)*/
for(a=x[jvj+71];a>0;a=t[a]) if(s[a]==V116) goto l43;
l42:x[jvj+68]=x[jvj+69] ;z[jvj+68]=z[jvj+69];
goto l41;
l2:x[jvj+3]=s[x[jvj+5]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+5];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+3,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=25)) goto l3;
pile[v[22]]=1070; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1070,jvj+3,jvj+8)*/
if((x[jvj+8]!=68)) goto l3;
pile[v[22]]=1142; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(1142,jvj+3,jvj+4)*/
if((x[jvj+4]==68)) goto l3;
goto l40;
l3:x[jvj+5]=t[x[jvj+5]];
goto l1;
l5:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=25)) goto l6;
pile[v[22]]=1142; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1142,jvj+10,jvj+13)*/
if((x[jvj+13]!=68)) goto l6;
pile[v[22]]=1070; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1070,jvj+10,jvj+14)*/
if((x[jvj+14]!=68)) goto l6;
pile[v[22]]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+15,jvj+10)*/
l6:x[jvj+9]=t[x[jvj+9]];
goto l4;
l8:x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=1070; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1070,jvj+20,jvj+21)*/
if((x[jvj+21]!=68)) goto l9;
pile[v[22]]=jvj+22; 
(*f[68])( );     /*PLUE0(jvj+22,jvj+20)*/
l9:x[jvj+19]=t[x[jvj+19]];
l7:if((x[jvj+19]>0)) goto l8;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+33; 
(*f[3986])( );     /*SIMPLIFENS0(jvj+22,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=FF; pile[WZ2]=jvj+17; 
(*f[3987])( );if(v[102]) goto l22;     /*REGSYM0(jvj+33,FF,jvj+17)*/
x[jvj+54]=x[jvj+33] ;z[jvj+54]=z[jvj+33];
l23:x[jvj+37]=vo[12];z[jvj+37]=vz[12];
pile[v[22]]=109; pile[WZ1]=jvj+37; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(109,jvj+37,jvj+63)*/
pile[v[22]]=983; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(983,jvj+63,jvj+64)*/
pile[v[22]]=878; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[33])( );     /*FNDE0(878,jvj+64,jvj+65)*/
l38:if((x[jvj+65]<=0)) goto l29;
x[jvj+66]=s[x[jvj+65]] ;z[jvj+66]=(x[jvj+66]<=sepcte) ? x[jvj+66] : z[jvj+65];
pile[v[22]]=163; pile[WZ1]=jvj+66; 
(*f[44])( );if(v[102]) goto l39;     /*FNDC1(163,jvj+66,V110)*/
V110=pile[WZ2]; 
pile[WZ1]=jvj+37; 
(*f[44])( );if(v[102]) goto l39;     /*FNDC1(163,jvj+37,V109)*/
V109=pile[WZ2]; 
if((V110==V109)) goto l39;
x[jvj+65]=t[x[jvj+65]];
goto l38;
l10:pile[v[22]]=750; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(750,jvj+23,V37)*/
V37=pile[WZ2]; 
l25:x[jvj+39]=t[x[jvj+39]];
l24:if((x[jvj+39]<=0)) goto l29;
x[jvj+23]=s[x[jvj+39]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+39];
pile[v[22]]=473; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(473,jvj+23,V48)*/
V48=pile[WZ2]; 
if((V48!=1)) goto l25;
pile[v[22]]=688; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(688,jvj+23,V36)*/
V36=pile[WZ2]; 
goto l25;
l12:if((V55<4)) goto l13;
l35:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=111; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,111,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+49; pile[WZ2]=103; pile[WZ3]=jvj+57; 
(*f[58])( );     /*TRI3(jvj+56,jvj+49,103,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+57; pile[WZ5]=jvj+51; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+58,jvj+57,jvj+51)*/
pile[v[22]]=jvj+50; pile[WZ1]=1081; pile[WZ2]=jvj+51; 
(*f[36])( );     /*PLUSC0(jvj+50,1081,jvj+51)*/
pile[v[22]]=117; pile[WZ1]=V53; pile[WZ2]=447; pile[WZ3]=jvj+44; pile[WZ4]=jvj+52; 
(*f[567])( );     /*QUADRI11(117,V53,447,jvj+44,jvj+52)*/
pile[v[22]]=jvj+50; pile[WZ1]=1209; pile[WZ2]=jvj+52; 
(*f[36])( );     /*PLUSC0(jvj+50,1209,jvj+52)*/
l28:x[jvj+76]=t[x[jvj+76]];
l27:if((x[jvj+76]<=0)) goto l25;
x[jvj+24]=s[x[jvj+76]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+76];
pile[v[22]]=509; pile[WZ1]=jvj+24; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(509,jvj+24,jvj+41)*/
if((x[jvj+41]!=0)) goto l28;
pile[v[22]]=843; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(843,jvj+24,jvj+42)*/
if((x[jvj+42]!=0)) goto l28;
pile[v[22]]=921; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(921,jvj+24,jvj+43)*/
if((x[jvj+43]!=0)) goto l28;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+44; 
(*f[1290])( );if(v[102]) goto l28;     /*DEPEXP0(jvj+24,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; 
(*f[255])( );     /*COPEXP0(jvj+44,jvj+45)*/
pile[v[22]]=365; pile[WZ1]=jvj+24; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(365,jvj+24,jvj+46)*/
if((x[jvj+46]<=0)) goto l28;
x[jvj+47]=s[x[jvj+46]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+46];
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; 
(*f[1291])( );if(v[102]) goto l28;     /*CONVEXP0(jvj+47,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; 
(*f[255])( );     /*COPEXP0(jvj+48,jvj+49)*/
for(i=x[jvj+46],V53=0;i>0;i=t[i],V53++)  ;
x[jvj+58]=x[jvj+45] ;z[jvj+58]=z[jvj+45];
V55=g[622];
if((V55<=0)) goto l35;
V56=vg[622];
if((V56!=0)) goto l11;
if((V55<3)) goto l13;
l11:pile[v[22]]=622; pile[WZ1]=11071; pile[WZ2]=0; pile[WZ3]=(-656); pile[WZ4]=jvj+24; pile[WZ5]=jvj+25; 
(*f[232])( );     /*INTERP3(622,11071,0,(-656),jvj+24,jvj+25)*/
if((x[jvj+25]==135)) goto l12;
goto l35;
l13:V84=x[jvj+24];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V78; pile[WZ2]=11071; 
(*f[98])( );     /*SRA3(135,V78,11071,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=V79; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V79,125,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V80; pile[WZ2]=21; 
(*f[42])( );     /*SRA1(135,V80,21,V81)*/
V81=pile[WZ3]; 
pile[WZ1]=V81; pile[WZ2]=66; 
(*f[42])( );     /*SRA1(135,V81,66,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V84; pile[WZ2]=V82; 
(*f[39])( );     /*SDX0(20,V84,V82,V83)*/
V83=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V53; pile[WZ2]=V83; 
(*f[39])( );     /*SDX0(41,V53,V83,V85)*/
V85=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V85; pile[WZ2]=355; 
(*f[42])( );     /*SRA1(135,V85,355,V87)*/
V87=pile[WZ3]; 
pile[v[22]]=V87; 
(*f[40])( );     /*SLG0(V87)*/
if((V55!=2)) goto l35;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l35;
l15:x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+28,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]!=25)) goto l16;
pile[v[22]]=1070; pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(1070,jvj+28,jvj+31)*/
if((x[jvj+31]!=68)) goto l16;
pile[v[22]]=jvj+32; 
(*f[68])( );     /*PLUE0(jvj+32,jvj+28)*/
l16:x[jvj+27]=t[x[jvj+27]];
l14:if((x[jvj+27]>0)) goto l15;
pile[v[22]]=jvj+32; pile[WZ1]=jvj+34; 
(*f[3986])( );     /*SIMPLIFENS0(jvj+32,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=FF; pile[WZ2]=jvj+17; 
(*f[3987])( );if(v[102]) goto l22;     /*REGSYM0(jvj+34,FF,jvj+17)*/
x[jvj+54]=x[jvj+34] ;z[jvj+54]=z[jvj+34];
goto l23;
l18:if(x[jvj+17]==incon) goto l19;
goto l23;
l19:if(FF!=incon) goto l20;
l22:x[jvj+35]=vo[12];z[jvj+35]=vz[12];
pile[v[22]]=109; pile[WZ1]=jvj+35; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(109,jvj+35,jvj+59)*/
pile[v[22]]=983; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(983,jvj+59,jvj+60)*/
pile[v[22]]=878; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(878,jvj+60,jvj+61)*/
l36:if((x[jvj+61]<=0)) goto l23;
x[jvj+62]=s[x[jvj+61]] ;z[jvj+62]=(x[jvj+62]<=sepcte) ? x[jvj+62] : z[jvj+61];
pile[v[22]]=163; pile[WZ1]=jvj+62; 
(*f[44])( );if(v[102]) goto l37;     /*FNDC1(163,jvj+62,V103)*/
V103=pile[WZ2]; 
pile[WZ1]=jvj+35; 
(*f[44])( );if(v[102]) goto l37;     /*FNDC1(163,jvj+35,V102)*/
V102=pile[WZ2]; 
if((V103==V102)) goto l37;
x[jvj+61]=t[x[jvj+61]];
goto l36;
l20:if((FF==(-5963))) goto l21;
if((FF!=(-9009))) goto l22;
x[jvj+32]=0 ;z[jvj+32]=0;
x[jvj+26]=vo[16];z[jvj+26]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(509,jvj+26,jvj+27)*/
goto l14;
l21:x[jvj+18]=vo[16];z[jvj+18]=vz[16];
pile[v[22]]=1035; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(1035,jvj+18,V28)*/
V28=pile[WZ2]; 
if((V28<=5)) goto l22;
x[jvj+22]=0 ;z[jvj+22]=0;
pile[v[22]]=509; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(509,jvj+18,jvj+19)*/
goto l7;
l26:pile[v[22]]=480; pile[WZ1]=jvj+23; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(480,jvj+23,jvj+40)*/
x[jvj+76]=x[jvj+40] ;z[jvj+76]=z[jvj+40];
goto l27;
l29:if(x[jvj+54]!=incon) goto l30;
l34:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l30:if(x[jvj+17]!=incon) goto l31;
goto l34;
l31:if(FF!=incon) goto l32;
goto l34;
l32:if(XK!=incon) goto l33;
goto l34;
l33:x[jvj+53]=vo[14];z[jvj+53]=vz[14];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+54; pile[WZ2]=FF; 
(*f[3988])( );     /*EXECSYM0(jvj+17,jvj+54,FF)*/
v[244]=XK;
pile[v[22]]=jvj+53; pile[WZ1]=893; pile[WZ2]=12; 
(*f[35])( );     /*CHGC1(jvj+53,893,12)*/
goto l34;
l37:x[jvj+36]=x[jvj+62] ;z[jvj+36]=z[jvj+62];
pile[v[22]]=jvj+36; pile[WZ1]=844; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+36,844,67)*/
goto l23;
l39:x[jvj+50]=x[jvj+66] ;z[jvj+50]=z[jvj+66];
x[jvj+38]=vo[16];z[jvj+38]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(454,jvj+38,jvj+39)*/
goto l24;
l43:pile[v[22]]=698; pile[WZ1]=jvj+69; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(698,jvj+69,jvj+72)*/
pile[v[22]]=1104; pile[WZ1]=jvj+72; pile[WZ2]=V116; 
(*f[134])( );     /*OTA0(1104,jvj+72,V116)*/
l44:if((V114<=0)) goto l17;
pile[v[22]]=117; pile[WZ1]=jvj+67; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(117,jvj+67,V124)*/
V124=pile[WZ2]; 
pile[v[22]]=1109; pile[WZ1]=924; pile[WZ2]=jvj+73; 
(*f[33])( );     /*FNDE0(1109,924,jvj+73)*/
l45:if((x[jvj+73]<=0)) goto l17;
x[jvj+74]=s[x[jvj+73]] ;z[jvj+74]=(x[jvj+74]<=sepcte) ? x[jvj+74] : z[jvj+73];
pile[v[22]]=1104; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[33])( );     /*FNDE0(1104,jvj+74,jvj+75)*/
for(a=x[jvj+75];a>0;a=t[a]) if(s[a]==V124) goto l46;
x[jvj+73]=t[x[jvj+73]];
goto l45;
l46:pile[v[22]]=1104; pile[WZ1]=jvj+74; pile[WZ2]=V124; 
(*f[134])( );     /*OTA0(1104,jvj+74,V124)*/
l17:if(x[jvj+54]==incon) goto l18;
if(x[jvj+17]==incon) goto l22;
goto l23;
}
