#include "dx.h"
void PRIELTS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V36=0,NK=0,V38=0,V20=0,V25=0,V66=0,V67=0,V24=0,V70=0,V71=0,V26=0,V2=0,V3=0,V16=0,V18=0,V15=0,V52=0,V54=0,V57=0,V59=0,V63=0,V51=0,V53=0,V55=0,V56=0,V58=0,V60=0,V62=0,V64=0,V29=0,V46=0,V74=0,V76=0,V78=0,V84=0,V28=0,V48=0,V45=0,V80=0,V73=0,V75=0,V77=0,V79=0,V81=0,V83=0,V85=0;
int X,N,Y,U,ND,V,TY;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=55;
x[jvj+1]=11567;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==917&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; N=pile[v[22]+1]; Y=pile[v[22]+2]; U=pile[v[22]+3]; ND=pile[v[22]+4]; V=pile[v[22]+5]; TY=pile[v[22]+6]; v[22]+=7; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1529; pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(1529,Y,V2)*/
V2=pile[WZ2]; 
pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(1529,X,V3)*/
V3=pile[WZ2]; 
if((V2>=V3)) goto l10;
pile[v[22]]=986; pile[WZ1]=Y; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(986,Y,jvj+9)*/
if((x[jvj+9]==616)) goto l10;
pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(986,X,jvj+10)*/
if((x[jvj+9]==x[jvj+10])) goto l10;
pile[v[22]]=218; pile[WZ1]=Y; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(218,Y,jvj+11)*/
pile[v[22]]=642; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+10,V16)*/
V16=pile[WZ2]; 
pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+9,V18)*/
V18=pile[WZ2]; 
x[jvj+26]=incon;
pile[v[22]]=1300; pile[WZ1]=22; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1300,22,jvj+2)*/
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==x[jvj+11]) goto l16;
l1:pile[v[22]]=1294; pile[WZ1]=1447; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1294,1447,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==x[jvj+11]) goto l17;
l2:pile[v[22]]=1517; pile[WZ1]=1447; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1517,1447,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+11]) goto l18;
if(x[jvj+26]==incon) goto l10;
l9:if((x[jvj+26]==(-99999998))) goto l10;
V15=V16-V18;
V52=x[N];
V54=x[TY];
V57=x[jvj+11];
V59=x[jvj+9];
V63=x[jvj+10];
pile[v[22]]=102; pile[WZ1]=jvj+26; pile[WZ2]=117; pile[WZ3]=V15; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(102,jvj+26,117,V15,jvj+12)*/
pile[v[22]]=N; pile[WZ1]=U; pile[WZ2]=ND; pile[WZ3]=V; pile[WZ4]=TY; pile[WZ5]=jvj+12; 
(*f[1222])( );     /*AJOUPROVANT1(N,U,ND,V,TY,jvj+12)*/
pile[v[22]]=20; pile[WZ1]=V52; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V52,0,V51)*/
V51=pile[WZ3]; 
pile[WZ1]=V54; pile[WZ2]=V51; 
(*f[39])( );     /*SDX0(20,V54,V51,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V53,V,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V57; pile[WZ2]=V55; 
(*f[39])( );     /*SDX0(20,V57,V55,V56)*/
V56=pile[WZ3]; 
pile[WZ1]=V59; pile[WZ2]=V56; 
(*f[39])( );     /*SDX0(20,V59,V56,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V2; pile[WZ2]=V58; 
(*f[39])( );     /*SDX0(41,V2,V58,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V63; pile[WZ2]=V60; 
(*f[39])( );     /*SDX0(20,V63,V60,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V3; pile[WZ2]=V62; 
(*f[39])( );     /*SDX0(41,V3,V62,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=V64; 
(*f[40])( );     /*SLG0(V64)*/
l10:pile[v[22]]=1529; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(1529,X,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=218; pile[WZ1]=Y; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(218,Y,jvj+13)*/
pile[v[22]]=986; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(986,X,jvj+14)*/
pile[v[22]]=1516; pile[WZ1]=1447; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1516,1447,jvj+15)*/
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==x[jvj+13]) goto l15;
pile[v[22]]=642; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(642,jvj+14,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=258; pile[WZ1]=Y; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(258,Y,jvj+16)*/
V74=x[N];
V76=x[TY];
V78=x[jvj+13];
V84=x[jvj+14];
l11:if((x[jvj+16]<=0)) goto l15;
x[jvj+5]=s[x[jvj+16]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+16];
pile[v[22]]=1529; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(1529,jvj+5,V28)*/
V28=pile[WZ2]; 
if((V28>=V29)) goto l12;
pile[v[22]]=986; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(986,jvj+5,jvj+17)*/
if((x[jvj+17]==x[jvj+14])) goto l12;
if((x[jvj+17]==616)) goto l12;
pile[v[22]]=642; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+17,V48)*/
V48=pile[WZ2]; 
x[jvj+38]=incon;
pile[v[22]]=218; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(218,jvj+5,jvj+6)*/
x[jvj+37]=x[jvj+6] ;z[jvj+37]=z[jvj+6];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+37; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+37,jvj+38)*/
l3:pile[v[22]]=1106; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(1106,jvj+5,V36)*/
V36=pile[WZ2]; 
NK=V36;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=NK; pile[WZ4]=jvj+38; 
(*f[192])( );     /*QUADRI4(100,41,130,NK,jvj+38)*/
l13:if((x[jvj+38]==(-99999998))) goto l12;
V45=V46-V48;
V80=x[jvj+17];
x[jvj+18]=x[jvj+38] ;z[jvj+18]=z[jvj+38];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+49)*/
pile[WZ3]=jvj+13; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+13,jvj+55)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7423); pile[WZ4]=jvj+53; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7423),jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=103; pile[WZ2]=jvj+54; 
(*f[54])( );     /*TRI1(jvj+53,103,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+54; pile[WZ5]=jvj+52; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+55,jvj+54,jvj+52)*/
pile[v[22]]=jvj+49; pile[WZ1]=111; pile[WZ2]=jvj+50; 
(*f[54])( );     /*TRI1(jvj+49,111,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+19; pile[WZ2]=103; pile[WZ3]=jvj+51; 
(*f[58])( );     /*TRI3(jvj+50,jvj+19,103,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+52; pile[WZ4]=jvj+51; pile[WZ5]=jvj+48; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+52,jvj+51,jvj+48)*/
pile[v[22]]=102; pile[WZ1]=jvj+48; pile[WZ2]=117; pile[WZ3]=V45; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(102,jvj+48,117,V45,jvj+20)*/
pile[v[22]]=N; pile[WZ1]=U; pile[WZ2]=ND; pile[WZ3]=V; pile[WZ4]=TY; pile[WZ5]=jvj+20; 
(*f[1222])( );     /*AJOUPROVANT1(N,U,ND,V,TY,jvj+20)*/
pile[v[22]]=20; pile[WZ1]=V74; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V74,0,V73)*/
V73=pile[WZ3]; 
pile[WZ1]=V76; pile[WZ2]=V73; 
(*f[39])( );     /*SDX0(20,V76,V73,V75)*/
V75=pile[WZ3]; 
pile[v[22]]=V75; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V75,V,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V78; pile[WZ2]=V77; 
(*f[39])( );     /*SDX0(20,V78,V77,V25)*/
V25=pile[WZ3]; 
V24=incon;
pile[v[22]]=1106; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1106,jvj+5,V38)*/
V38=pile[WZ2]; 
V20=V38;
pile[v[22]]=135; pile[WZ1]=V25; pile[WZ2]=409; 
(*f[42])( );     /*SRA1(135,V25,409,V66)*/
V66=pile[WZ3]; 
pile[v[22]]=V66; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V66,58,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=V67; pile[WZ1]=V20; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V67,V20,41,V24)*/
V24=pile[WZ3]; 
l7:V26=incon;
pile[v[22]]=218; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(218,jvj+5,jvj+7)*/
x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
pile[v[22]]=135; pile[WZ1]=V24; pile[WZ2]=409; 
(*f[42])( );     /*SRA1(135,V24,409,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=V70; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V70,58,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V71; pile[WZ2]=jvj+8; 
(*f[42])( );     /*SRA1(135,V71,jvj+8,V26)*/
V26=pile[WZ3]; 
l14:pile[v[22]]=20; pile[WZ1]=V80; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(20,V80,V26,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V28; pile[WZ2]=V79; 
(*f[39])( );     /*SDX0(41,V28,V79,V81)*/
V81=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V84; pile[WZ2]=V81; 
(*f[39])( );     /*SDX0(20,V84,V81,V83)*/
V83=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V29; pile[WZ2]=V83; 
(*f[39])( );     /*SDX0(41,V29,V83,V85)*/
V85=pile[WZ3]; 
pile[v[22]]=V85; 
(*f[40])( );     /*SLG0(V85)*/
l12:x[jvj+16]=t[x[jvj+16]];
goto l11;
l4:if(x[jvj+38]==incon) goto l5;
goto l13;
l5:x[jvj+38]=(-99999998);
goto l12;
l6:V24=V25;
goto l7;
l8:V26=V24;
goto l14;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; return;
l16:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+21)*/
pile[WZ3]=jvj+11; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+11,jvj+25)*/
pile[WZ3]=1294; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,1294,jvj+41)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7423); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7423),jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=103; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,103,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+40; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+41,jvj+40,jvj+23)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; pile[WZ2]=103; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+22,jvj+23,103,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+25,jvj+24,jvj+26)*/
goto l1;
l17:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+27)*/
pile[WZ3]=jvj+11; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+11,jvj+31)*/
pile[WZ3]=1300; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,1300,jvj+44)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7423); pile[WZ4]=jvj+42; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7423),jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=103; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+43; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+44,jvj+43,jvj+29)*/
pile[v[22]]=jvj+27; pile[WZ1]=111; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,111,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; pile[WZ2]=103; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+28,jvj+29,103,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+30; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+31,jvj+30,jvj+26)*/
goto l2;
l18:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+32)*/
pile[WZ3]=jvj+11; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+11,jvj+47)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7423); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7423),jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=103; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,103,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+47; pile[WZ4]=jvj+46; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+47,jvj+46,jvj+36)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=68; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,68,jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=103; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+33,jvj+34,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+35; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+36,jvj+35,jvj+26)*/
goto l9;
}
