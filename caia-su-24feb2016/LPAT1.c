#include "dx.h"
void LPAT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V75=0,V76=0,V59=0,V77=0,V78=0,V63=0,V65=0,V64=0,V62=0,V71=0,V79=0,V80=0,V72=0,V81=0,V82=0,V74=0,V83=0,V84=0,V20=0,V22=0,V21=0,V26=0,L=0,V12=0,V45=0,V57=0,V4=0,V37=0,DFF=0,V69=0,V68=0,V60=0,V70=0,V29=0,V31=0,V30=0;
int I,EY;
int DX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=36;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; EY=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
DX=incon;
V20=bh[v[1]][I];
if(V20!=46&&V20!=43) goto l7;
V22=I+1;
V21=bh[v[1]][V22];
if(V21==76||V21==77) goto l5;
if(V21==76||V21==77||V21==123||V21==91) goto l6;
V12=V22+1;
pile[v[22]]=V12; pile[WZ1]=jvj+1; 
(*f[79])( );if(v[102]) goto l6;     /*LEXP0(V12,jvj+1,L)*/
L=pile[WZ2]; 
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V21; pile[WZ4]=jvj+21; 
(*f[272])( );     /*QUADRI9(100,89,162,V21,jvj+21)*/
pile[WZ3]=V20; pile[WZ4]=jvj+18; 
(*f[272])( );     /*QUADRI9(100,89,162,V20,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=160; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,160,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+2; pile[WZ2]=103; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+19,jvj+2,103,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+20; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+21,jvj+20,jvj+13)*/
V17=bh[v[1]][V12];
if(V17==32) goto l11;
pile[v[22]]=20; pile[WZ1]=10326; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10326,0,V75)*/
V75=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V75; 
(*f[39])( );     /*SDX0(41,1,V75,V76)*/
V76=pile[WZ3]; 
pile[v[22]]=V76; 
(*f[40])( );     /*SLG0(V76)*/
l11:V29=bh[v[1]][L];
if((V29!=32)) goto l13;
V31=L+1;
V30=bh[v[1]][V31];
if((V30==32)) goto l12;
pile[v[22]]=V31; pile[WZ1]=jvj+13; 
(*f[664])( );if(v[102]) goto l13;     /*LPAT1(V31,jvj+13,DX)*/
DX=pile[WZ2]; 
l14:pile[v[22]]=EY; pile[WZ1]=120; pile[WZ2]=jvj+13; 
(*f[35])( );     /*CHGC1(EY,120,jvj+13)*/
if(DX!=incon) goto l16;
l15:v[0]=jvj; v[22]-=3; v[102]=1;return;
l1:V62=incon;
V63=bh[v[1]][I];
if((V63==46)) goto l2;
if((V63!=91)) goto l15;
V62=I;
l9:if((V62==(-99999998))) goto l15;
pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=68; pile[WZ4]=jvj+36; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+36)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+34; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+34)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=36; pile[WZ4]=jvj+32; 
(*f[272])( );     /*QUADRI9(100,89,162,36,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=160; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,160,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=103; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+33,jvj+34,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+35; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+36,jvj+35,jvj+13)*/
pile[v[22]]=V62; pile[WZ1]=jvj+13; pile[WZ2]=250; 
(*f[661])( );if(v[102]) goto l14;     /*LEXV0(V62,jvj+13,250,DFF)*/
DFF=pile[WZ3]; 
V69=DFF+1;
V68=V69+1;
pile[v[22]]=V68; pile[WZ1]=jvj+14; 
(*f[262])( );if(v[102]) goto l14;     /*LPAT0(V68,jvj+14,V60)*/
V60=pile[WZ2]; 
V70=V60+1;
L=V70;
V71=bh[v[1]][DFF];
if(V71==93) goto l3;
pile[v[22]]=20; pile[WZ1]=10326; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10326,0,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V79; 
(*f[39])( );     /*SDX0(41,3,V79,V80)*/
V80=pile[WZ3]; 
pile[v[22]]=V80; 
(*f[40])( );     /*SLG0(V80)*/
l3:V72=bh[v[1]][V69];
if(V72==40) goto l4;
pile[v[22]]=20; pile[WZ1]=10326; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10326,0,V81)*/
V81=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=4; pile[WZ2]=V81; 
(*f[39])( );     /*SDX0(41,4,V81,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=V82; 
(*f[40])( );     /*SLG0(V82)*/
l4:V74=bh[v[1]][V60];
if(V74==41) goto l10;
pile[v[22]]=20; pile[WZ1]=10326; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10326,0,V83)*/
V83=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=5; pile[WZ2]=V83; 
(*f[39])( );     /*SDX0(41,5,V83,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=V84; 
(*f[40])( );     /*SLG0(V84)*/
l10:pile[v[22]]=jvj+13; pile[WZ1]=103; pile[WZ2]=jvj+14; 
(*f[35])( );     /*CHGC1(jvj+13,103,jvj+14)*/
goto l11;
l2:V65=I+1;
V64=bh[v[1]][V65];
if((V64!=91)) goto l15;
V62=V65;
goto l9;
l5:V26=V22+1;
pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V21; pile[WZ4]=jvj+17; 
(*f[272])( );     /*QUADRI9(100,89,162,V21,jvj+17)*/
pile[WZ3]=V20; pile[WZ4]=jvj+15; 
(*f[272])( );     /*QUADRI9(100,89,162,V20,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=160; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,160,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+17,jvj+16,jvj+13)*/
L=V26;
goto l11;
l6:if((V21!=123)) goto l7;
pile[v[22]]=V22; pile[WZ1]=jvj+3; 
(*f[79])( );if(v[102]) goto l7;     /*LEXP0(V22,jvj+3,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
V57=V45+1;
pile[v[22]]=V57; pile[WZ1]=jvj+5; 
(*f[79])( );if(v[102]) goto l7;     /*LEXP0(V57,jvj+5,L)*/
L=pile[WZ2]; 
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V20; pile[WZ4]=jvj+22; 
(*f[272])( );     /*QUADRI9(100,89,162,V20,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=160; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,160,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+6; pile[WZ2]=103; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+23,jvj+6,103,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+24; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+4,jvj+24,jvj+13)*/
V59=bh[v[1]][V45];
if(V59==125) goto l11;
pile[v[22]]=20; pile[WZ1]=10326; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10326,0,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V77; 
(*f[39])( );     /*SDX0(41,2,V77,V78)*/
V78=pile[WZ3]; 
pile[v[22]]=V78; 
(*f[40])( );     /*SLG0(V78)*/
goto l11;
l7:if(V20==46||V20==38||V20==124||V20==95||V20==43||V20==91||V20==47||V20==(-89)||V20==126) goto l8;
V4=I-1;
pile[v[22]]=V4; pile[WZ1]=jvj+7; 
(*f[79])( );if(v[102]) goto l8;     /*LEXP0(V4,jvj+7,L)*/
L=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=68; pile[WZ4]=jvj+28; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+28)*/
pile[WZ3]=46; pile[WZ4]=jvj+25; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=160; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,160,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+8; pile[WZ2]=103; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+26,jvj+8,103,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+28,jvj+27,jvj+13)*/
goto l11;
l8:if(V20!=38&&V20!=124&&V20!=95&&V20!=47&&V20!=(-89)&&V20!=126) goto l1;
pile[v[22]]=I; pile[WZ1]=jvj+9; 
(*f[79])( );if(v[102]) goto l1;     /*LEXP0(I,jvj+9,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
pile[v[22]]=V37; pile[WZ1]=jvj+11; 
(*f[79])( );if(v[102]) goto l1;     /*LEXP0(V37,jvj+11,L)*/
L=pile[WZ2]; 
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V20; pile[WZ4]=jvj+29; 
(*f[272])( );     /*QUADRI9(100,89,162,V20,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=160; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,160,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+30,jvj+12,103,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+31; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+10,jvj+31,jvj+13)*/
goto l11;
l12:DX=L;
goto l14;
l13:if(V29==44||V29==93||V29==41) goto l12;
goto l14;
l16:v[0]=jvj; v[22]-=3; pile[v[22]+2]=DX; v[102]=0;return;
}
