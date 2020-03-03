#include "dx.h"
void CRATOMZA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V14=0,V41=0,F=0,WW=0,V23=0,V98=0,V99=0,V21=0,V81=0,V82=0,V83=0,VZ=0,VA=0,V75=0,V70=0,V71=0,V72=0,V73=0,V74=0,V11=0,V80=0,V76=0,V77=0,V78=0,V79=0,V49=0,V86=0,V89=0,V84=0,V85=0,V87=0,V88=0,V60=0,V56=0,V92=0,V90=0,V91=0,V93=0,V67=0,V96=0,V94=0,V95=0,V97=0,V128=0,V134=0;
int X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=64;
x[jvj+1]=11727;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1245&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=447; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(447,X,jvj+2)*/
pile[v[22]]=860; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(860,X,jvj+21)*/
if((x[jvj+21]==66)) goto l8;
if((x[jvj+21]!=576)) goto l12;
pile[v[22]]=475; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(475,X,jvj+4)*/
l1:pile[v[22]]=110; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(110,X,V3)*/
V3=pile[WZ2]; 
l3:pile[v[22]]=110; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(110,X,V14)*/
V14=pile[WZ2]; 
l12:if(x[jvj+21]!=1814&&x[jvj+21]!=1050&&x[jvj+21]!=758) goto l14;
pile[v[22]]=1688; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1688,jvj+2,jvj+5)*/
l4:if((x[jvj+5]<=0)) goto l14;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+6,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=1607)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+6,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=22)) goto l5;
pile[v[22]]=102; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+9,jvj+11)*/
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+11,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+9,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+12,jvj+13)*/
F=x[jvj+13];
if(F!=1633&&F!=871) goto l5;
pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+6,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=128)) goto l5;
pile[v[22]]=128; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(128,jvj+14,jvj+16)*/
WW=V41;
if((x[jvj+16]<=0)) goto l5;
V23=s[x[jvj+16]];
x[jvj+34]=0 ;z[jvj+34]=0;
pile[v[22]]=110; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(110,X,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1725; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,1725,jvj+49)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=WW; pile[WZ4]=jvj+53; 
(*f[270])( );     /*QUADRI7(100,21,140,WW,jvj+53)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=509; pile[WZ4]=jvj+56; 
(*f[181])( );     /*QUADRI2(100,20,101,509,jvj+56)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V49; pile[WZ4]=jvj+54; 
(*f[270])( );     /*QUADRI7(100,21,140,V49,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=103; pile[WZ2]=jvj+55; 
(*f[54])( );     /*TRI1(jvj+54,103,jvj+55)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+56; pile[WZ4]=jvj+55; pile[WZ5]=jvj+51; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+56,jvj+55,jvj+51)*/
pile[v[22]]=jvj+49; pile[WZ1]=111; pile[WZ2]=jvj+50; 
(*f[54])( );     /*TRI1(jvj+49,111,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; pile[WZ2]=103; pile[WZ3]=jvj+52; 
(*f[58])( );     /*TRI3(jvj+50,jvj+51,103,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+53; pile[WZ4]=jvj+52; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+53,jvj+52,jvj+18)*/
pile[v[22]]=1688; pile[WZ1]=jvj+2; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1688,jvj+2,jvj+17)*/
l6:if((x[jvj+17]>0)) goto l7;
pile[v[22]]=96; pile[WZ1]=V49; pile[WZ2]=jvj+32; 
(*f[328])( );     /*TRI12(96,V49,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=273; pile[WZ2]=jvj+33; 
(*f[300])( );     /*TRI10(jvj+32,273,jvj+33)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; pile[WZ3]=250; pile[WZ4]=jvj+18; pile[WZ5]=jvj+35; 
(*f[1246])( );     /*CALK1(jvj+2,jvj+33,jvj+34,250,jvj+18,jvj+35)*/
if((x[jvj+35]!=0)) goto l14;
V86=x[jvj+21];
V89=x[jvj+18];
pile[v[22]]=20; pile[WZ1]=11712; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11712,0,V84)*/
V84=pile[WZ3]; 
pile[WZ1]=V86; pile[WZ2]=V84; 
(*f[39])( );     /*SDX0(20,V86,V84,V85)*/
V85=pile[WZ3]; 
pile[v[22]]=V85; pile[WZ1]=V49; 
(*f[37])( );     /*SRA0(V85,V49,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V89; pile[WZ2]=V87; 
(*f[39])( );     /*SDX0(20,V89,V87,V88)*/
V88=pile[WZ3]; 
pile[v[22]]=V88; 
(*f[40])( );     /*SLG0(V88)*/
pile[v[22]]=jvj+2; pile[WZ1]=V49; pile[WZ2]=jvj+21; pile[WZ3]=jvj+18; 
(*f[1517])( );     /*TRADATOME0(jvj+2,V49,jvj+21,jvj+18)*/
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:pile[v[22]]=475; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(475,X,jvj+3)*/
goto l12;
l5:x[jvj+5]=t[x[jvj+5]];
goto l4;
l7:x[jvj+19]=s[x[jvj+17]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+17];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[760])( );     /*MEMEX0(jvj+18,jvj+19,jvj+20)*/
if((x[jvj+20]==135)) goto l14;
x[jvj+17]=t[x[jvj+17]];
goto l6;
l8:pile[v[22]]=20; pile[WZ1]=11712; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11712,0,V98)*/
V98=pile[WZ3]; 
pile[WZ1]=66; pile[WZ2]=V98; 
(*f[39])( );     /*SDX0(20,66,V98,V99)*/
V99=pile[WZ3]; 
pile[v[22]]=V99; 
(*f[40])( );     /*SLG0(V99)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=250; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,250,jvj+22)*/
pile[v[22]]=jvj+2; pile[WZ1]=(-7141); pile[WZ2]=66; pile[WZ3]=jvj+22; 
(*f[1517])( );     /*TRADATOME0(jvj+2,(-7141),66,jvj+22)*/
goto l12;
l9:pile[v[22]]=110; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(110,X,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=11712; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11712,0,V81)*/
V81=pile[WZ3]; 
pile[WZ1]=576; pile[WZ2]=V81; 
(*f[39])( );     /*SDX0(20,576,V81,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=V82; pile[WZ1]=V21; 
(*f[37])( );     /*SRA0(V82,V21,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=V83; 
(*f[40])( );     /*SLG0(V83)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=250; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,250,jvj+23)*/
pile[v[22]]=jvj+2; pile[WZ1]=V21; pile[WZ2]=576; pile[WZ3]=jvj+23; 
(*f[1517])( );     /*TRADATOME0(jvj+2,V21,576,jvj+23)*/
goto l1;
l10:pile[v[22]]=218; pile[WZ1]=X; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(218,X,jvj+24)*/
pile[v[22]]=475; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(475,X,jvj+25)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+26; 
(*f[938])( );     /*USE0(jvj+24,jvj+26)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+2; pile[WZ2]=jvj+26; 
(*f[1514])( );if(v[102]) goto l3;     /*CRATOMZB0(jvj+25,jvj+2,jvj+26,VZ)*/
VZ=pile[WZ3]; 
pile[v[22]]=jvj+2; 
(*f[1239])( );if(v[102]) goto l3;     /*NOUVAR0(jvj+2,VA)*/
VA=pile[WZ1]; 
pile[v[22]]=jvj+24; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+41)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VA; pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(100,21,140,VA,jvj+44)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+27; pile[WZ2]=103; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+42,jvj+27,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+43; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+44,jvj+43,jvj+28)*/
V75=x[jvj+28];
pile[v[22]]=jvj+2; pile[WZ1]=VZ; pile[WZ2]=jvj+25; 
(*f[1515])( );     /*CRATOMZC0(jvj+2,VZ,jvj+25)*/
x[jvj+57]=1688 ;z[jvj+57]=1688;
pile[v[22]]=jvj+57; pile[WZ1]=jvj+2; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(jvj+57,jvj+2,jvj+58)*/
l17:if((x[jvj+58]>0)) goto l18;
pile[v[22]]=20; pile[WZ1]=11727; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11727,0,V70)*/
V70=pile[WZ3]; 
pile[WZ1]=576; pile[WZ2]=V70; 
(*f[39])( );     /*SDX0(20,576,V70,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=V71; pile[WZ1]=VA; 
(*f[37])( );     /*SRA0(V71,VA,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=V72; pile[WZ1]=VZ; 
(*f[37])( );     /*SRA0(V72,VZ,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V75; pile[WZ2]=V73; 
(*f[39])( );     /*SDX0(20,V75,V73,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=V74; 
(*f[40])( );     /*SLG0(V74)*/
pile[v[22]]=jvj+2; pile[WZ1]=1688; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+2,1688,jvj+28)*/
pile[WZ1]=VA; pile[WZ2]=576; pile[WZ3]=jvj+28; 
(*f[1517])( );     /*TRADATOME0(jvj+2,VA,576,jvj+28)*/
goto l3;
l11:pile[v[22]]=218; pile[WZ1]=X; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(218,X,jvj+29)*/
pile[v[22]]=jvj+2; 
(*f[1239])( );if(v[102]) goto l12;     /*NOUVAR0(jvj+2,V11)*/
V11=pile[WZ1]; 
x[jvj+61]=1688 ;z[jvj+61]=1688;
pile[v[22]]=jvj+61; pile[WZ1]=jvj+2; pile[WZ2]=jvj+62; 
(*f[33])( );     /*FNDE0(jvj+61,jvj+2,jvj+62)*/
l21:if((x[jvj+62]>0)) goto l22;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+45)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V11; pile[WZ4]=jvj+48; 
(*f[270])( );     /*QUADRI7(100,21,140,V11,jvj+48)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+30; pile[WZ2]=103; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+46,jvj+30,103,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+47; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+48,jvj+47,jvj+31)*/
V80=x[jvj+31];
pile[v[22]]=20; pile[WZ1]=11712; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11712,0,V76)*/
V76=pile[WZ3]; 
pile[WZ1]=576; pile[WZ2]=V76; 
(*f[39])( );     /*SDX0(20,576,V76,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=V77; pile[WZ1]=V11; 
(*f[37])( );     /*SRA0(V77,V11,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V80; pile[WZ2]=V78; 
(*f[39])( );     /*SDX0(20,V80,V78,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=V79; 
(*f[40])( );     /*SLG0(V79)*/
pile[v[22]]=jvj+2; pile[WZ1]=1688; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+2,1688,jvj+31)*/
pile[WZ1]=V11; pile[WZ2]=576; pile[WZ3]=jvj+31; 
(*f[1517])( );     /*TRADATOME0(jvj+2,V11,576,jvj+31)*/
goto l12;
l14:if(x[jvj+21]!=1814&&x[jvj+21]!=1050&&x[jvj+21]!=758) goto l16;
pile[v[22]]=475; pile[WZ1]=X; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(475,X,jvj+37)*/
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(110,X,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=96; pile[WZ1]=V60; pile[WZ2]=jvj+38; 
(*f[328])( );     /*TRI12(96,V60,jvj+38)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+2; 
(*f[1514])( );if(v[102]) goto l13;     /*CRATOMZB0(jvj+37,jvj+2,jvj+38,V56)*/
V56=pile[WZ3]; 
V92=x[jvj+21];
pile[v[22]]=jvj+2; pile[WZ1]=V56; pile[WZ2]=jvj+37; 
(*f[1515])( );     /*CRATOMZC0(jvj+2,V56,jvj+37)*/
pile[v[22]]=20; pile[WZ1]=11712; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11712,0,V90)*/
V90=pile[WZ3]; 
pile[WZ1]=V92; pile[WZ2]=V90; 
(*f[39])( );     /*SDX0(20,V92,V90,V91)*/
V91=pile[WZ3]; 
pile[v[22]]=V91; pile[WZ1]=V60; 
(*f[37])( );     /*SRA0(V91,V60,V93)*/
V93=pile[WZ2]; 
pile[v[22]]=V93; 
(*f[40])( );     /*SLG0(V93)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=250; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,250,jvj+39)*/
pile[v[22]]=jvj+2; pile[WZ1]=V60; pile[WZ2]=jvj+21; pile[WZ3]=jvj+39; 
(*f[1517])( );     /*TRADATOME0(jvj+2,V60,jvj+21,jvj+39)*/
l13:pile[v[22]]=475; pile[WZ1]=X; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(475,X,jvj+36)*/
goto l16;
l15:pile[v[22]]=110; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(110,X,V67)*/
V67=pile[WZ2]; 
V96=x[jvj+21];
pile[v[22]]=20; pile[WZ1]=11712; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11712,0,V94)*/
V94=pile[WZ3]; 
pile[WZ1]=V96; pile[WZ2]=V94; 
(*f[39])( );     /*SDX0(20,V96,V94,V95)*/
V95=pile[WZ3]; 
pile[v[22]]=V95; pile[WZ1]=V67; 
(*f[37])( );     /*SRA0(V95,V67,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=V97; 
(*f[40])( );     /*SLG0(V97)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=250; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,250,jvj+40)*/
pile[v[22]]=jvj+2; pile[WZ1]=V67; pile[WZ2]=jvj+21; pile[WZ3]=jvj+40; 
(*f[1517])( );     /*TRADATOME0(jvj+2,V67,jvj+21,jvj+40)*/
goto l16;
l18:x[jvj+59]=s[x[jvj+58]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+58];
pile[v[22]]=jvj+24; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[760])( );     /*MEMEX0(jvj+24,jvj+59,jvj+60)*/
if((x[jvj+60]==135)) goto l20;
l19:x[jvj+58]=t[x[jvj+58]];
goto l17;
l20:V128=x[jvj+59];
pile[v[22]]=jvj+57; pile[WZ1]=jvj+2; pile[WZ2]=V128; 
(*f[134])( );     /*OTA0(jvj+57,jvj+2,V128)*/
goto l19;
l22:x[jvj+63]=s[x[jvj+62]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+62];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[760])( );     /*MEMEX0(jvj+29,jvj+63,jvj+64)*/
if((x[jvj+64]==135)) goto l24;
l23:x[jvj+62]=t[x[jvj+62]];
goto l21;
l24:V134=x[jvj+63];
pile[v[22]]=jvj+61; pile[WZ1]=jvj+2; pile[WZ2]=V134; 
(*f[134])( );     /*OTA0(jvj+61,jvj+2,V134)*/
goto l23;
}
