#include "dx.h"
void TRILIMRIG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NZ=0,V124=0,V152=0,V133=0,V138=0,V139=0,V137=0,V144=0,V140=0,V130=0,V163=0,V155=0,V167=0,V165=0,V54=0,V159=0,V160=0,V161=0;
int X,Y,VV;
int RT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=139;
x[jvj+1]=11609;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1463&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; Y=pile[v[22]+1]; VV=pile[v[22]+2]; RT=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+44]=incon;
pile[v[22]]=X; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; pile[WZ3]=jvj+4; pile[WZ4]=jvj+5; 
(*f[1676])( );if(v[102]) goto l15;     /*TRINOMERIG0(X,jvj+2,jvj+3,jvj+4,jvj+5)*/
if((x[jvj+5]==68)) goto l1;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l1:pile[v[22]]=Y; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; pile[WZ3]=jvj+8; pile[WZ4]=jvj+9; 
(*f[1676])( );if(v[102]) goto l15;     /*TRINOMERIG0(Y,jvj+6,jvj+7,jvj+8,jvj+9)*/
if((x[jvj+9]==68)) goto l2;
goto l15;
l2:pile[v[22]]=jvj+2; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+10)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+11)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+12)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+13)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+14)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+73)*/
pile[WZ3]=52; pile[WZ4]=jvj+75; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=111; pile[WZ2]=jvj+76; 
(*f[54])( );     /*TRI1(jvj+75,111,jvj+76)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+76; pile[WZ5]=jvj+74; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+11,jvj+76,jvj+74)*/
pile[WZ2]=111; pile[WZ3]=jvj+73; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+73,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=107; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+16,107,jvj+10)*/
pile[WZ2]=jvj+74; 
(*f[36])( );     /*PLUSC0(jvj+16,107,jvj+74)*/
pile[WZ1]=jvj+17; 
(*f[1677])( );     /*VALRIG0(jvj+16,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+77; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+77)*/
pile[WZ3]=52; pile[WZ4]=jvj+79; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=111; pile[WZ2]=jvj+80; 
(*f[54])( );     /*TRI1(jvj+79,111,jvj+80)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+80; pile[WZ5]=jvj+78; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+80,jvj+78)*/
pile[WZ2]=111; pile[WZ3]=jvj+77; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+77,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=107; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+18,107,jvj+12)*/
pile[WZ2]=jvj+78; 
(*f[36])( );     /*PLUSC0(jvj+18,107,jvj+78)*/
pile[WZ1]=jvj+19; 
(*f[1677])( );     /*VALRIG0(jvj+18,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+81)*/
pile[WZ3]=52; pile[WZ4]=jvj+83; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=111; pile[WZ2]=jvj+84; 
(*f[54])( );     /*TRI1(jvj+83,111,jvj+84)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+84; pile[WZ5]=jvj+82; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+15,jvj+84,jvj+82)*/
pile[WZ2]=111; pile[WZ3]=jvj+81; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+81,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=107; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+20,107,jvj+14)*/
pile[WZ2]=jvj+82; 
(*f[36])( );     /*PLUSC0(jvj+20,107,jvj+82)*/
pile[WZ1]=jvj+21; 
(*f[1677])( );     /*VALRIG0(jvj+20,jvj+21)*/
x[jvj+22]=0 ;z[jvj+22]=0;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+17; 
(*f[68])( );     /*PLUE0(jvj+22,jvj+17)*/
pile[WZ1]=jvj+19; 
(*f[68])( );     /*PLUE0(jvj+22,jvj+19)*/
pile[WZ1]=jvj+21; 
(*f[68])( );     /*PLUE0(jvj+22,jvj+21)*/
x[jvj+134]=x[jvj+22] ;z[jvj+134]=z[jvj+22];
if((x[jvj+134]>0)) goto l17;
goto l15;
l4:if(x[jvj+44]!=incon) goto l5;
goto l15;
l5:pile[v[22]]=1219; pile[WZ1]=jvj+51; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1219,jvj+51,jvj+56)*/
if(x[jvj+56]!=36&&x[jvj+56]!=52&&x[jvj+56]!=1557&&x[jvj+56]!=134) goto l15;
pile[WZ1]=jvj+44; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1219,jvj+44,jvj+57)*/
if(x[jvj+57]!=36&&x[jvj+57]!=52&&x[jvj+57]!=1557&&x[jvj+57]!=134) goto l15;
x[jvj+52]=0 ;z[jvj+52]=0;
pile[v[22]]=jvj+52; pile[WZ1]=jvj+51; 
(*f[68])( );     /*PLUE0(jvj+52,jvj+51)*/
pile[WZ1]=jvj+44; 
(*f[68])( );     /*PLUE0(jvj+52,jvj+44)*/
x[jvj+55]=x[jvj+52] ;z[jvj+55]=z[jvj+52];
l6:x[jvj+61]=0 ;z[jvj+61]=0;
x[jvj+133]=x[jvj+55] ;z[jvj+133]=z[jvj+55];
l10:if((x[jvj+133]>0)) goto l11;
for(a=x[jvj+61];a>0;a=t[a]) if(s[a]==178) goto l15;
x[jvj+65]=0 ;z[jvj+65]=0;
l13:if((x[jvj+61]>0)) goto l14;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=111; pile[WZ2]=jvj+71; 
(*f[54])( );     /*TRI1(jvj+70,111,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+65; pile[WZ2]=107; pile[WZ3]=jvj+72; 
(*f[301])( );     /*TRI11(jvj+71,jvj+65,107,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=RT; 
(*f[58])( );     /*TRI3(jvj+72,22,100,RT)*/
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l8:if(x[jvj+62]==incon) goto l9;
l12:pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; 
(*f[68])( );     /*PLUE0(jvj+61,jvj+62)*/
x[jvj+133]=t[x[jvj+133]];
goto l10;
l9:x[jvj+62]=178 ;z[jvj+62]=178;
goto l12;
l11:x[jvj+58]=s[x[jvj+133]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+133];
x[jvj+62]=incon;
pile[v[22]]=1219; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1219,jvj+58,jvj+59)*/
if((x[jvj+59]!=134)) goto l7;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+62; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+62)*/
l7:if(x[jvj+59]!=36&&x[jvj+59]!=52&&x[jvj+59]!=1557) goto l8;
v[45]=0;
pile[v[22]]=763; pile[WZ1]=jvj+58; pile[WZ2]=jvj+129; 
(*f[33])( );     /*FNDE0(763,jvj+58,jvj+129)*/
if((x[jvj+129]==0)) goto l37;
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+130; 
(*f[46])( );     /*TRI0(1,117,jvj+130)*/
x[jvj+139]=x[jvj+129] ;z[jvj+139]=z[jvj+129];
l33:if((x[jvj+139]>0)) goto l38;
pile[v[22]]=117; pile[WZ1]=jvj+130; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+130,V163)*/
V163=pile[WZ2]; 
V155=V163;
l34:if((v[45]!=0)) goto l8;
V165=incon;
pile[v[22]]=1219; pile[WZ1]=jvj+58; pile[WZ2]=jvj+131; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(1219,jvj+58,jvj+131)*/
if((x[jvj+131]!=52)) goto l36;
V167=(-V155);
V165=V167;
l35:V54=V165;
pile[v[22]]=VV; pile[WZ1]=jvj+60; 
(*f[255])( );     /*COPEXP0(VV,jvj+60)*/
NZ=V54;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+66)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=NZ; pile[WZ4]=jvj+68; 
(*f[192])( );     /*QUADRI4(100,41,130,NZ,jvj+68)*/
pile[v[22]]=jvj+66; pile[WZ1]=111; pile[WZ2]=jvj+67; 
(*f[54])( );     /*TRI1(jvj+66,111,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=jvj+68; pile[WZ2]=103; pile[WZ3]=jvj+69; 
(*f[58])( );     /*TRI3(jvj+67,jvj+68,103,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+60; pile[WZ4]=jvj+69; pile[WZ5]=jvj+62; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+60,jvj+69,jvj+62)*/
goto l12;
l14:x[jvj+63]=s[x[jvj+61]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+61];
pile[v[22]]=jvj+63; pile[WZ1]=jvj+64; 
(*f[255])( );     /*COPEXP0(jvj+63,jvj+64)*/
pile[v[22]]=jvj+65; 
(*f[68])( );     /*PLUE0(jvj+65,jvj+64)*/
x[jvj+61]=t[x[jvj+61]];
goto l13;
l17:x[jvj+115]=s[x[jvj+134]] ;z[jvj+115]=(x[jvj+115]<=sepcte) ? x[jvj+115] : z[jvj+134];
x[jvj+128]=0 ;z[jvj+128]=0;
pile[v[22]]=763; pile[WZ1]=jvj+115; pile[WZ2]=jvj+116; 
(*f[33])( );     /*FNDE0(763,jvj+115,jvj+116)*/
l18:if((x[jvj+116]>0)) goto l31;
V124=x[jvj+128];
x[jvj+119]=0 ;z[jvj+119]=0;
x[jvj+117]=d[64];z[jvj+117]=0;
V152=V124;
l19:if((V152>0)) goto l20;
pile[v[22]]=36; pile[WZ1]=1219; pile[WZ2]=jvj+118; 
(*f[54])( );     /*TRI1(36,1219,jvj+118)*/
pile[v[22]]=jvj+118; pile[WZ1]=jvj+119; pile[WZ2]=763; pile[WZ3]=jvj+87; 
(*f[301])( );     /*TRI11(jvj+118,jvj+119,763,jvj+87)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=63; pile[WZ4]=jvj+85; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=111; pile[WZ2]=jvj+86; 
(*f[54])( );     /*TRI1(jvj+85,111,jvj+86)*/
pile[v[22]]=102; pile[WZ1]=jvj+17; pile[WZ2]=103; pile[WZ3]=jvj+87; pile[WZ4]=jvj+86; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(102,jvj+17,103,jvj+87,jvj+86,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[1677])( );     /*VALRIG0(jvj+23,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=63; pile[WZ4]=jvj+88; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=111; pile[WZ2]=jvj+89; 
(*f[54])( );     /*TRI1(jvj+88,111,jvj+89)*/
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=103; pile[WZ3]=jvj+87; pile[WZ4]=jvj+89; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(102,jvj+19,103,jvj+87,jvj+89,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[1677])( );     /*VALRIG0(jvj+25,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=63; pile[WZ4]=jvj+90; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+90)*/
pile[v[22]]=jvj+90; pile[WZ1]=111; pile[WZ2]=jvj+91; 
(*f[54])( );     /*TRI1(jvj+90,111,jvj+91)*/
pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=103; pile[WZ3]=jvj+87; pile[WZ4]=jvj+91; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(102,jvj+21,103,jvj+87,jvj+91,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[1677])( );     /*VALRIG0(jvj+27,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+29; 
(*f[378])( );     /*CPI0(jvj+26,jvj+29)*/
pile[WZ1]=jvj+30; 
(*f[378])( );     /*CPI0(jvj+26,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-4); pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,(-4),jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[1677])( );     /*VALRIG0(jvj+31,jvj+32)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+33; 
(*f[378])( );     /*CPI0(jvj+24,jvj+33)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+34; 
(*f[378])( );     /*CPI0(jvj+28,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1351; pile[WZ4]=jvj+93; 
(*f[181])( );     /*QUADRI2(100,20,101,1351,jvj+93)*/
pile[WZ3]=485; pile[WZ4]=jvj+94; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+94)*/
pile[WZ3]=486; pile[WZ4]=jvj+97; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=111; pile[WZ2]=jvj+95; 
(*f[54])( );     /*TRI1(jvj+97,111,jvj+95)*/
pile[v[22]]=jvj+95; pile[WZ1]=107; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+95,107,jvj+29)*/
pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+95,107,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+98; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=111; pile[WZ2]=jvj+96; 
(*f[54])( );     /*TRI1(jvj+98,111,jvj+96)*/
pile[v[22]]=jvj+96; pile[WZ1]=107; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+96,107,jvj+32)*/
pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+96,107,jvj+33)*/
pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+96,107,jvj+34)*/
pile[v[22]]=jvj+94; pile[WZ1]=111; pile[WZ2]=jvj+92; 
(*f[54])( );     /*TRI1(jvj+94,111,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=107; pile[WZ2]=jvj+95; 
(*f[36])( );     /*PLUSC0(jvj+92,107,jvj+95)*/
pile[WZ2]=jvj+96; 
(*f[36])( );     /*PLUSC0(jvj+92,107,jvj+96)*/
pile[v[22]]=102; pile[WZ1]=jvj+92; pile[WZ2]=111; pile[WZ3]=jvj+93; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(102,jvj+92,111,jvj+93,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[1677])( );     /*VALRIG0(jvj+35,jvj+36)*/
pile[v[22]]=1219; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1219,jvj+36,jvj+37)*/
if((x[jvj+37]!=36)) goto l3;
pile[v[22]]=jvj+36; pile[WZ1]=jvj+38; 
(*f[378])( );     /*CPI0(jvj+36,jvj+38)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+39; 
(*f[378])( );     /*CPI0(jvj+26,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+40; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[1677])( );     /*VALRIG0(jvj+40,jvj+41)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+42; 
(*f[378])( );     /*CPI0(jvj+24,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=63; pile[WZ4]=jvj+99; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+99)*/
pile[WZ3]=52; pile[WZ4]=jvj+104; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+104)*/
pile[WZ3]=485; pile[WZ4]=jvj+105; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=111; pile[WZ2]=jvj+103; 
(*f[54])( );     /*TRI1(jvj+105,111,jvj+103)*/
pile[v[22]]=jvj+103; pile[WZ1]=107; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+103,107,jvj+38)*/
pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+103,107,jvj+39)*/
pile[v[22]]=102; pile[WZ1]=jvj+103; pile[WZ2]=111; pile[WZ3]=jvj+104; pile[WZ4]=jvj+101; 
(*f[181])( );     /*QUADRI2(102,jvj+103,111,jvj+104,jvj+101)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+106; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=111; pile[WZ2]=jvj+102; 
(*f[54])( );     /*TRI1(jvj+106,111,jvj+102)*/
pile[v[22]]=jvj+102; pile[WZ1]=107; pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+102,107,jvj+41)*/
pile[WZ2]=jvj+42; 
(*f[36])( );     /*PLUSC0(jvj+102,107,jvj+42)*/
pile[v[22]]=jvj+99; pile[WZ1]=111; pile[WZ2]=jvj+100; 
(*f[54])( );     /*TRI1(jvj+99,111,jvj+100)*/
pile[v[22]]=102; pile[WZ1]=jvj+101; pile[WZ2]=103; pile[WZ3]=jvj+102; pile[WZ4]=jvj+100; pile[WZ5]=jvj+43; 
(*f[269])( );     /*QUADRI6(102,jvj+101,103,jvj+102,jvj+100,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[1677])( );     /*VALRIG0(jvj+43,jvj+44)*/
l3:if(x[jvj+37]!=1557&&x[jvj+37]!=36) goto l15;
pile[v[22]]=jvj+36; pile[WZ1]=jvj+45; 
(*f[378])( );     /*CPI0(jvj+36,jvj+45)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+46; 
(*f[378])( );     /*CPI0(jvj+26,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+47; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; 
(*f[1677])( );     /*VALRIG0(jvj+47,jvj+48)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+49; 
(*f[378])( );     /*CPI0(jvj+24,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=63; pile[WZ4]=jvj+107; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+107)*/
pile[WZ3]=485; pile[WZ4]=jvj+111; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+111)*/
pile[WZ3]=52; pile[WZ4]=jvj+113; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+113)*/
pile[v[22]]=102; pile[WZ1]=jvj+46; pile[WZ2]=111; pile[WZ3]=jvj+113; pile[WZ4]=jvj+112; 
(*f[181])( );     /*QUADRI2(102,jvj+46,111,jvj+113,jvj+112)*/
pile[v[22]]=jvj+111; pile[WZ1]=111; pile[WZ2]=jvj+109; 
(*f[54])( );     /*TRI1(jvj+111,111,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=107; pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+109,107,jvj+45)*/
pile[WZ2]=jvj+112; 
(*f[36])( );     /*PLUSC0(jvj+109,107,jvj+112)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+114; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+114)*/
pile[v[22]]=jvj+114; pile[WZ1]=111; pile[WZ2]=jvj+110; 
(*f[54])( );     /*TRI1(jvj+114,111,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=107; pile[WZ2]=jvj+48; 
(*f[36])( );     /*PLUSC0(jvj+110,107,jvj+48)*/
pile[WZ2]=jvj+49; 
(*f[36])( );     /*PLUSC0(jvj+110,107,jvj+49)*/
pile[v[22]]=jvj+107; pile[WZ1]=111; pile[WZ2]=jvj+108; 
(*f[54])( );     /*TRI1(jvj+107,111,jvj+108)*/
pile[v[22]]=102; pile[WZ1]=jvj+109; pile[WZ2]=103; pile[WZ3]=jvj+110; pile[WZ4]=jvj+108; pile[WZ5]=jvj+50; 
(*f[269])( );     /*QUADRI6(102,jvj+109,103,jvj+110,jvj+108,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; 
(*f[1677])( );     /*VALRIG0(jvj+50,jvj+51)*/
pile[v[22]]=1219; pile[WZ1]=jvj+36; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1219,jvj+36,jvj+53)*/
if((x[jvj+53]!=1557)) goto l4;
pile[WZ1]=jvj+51; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1219,jvj+51,jvj+54)*/
if(x[jvj+54]!=36&&x[jvj+54]!=52&&x[jvj+54]!=1557&&x[jvj+54]!=134) goto l4;
pile[v[22]]=20; pile[WZ2]=jvj+55; 
(*f[409])( );     /*TRI14(20,jvj+51,jvj+55)*/
goto l6;
l20:V133=s[V152];
x[jvj+136]=x[jvj+22] ;z[jvj+136]=z[jvj+22];
l21:if((x[jvj+136]>0)) goto l26;
V138=999999;
x[jvj+137]=x[jvj+22] ;z[jvj+137]=z[jvj+22];
l22:if((x[jvj+137]>0)) goto l27;
V139=V138;
if((V139<=0)) goto l23;
if((V138==999999)) goto l23;
pile[v[22]]=510; pile[WZ1]=V133; pile[WZ2]=515; pile[WZ3]=V139; pile[WZ4]=jvj+120; 
(*f[391])( );     /*QUADRI10(510,V133,515,V139,jvj+120)*/
pile[v[22]]=jvj+117; pile[WZ1]=jvj+120; pile[WZ2]=jvj+119; 
(*f[196])( );     /*PLUF0(jvj+117,jvj+120,jvj+119)*/
l23:V152=t[V152];
goto l19;
l25:x[jvj+135]=t[x[jvj+135]];
l24:if((x[jvj+135]<=0)) goto l23;
x[jvj+121]=s[x[jvj+135]] ;z[jvj+121]=(x[jvj+121]<=sepcte) ? x[jvj+121] : z[jvj+135];
pile[v[22]]=510; pile[WZ1]=jvj+121; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(510,jvj+121,V137)*/
V137=pile[WZ2]; 
if((V137!=V133)) goto l25;
x[jvj+136]=t[x[jvj+136]];
goto l21;
l26:x[jvj+122]=s[x[jvj+136]] ;z[jvj+122]=(x[jvj+122]<=sepcte) ? x[jvj+122] : z[jvj+136];
pile[v[22]]=763; pile[WZ1]=jvj+122; pile[WZ2]=jvj+123; 
(*f[33])( );     /*FNDE0(763,jvj+122,jvj+123)*/
x[jvj+135]=x[jvj+123] ;z[jvj+135]=z[jvj+123];
goto l24;
l27:x[jvj+124]=s[x[jvj+137]] ;z[jvj+124]=(x[jvj+124]<=sepcte) ? x[jvj+124] : z[jvj+137];
pile[v[22]]=763; pile[WZ1]=jvj+124; pile[WZ2]=jvj+125; 
(*f[33])( );     /*FNDE0(763,jvj+124,jvj+125)*/
x[jvj+138]=x[jvj+125] ;z[jvj+138]=z[jvj+125];
l28:if((x[jvj+138]>0)) goto l29;
x[jvj+137]=t[x[jvj+137]];
goto l22;
l29:x[jvj+126]=s[x[jvj+138]] ;z[jvj+126]=(x[jvj+126]<=sepcte) ? x[jvj+126] : z[jvj+138];
pile[v[22]]=510; pile[WZ1]=jvj+126; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(510,jvj+126,V144)*/
V144=pile[WZ2]; 
if((V144!=V133)) goto l30;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(515,jvj+126,V140)*/
V140=pile[WZ2]; 
if(V140<V138) V138=V140;
l30:x[jvj+138]=t[x[jvj+138]];
goto l28;
l31:x[jvj+127]=s[x[jvj+116]] ;z[jvj+127]=(x[jvj+127]<=sepcte) ? x[jvj+127] : z[jvj+116];
pile[v[22]]=510; pile[WZ1]=jvj+127; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(510,jvj+127,V130)*/
V130=pile[WZ2]; 
pile[v[22]]=jvj+128; pile[WZ1]=V130; 
(*f[207])( );     /*PLUE2(jvj+128,V130)*/
l32:x[jvj+116]=t[x[jvj+116]];
goto l18;
l36:V165=V155;
goto l35;
l37:V155=1;
goto l34;
l38:x[jvj+132]=s[x[jvj+139]] ;z[jvj+132]=(x[jvj+132]<=sepcte) ? x[jvj+132] : z[jvj+139];
pile[v[22]]=515; pile[WZ1]=jvj+132; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(515,jvj+132,V159)*/
V159=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(510,jvj+132,V160)*/
V160=pile[WZ2]; 
pile[v[22]]=V159; pile[WZ1]=V160; 
(*f[1006])( );if(v[102]) goto l39;     /*POWER0(V159,V160,V161)*/
V161=pile[WZ2]; 
pile[v[22]]=jvj+130; pile[WZ1]=117; pile[WZ2]=V161; 
(*f[818])( );     /*MTC0(jvj+130,117,V161)*/
l39:x[jvj+139]=t[x[jvj+139]];
goto l33;
}
