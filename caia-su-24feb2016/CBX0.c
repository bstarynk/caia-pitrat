#include "dx.h"
void CBX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V21=0,V43=0,V52=0,V59=0,V30=0,V=0,V33=0,V90=0,V68=0,V91=0,V77=0;
int R,BL,F,EV;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=81;
x[jvj+1]=10176;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1636&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; BL=pile[v[22]+1]; F=pile[v[22]+2]; EV=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,R,jvj+35)*/
l21:if((x[jvj+35]>0)) goto l22;
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,R,jvj+37)*/
if((x[jvj+37]!=42)) goto l25;
pile[v[22]]=105; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(105,R,jvj+38)*/
l23:if((x[jvj+38]<=0)) goto l25;
x[jvj+39]=s[x[jvj+38]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+38];
pile[v[22]]=111; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,jvj+39,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+40,jvj+41)*/
if((x[jvj+41]!=82)) goto l24;
pile[v[22]]=436; pile[WZ1]=jvj+39; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(436,jvj+39,jvj+42)*/
pile[v[22]]=140; pile[WZ1]=jvj+42; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(140,jvj+42,V30)*/
V30=pile[WZ2]; 
V=V30;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(107,R,jvj+2)*/
x[jvj+69]=x[jvj+2] ;z[jvj+69]=z[jvj+2];
l1:if((x[jvj+69]>0)) goto l2;
x[jvj+7]=vo[15];z[jvj+7]=vz[15];
pile[v[22]]=357; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(357,jvj+7,jvj+8)*/
x[jvj+70]=x[jvj+8] ;z[jvj+70]=z[jvj+8];
l4:if((x[jvj+70]<=0)) goto l24;
x[jvj+9]=s[x[jvj+70]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+70];
if((x[jvj+9]==x[R])) goto l5;
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=42)) goto l5;
pile[v[22]]=105; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(105,jvj+9,jvj+11)*/
x[jvj+71]=x[jvj+11] ;z[jvj+71]=z[jvj+11];
l6:if((x[jvj+71]<=0)) goto l5;
x[jvj+12]=s[x[jvj+71]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+71];
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=82)) goto l7;
pile[v[22]]=436; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(436,jvj+12,jvj+15)*/
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+15,V21)*/
V21=pile[WZ2]; 
if((V!=V21)) goto l7;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=178; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,178,jvj+63)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+65; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+65)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+65; pile[WZ4]=jvj+64; pile[WZ5]=jvj+43; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+65,jvj+64,jvj+43)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(R,107,jvj+43)*/
l24:x[jvj+38]=t[x[jvj+38]];
goto l23;
l2:x[jvj+3]=s[x[jvj+69]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+69];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=178)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+3,jvj+6)*/
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+6,V10)*/
V10=pile[WZ2]; 
if((V==V10)) goto l24;
l3:x[jvj+69]=t[x[jvj+69]];
goto l1;
l5:x[jvj+70]=t[x[jvj+70]];
goto l4;
l7:x[jvj+71]=t[x[jvj+71]];
goto l6;
l11:x[jvj+20]=s[x[jvj+73]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+73];
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]!=42)) goto l13;
pile[v[22]]=107; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,jvj+20,jvj+22)*/
x[jvj+74]=x[jvj+22] ;z[jvj+74]=z[jvj+22];
l14:if((x[jvj+74]<=0)) goto l13;
x[jvj+23]=s[x[jvj+74]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+74];
pile[v[22]]=111; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+23,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=225)) goto l15;
pile[v[22]]=102; pile[WZ1]=jvj+23; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+23,jvj+26)*/
pile[v[22]]=140; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+26,V52)*/
V52=pile[WZ2]; 
if((V33==V52)) goto l27;
l15:x[jvj+74]=t[x[jvj+74]];
goto l14;
l12:x[jvj+73]=x[EV] ;z[jvj+73]=z[EV];
l10:if((x[jvj+73]>0)) goto l11;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=225; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,225,jvj+66)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V33; pile[WZ4]=jvj+68; 
(*f[270])( );     /*QUADRI7(100,21,140,V33,jvj+68)*/
pile[v[22]]=jvj+66; pile[WZ1]=111; pile[WZ2]=jvj+67; 
(*f[54])( );     /*TRI1(jvj+66,111,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+68; pile[WZ4]=jvj+67; pile[WZ5]=jvj+48; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+68,jvj+67,jvj+48)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+48; 
(*f[36])( );     /*PLUSC0(R,107,jvj+48)*/
l27:V90=t[V90];
l26:if((V90<=0)) goto l40;
V33=s[V90];
for(a=x[jvj+47];a>0;a=t[a]) if(s[a]==V33) goto l28;
goto l27;
l13:x[jvj+73]=t[x[jvj+73]];
goto l10;
l16:pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,R,jvj+27)*/
if((x[jvj+27]!=42)) goto l12;
pile[v[22]]=105; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(105,R,jvj+28)*/
x[jvj+75]=x[jvj+28] ;z[jvj+75]=z[jvj+28];
l17:if((x[jvj+75]<=0)) goto l12;
x[jvj+29]=s[x[jvj+75]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+75];
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+29,jvj+30)*/
if((x[jvj+30]!=73)) goto l18;
pile[v[22]]=128; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(128,jvj+29,jvj+31)*/
pile[v[22]]=111; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+29,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=255)) goto l18;
x[jvj+76]=x[jvj+31] ;z[jvj+76]=z[jvj+31];
l19:if((x[jvj+76]<=0)) goto l18;
x[jvj+34]=s[x[jvj+76]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+76];
pile[v[22]]=140; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+34,V59)*/
V59=pile[WZ2]; 
if((V33==V59)) goto l27;
l20:x[jvj+76]=t[x[jvj+76]];
goto l19;
l18:x[jvj+75]=t[x[jvj+75]];
goto l17;
l22:x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=jvj+36; pile[WZ1]=R; pile[WZ2]=F; pile[WZ3]=EV; 
(*f[1636])( );     /*CBX0(jvj+36,R,F,EV)*/
x[jvj+35]=t[x[jvj+35]];
goto l21;
l25:x[jvj+44]=vo[15];z[jvj+44]=vz[15];
pile[v[22]]=222; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(222,jvj+44,jvj+45)*/
pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(184,BL,jvj+46)*/
if((x[jvj+46]==0)) goto l40;
pile[v[22]]=R; pile[WZ1]=jvj+47; 
(*f[330])( );     /*USD0(R,jvj+47)*/
V90=x[F];
goto l26;
l28:for(a=x[jvj+45];a>0;a=t[a]) if(s[a]==V33) goto l27;
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,R,jvj+16)*/
if((x[jvj+16]!=42)) goto l16;
pile[v[22]]=105; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(105,R,jvj+17)*/
x[jvj+72]=x[jvj+17] ;z[jvj+72]=z[jvj+17];
l8:if((x[jvj+72]<=0)) goto l16;
x[jvj+18]=s[x[jvj+72]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+72];
pile[v[22]]=436; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(436,jvj+18,jvj+19)*/
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+19,V43)*/
V43=pile[WZ2]; 
if((V33==V43)) goto l27;
l9:x[jvj+72]=t[x[jvj+72]];
goto l8;
l30:V68=s[V91];
pile[v[22]]=jvj+49; pile[WZ1]=V68; 
(*f[331])( );     /*PLUE3(jvj+49,V68)*/
V91=t[V91];
l29:if((V91>0)) goto l30;
x[jvj+77]=x[jvj+62] ;z[jvj+77]=z[jvj+62];
l31:if((x[jvj+77]>0)) goto l32;
x[jvj+81]=x[jvj+62] ;z[jvj+81]=z[jvj+62];
l43:if((x[jvj+81]>0)) goto l44;
x[jvj+80]=t[x[jvj+80]];
l41:if((x[jvj+80]>0)) goto l42;
x[jvj+58]=t[x[jvj+58]];
l38:if((x[jvj+58]>0)) goto l39;
l45:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l32:x[jvj+50]=s[x[jvj+77]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+77];
pile[v[22]]=100; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(100,jvj+50,jvj+51)*/
if((x[jvj+51]!=42)) goto l33;
pile[v[22]]=105; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(105,jvj+50,jvj+52)*/
x[jvj+78]=x[jvj+52] ;z[jvj+78]=z[jvj+52];
l34:if((x[jvj+78]<=0)) goto l33;
x[jvj+53]=s[x[jvj+78]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+78];
pile[v[22]]=436; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(436,jvj+53,jvj+54)*/
pile[v[22]]=140; pile[WZ1]=jvj+54; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(140,jvj+54,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=jvj+49; pile[WZ1]=V77; 
(*f[331])( );     /*PLUE3(jvj+49,V77)*/
l35:x[jvj+78]=t[x[jvj+78]];
goto l34;
l33:x[jvj+77]=t[x[jvj+77]];
goto l31;
l37:x[jvj+57]=s[x[jvj+79]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+79];
pile[v[22]]=jvj+55; pile[WZ1]=jvj+57; 
(*f[68])( );     /*PLUE0(jvj+55,jvj+57)*/
x[jvj+79]=t[x[jvj+79]];
l36:if((x[jvj+79]>0)) goto l37;
pile[v[22]]=jvj+56; pile[WZ1]=jvj+61; pile[WZ2]=jvj+49; pile[WZ3]=jvj+55; 
(*f[1636])( );     /*CBX0(jvj+56,jvj+61,jvj+49,jvj+55)*/
x[jvj+81]=t[x[jvj+81]];
goto l43;
l39:x[jvj+59]=s[x[jvj+58]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+58];
pile[v[22]]=jvj+59; pile[WZ1]=R; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(jvj+59,R,jvj+60)*/
x[jvj+80]=x[jvj+60] ;z[jvj+80]=z[jvj+60];
goto l41;
l40:x[jvj+58]=d[10];z[jvj+58]=0;
goto l38;
l42:x[jvj+61]=s[x[jvj+80]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+80];
pile[v[22]]=184; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[33])( );     /*FNDE0(184,jvj+61,jvj+62)*/
x[jvj+49]=0 ;z[jvj+49]=0;
V91=x[F];
goto l29;
l44:x[jvj+56]=s[x[jvj+81]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+81];
x[jvj+55]=0 ;z[jvj+55]=0;
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; 
(*f[68])( );     /*PLUE0(jvj+55,jvj+56)*/
x[jvj+79]=x[EV] ;z[jvj+79]=z[EV];
goto l36;
}
