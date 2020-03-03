#include "dx.h"
void PLACATOMEBIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int F=0,V49=0,V53=0,V72=0,V12=0,V76=0,FF=0,V9=0,V=0,V124=0,V201=0,V271=0,V240=0,V184=0,V119=0,V100=0;
int BL,X,E,FM;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=131;
x[jvj+1]=11571;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==700&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; X=pile[v[22]+1]; E=pile[v[22]+2]; FM=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=BL; pile[WZ1]=X; 
(*f[1090])( );     /*Z101Z0(BL,X)*/
pile[v[22]]=102; pile[WZ1]=BL; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,BL,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(100,jvj+62,jvj+63)*/
if((x[jvj+63]!=69)) goto l45;
pile[v[22]]=108; pile[WZ2]=jvj+64; 
(*f[33])( );     /*FNDE0(108,jvj+62,jvj+64)*/
l22:if((x[jvj+64]<=0)) goto l45;
x[jvj+65]=s[x[jvj+64]] ;z[jvj+65]=(x[jvj+65]<=sepcte) ? x[jvj+65] : z[jvj+64];
pile[v[22]]=103; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(103,jvj+65,jvj+66)*/
pile[v[22]]=140; pile[WZ1]=jvj+66; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(140,jvj+66,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+65; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,jvj+65,jvj+67)*/
pile[v[22]]=101; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+67,jvj+68)*/
if((x[jvj+68]==576)) goto l24;
if((x[jvj+68]!=749)) goto l23;
pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(184,BL,jvj+69)*/
V124=V9;
x[jvj+129]=x[jvj+69] ;z[jvj+129]=z[jvj+69];
l25:if((x[jvj+129]<=0)) goto l23;
x[jvj+55]=s[x[jvj+129]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+129];
pile[v[22]]=1214; pile[WZ1]=jvj+55; pile[WZ2]=jvj+70; 
(*f[492])( );     /*FIGURE0(1214,jvj+55,jvj+70)*/
if((x[jvj+70]==135)) goto l52;
l26:if((FM!=(-9009))) goto l28;
pile[v[22]]=905; pile[WZ1]=BL; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(905,BL,V201)*/
V201=pile[WZ2]; 
if((V201!=(-9113))) goto l28;
pile[v[22]]=365; pile[WZ1]=jvj+55; pile[WZ2]=jvj+72; 
(*f[492])( );     /*FIGURE0(365,jvj+55,jvj+72)*/
if((x[jvj+72]==135)) goto l27;
l28:pile[v[22]]=905; pile[WZ1]=BL; 
(*f[44])( );if(v[102]) goto l32;     /*FNDC1(905,BL,V271)*/
V271=pile[WZ2]; 
if((V271!=(-11721))) goto l32;
pile[v[22]]=1601; pile[WZ1]=jvj+55; pile[WZ2]=jvj+73; 
(*f[492])( );     /*FIGURE0(1601,jvj+55,jvj+73)*/
if((x[jvj+73]==135)) goto l29;
l32:x[jvj+74]=d[201];z[jvj+74]=0;
l30:if((x[jvj+74]>0)) goto l31;
pile[v[22]]=100; pile[WZ1]=jvj+55; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,jvj+55,jvj+78)*/
if((x[jvj+78]!=42)) goto l42;
pile[v[22]]=107; pile[WZ2]=jvj+79; 
(*f[33])( );     /*FNDE0(107,jvj+55,jvj+79)*/
x[jvj+130]=x[jvj+79] ;z[jvj+130]=z[jvj+79];
l35:if((x[jvj+130]<=0)) goto l42;
x[jvj+80]=s[x[jvj+130]] ;z[jvj+80]=(x[jvj+80]<=sepcte) ? x[jvj+80] : z[jvj+130];
pile[v[22]]=111; pile[WZ1]=jvj+80; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,jvj+80,jvj+81)*/
pile[v[22]]=101; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+81,jvj+82)*/
if((x[jvj+82]!=25)) goto l36;
x[jvj+83]=d[20];z[jvj+83]=0;
l37:if((x[jvj+83]<=0)) goto l36;
x[jvj+84]=s[x[jvj+83]] ;z[jvj+84]=(x[jvj+84]<=sepcte) ? x[jvj+84] : z[jvj+83];
pile[v[22]]=268; pile[WZ1]=jvj+84; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(268,jvj+84,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=jvj+80; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(jvj+85,jvj+80,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=jvj+86; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(100,jvj+86,jvj+87)*/
if((x[jvj+87]!=43)) goto l39;
pile[v[22]]=103; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(103,jvj+86,jvj+88)*/
pile[v[22]]=140; pile[WZ1]=jvj+88; 
(*f[44])( );if(v[102]) goto l39;     /*FNDC1(140,jvj+88,V240)*/
V240=pile[WZ2]; 
if((V124!=V240)) goto l39;
pile[v[22]]=102; pile[WZ1]=jvj+86; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(102,jvj+86,jvj+89)*/
pile[v[22]]=101; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(101,jvj+89,jvj+90)*/
if((x[jvj+90]!=1347)) goto l39;
pile[v[22]]=1465; pile[WZ1]=BL; pile[WZ2]=V124; pile[WZ3]=X; 
(*f[1087])( );     /*AJOUREGBIS1(1465,BL,V124,X)*/
l39:pile[v[22]]=101; pile[WZ1]=jvj+86; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+86,jvj+91)*/
if((x[jvj+91]!=68)) goto l38;
pile[v[22]]=jvj+84; pile[WZ1]=jvj+80; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(jvj+84,jvj+80,jvj+92)*/
pile[v[22]]=100; pile[WZ1]=jvj+92; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,jvj+92,jvj+93)*/
if((x[jvj+93]!=43)) goto l38;
pile[v[22]]=103; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(103,jvj+92,jvj+94)*/
pile[v[22]]=140; pile[WZ1]=jvj+94; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(140,jvj+94,V184)*/
V184=pile[WZ2]; 
if((V124!=V184)) goto l38;
pile[v[22]]=102; pile[WZ1]=jvj+92; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,jvj+92,jvj+95)*/
pile[v[22]]=101; pile[WZ1]=jvj+95; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+95,jvj+96)*/
if((x[jvj+96]!=202)) goto l38;
pile[v[22]]=202; pile[WZ1]=BL; pile[WZ2]=V124; pile[WZ3]=X; 
(*f[1087])( );     /*AJOUREGBIS1(202,BL,V124,X)*/
l38:x[jvj+83]=t[x[jvj+83]];
goto l37;
l4:x[jvj+124]=t[x[jvj+124]];
l3:if((x[jvj+124]<=0)) goto l51;
x[jvj+11]=s[x[jvj+124]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+124];
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=25)) goto l4;
x[jvj+14]=d[20];z[jvj+14]=0;
l5:if((x[jvj+14]<=0)) goto l4;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+11; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+15,jvj+11,jvj+16)*/
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+16,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=74)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+16,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=43)) goto l6;
pile[v[22]]=103; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+19,jvj+21)*/
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+21,V49)*/
V49=pile[WZ2]; 
if((V12!=V49)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+19,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=489)) goto l6;
pile[v[22]]=268; pile[WZ1]=jvj+15; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+15,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+11; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+24,jvj+11,jvj+25)*/
pile[v[22]]=130; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+25,V53)*/
V53=pile[WZ2]; 
if((V53==0)) goto l10;
l6:x[jvj+14]=t[x[jvj+14]];
goto l5;
l7:pile[v[22]]=jvj+8; pile[WZ1]=jvj+26; 
(*f[1088])( );     /*Z249Z0(jvj+8,jvj+26)*/
x[jvj+125]=x[jvj+26] ;z[jvj+125]=z[jvj+26];
l8:if((x[jvj+125]>0)) goto l9;
x[jvj+44]=t[x[jvj+44]];
l14:if((x[jvj+44]>0)) goto l15;
pile[v[22]]=E; pile[WZ1]=BL; 
(*f[68])( );     /*PLUE0(E,BL)*/
l51:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l9:x[jvj+27]=s[x[jvj+125]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+125];
pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+27,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=74)) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+27; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+27,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+30,jvj+31)*/
if((x[jvj+31]!=43)) goto l10;
pile[v[22]]=103; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+30,jvj+32)*/
pile[v[22]]=140; pile[WZ1]=jvj+32; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+32,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+30; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+30,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]!=489)) goto l10;
V12=V72;
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=42)) goto l51;
pile[v[22]]=107; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,jvj+8,jvj+10)*/
x[jvj+124]=x[jvj+10] ;z[jvj+124]=z[jvj+10];
goto l3;
l10:x[jvj+125]=t[x[jvj+125]];
goto l8;
l13:pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(184,BL,jvj+44)*/
goto l14;
l15:x[jvj+8]=s[x[jvj+44]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+44];
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+8,jvj+35)*/
if((x[jvj+35]!=42)) goto l7;
pile[v[22]]=107; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(107,jvj+8,jvj+36)*/
for(i=x[jvj+36],V76=0;i>0;i=t[i],V76++)  ;
if((V76!=1)) goto l7;
x[jvj+126]=x[jvj+36] ;z[jvj+126]=z[jvj+36];
l11:if((x[jvj+126]<=0)) goto l7;
x[jvj+37]=s[x[jvj+126]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+126];
pile[v[22]]=111; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+37,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+39]!=44)) goto l12;
pile[v[22]]=103; pile[WZ1]=jvj+37; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,jvj+37,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+40,jvj+41)*/
if((x[jvj+41]!=43)) goto l12;
pile[v[22]]=102; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+40,jvj+42)*/
pile[v[22]]=101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+42,jvj+43)*/
if((x[jvj+43]==489)) goto l51;
l12:x[jvj+126]=t[x[jvj+126]];
goto l11;
l18:pile[v[22]]=102; pile[WZ1]=BL; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,BL,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+49,jvj+50)*/
if((x[jvj+50]!=69)) goto l13;
pile[v[22]]=108; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(108,jvj+49,jvj+51)*/
x[jvj+127]=x[jvj+51] ;z[jvj+127]=z[jvj+51];
l16:if((x[jvj+127]<=0)) goto l19;
x[jvj+45]=s[x[jvj+127]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+127];
pile[v[22]]=100; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+45,jvj+46)*/
if((x[jvj+46]!=108)) goto l17;
pile[v[22]]=102; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+45,jvj+47)*/
pile[v[22]]=101; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+47,jvj+48)*/
if((x[jvj+48]==758)) goto l13;
l17:x[jvj+127]=t[x[jvj+127]];
goto l16;
l24:V=V9;
pile[v[22]]=576; pile[WZ1]=BL; pile[WZ2]=V; pile[WZ3]=X; 
(*f[1087])( );     /*AJOUREGBIS1(576,BL,V,X)*/
l23:x[jvj+64]=t[x[jvj+64]];
goto l22;
l27:pile[v[22]]=202; pile[WZ1]=BL; pile[WZ2]=V124; pile[WZ3]=X; 
(*f[1087])( );     /*AJOUREGBIS1(202,BL,V124,X)*/
goto l28;
l29:pile[v[22]]=1902; pile[WZ1]=BL; pile[WZ2]=V124; pile[WZ3]=X; 
(*f[1087])( );     /*AJOUREGBIS1(1902,BL,V124,X)*/
goto l32;
l31:x[jvj+75]=s[x[jvj+74]] ;z[jvj+75]=(x[jvj+75]<=sepcte) ? x[jvj+75] : z[jvj+74];
pile[v[22]]=218; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(218,jvj+75,jvj+76)*/
pile[v[22]]=jvj+75; pile[WZ1]=jvj+55; pile[WZ2]=jvj+77; 
(*f[492])( );     /*FIGURE0(jvj+75,jvj+55,jvj+77)*/
if((x[jvj+77]==135)) goto l34;
l33:x[jvj+74]=t[x[jvj+74]];
goto l30;
l34:pile[v[22]]=jvj+76; pile[WZ1]=BL; pile[WZ2]=V124; pile[WZ3]=X; 
(*f[1087])( );     /*AJOUREGBIS1(jvj+76,BL,V124,X)*/
goto l33;
l36:x[jvj+130]=t[x[jvj+130]];
goto l35;
l41:x[jvj+58]=s[x[jvj+97]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+97];
pile[v[22]]=100; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(100,jvj+55,jvj+56)*/
if((x[jvj+56]!=42)) goto l43;
pile[v[22]]=107; pile[WZ2]=jvj+57; 
(*f[33])( );     /*FNDE0(107,jvj+55,jvj+57)*/
pile[v[22]]=218; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(218,jvj+58,jvj+59)*/
x[jvj+128]=x[jvj+57] ;z[jvj+128]=z[jvj+57];
l21:if((x[jvj+128]<=0)) goto l43;
x[jvj+60]=s[x[jvj+128]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+128];
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[492])( );     /*FIGURE0(jvj+59,jvj+60,jvj+61)*/
if((x[jvj+61]==135)) goto l44;
x[jvj+128]=t[x[jvj+128]];
goto l21;
l42:x[jvj+97]=d[209];z[jvj+97]=0;
l40:if((x[jvj+97]>0)) goto l41;
x[jvj+129]=t[x[jvj+129]];
goto l25;
l44:pile[v[22]]=jvj+58; pile[WZ1]=BL; pile[WZ2]=V124; pile[WZ3]=X; 
(*f[1087])( );     /*AJOUREGBIS1(jvj+58,BL,V124,X)*/
l43:x[jvj+97]=t[x[jvj+97]];
goto l40;
l45:pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=jvj+98; 
(*f[33])( );     /*FNDE0(184,BL,jvj+98)*/
l46:if((x[jvj+98]>0)) goto l47;
pile[v[22]]=102; pile[WZ1]=BL; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,BL,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=69)) goto l18;
pile[v[22]]=108; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(108,jvj+2,jvj+4)*/
l1:if((x[jvj+4]<=0)) goto l18;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+6,jvj+7)*/
F=x[jvj+7];
if(F==576||F==892||F==1186) goto l51;
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l47:x[jvj+99]=s[x[jvj+98]] ;z[jvj+99]=(x[jvj+99]<=sepcte) ? x[jvj+99] : z[jvj+98];
pile[v[22]]=100; pile[WZ1]=jvj+99; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(100,jvj+99,jvj+100)*/
if((x[jvj+100]!=42)) goto l48;
pile[v[22]]=107; pile[WZ2]=jvj+101; 
(*f[33])( );     /*FNDE0(107,jvj+99,jvj+101)*/
x[jvj+131]=x[jvj+101] ;z[jvj+131]=z[jvj+101];
l49:if((x[jvj+131]<=0)) goto l48;
x[jvj+102]=s[x[jvj+131]] ;z[jvj+102]=(x[jvj+102]<=sepcte) ? x[jvj+102] : z[jvj+131];
pile[v[22]]=111; pile[WZ1]=jvj+102; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,jvj+102,jvj+103)*/
pile[v[22]]=101; pile[WZ1]=jvj+103; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+103,jvj+104)*/
if((x[jvj+104]!=44)) goto l50;
pile[v[22]]=102; pile[WZ1]=jvj+102; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,jvj+102,jvj+105)*/
pile[v[22]]=101; pile[WZ1]=jvj+105; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+105,jvj+106)*/
pile[v[22]]=103; pile[WZ1]=jvj+102; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(103,jvj+102,jvj+107)*/
pile[v[22]]=100; pile[WZ1]=jvj+107; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(100,jvj+107,jvj+108)*/
if((x[jvj+108]!=43)) goto l50;
pile[v[22]]=103; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(103,jvj+107,jvj+109)*/
pile[v[22]]=140; pile[WZ1]=jvj+109; 
(*f[44])( );if(v[102]) goto l50;     /*FNDC1(140,jvj+109,V119)*/
V119=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+107; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,jvj+107,jvj+110)*/
pile[v[22]]=101; pile[WZ1]=jvj+110; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+110,jvj+111)*/
if((x[jvj+111]!=971)) goto l50;
x[jvj+112]=x[jvj+106] ;z[jvj+112]=z[jvj+106];
V100=V119;
pile[v[22]]=jvj+112; pile[WZ1]=BL; pile[WZ2]=V100; pile[WZ3]=X; 
(*f[1087])( );     /*AJOUREGBIS1(jvj+112,BL,V100,X)*/
l50:x[jvj+131]=t[x[jvj+131]];
goto l49;
l48:x[jvj+98]=t[x[jvj+98]];
goto l46;
l52:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+113; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+113)*/
pile[WZ3]=1214; pile[WZ4]=jvj+117; 
(*f[181])( );     /*QUADRI2(100,20,101,1214,jvj+117)*/
pile[WZ3]=1216; pile[WZ4]=jvj+120; 
(*f[181])( );     /*QUADRI2(100,20,101,1216,jvj+120)*/
pile[WZ3]=498; pile[WZ4]=jvj+123; 
(*f[181])( );     /*QUADRI2(100,20,101,498,jvj+123)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3629); pile[WZ4]=jvj+121; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3629),jvj+121)*/
pile[v[22]]=jvj+121; pile[WZ1]=103; pile[WZ2]=jvj+122; 
(*f[54])( );     /*TRI1(jvj+121,103,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+123; pile[WZ4]=jvj+122; pile[WZ5]=jvj+118; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+123,jvj+122,jvj+118)*/
pile[v[22]]=jvj+118; pile[WZ1]=103; pile[WZ2]=jvj+119; 
(*f[54])( );     /*TRI1(jvj+118,103,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+120; pile[WZ4]=jvj+119; pile[WZ5]=jvj+115; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+120,jvj+119,jvj+115)*/
pile[v[22]]=jvj+113; pile[WZ1]=111; pile[WZ2]=jvj+114; 
(*f[54])( );     /*TRI1(jvj+113,111,jvj+114)*/
pile[v[22]]=jvj+114; pile[WZ1]=jvj+115; pile[WZ2]=103; pile[WZ3]=jvj+116; 
(*f[58])( );     /*TRI3(jvj+114,jvj+115,103,jvj+116)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+117; pile[WZ4]=jvj+116; pile[WZ5]=jvj+71; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+117,jvj+116,jvj+71)*/
pile[v[22]]=699; pile[WZ1]=BL; pile[WZ2]=V124; pile[WZ3]=X; pile[WZ4]=jvj+71; 
(*f[1089])( );     /*AJOUREGBIS2(699,BL,V124,X,jvj+71)*/
goto l26;
l19:if((x[jvj+51]<=0)) goto l13;
x[jvj+52]=s[x[jvj+51]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+51];
pile[v[22]]=102; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,jvj+52,jvj+53)*/
pile[v[22]]=101; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+53,jvj+54)*/
FF=x[jvj+54];
if(FF==749||FF==756) goto l51;
l20:x[jvj+51]=t[x[jvj+51]];
goto l19;
}
