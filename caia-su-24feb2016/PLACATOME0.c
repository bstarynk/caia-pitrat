#include "dx.h"
void PLACATOME0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V62=0,V66=0,V85=0,V99=0,V365=0,V134=0,W=0,F=0,V181=0,V195=0,V210=0,V249=0,V289=0,V293=0,V312=0,V252=0,V316=0,FF=0,V479=0,V481=0,V154=0,V145=0,V504=0,V456=0,V400=0,V402=0,V468=0,V=0,V19=0,V162=0,V36=0,V360=0,V341=0;
int BL,X,E,FM;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=284;
x[jvj+1]=11043;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==781&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; X=pile[v[22]+1]; E=pile[v[22]+2]; FM=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=102; pile[WZ1]=BL; pile[WZ2]=jvj+158; 
(*f[32])( );if(v[102]) goto l100;     /*FNDO0(102,BL,jvj+158)*/
pile[v[22]]=100; pile[WZ1]=jvj+158; pile[WZ2]=jvj+159; 
(*f[32])( );if(v[102]) goto l100;     /*FNDO0(100,jvj+158,jvj+159)*/
if((x[jvj+159]!=69)) goto l100;
pile[v[22]]=108; pile[WZ2]=jvj+160; 
(*f[33])( );     /*FNDE0(108,jvj+158,jvj+160)*/
l59:if((x[jvj+160]<=0)) goto l100;
x[jvj+161]=s[x[jvj+160]] ;z[jvj+161]=(x[jvj+161]<=sepcte) ? x[jvj+161] : z[jvj+160];
pile[v[22]]=103; pile[WZ1]=jvj+161; pile[WZ2]=jvj+162; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(103,jvj+161,jvj+162)*/
pile[v[22]]=140; pile[WZ1]=jvj+162; 
(*f[44])( );if(v[102]) goto l60;     /*FNDC1(140,jvj+162,V154)*/
V154=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+161; pile[WZ2]=jvj+163; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(102,jvj+161,jvj+163)*/
pile[v[22]]=101; pile[WZ1]=jvj+163; pile[WZ2]=jvj+164; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(101,jvj+163,jvj+164)*/
if((x[jvj+164]==576)) goto l61;
if((x[jvj+164]==749)) goto l62;
if((x[jvj+164]!=758)) goto l94;
pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=jvj+197; 
(*f[33])( );     /*FNDE0(184,BL,jvj+197)*/
V=V154;
x[jvj+198]=d[20];z[jvj+198]=0;
l88:if((x[jvj+198]<=0)) goto l94;
x[jvj+204]=s[x[jvj+198]] ;z[jvj+204]=(x[jvj+204]<=sepcte) ? x[jvj+204] : z[jvj+198];
x[jvj+281]=x[jvj+197] ;z[jvj+281]=z[jvj+197];
l89:if((x[jvj+281]>0)) goto l90;
x[jvj+198]=t[x[jvj+198]];
goto l88;
l2:x[jvj+257]=t[x[jvj+257]];
l1:if((x[jvj+257]<=0)) goto l5;
x[jvj+5]=s[x[jvj+257]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+257];
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=25)) goto l2;
x[jvj+8]=d[20];z[jvj+8]=0;
l3:if((x[jvj+8]<=0)) goto l2;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+9,jvj+5,jvj+10)*/
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=74)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+10,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=43)) goto l4;
pile[v[22]]=103; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+13,jvj+15)*/
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+15,V62)*/
V62=pile[WZ2]; 
if((V36!=V62)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+13,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=489)) goto l4;
pile[v[22]]=268; pile[WZ1]=jvj+9; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(268,jvj+9,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+5; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+18,jvj+5,jvj+19)*/
pile[v[22]]=130; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+19,V66)*/
V66=pile[WZ2]; 
if((V66==0)) goto l8;
l4:x[jvj+8]=t[x[jvj+8]];
goto l3;
l5:pile[v[22]]=jvj+2; pile[WZ1]=jvj+20; 
(*f[1088])( );     /*Z249Z0(jvj+2,jvj+20)*/
x[jvj+258]=x[jvj+20] ;z[jvj+258]=z[jvj+20];
l6:if((x[jvj+258]<=0)) goto l8;
x[jvj+21]=s[x[jvj+258]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+258];
pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+21,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=74)) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+21,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=43)) goto l7;
pile[v[22]]=103; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+24,jvj+26)*/
pile[v[22]]=140; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+26,V85)*/
V85=pile[WZ2]; 
if((V36!=V85)) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+24; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+24,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]==489)) goto l99;
l7:x[jvj+258]=t[x[jvj+258]];
goto l6;
l8:pile[v[22]]=BL; pile[WZ1]=jvj+29; 
(*f[1132])( );     /*Z256Z0(BL,jvj+29)*/
x[jvj+259]=x[jvj+29] ;z[jvj+259]=z[jvj+29];
l9:if((x[jvj+259]<=0)) goto l98;
x[jvj+30]=s[x[jvj+259]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+259];
pile[v[22]]=111; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+30,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]!=44)) goto l10;
pile[v[22]]=103; pile[WZ1]=jvj+30; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+30,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+33,jvj+34)*/
if((x[jvj+34]!=43)) goto l10;
pile[v[22]]=103; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+33,jvj+35)*/
pile[v[22]]=140; pile[WZ1]=jvj+35; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+35,V99)*/
V99=pile[WZ2]; 
if((V36!=V99)) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+33; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+33,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+36,jvj+37)*/
if((x[jvj+37]==489)) goto l99;
l10:x[jvj+259]=t[x[jvj+259]];
goto l9;
l12:x[jvj+38]=s[x[jvj+260]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+260];
pile[v[22]]=107; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(107,jvj+38,jvj+39)*/
x[jvj+261]=x[jvj+39] ;z[jvj+261]=z[jvj+39];
l13:if((x[jvj+261]>0)) goto l14;
x[jvj+260]=t[x[jvj+260]];
l11:if((x[jvj+260]>0)) goto l12;
pile[v[22]]=BL; pile[WZ1]=V365; pile[WZ2]=jvj+51; 
(*f[1134])( );     /*DERIVE0(BL,V365,jvj+51)*/
x[jvj+263]=x[jvj+165] ;z[jvj+263]=z[jvj+165];
l18:if((x[jvj+263]<=0)) goto l86;
x[jvj+43]=s[x[jvj+263]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+263];
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[1135])( );if(v[102]) goto l19;     /*Z182Z0(jvj+43,jvj+44)*/
pile[v[22]]=1141; pile[WZ1]=jvj+41; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(1141,jvj+41,jvj+45)*/
x[jvj+262]=x[jvj+44] ;z[jvj+262]=z[jvj+44];
l15:if((x[jvj+262]<=0)) goto l19;
x[jvj+46]=s[x[jvj+262]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+262];
pile[v[22]]=100; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+46,jvj+47)*/
if((x[jvj+47]!=22)) goto l16;
pile[v[22]]=102; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+46,jvj+48)*/
pile[v[22]]=140; pile[WZ1]=jvj+48; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+48,V134)*/
V134=pile[WZ2]; 
W=V134;
for(a=x[jvj+51];a>0;a=t[a]) if(s[a]==W) goto l17;
l16:x[jvj+262]=t[x[jvj+262]];
goto l15;
l14:x[jvj+40]=s[x[jvj+261]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+261];
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; pile[WZ2]=V365; pile[WZ3]=jvj+42; 
(*f[1133])( );     /*FIGURATV0(jvj+40,jvj+41,V365,jvj+42)*/
if((x[jvj+42]==135)) goto l87;
x[jvj+261]=t[x[jvj+261]];
goto l13;
l17:pile[v[22]]=111; pile[WZ1]=jvj+46; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+46,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+49,jvj+50)*/
F=x[jvj+50];
for(a=x[jvj+45];a>0;a=t[a]) if(s[a]==F) goto l87;
goto l16;
l19:x[jvj+263]=t[x[jvj+263]];
goto l18;
l22:x[jvj+55]=s[x[jvj+265]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+265];
pile[v[22]]=111; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+55,jvj+56)*/
pile[v[22]]=101; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+56,jvj+57)*/
if((x[jvj+57]!=74)) goto l23;
pile[v[22]]=102; pile[WZ1]=jvj+55; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,jvj+55,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+58,jvj+59)*/
if((x[jvj+59]!=43)) goto l23;
pile[v[22]]=103; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(103,jvj+58,jvj+60)*/
pile[v[22]]=140; pile[WZ1]=jvj+60; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(140,jvj+60,V181)*/
V181=pile[WZ2]; 
if((V162!=V181)) goto l23;
pile[v[22]]=102; pile[WZ1]=jvj+58; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,jvj+58,jvj+61)*/
pile[v[22]]=101; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+61,jvj+62)*/
if((x[jvj+62]==365)) goto l95;
l23:x[jvj+265]=t[x[jvj+265]];
l21:if((x[jvj+265]>0)) goto l22;
x[jvj+264]=t[x[jvj+264]];
l20:if((x[jvj+264]<=0)) goto l96;
x[jvj+53]=s[x[jvj+264]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+264];
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; 
(*f[1136])( );     /*Z251Z0(jvj+53,jvj+54)*/
x[jvj+265]=x[jvj+54] ;z[jvj+265]=z[jvj+54];
goto l21;
l25:x[jvj+64]=s[x[jvj+266]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+266];
pile[v[22]]=111; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+64,jvj+65)*/
pile[v[22]]=101; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+65,jvj+66)*/
if((x[jvj+66]!=45)) goto l26;
pile[v[22]]=103; pile[WZ1]=jvj+64; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(103,jvj+64,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+67,jvj+68)*/
if((x[jvj+68]!=43)) goto l26;
pile[v[22]]=103; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(103,jvj+67,jvj+69)*/
pile[v[22]]=140; pile[WZ1]=jvj+69; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(140,jvj+69,V195)*/
V195=pile[WZ2]; 
if((V162!=V195)) goto l26;
pile[v[22]]=102; pile[WZ1]=jvj+67; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+67,jvj+70)*/
pile[v[22]]=101; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+70,jvj+71)*/
if((x[jvj+71]==365)) goto l95;
l26:x[jvj+266]=t[x[jvj+266]];
l24:if((x[jvj+266]>0)) goto l25;
pile[v[22]]=BL; pile[WZ1]=jvj+72; 
(*f[1138])( );     /*Z14Z0(BL,jvj+72)*/
x[jvj+267]=x[jvj+72] ;z[jvj+267]=z[jvj+72];
l27:if((x[jvj+267]>0)) goto l28;
pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(184,BL,jvj+52)*/
x[jvj+264]=x[jvj+52] ;z[jvj+264]=z[jvj+52];
goto l20;
l28:x[jvj+73]=s[x[jvj+267]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+267];
pile[v[22]]=100; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,jvj+73,jvj+74)*/
if((x[jvj+74]!=22)) goto l29;
pile[v[22]]=107; pile[WZ2]=jvj+75; 
(*f[33])( );     /*FNDE0(107,jvj+73,jvj+75)*/
x[jvj+268]=x[jvj+75] ;z[jvj+268]=z[jvj+75];
l30:if((x[jvj+268]<=0)) goto l29;
x[jvj+76]=s[x[jvj+268]] ;z[jvj+76]=(x[jvj+76]<=sepcte) ? x[jvj+76] : z[jvj+268];
pile[v[22]]=111; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+76,jvj+77)*/
pile[v[22]]=101; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+77,jvj+78)*/
if((x[jvj+78]!=44)) goto l31;
pile[v[22]]=103; pile[WZ1]=jvj+76; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(103,jvj+76,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+79,jvj+80)*/
if((x[jvj+80]!=43)) goto l31;
pile[v[22]]=103; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(103,jvj+79,jvj+81)*/
pile[v[22]]=140; pile[WZ1]=jvj+81; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(140,jvj+81,V210)*/
V210=pile[WZ2]; 
if((V162!=V210)) goto l31;
pile[v[22]]=102; pile[WZ1]=jvj+79; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(102,jvj+79,jvj+82)*/
pile[v[22]]=101; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+82,jvj+83)*/
if((x[jvj+83]==365)) goto l95;
l31:x[jvj+268]=t[x[jvj+268]];
goto l30;
l29:x[jvj+267]=t[x[jvj+267]];
goto l27;
l35:x[jvj+269]=t[x[jvj+269]];
l34:if((x[jvj+269]<=0)) goto l106;
x[jvj+96]=s[x[jvj+269]] ;z[jvj+96]=(x[jvj+96]<=sepcte) ? x[jvj+96] : z[jvj+269];
pile[v[22]]=111; pile[WZ1]=jvj+96; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,jvj+96,jvj+97)*/
pile[v[22]]=101; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+97,jvj+98)*/
if((x[jvj+98]!=25)) goto l35;
x[jvj+99]=d[20];z[jvj+99]=0;
l36:if((x[jvj+99]<=0)) goto l35;
x[jvj+100]=s[x[jvj+99]] ;z[jvj+100]=(x[jvj+100]<=sepcte) ? x[jvj+100] : z[jvj+99];
pile[v[22]]=jvj+100; pile[WZ1]=jvj+96; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(jvj+100,jvj+96,jvj+101)*/
pile[v[22]]=111; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(111,jvj+101,jvj+102)*/
pile[v[22]]=101; pile[WZ1]=jvj+102; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+102,jvj+103)*/
if((x[jvj+103]!=74)) goto l37;
pile[v[22]]=102; pile[WZ1]=jvj+101; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(102,jvj+101,jvj+104)*/
pile[v[22]]=100; pile[WZ1]=jvj+104; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(100,jvj+104,jvj+105)*/
if((x[jvj+105]!=43)) goto l37;
pile[v[22]]=103; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(103,jvj+104,jvj+106)*/
pile[v[22]]=140; pile[WZ1]=jvj+106; 
(*f[44])( );if(v[102]) goto l37;     /*FNDC1(140,jvj+106,V289)*/
V289=pile[WZ2]; 
if((V252!=V289)) goto l37;
pile[v[22]]=102; pile[WZ1]=jvj+104; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(102,jvj+104,jvj+107)*/
pile[v[22]]=101; pile[WZ1]=jvj+107; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+107,jvj+108)*/
if((x[jvj+108]!=489)) goto l37;
pile[v[22]]=268; pile[WZ1]=jvj+100; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(268,jvj+100,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=jvj+96; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(jvj+109,jvj+96,jvj+110)*/
pile[v[22]]=130; pile[WZ1]=jvj+110; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(130,jvj+110,V293)*/
V293=pile[WZ2]; 
if((V293==0)) goto l41;
l37:x[jvj+99]=t[x[jvj+99]];
goto l36;
l38:pile[v[22]]=jvj+93; pile[WZ1]=jvj+111; 
(*f[1088])( );     /*Z249Z0(jvj+93,jvj+111)*/
x[jvj+270]=x[jvj+111] ;z[jvj+270]=z[jvj+111];
l39:if((x[jvj+270]>0)) goto l40;
x[jvj+129]=t[x[jvj+129]];
l45:if((x[jvj+129]>0)) goto l46;
pile[v[22]]=E; pile[WZ1]=BL; 
(*f[68])( );     /*PLUE0(E,BL)*/
l106:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l40:x[jvj+112]=s[x[jvj+270]] ;z[jvj+112]=(x[jvj+112]<=sepcte) ? x[jvj+112] : z[jvj+270];
pile[v[22]]=111; pile[WZ1]=jvj+112; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,jvj+112,jvj+113)*/
pile[v[22]]=101; pile[WZ1]=jvj+113; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+113,jvj+114)*/
if((x[jvj+114]!=74)) goto l41;
pile[v[22]]=102; pile[WZ1]=jvj+112; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,jvj+112,jvj+115)*/
pile[v[22]]=100; pile[WZ1]=jvj+115; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(100,jvj+115,jvj+116)*/
if((x[jvj+116]!=43)) goto l41;
pile[v[22]]=103; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,jvj+115,jvj+117)*/
pile[v[22]]=140; pile[WZ1]=jvj+117; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(140,jvj+117,V312)*/
V312=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+115; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,jvj+115,jvj+118)*/
pile[v[22]]=101; pile[WZ1]=jvj+118; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+118,jvj+119)*/
if((x[jvj+119]!=489)) goto l41;
V252=V312;
pile[v[22]]=100; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l106;     /*FNDO0(100,jvj+93,jvj+94)*/
if((x[jvj+94]!=42)) goto l106;
pile[v[22]]=107; pile[WZ2]=jvj+95; 
(*f[33])( );     /*FNDE0(107,jvj+93,jvj+95)*/
x[jvj+269]=x[jvj+95] ;z[jvj+269]=z[jvj+95];
goto l34;
l41:x[jvj+270]=t[x[jvj+270]];
goto l39;
l44:pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=jvj+129; 
(*f[33])( );     /*FNDE0(184,BL,jvj+129)*/
goto l45;
l46:x[jvj+93]=s[x[jvj+129]] ;z[jvj+93]=(x[jvj+93]<=sepcte) ? x[jvj+93] : z[jvj+129];
pile[v[22]]=100; pile[WZ1]=jvj+93; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,jvj+93,jvj+120)*/
if((x[jvj+120]!=42)) goto l38;
pile[v[22]]=107; pile[WZ2]=jvj+121; 
(*f[33])( );     /*FNDE0(107,jvj+93,jvj+121)*/
for(i=x[jvj+121],V316=0;i>0;i=t[i],V316++)  ;
if((V316!=1)) goto l38;
x[jvj+271]=x[jvj+121] ;z[jvj+271]=z[jvj+121];
l42:if((x[jvj+271]<=0)) goto l38;
x[jvj+122]=s[x[jvj+271]] ;z[jvj+122]=(x[jvj+122]<=sepcte) ? x[jvj+122] : z[jvj+271];
pile[v[22]]=111; pile[WZ1]=jvj+122; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(111,jvj+122,jvj+123)*/
pile[v[22]]=101; pile[WZ1]=jvj+123; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(101,jvj+123,jvj+124)*/
if((x[jvj+124]!=44)) goto l43;
pile[v[22]]=103; pile[WZ1]=jvj+122; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(103,jvj+122,jvj+125)*/
pile[v[22]]=100; pile[WZ1]=jvj+125; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(100,jvj+125,jvj+126)*/
if((x[jvj+126]!=43)) goto l43;
pile[v[22]]=102; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(102,jvj+125,jvj+127)*/
pile[v[22]]=101; pile[WZ1]=jvj+127; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(101,jvj+127,jvj+128)*/
if((x[jvj+128]==489)) goto l106;
l43:x[jvj+271]=t[x[jvj+271]];
goto l42;
l49:pile[v[22]]=102; pile[WZ1]=BL; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,BL,jvj+134)*/
pile[v[22]]=100; pile[WZ1]=jvj+134; pile[WZ2]=jvj+135; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+134,jvj+135)*/
if((x[jvj+135]!=69)) goto l44;
pile[v[22]]=108; pile[WZ2]=jvj+136; 
(*f[33])( );     /*FNDE0(108,jvj+134,jvj+136)*/
x[jvj+272]=x[jvj+136] ;z[jvj+272]=z[jvj+136];
l47:if((x[jvj+272]<=0)) goto l50;
x[jvj+130]=s[x[jvj+272]] ;z[jvj+130]=(x[jvj+130]<=sepcte) ? x[jvj+130] : z[jvj+272];
pile[v[22]]=100; pile[WZ1]=jvj+130; pile[WZ2]=jvj+131; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(100,jvj+130,jvj+131)*/
if((x[jvj+131]!=108)) goto l48;
pile[v[22]]=102; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,jvj+130,jvj+132)*/
pile[v[22]]=101; pile[WZ1]=jvj+132; pile[WZ2]=jvj+133; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(101,jvj+132,jvj+133)*/
if((x[jvj+133]==758)) goto l44;
l48:x[jvj+272]=t[x[jvj+272]];
goto l47;
l54:x[jvj+274]=t[x[jvj+274]];
l53:if((x[jvj+274]<=0)) goto l94;
x[jvj+148]=s[x[jvj+274]] ;z[jvj+148]=(x[jvj+148]<=sepcte) ? x[jvj+148] : z[jvj+274];
pile[v[22]]=100; pile[WZ1]=jvj+148; pile[WZ2]=jvj+149; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,jvj+148,jvj+149)*/
if((x[jvj+149]!=42)) goto l54;
pile[v[22]]=107; pile[WZ2]=jvj+150; 
(*f[33])( );     /*FNDE0(107,jvj+148,jvj+150)*/
x[jvj+275]=x[jvj+150] ;z[jvj+275]=z[jvj+150];
l55:if((x[jvj+275]<=0)) goto l54;
x[jvj+151]=s[x[jvj+275]] ;z[jvj+151]=(x[jvj+151]<=sepcte) ? x[jvj+151] : z[jvj+275];
pile[v[22]]=111; pile[WZ1]=jvj+151; pile[WZ2]=jvj+152; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(111,jvj+151,jvj+152)*/
pile[v[22]]=101; pile[WZ1]=jvj+152; pile[WZ2]=jvj+153; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(101,jvj+152,jvj+153)*/
if((x[jvj+153]!=11315)) goto l56;
pile[v[22]]=114; pile[WZ1]=jvj+151; pile[WZ2]=jvj+154; 
(*f[33])( );     /*FNDE0(114,jvj+151,jvj+154)*/
x[jvj+276]=x[jvj+154] ;z[jvj+276]=z[jvj+154];
l57:if((x[jvj+276]<=0)) goto l56;
x[jvj+155]=s[x[jvj+276]] ;z[jvj+155]=(x[jvj+155]<=sepcte) ? x[jvj+155] : z[jvj+276];
pile[v[22]]=102; pile[WZ1]=jvj+155; pile[WZ2]=jvj+156; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,jvj+155,jvj+156)*/
pile[v[22]]=140; pile[WZ1]=jvj+156; 
(*f[44])( );if(v[102]) goto l58;     /*FNDC1(140,jvj+156,V479)*/
V479=pile[WZ2]; 
if((V468!=V479)) goto l58;
pile[v[22]]=103; pile[WZ1]=jvj+155; pile[WZ2]=jvj+157; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,jvj+155,jvj+157)*/
pile[v[22]]=140; pile[WZ1]=jvj+157; 
(*f[44])( );if(v[102]) goto l58;     /*FNDC1(140,jvj+157,V481)*/
V481=pile[WZ2]; 
if((V481!=(-656))) goto l58;
pile[v[22]]=1439; pile[WZ1]=BL; pile[WZ2]=V468; pile[WZ3]=X; 
(*f[1131])( );     /*AJOUREG0(1439,BL,V468,X)*/
l94:x[jvj+211]=x[jvj+164] ;z[jvj+211]=z[jvj+164];
if(x[jvj+211]!=749&&x[jvj+211]!=756) goto l60;
pile[v[22]]=158; pile[WZ1]=jvj+211; pile[WZ2]=jvj+212; 
(*f[32])( );if(v[102]) goto l96;     /*FNDO0(158,jvj+211,jvj+212)*/
V162=V154;
pile[v[22]]=BL; pile[WZ1]=jvj+63; 
(*f[1137])( );     /*Z252Z0(BL,jvj+63)*/
x[jvj+266]=x[jvj+63] ;z[jvj+266]=z[jvj+63];
goto l24;
l56:x[jvj+275]=t[x[jvj+275]];
goto l55;
l58:x[jvj+276]=t[x[jvj+276]];
goto l57;
l60:x[jvj+160]=t[x[jvj+160]];
goto l59;
l61:V145=V154;
pile[v[22]]=576; pile[WZ1]=BL; pile[WZ2]=V145; pile[WZ3]=X; 
(*f[1131])( );     /*AJOUREG0(576,BL,V145,X)*/
goto l94;
l62:pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=jvj+165; 
(*f[33])( );     /*FNDE0(184,BL,jvj+165)*/
V365=V154;
x[jvj+277]=x[jvj+165] ;z[jvj+277]=z[jvj+165];
l63:if((x[jvj+277]>0)) goto l64;
x[jvj+196]=d[13];z[jvj+196]=0;
l84:if((x[jvj+196]>0)) goto l85;
V468=V154;
pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=jvj+147; 
(*f[33])( );     /*FNDE0(184,BL,jvj+147)*/
x[jvj+274]=x[jvj+147] ;z[jvj+274]=z[jvj+147];
goto l53;
l64:x[jvj+140]=s[x[jvj+277]] ;z[jvj+140]=(x[jvj+140]<=sepcte) ? x[jvj+140] : z[jvj+277];
pile[v[22]]=1214; pile[WZ1]=jvj+140; pile[WZ2]=jvj+166; 
(*f[492])( );     /*FIGURE0(1214,jvj+140,jvj+166)*/
if((x[jvj+166]==135)) goto l107;
l65:if((FM!=(-9009))) goto l67;
pile[v[22]]=905; pile[WZ1]=BL; 
(*f[44])( );if(v[102]) goto l67;     /*FNDC1(905,BL,V504)*/
V504=pile[WZ2]; 
if((V504!=(-9113))) goto l67;
pile[v[22]]=365; pile[WZ1]=jvj+140; pile[WZ2]=jvj+168; 
(*f[492])( );     /*FIGURE0(365,jvj+140,jvj+168)*/
if((x[jvj+168]==135)) goto l66;
l67:pile[v[22]]=100; pile[WZ1]=jvj+140; pile[WZ2]=jvj+169; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(100,jvj+140,jvj+169)*/
if((x[jvj+169]!=42)) goto l81;
pile[v[22]]=107; pile[WZ2]=jvj+170; 
(*f[33])( );     /*FNDE0(107,jvj+140,jvj+170)*/
x[jvj+278]=x[jvj+170] ;z[jvj+278]=z[jvj+170];
l68:if((x[jvj+278]>0)) goto l69;
pile[v[22]]=105; pile[WZ1]=jvj+140; pile[WZ2]=jvj+188; 
(*f[33])( );     /*FNDE0(105,jvj+140,jvj+188)*/
x[jvj+280]=x[jvj+188] ;z[jvj+280]=z[jvj+188];
l76:if((x[jvj+280]<=0)) goto l81;
x[jvj+189]=s[x[jvj+280]] ;z[jvj+189]=(x[jvj+189]<=sepcte) ? x[jvj+189] : z[jvj+280];
pile[v[22]]=100; pile[WZ1]=jvj+189; pile[WZ2]=jvj+190; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(100,jvj+189,jvj+190)*/
if((x[jvj+190]!=73)) goto l77;
pile[v[22]]=111; pile[WZ2]=jvj+191; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(111,jvj+189,jvj+191)*/
pile[v[22]]=101; pile[WZ1]=jvj+191; pile[WZ2]=jvj+192; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(101,jvj+191,jvj+192)*/
if((x[jvj+192]!=1290)) goto l77;
pile[v[22]]=102; pile[WZ1]=jvj+189; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(102,jvj+189,jvj+84)*/
pile[v[22]]=111; pile[WZ1]=jvj+84; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(111,jvj+84,jvj+85)*/
pile[v[22]]=101; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(101,jvj+85,jvj+86)*/
if((x[jvj+86]==228)) goto l77;
l78:pile[v[22]]=702; pile[WZ1]=BL; pile[WZ2]=V365; pile[WZ3]=X; 
(*f[1131])( );     /*AJOUREG0(702,BL,V365,X)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+241; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+241)*/
pile[WZ3]=1030; pile[WZ4]=jvj+248; 
(*f[181])( );     /*QUADRI2(100,20,101,1030,jvj+248)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3629); pile[WZ4]=jvj+246; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3629),jvj+246)*/
pile[v[22]]=jvj+246; pile[WZ1]=103; pile[WZ2]=jvj+247; 
(*f[54])( );     /*TRI1(jvj+246,103,jvj+247)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+248; pile[WZ4]=jvj+247; pile[WZ5]=jvj+245; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+248,jvj+247,jvj+245)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=68; pile[WZ4]=jvj+243; 
(*f[181])( );     /*QUADRI2(100,20,101,68,jvj+243)*/
pile[v[22]]=jvj+241; pile[WZ1]=111; pile[WZ2]=jvj+242; 
(*f[54])( );     /*TRI1(jvj+241,111,jvj+242)*/
pile[v[22]]=jvj+242; pile[WZ1]=jvj+243; pile[WZ2]=103; pile[WZ3]=jvj+244; 
(*f[58])( );     /*TRI3(jvj+242,jvj+243,103,jvj+244)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+245; pile[WZ4]=jvj+244; pile[WZ5]=jvj+193; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+245,jvj+244,jvj+193)*/
pile[v[22]]=699; pile[WZ1]=BL; pile[WZ2]=V365; pile[WZ3]=X; pile[WZ4]=jvj+193; 
(*f[1139])( );     /*AJOUREG1(699,BL,V365,X,jvj+193)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+249; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+249)*/
pile[WZ3]=1177; pile[WZ4]=jvj+256; 
(*f[181])( );     /*QUADRI2(100,20,101,1177,jvj+256)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3629); pile[WZ4]=jvj+254; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3629),jvj+254)*/
pile[v[22]]=jvj+254; pile[WZ1]=103; pile[WZ2]=jvj+255; 
(*f[54])( );     /*TRI1(jvj+254,103,jvj+255)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+256; pile[WZ4]=jvj+255; pile[WZ5]=jvj+253; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+256,jvj+255,jvj+253)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=68; pile[WZ4]=jvj+251; 
(*f[181])( );     /*QUADRI2(100,20,101,68,jvj+251)*/
pile[v[22]]=jvj+249; pile[WZ1]=111; pile[WZ2]=jvj+250; 
(*f[54])( );     /*TRI1(jvj+249,111,jvj+250)*/
pile[v[22]]=jvj+250; pile[WZ1]=jvj+251; pile[WZ2]=103; pile[WZ3]=jvj+252; 
(*f[58])( );     /*TRI3(jvj+250,jvj+251,103,jvj+252)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+253; pile[WZ4]=jvj+252; pile[WZ5]=jvj+194; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+253,jvj+252,jvj+194)*/
pile[v[22]]=704; pile[WZ1]=BL; pile[WZ2]=V365; pile[WZ3]=X; pile[WZ4]=jvj+194; 
(*f[1139])( );     /*AJOUREG1(704,BL,V365,X,jvj+194)*/
l77:x[jvj+280]=t[x[jvj+280]];
goto l76;
l66:pile[v[22]]=202; pile[WZ1]=BL; pile[WZ2]=V365; pile[WZ3]=X; 
(*f[1131])( );     /*AJOUREG0(202,BL,V365,X)*/
goto l67;
l69:x[jvj+171]=s[x[jvj+278]] ;z[jvj+171]=(x[jvj+171]<=sepcte) ? x[jvj+171] : z[jvj+278];
pile[v[22]]=111; pile[WZ1]=jvj+171; pile[WZ2]=jvj+172; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(111,jvj+171,jvj+172)*/
pile[v[22]]=101; pile[WZ1]=jvj+172; pile[WZ2]=jvj+173; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(101,jvj+172,jvj+173)*/
if((x[jvj+173]==25)) goto l72;
if((x[jvj+173]!=11291)) goto l70;
pile[v[22]]=114; pile[WZ1]=jvj+171; pile[WZ2]=jvj+184; 
(*f[33])( );     /*FNDE0(114,jvj+171,jvj+184)*/
x[jvj+279]=x[jvj+184] ;z[jvj+279]=z[jvj+184];
l74:if((x[jvj+279]<=0)) goto l70;
x[jvj+185]=s[x[jvj+279]] ;z[jvj+185]=(x[jvj+185]<=sepcte) ? x[jvj+185] : z[jvj+279];
pile[v[22]]=102; pile[WZ1]=jvj+185; pile[WZ2]=jvj+186; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(102,jvj+185,jvj+186)*/
pile[v[22]]=140; pile[WZ1]=jvj+186; 
(*f[44])( );if(v[102]) goto l75;     /*FNDC1(140,jvj+186,V400)*/
V400=pile[WZ2]; 
if((V365!=V400)) goto l75;
pile[v[22]]=103; pile[WZ1]=jvj+185; pile[WZ2]=jvj+187; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(103,jvj+185,jvj+187)*/
pile[v[22]]=140; pile[WZ1]=jvj+187; 
(*f[44])( );if(v[102]) goto l75;     /*FNDC1(140,jvj+187,V402)*/
V402=pile[WZ2]; 
if((V402!=(-591))) goto l75;
pile[v[22]]=1321; pile[WZ1]=BL; pile[WZ2]=V365; pile[WZ3]=X; 
(*f[1131])( );     /*AJOUREG0(1321,BL,V365,X)*/
l75:x[jvj+279]=t[x[jvj+279]];
goto l74;
l70:x[jvj+278]=t[x[jvj+278]];
goto l68;
l72:x[jvj+174]=d[20];z[jvj+174]=0;
l71:if((x[jvj+174]<=0)) goto l70;
x[jvj+175]=s[x[jvj+174]] ;z[jvj+175]=(x[jvj+175]<=sepcte) ? x[jvj+175] : z[jvj+174];
pile[v[22]]=jvj+175; pile[WZ1]=jvj+171; pile[WZ2]=jvj+176; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(jvj+175,jvj+171,jvj+176)*/
pile[v[22]]=100; pile[WZ1]=jvj+176; pile[WZ2]=jvj+177; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(100,jvj+176,jvj+177)*/
if((x[jvj+177]!=43)) goto l73;
pile[v[22]]=103; pile[WZ2]=jvj+178; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(103,jvj+176,jvj+178)*/
pile[v[22]]=140; pile[WZ1]=jvj+178; 
(*f[44])( );if(v[102]) goto l73;     /*FNDC1(140,jvj+178,V456)*/
V456=pile[WZ2]; 
if((V365!=V456)) goto l73;
pile[v[22]]=102; pile[WZ1]=jvj+176; pile[WZ2]=jvj+179; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(102,jvj+176,jvj+179)*/
pile[v[22]]=101; pile[WZ1]=jvj+179; pile[WZ2]=jvj+180; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(101,jvj+179,jvj+180)*/
if((x[jvj+180]!=202)) goto l73;
pile[v[22]]=268; pile[WZ1]=jvj+175; pile[WZ2]=jvj+181; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(268,jvj+175,jvj+181)*/
pile[v[22]]=jvj+181; pile[WZ1]=jvj+171; pile[WZ2]=jvj+182; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(jvj+181,jvj+171,jvj+182)*/
pile[v[22]]=101; pile[WZ1]=jvj+182; pile[WZ2]=jvj+183; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(101,jvj+182,jvj+183)*/
if((x[jvj+183]!=68)) goto l73;
pile[v[22]]=202; pile[WZ1]=BL; pile[WZ2]=V365; pile[WZ3]=X; 
(*f[1131])( );     /*AJOUREG0(202,BL,V365,X)*/
l73:x[jvj+174]=t[x[jvj+174]];
goto l71;
l80:x[jvj+143]=s[x[jvj+195]] ;z[jvj+143]=(x[jvj+143]<=sepcte) ? x[jvj+143] : z[jvj+195];
pile[v[22]]=100; pile[WZ1]=jvj+140; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(100,jvj+140,jvj+141)*/
if((x[jvj+141]!=42)) goto l82;
pile[v[22]]=107; pile[WZ2]=jvj+142; 
(*f[33])( );     /*FNDE0(107,jvj+140,jvj+142)*/
pile[v[22]]=218; pile[WZ1]=jvj+143; pile[WZ2]=jvj+144; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(218,jvj+143,jvj+144)*/
x[jvj+273]=x[jvj+142] ;z[jvj+273]=z[jvj+142];
l52:if((x[jvj+273]<=0)) goto l82;
x[jvj+145]=s[x[jvj+273]] ;z[jvj+145]=(x[jvj+145]<=sepcte) ? x[jvj+145] : z[jvj+273];
pile[v[22]]=jvj+144; pile[WZ1]=jvj+145; pile[WZ2]=jvj+146; 
(*f[492])( );     /*FIGURE0(jvj+144,jvj+145,jvj+146)*/
if((x[jvj+146]==135)) goto l83;
x[jvj+273]=t[x[jvj+273]];
goto l52;
l81:x[jvj+195]=d[195];z[jvj+195]=0;
l79:if((x[jvj+195]>0)) goto l80;
x[jvj+277]=t[x[jvj+277]];
goto l63;
l83:pile[v[22]]=jvj+143; pile[WZ1]=BL; pile[WZ2]=V365; pile[WZ3]=X; 
(*f[1131])( );     /*AJOUREG0(jvj+143,BL,V365,X)*/
l82:x[jvj+195]=t[x[jvj+195]];
goto l79;
l85:x[jvj+41]=s[x[jvj+196]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+196];
x[jvj+260]=x[jvj+165] ;z[jvj+260]=z[jvj+165];
goto l11;
l87:pile[v[22]]=jvj+41; pile[WZ1]=BL; pile[WZ2]=V365; pile[WZ3]=X; 
(*f[1131])( );     /*AJOUREG0(jvj+41,BL,V365,X)*/
l86:x[jvj+196]=t[x[jvj+196]];
goto l84;
l90:x[jvj+199]=s[x[jvj+281]] ;z[jvj+199]=(x[jvj+199]<=sepcte) ? x[jvj+199] : z[jvj+281];
pile[v[22]]=107; pile[WZ1]=jvj+199; pile[WZ2]=jvj+200; 
(*f[33])( );     /*FNDE0(107,jvj+199,jvj+200)*/
x[jvj+282]=x[jvj+200] ;z[jvj+282]=z[jvj+200];
l91:if((x[jvj+282]>0)) goto l92;
x[jvj+281]=t[x[jvj+281]];
goto l89;
l92:x[jvj+201]=s[x[jvj+282]] ;z[jvj+201]=(x[jvj+201]<=sepcte) ? x[jvj+201] : z[jvj+282];
pile[v[22]]=111; pile[WZ1]=jvj+201; pile[WZ2]=jvj+202; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(111,jvj+201,jvj+202)*/
pile[v[22]]=101; pile[WZ1]=jvj+202; pile[WZ2]=jvj+203; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(101,jvj+202,jvj+203)*/
if((x[jvj+203]!=25)) goto l93;
pile[v[22]]=jvj+204; pile[WZ1]=jvj+201; pile[WZ2]=jvj+205; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(jvj+204,jvj+201,jvj+205)*/
pile[v[22]]=100; pile[WZ1]=jvj+205; pile[WZ2]=jvj+206; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(100,jvj+205,jvj+206)*/
if((x[jvj+206]!=43)) goto l93;
pile[v[22]]=103; pile[WZ2]=jvj+207; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(103,jvj+205,jvj+207)*/
pile[v[22]]=140; pile[WZ1]=jvj+207; 
(*f[44])( );if(v[102]) goto l93;     /*FNDC1(140,jvj+207,V19)*/
V19=pile[WZ2]; 
if((V!=V19)) goto l93;
pile[v[22]]=102; pile[WZ1]=jvj+205; pile[WZ2]=jvj+208; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(102,jvj+205,jvj+208)*/
pile[v[22]]=101; pile[WZ1]=jvj+208; pile[WZ2]=jvj+209; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(101,jvj+208,jvj+209)*/
x[jvj+210]=x[jvj+209] ;z[jvj+210]=z[jvj+209];
if(x[jvj+210]!=473&&x[jvj+210]!=472&&x[jvj+210]!=750&&x[jvj+210]!=688) goto l93;
pile[v[22]]=jvj+210; pile[WZ1]=BL; pile[WZ2]=V; pile[WZ3]=X; 
(*f[1131])( );     /*AJOUREG0(jvj+210,BL,V,X)*/
l93:x[jvj+282]=t[x[jvj+282]];
goto l91;
l95:pile[v[22]]=jvj+212; pile[WZ1]=BL; pile[WZ2]=V162; pile[WZ3]=X; 
(*f[1131])( );     /*AJOUREG0(jvj+212,BL,V162,X)*/
l96:pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=jvj+213; 
(*f[33])( );     /*FNDE0(184,BL,jvj+213)*/
pile[v[22]]=218; pile[WZ1]=jvj+211; pile[WZ2]=jvj+214; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(218,jvj+211,jvj+214)*/
V36=V154;
x[jvj+283]=x[jvj+213] ;z[jvj+283]=z[jvj+213];
l97:if((x[jvj+283]<=0)) goto l60;
x[jvj+2]=s[x[jvj+283]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+283];
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=42)) goto l5;
pile[v[22]]=107; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+4)*/
x[jvj+257]=x[jvj+4] ;z[jvj+257]=z[jvj+4];
goto l1;
l99:pile[v[22]]=jvj+214; pile[WZ1]=BL; pile[WZ2]=V36; pile[WZ3]=X; 
(*f[1131])( );     /*AJOUREG0(jvj+214,BL,V36,X)*/
l98:x[jvj+283]=t[x[jvj+283]];
goto l97;
l100:pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=jvj+215; 
(*f[33])( );     /*FNDE0(184,BL,jvj+215)*/
l101:if((x[jvj+215]>0)) goto l102;
pile[v[22]]=102; pile[WZ1]=BL; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(102,BL,jvj+87)*/
pile[v[22]]=100; pile[WZ1]=jvj+87; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(100,jvj+87,jvj+88)*/
if((x[jvj+88]!=69)) goto l49;
pile[v[22]]=108; pile[WZ2]=jvj+89; 
(*f[33])( );     /*FNDE0(108,jvj+87,jvj+89)*/
l32:if((x[jvj+89]<=0)) goto l49;
x[jvj+90]=s[x[jvj+89]] ;z[jvj+90]=(x[jvj+90]<=sepcte) ? x[jvj+90] : z[jvj+89];
pile[v[22]]=102; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+90,jvj+91)*/
pile[v[22]]=101; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+91,jvj+92)*/
V249=x[jvj+92];
if(V249==576||V249==892||V249==1186) goto l106;
l33:x[jvj+89]=t[x[jvj+89]];
goto l32;
l102:x[jvj+216]=s[x[jvj+215]] ;z[jvj+216]=(x[jvj+216]<=sepcte) ? x[jvj+216] : z[jvj+215];
pile[v[22]]=100; pile[WZ1]=jvj+216; pile[WZ2]=jvj+217; 
(*f[32])( );if(v[102]) goto l103;     /*FNDO0(100,jvj+216,jvj+217)*/
if((x[jvj+217]!=42)) goto l103;
pile[v[22]]=107; pile[WZ2]=jvj+218; 
(*f[33])( );     /*FNDE0(107,jvj+216,jvj+218)*/
x[jvj+284]=x[jvj+218] ;z[jvj+284]=z[jvj+218];
l104:if((x[jvj+284]<=0)) goto l103;
x[jvj+219]=s[x[jvj+284]] ;z[jvj+219]=(x[jvj+219]<=sepcte) ? x[jvj+219] : z[jvj+284];
pile[v[22]]=111; pile[WZ1]=jvj+219; pile[WZ2]=jvj+220; 
(*f[32])( );if(v[102]) goto l105;     /*FNDO0(111,jvj+219,jvj+220)*/
pile[v[22]]=101; pile[WZ1]=jvj+220; pile[WZ2]=jvj+221; 
(*f[32])( );if(v[102]) goto l105;     /*FNDO0(101,jvj+220,jvj+221)*/
if((x[jvj+221]!=44)) goto l105;
pile[v[22]]=102; pile[WZ1]=jvj+219; pile[WZ2]=jvj+222; 
(*f[32])( );if(v[102]) goto l105;     /*FNDO0(102,jvj+219,jvj+222)*/
pile[v[22]]=101; pile[WZ1]=jvj+222; pile[WZ2]=jvj+223; 
(*f[32])( );if(v[102]) goto l105;     /*FNDO0(101,jvj+222,jvj+223)*/
pile[v[22]]=103; pile[WZ1]=jvj+219; pile[WZ2]=jvj+224; 
(*f[32])( );if(v[102]) goto l105;     /*FNDO0(103,jvj+219,jvj+224)*/
pile[v[22]]=100; pile[WZ1]=jvj+224; pile[WZ2]=jvj+225; 
(*f[32])( );if(v[102]) goto l105;     /*FNDO0(100,jvj+224,jvj+225)*/
if((x[jvj+225]!=43)) goto l105;
pile[v[22]]=103; pile[WZ2]=jvj+226; 
(*f[32])( );if(v[102]) goto l105;     /*FNDO0(103,jvj+224,jvj+226)*/
pile[v[22]]=140; pile[WZ1]=jvj+226; 
(*f[44])( );if(v[102]) goto l105;     /*FNDC1(140,jvj+226,V360)*/
V360=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+224; pile[WZ2]=jvj+227; 
(*f[32])( );if(v[102]) goto l105;     /*FNDO0(102,jvj+224,jvj+227)*/
pile[v[22]]=101; pile[WZ1]=jvj+227; pile[WZ2]=jvj+228; 
(*f[32])( );if(v[102]) goto l105;     /*FNDO0(101,jvj+227,jvj+228)*/
if((x[jvj+228]!=971)) goto l105;
x[jvj+229]=x[jvj+223] ;z[jvj+229]=z[jvj+223];
V341=V360;
pile[v[22]]=jvj+229; pile[WZ1]=BL; pile[WZ2]=V341; pile[WZ3]=X; 
(*f[1131])( );     /*AJOUREG0(jvj+229,BL,V341,X)*/
l105:x[jvj+284]=t[x[jvj+284]];
goto l104;
l103:x[jvj+215]=t[x[jvj+215]];
goto l101;
l107:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+230; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+230)*/
pile[WZ3]=1214; pile[WZ4]=jvj+234; 
(*f[181])( );     /*QUADRI2(100,20,101,1214,jvj+234)*/
pile[WZ3]=1216; pile[WZ4]=jvj+237; 
(*f[181])( );     /*QUADRI2(100,20,101,1216,jvj+237)*/
pile[WZ3]=498; pile[WZ4]=jvj+240; 
(*f[181])( );     /*QUADRI2(100,20,101,498,jvj+240)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3629); pile[WZ4]=jvj+238; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3629),jvj+238)*/
pile[v[22]]=jvj+238; pile[WZ1]=103; pile[WZ2]=jvj+239; 
(*f[54])( );     /*TRI1(jvj+238,103,jvj+239)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+240; pile[WZ4]=jvj+239; pile[WZ5]=jvj+235; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+240,jvj+239,jvj+235)*/
pile[v[22]]=jvj+235; pile[WZ1]=103; pile[WZ2]=jvj+236; 
(*f[54])( );     /*TRI1(jvj+235,103,jvj+236)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+237; pile[WZ4]=jvj+236; pile[WZ5]=jvj+232; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+237,jvj+236,jvj+232)*/
pile[v[22]]=jvj+230; pile[WZ1]=111; pile[WZ2]=jvj+231; 
(*f[54])( );     /*TRI1(jvj+230,111,jvj+231)*/
pile[v[22]]=jvj+231; pile[WZ1]=jvj+232; pile[WZ2]=103; pile[WZ3]=jvj+233; 
(*f[58])( );     /*TRI3(jvj+231,jvj+232,103,jvj+233)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+234; pile[WZ4]=jvj+233; pile[WZ5]=jvj+167; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+234,jvj+233,jvj+167)*/
pile[v[22]]=699; pile[WZ1]=BL; pile[WZ2]=V365; pile[WZ3]=X; pile[WZ4]=jvj+167; 
(*f[1139])( );     /*AJOUREG1(699,BL,V365,X,jvj+167)*/
goto l65;
l50:if((x[jvj+136]<=0)) goto l44;
x[jvj+137]=s[x[jvj+136]] ;z[jvj+137]=(x[jvj+137]<=sepcte) ? x[jvj+137] : z[jvj+136];
pile[v[22]]=102; pile[WZ1]=jvj+137; pile[WZ2]=jvj+138; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(102,jvj+137,jvj+138)*/
pile[v[22]]=101; pile[WZ1]=jvj+138; pile[WZ2]=jvj+139; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+138,jvj+139)*/
FF=x[jvj+139];
if(FF==749||FF==756) goto l106;
l51:x[jvj+136]=t[x[jvj+136]];
goto l50;
}
