#include "dx.h"
void CONSTRETUCONTR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,V20=0,V48=0,W=0,V67=0,V54=0,V57=0,V59=0,V53=0,V=0,V55=0,V56=0,V58=0,T=0,V37=0,V35=0,V36=0,V39=0,V14=0,V32=0,V21=0,V144=0;
int X,B,D,BL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=117;
x[jvj+1]=11483;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==699&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; B=pile[v[22]+1]; D=pile[v[22]+2]; BL=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V144=s[x[BL]];
if((V144!=66)) goto l27;
pile[v[22]]=BL; 
(*f[59])( );     /*LECT0(BL)*/
l27:s[x[BL]]=68;
pile[v[22]]=BL; 
(*f[365])( );     /*STK0(BL)*/
pile[v[22]]=184; pile[WZ1]=BL; 
(*f[71])( );     /*ENLV0(184,BL)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1278); pile[WZ4]=jvj+79; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1278),jvj+79)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+77; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+77)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-10746); pile[WZ4]=jvj+75; 
(*f[270])( );     /*QUADRI7(100,21,140,(-10746),jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=436; pile[WZ2]=jvj+76; 
(*f[54])( );     /*TRI1(jvj+75,436,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=jvj+77; pile[WZ2]=111; pile[WZ3]=jvj+78; 
(*f[58])( );     /*TRI3(jvj+76,jvj+77,111,jvj+78)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+79; pile[WZ4]=jvj+78; pile[WZ5]=jvj+73; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+79,jvj+78,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+74; 
(*f[180])( );     /*TRIENS0(jvj+73,(-20),105,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+74,42,100,jvj+29)*/
pile[v[22]]=BL; pile[WZ1]=184; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(BL,184,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=229; pile[WZ4]=jvj+80; 
(*f[181])( );     /*QUADRI2(100,20,101,229,jvj+80)*/
pile[WZ3]=67; pile[WZ4]=jvj+86; 
(*f[181])( );     /*QUADRI2(100,20,101,67,jvj+86)*/
pile[WZ3]=556; pile[WZ4]=jvj+89; 
(*f[181])( );     /*QUADRI2(100,20,101,556,jvj+89)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-10746); pile[WZ4]=jvj+93; 
(*f[270])( );     /*QUADRI7(100,21,140,(-10746),jvj+93)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1417; pile[WZ4]=jvj+96; 
(*f[181])( );     /*QUADRI2(100,20,101,1417,jvj+96)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-9977); pile[WZ4]=jvj+94; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9977),jvj+94)*/
pile[v[22]]=jvj+94; pile[WZ1]=103; pile[WZ2]=jvj+95; 
(*f[54])( );     /*TRI1(jvj+94,103,jvj+95)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+96; pile[WZ4]=jvj+95; pile[WZ5]=jvj+91; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+96,jvj+95,jvj+91)*/
pile[v[22]]=jvj+89; pile[WZ1]=111; pile[WZ2]=jvj+90; 
(*f[54])( );     /*TRI1(jvj+89,111,jvj+90)*/
pile[v[22]]=jvj+90; pile[WZ1]=jvj+91; pile[WZ2]=103; pile[WZ3]=jvj+92; 
(*f[58])( );     /*TRI3(jvj+90,jvj+91,103,jvj+92)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+93; pile[WZ4]=jvj+92; pile[WZ5]=jvj+88; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+93,jvj+92,jvj+88)*/
pile[v[22]]=jvj+86; pile[WZ1]=111; pile[WZ2]=jvj+87; 
(*f[54])( );     /*TRI1(jvj+86,111,jvj+87)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+88; pile[WZ4]=jvj+87; pile[WZ5]=jvj+82; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+88,jvj+87,jvj+82)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-9977); pile[WZ4]=jvj+103; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9977),jvj+103)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-1); pile[WZ4]=jvj+101; 
(*f[192])( );     /*QUADRI4(100,41,130,(-1),jvj+101)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=507; pile[WZ4]=jvj+99; 
(*f[181])( );     /*QUADRI2(100,20,101,507,jvj+99)*/
pile[WZ3]=239; pile[WZ4]=jvj+97; 
(*f[181])( );     /*QUADRI2(100,20,101,239,jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=337; pile[WZ2]=jvj+98; 
(*f[54])( );     /*TRI1(jvj+97,337,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=jvj+99; pile[WZ2]=111; pile[WZ3]=jvj+100; 
(*f[58])( );     /*TRI3(jvj+98,jvj+99,111,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=jvj+101; pile[WZ2]=103; pile[WZ3]=jvj+102; 
(*f[58])( );     /*TRI3(jvj+100,jvj+101,103,jvj+102)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+103; pile[WZ4]=jvj+102; pile[WZ5]=jvj+84; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+103,jvj+102,jvj+84)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1417; pile[WZ4]=jvj+110; 
(*f[181])( );     /*QUADRI2(100,20,101,1417,jvj+110)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-9977); pile[WZ4]=jvj+108; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9977),jvj+108)*/
pile[WZ3]=(-10746); pile[WZ4]=jvj+104; 
(*f[270])( );     /*QUADRI7(100,21,140,(-10746),jvj+104)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=38; pile[WZ4]=jvj+106; 
(*f[181])( );     /*QUADRI2(100,20,101,38,jvj+106)*/
pile[v[22]]=jvj+104; pile[WZ1]=160; pile[WZ2]=jvj+105; 
(*f[54])( );     /*TRI1(jvj+104,160,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=jvj+106; pile[WZ2]=111; pile[WZ3]=jvj+107; 
(*f[58])( );     /*TRI3(jvj+105,jvj+106,111,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=jvj+108; pile[WZ2]=103; pile[WZ3]=jvj+109; 
(*f[58])( );     /*TRI3(jvj+107,jvj+108,103,jvj+109)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+110; pile[WZ4]=jvj+109; pile[WZ5]=jvj+85; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+110,jvj+109,jvj+85)*/
pile[v[22]]=jvj+80; pile[WZ1]=337; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(jvj+80,337,jvj+81)*/
pile[v[22]]=jvj+82; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+83; 
(*f[298])( );     /*TRIENS1(jvj+82,(-20),jvj+81,107,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+83,42,100,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=105; pile[WZ2]=jvj+84; 
(*f[36])( );     /*PLUSC0(jvj+30,105,jvj+84)*/
pile[WZ2]=jvj+85; 
(*f[36])( );     /*PLUSC0(jvj+30,105,jvj+85)*/
pile[v[22]]=BL; pile[WZ1]=184; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(BL,184,jvj+30)*/
pile[v[22]]=288; pile[WZ1]=D; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(288,D,jvj+31)*/
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(1484,854,V37)*/
V37=pile[WZ2]; 
V35=sepfacts+1;
V36=sepfacts+V37;
l19:if((V35>V36)) goto l25;
V39=r[V35];
if((V39!=1)) goto l20;
x[jvj+2]=V35 ;z[jvj+2]=(V35<=sepcte) ? V35 : 0;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,jvj+2,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+32,jvj+33)*/
if((x[jvj+33]!=69)) goto l20;
pile[v[22]]=108; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(108,jvj+32,jvj+34)*/
pile[v[22]]=1422; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(1422,jvj+2,jvj+4)*/
if((x[jvj+4]==1421)) goto l20;
l21:pile[v[22]]=905; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(905,jvj+2,V14)*/
V14=pile[WZ2]; 
if((V14==(-9113))) goto l1;
pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(905,X,V15)*/
V15=pile[WZ2]; 
if((V14==V15)) goto l1;
l20:V35++;
goto l19;
l1:pile[v[22]]=184; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(184,jvj+2,jvj+3)*/
if((x[jvj+3]<=0)) goto l20;
x[jvj+9]=s[x[jvj+3]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+3];
x[jvj+117]=x[jvj+34] ;z[jvj+117]=z[jvj+34];
l22:if((x[jvj+117]<=0)) goto l20;
x[jvj+35]=s[x[jvj+117]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+117];
pile[v[22]]=103; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(103,jvj+35,jvj+36)*/
pile[v[22]]=140; pile[WZ1]=jvj+36; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(140,jvj+36,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+35; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,jvj+35,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+37,jvj+38)*/
x[jvj+23]=x[jvj+38] ;z[jvj+23]=z[jvj+38];
if((x[jvj+23]!=756)) goto l4;
if((x[jvj+31]==749)) goto l24;
l4:if((x[jvj+23]==x[jvj+31])) goto l24;
l23:x[jvj+117]=t[x[jvj+117]];
goto l22;
l3:x[jvj+111]=t[x[jvj+111]];
l2:if((x[jvj+111]<=0)) goto l23;
x[jvj+6]=s[x[jvj+111]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+111];
pile[v[22]]=110; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(110,jvj+6,V20)*/
V20=pile[WZ2]; 
if((V20!=V)) goto l3;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(117,jvj+6,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=X; pile[WZ2]=jvj+2; pile[WZ3]=jvj+39; 
(*f[1084])( );     /*CRANT0(V,X,jvj+2,jvj+39)*/
x[jvj+7]=0 ;z[jvj+7]=0;
x[jvj+112]=x[jvj+39] ;z[jvj+112]=z[jvj+39];
l5:if((x[jvj+112]>0)) goto l6;
pile[v[22]]=107; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,jvj+9,jvj+10)*/
x[jvj+113]=x[jvj+10] ;z[jvj+113]=z[jvj+10];
l7:if((x[jvj+113]>0)) goto l8;
pile[v[22]]=1548; pile[WZ1]=jvj+2; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1548,jvj+2,jvj+12)*/
x[jvj+114]=x[jvj+12] ;z[jvj+114]=z[jvj+12];
l9:if((x[jvj+114]>0)) goto l10;
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(109,jvj+2,140,V,jvj+27)*/
T=V21;
pile[v[22]]=X; pile[WZ2]=V; pile[WZ3]=jvj+27; pile[WZ4]=jvj+7; pile[WZ5]=jvj+40; 
(*f[1085])( );     /*INIDCL0(X,jvj+2,V,jvj+27,jvj+7,jvj+40)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+27; pile[WZ2]=jvj+40; 
(*f[1086])( );     /*INIDCLA0(jvj+7,jvj+27,jvj+40)*/
pile[v[22]]=763; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(763,jvj+27,jvj+28)*/
if((x[jvj+28]==0)) goto l18;
V54=x[jvj+2];
V57=x[jvj+40];
V59=x[jvj+28];
pile[v[22]]=20; pile[WZ1]=V54; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V54,0,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V53,V,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V57; pile[WZ2]=V55; 
(*f[39])( );     /*SDX0(23,V57,V55,V56)*/
V56=pile[WZ3]; 
pile[WZ1]=V59; pile[WZ2]=V56; 
(*f[39])( );     /*SDX0(23,V59,V56,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=V58; 
(*f[40])( );     /*SLG0(V58)*/
x[jvj+16]=0 ;z[jvj+16]=0;
x[jvj+115]=x[jvj+28] ;z[jvj+115]=z[jvj+28];
l11:if((x[jvj+115]>0)) goto l12;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-10746); pile[WZ4]=jvj+67; 
(*f[270])( );     /*QUADRI7(100,21,140,(-10746),jvj+67)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=T; pile[WZ4]=jvj+65; 
(*f[192])( );     /*QUADRI4(100,41,130,T,jvj+65)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=430; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,430,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+65; pile[WZ2]=103; pile[WZ3]=jvj+66; 
(*f[58])( );     /*TRI3(jvj+64,jvj+65,103,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+67; pile[WZ4]=jvj+66; pile[WZ5]=jvj+42; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+67,jvj+66,jvj+42)*/
pile[v[22]]=jvj+16; pile[WZ1]=107; pile[WZ2]=jvj+41; 
(*f[300])( );     /*TRI10(jvj+16,107,jvj+41)*/
pile[v[22]]=jvj+42; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+43; 
(*f[298])( );     /*TRIENS1(jvj+42,(-20),jvj+41,105,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+43,42,100,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[938])( );     /*USE0(jvj+19,jvj+20)*/
V67=x[jvj+20];
l15:if((V67>0)) goto l16;
pile[v[22]]=BL; pile[WZ1]=184; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(BL,184,jvj+19)*/
if((x[jvj+31]!=749)) goto l26;
pile[v[22]]=319; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(319,jvj+23,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+55)*/
pile[WZ3]=277; pile[WZ4]=jvj+62; 
(*f[181])( );     /*QUADRI2(100,20,101,277,jvj+62)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+60; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=103; pile[WZ2]=jvj+61; 
(*f[54])( );     /*TRI1(jvj+60,103,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+62; pile[WZ4]=jvj+61; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+62,jvj+61,jvj+59)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+24; pile[WZ4]=jvj+57; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+24,jvj+57)*/
pile[v[22]]=jvj+55; pile[WZ1]=111; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,111,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; pile[WZ2]=103; pile[WZ3]=jvj+58; 
(*f[58])( );     /*TRI3(jvj+56,jvj+57,103,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+59; pile[WZ4]=jvj+58; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+59,jvj+58,jvj+25)*/
pile[v[22]]=jvj+19; pile[WZ1]=107; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+19,107,jvj+25)*/
l26:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+68)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+72; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+72)*/
pile[WZ3]=(-9977); pile[WZ4]=jvj+70; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9977),jvj+70)*/
pile[v[22]]=jvj+68; pile[WZ1]=111; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,111,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=jvj+70; pile[WZ2]=103; pile[WZ3]=jvj+71; 
(*f[58])( );     /*TRI3(jvj+69,jvj+70,103,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+72; pile[WZ4]=jvj+71; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+72,jvj+71,jvj+26)*/
pile[v[22]]=jvj+19; pile[WZ1]=107; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+19,107,jvj+26)*/
goto l23;
l6:x[jvj+8]=s[x[jvj+112]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+112];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+8)*/
x[jvj+112]=t[x[jvj+112]];
goto l5;
l8:x[jvj+11]=s[x[jvj+113]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+113];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+11)*/
x[jvj+113]=t[x[jvj+113]];
goto l7;
l10:x[jvj+13]=s[x[jvj+114]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+114];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+13)*/
x[jvj+114]=t[x[jvj+114]];
goto l9;
l12:x[jvj+14]=s[x[jvj+115]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+115];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+15)*/
x[jvj+115]=t[x[jvj+115]];
goto l11;
l14:x[jvj+116]=t[x[jvj+116]];
l13:if((x[jvj+116]<=0)) goto l17;
x[jvj+18]=s[x[jvj+116]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+116];
pile[v[22]]=110; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(110,jvj+18,V48)*/
V48=pile[WZ2]; 
if((V48!=W)) goto l14;
pile[v[22]]=218; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(218,jvj+18,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+44)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+48; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+48)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=654; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,654,jvj+49)*/
pile[WZ3]=653; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+54)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+54; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+54,jvj+53)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+21; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+21,jvj+51)*/
pile[v[22]]=jvj+49; pile[WZ1]=111; pile[WZ2]=jvj+50; 
(*f[54])( );     /*TRI1(jvj+49,111,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; pile[WZ2]=103; pile[WZ3]=jvj+52; 
(*f[58])( );     /*TRI3(jvj+50,jvj+51,103,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+53; pile[WZ4]=jvj+52; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+53,jvj+52,jvj+46)*/
pile[v[22]]=jvj+44; pile[WZ1]=111; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,111,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; pile[WZ2]=103; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+45,jvj+46,103,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+47; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+48,jvj+47,jvj+22)*/
pile[v[22]]=jvj+19; pile[WZ1]=107; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+19,107,jvj+22)*/
l17:V67=t[V67];
goto l15;
l16:W=s[V67];
pile[v[22]]=1232; pile[WZ1]=jvj+2; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1232,jvj+2,jvj+17)*/
x[jvj+116]=x[jvj+17] ;z[jvj+116]=z[jvj+17];
goto l13;
l18:pile[v[22]]=T; pile[WZ1]=1545; pile[WZ2]=B; 
(*f[235])( );     /*PLUSC2(T,1545,B)*/
goto l23;
l24:V=V32;
pile[v[22]]=1546; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1546,jvj+2,jvj+5)*/
x[jvj+111]=x[jvj+5] ;z[jvj+111]=z[jvj+5];
goto l2;
l25:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
}
