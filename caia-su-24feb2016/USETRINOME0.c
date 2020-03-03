#include "dx.h"
void USETRINOME0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V2=0,V44=0,V46=0,V42=0,V43=0,V45=0,V49=0,V51=0,V47=0,V48=0,V50=0,V17=0,V18=0,RC=0,RD=0,V128=0,V127=0;
int R;
int RX,RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=99;
x[jvj+1]=11478;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1158&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RX=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=67; pile[WZ1]=218; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(67,218,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,R,jvj+7)*/
if((x[jvj+7]!=22)) goto l16;
pile[v[22]]=111; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,R,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+8,jvj+9)*/
if(x[jvj+9]!=29&&x[jvj+9]!=30&&x[jvj+9]!=25) goto l5;
pile[v[22]]=R; pile[WZ1]=jvj+10; 
(*f[887])( );     /*VARND0(R,jvj+10)*/
for(i=x[jvj+10],V5=0;i>0;i=t[i],V5++)  ;
if((V5!=1)) goto l5;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,R,jvj+11)*/
pile[v[22]]=103; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,R,jvj+12)*/
pile[v[22]]=R; 
(*f[897])( );if(v[102]) goto l5;     /*DGR0(R,V2)*/
V2=pile[WZ1]; 
if((V2!=2)) goto l5;
pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(R,jvj+2)*/
if((x[jvj+2]<=0)) goto l5;
x[jvj+13]=s[x[jvj+2]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+2];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[1290])( );if(v[102]) goto l5;     /*DEPEXP0(jvj+13,jvj+14)*/
x[jvj+24]=x[jvj+9] ;z[jvj+24]=z[jvj+9];
x[jvj+21]=x[jvj+11] ;z[jvj+21]=z[jvj+11];
x[jvj+22]=x[jvj+12] ;z[jvj+22]=z[jvj+12];
if((x[jvj+24]!=25)) goto l12;
if((v[53]<=0)) goto l12;
V49=x[R];
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; pile[WZ2]=jvj+14; pile[WZ3]=jvj+23; 
(*f[1463])( );if(v[102]) goto l12;     /*TRILIMRIG0(jvj+21,jvj+22,jvj+14,jvj+23)*/
V51=x[jvj+23];
pile[v[22]]=20; pile[WZ1]=11609; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11609,0,V47)*/
V47=pile[WZ3]; 
pile[WZ1]=V49; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(20,V49,V47,V48)*/
V48=pile[WZ3]; 
pile[WZ1]=V51; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(20,V51,V48,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; 
(*f[40])( );     /*SLG0(V50)*/
l12:pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; pile[WZ2]=jvj+24; pile[v[22]+7]=jvj+25; 
(*f[1462])( );if(v[102]) goto l14;     /*TRILIM0(jvj+21,jvj+22,jvj+24,V17,V18,RC,RD,jvj+25)*/
V17=pile[WZ3]; V18=pile[WZ4]; RC=pile[WZ5]; RD=pile[v[22]+6]; 
x[jvj+27]=incon;
if(x[jvj+25]!=135&&x[jvj+25]!=134) goto l6;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+25; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+25,jvj+27)*/
l6:if((x[jvj+25]==27)) goto l7;
if((x[jvj+25]==28)) goto l8;
if((x[jvj+25]==29)) goto l9;
if((x[jvj+25]==30)) goto l10;
if((x[jvj+25]==25)) goto l11;
if(x[jvj+27]==incon) goto l14;
l13:if((x[jvj+27]==(-99999998))) goto l14;
x[RX]=x[jvj+27] ;z[RX]=z[jvj+27];
x[RES]=68 ;z[RES]=68;
if((v[53]<=0)) goto l17;
V44=x[R];
V46=x[RX];
pile[v[22]]=20; pile[WZ1]=11393; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11393,0,V42)*/
V42=pile[WZ3]; 
pile[WZ1]=V44; pile[WZ2]=V42; 
(*f[39])( );     /*SDX0(20,V44,V42,V43)*/
V43=pile[WZ3]; 
pile[WZ1]=V46; pile[WZ2]=V43; 
(*f[39])( );     /*SDX0(20,V46,V43,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; 
(*f[40])( );     /*SLG0(V45)*/
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:x[jvj+3]=s[x[jvj+15]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+15];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+5; pile[WZ2]=jvj+4; 
(*f[1158])( );if(v[102]) goto l3;     /*USETRINOME0(jvj+3,jvj+5,jvj+4)*/
if((x[jvj+4]==68)) goto l18;
l3:x[jvj+15]=t[x[jvj+15]];
l1:if((x[jvj+15]>0)) goto l2;
x[jvj+24]=x[jvj+9] ;z[jvj+24]=z[jvj+9];
l14:if(x[jvj+24]!=48&&x[jvj+24]!=55) goto l16;
pile[v[22]]=218; pile[WZ1]=jvj+6; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(218,jvj+6,jvj+26)*/
if((x[jvj+26]!=68)) goto l16;
x[RES]=68 ;z[RES]=68;
x[RX]=x[R] ;z[RX]=z[R];
goto l17;
l5:if(x[jvj+9]!=48&&x[jvj+9]!=55) goto l16;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,R,jvj+15)*/
goto l1;
l7:pile[v[22]]=jvj+14; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+28)*/
pile[WZ3]=29; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+43)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V18; pile[WZ4]=jvj+45; 
(*f[192])( );     /*QUADRI4(100,41,130,V18,jvj+45)*/
pile[v[22]]=jvj+43; pile[WZ1]=111; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,111,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; pile[WZ2]=103; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+44,jvj+45,103,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+46; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+16,jvj+46,jvj+29)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=27; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,27,jvj+47)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=RC; pile[WZ4]=jvj+49; 
(*f[192])( );     /*QUADRI4(100,41,130,RC,jvj+49)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; pile[WZ2]=103; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+48,jvj+49,103,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+50; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+16,jvj+50,jvj+30)*/
pile[WZ2]=111; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+28,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=107; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+27,107,jvj+29)*/
pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+27,107,jvj+30)*/
goto l13;
l8:pile[v[22]]=jvj+14; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+31)*/
pile[WZ3]=30; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+51)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V17; pile[WZ4]=jvj+53; 
(*f[192])( );     /*QUADRI4(100,41,130,V17,jvj+53)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; pile[WZ2]=103; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+52,jvj+53,103,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+54; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+17,jvj+54,jvj+32)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=28; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,28,jvj+55)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=RD; pile[WZ4]=jvj+57; 
(*f[192])( );     /*QUADRI4(100,41,130,RD,jvj+57)*/
pile[v[22]]=jvj+55; pile[WZ1]=111; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,111,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; pile[WZ2]=103; pile[WZ3]=jvj+58; 
(*f[58])( );     /*TRI3(jvj+56,jvj+57,103,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+58; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+17,jvj+58,jvj+33)*/
pile[WZ2]=111; pile[WZ3]=jvj+31; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+31,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=107; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+27,107,jvj+32)*/
pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+27,107,jvj+33)*/
goto l13;
l9:pile[v[22]]=jvj+14; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+34)*/
pile[WZ3]=27; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,27,jvj+59)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V17; pile[WZ4]=jvj+61; 
(*f[192])( );     /*QUADRI4(100,41,130,V17,jvj+61)*/
pile[v[22]]=jvj+59; pile[WZ1]=111; pile[WZ2]=jvj+60; 
(*f[54])( );     /*TRI1(jvj+59,111,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; pile[WZ2]=103; pile[WZ3]=jvj+62; 
(*f[58])( );     /*TRI3(jvj+60,jvj+61,103,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+62; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+18,jvj+62,jvj+35)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=29; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+63)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=RD; pile[WZ4]=jvj+65; 
(*f[192])( );     /*QUADRI4(100,41,130,RD,jvj+65)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+65; pile[WZ2]=103; pile[WZ3]=jvj+66; 
(*f[58])( );     /*TRI3(jvj+64,jvj+65,103,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+66; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+18,jvj+66,jvj+36)*/
pile[WZ2]=111; pile[WZ3]=jvj+34; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+34,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=107; pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+27,107,jvj+35)*/
pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+27,107,jvj+36)*/
goto l13;
l10:pile[v[22]]=jvj+14; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+37)*/
pile[WZ3]=28; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,28,jvj+67)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V18; pile[WZ4]=jvj+69; 
(*f[192])( );     /*QUADRI4(100,41,130,V18,jvj+69)*/
pile[v[22]]=jvj+67; pile[WZ1]=111; pile[WZ2]=jvj+68; 
(*f[54])( );     /*TRI1(jvj+67,111,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=jvj+69; pile[WZ2]=103; pile[WZ3]=jvj+70; 
(*f[58])( );     /*TRI3(jvj+68,jvj+69,103,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+70; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+19,jvj+70,jvj+38)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+71; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+71)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=RC; pile[WZ4]=jvj+73; 
(*f[192])( );     /*QUADRI4(100,41,130,RC,jvj+73)*/
pile[v[22]]=jvj+71; pile[WZ1]=111; pile[WZ2]=jvj+72; 
(*f[54])( );     /*TRI1(jvj+71,111,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+73; pile[WZ2]=103; pile[WZ3]=jvj+74; 
(*f[58])( );     /*TRI3(jvj+72,jvj+73,103,jvj+74)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+74; pile[WZ5]=jvj+39; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+19,jvj+74,jvj+39)*/
pile[WZ2]=111; pile[WZ3]=jvj+37; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+37,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=107; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+27,107,jvj+38)*/
pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+27,107,jvj+39)*/
goto l13;
l11:pile[v[22]]=jvj+14; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+40)*/
pile[WZ3]=48; pile[WZ4]=jvj+75; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+75)*/
pile[WZ3]=25; pile[WZ4]=jvj+78; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+78)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V17; pile[WZ4]=jvj+82; 
(*f[192])( );     /*QUADRI4(100,41,130,V17,jvj+82)*/
pile[WZ3]=V18; pile[WZ4]=jvj+80; 
(*f[192])( );     /*QUADRI4(100,41,130,V18,jvj+80)*/
pile[v[22]]=jvj+78; pile[WZ1]=111; pile[WZ2]=jvj+79; 
(*f[54])( );     /*TRI1(jvj+78,111,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+80; pile[WZ2]=103; pile[WZ3]=jvj+81; 
(*f[58])( );     /*TRI3(jvj+79,jvj+80,103,jvj+81)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+82; pile[WZ4]=jvj+81; pile[WZ5]=jvj+76; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+82,jvj+81,jvj+76)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+83; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+83)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V17; pile[WZ4]=jvj+85; 
(*f[192])( );     /*QUADRI4(100,41,130,V17,jvj+85)*/
pile[v[22]]=jvj+83; pile[WZ1]=111; pile[WZ2]=jvj+84; 
(*f[54])( );     /*TRI1(jvj+83,111,jvj+84)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+85; pile[WZ2]=103; pile[WZ3]=jvj+86; 
(*f[58])( );     /*TRI3(jvj+84,jvj+85,103,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+86; pile[WZ5]=jvj+77; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+20,jvj+86,jvj+77)*/
pile[WZ2]=111; pile[WZ3]=jvj+75; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+75,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=107; pile[WZ2]=jvj+76; 
(*f[36])( );     /*PLUSC0(jvj+41,107,jvj+76)*/
pile[WZ2]=jvj+77; 
(*f[36])( );     /*PLUSC0(jvj+41,107,jvj+77)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+87; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+87)*/
pile[WZ3]=25; pile[WZ4]=jvj+90; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+90)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=RC; pile[WZ4]=jvj+94; 
(*f[192])( );     /*QUADRI4(100,41,130,RC,jvj+94)*/
pile[WZ3]=RD; pile[WZ4]=jvj+92; 
(*f[192])( );     /*QUADRI4(100,41,130,RD,jvj+92)*/
pile[v[22]]=jvj+90; pile[WZ1]=111; pile[WZ2]=jvj+91; 
(*f[54])( );     /*TRI1(jvj+90,111,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=jvj+92; pile[WZ2]=103; pile[WZ3]=jvj+93; 
(*f[58])( );     /*TRI3(jvj+91,jvj+92,103,jvj+93)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+94; pile[WZ4]=jvj+93; pile[WZ5]=jvj+88; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+94,jvj+93,jvj+88)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+95; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+95)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=RC; pile[WZ4]=jvj+97; 
(*f[192])( );     /*QUADRI4(100,41,130,RC,jvj+97)*/
pile[v[22]]=jvj+95; pile[WZ1]=111; pile[WZ2]=jvj+96; 
(*f[54])( );     /*TRI1(jvj+95,111,jvj+96)*/
pile[v[22]]=jvj+96; pile[WZ1]=jvj+97; pile[WZ2]=103; pile[WZ3]=jvj+98; 
(*f[58])( );     /*TRI3(jvj+96,jvj+97,103,jvj+98)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+98; pile[WZ5]=jvj+89; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+20,jvj+98,jvj+89)*/
pile[WZ2]=111; pile[WZ3]=jvj+87; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+87,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=107; pile[WZ2]=jvj+88; 
(*f[36])( );     /*PLUSC0(jvj+42,107,jvj+88)*/
pile[WZ2]=jvj+89; 
(*f[36])( );     /*PLUSC0(jvj+42,107,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+40; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+40,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=107; pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+27,107,jvj+41)*/
pile[WZ2]=jvj+42; 
(*f[36])( );     /*PLUSC0(jvj+27,107,jvj+42)*/
goto l13;
l16:x[RX]=x[RES]=incon;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l18:x[jvj+99]=107 ;z[jvj+99]=107;
if((V128=w[x[jvj+99]][1])==incon) goto l4;
if((V128!=23)) goto l19;
V127=x[jvj+3];
pile[v[22]]=jvj+99; pile[WZ1]=R; pile[WZ2]=V127; 
(*f[134])( );     /*OTA0(jvj+99,R,V127)*/
pile[v[22]]=R; pile[WZ1]=jvj+99; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(R,jvj+99,jvj+5)*/
l4:pile[v[22]]=jvj+6; pile[WZ1]=218; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+6,218,68)*/
goto l3;
l19:pile[v[22]]=R; pile[WZ1]=jvj+99; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(R,jvj+99,jvj+5)*/
goto l4;
}
