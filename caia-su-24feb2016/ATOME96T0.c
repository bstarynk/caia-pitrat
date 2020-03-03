#include "dx.h"
void ATOME96T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V53=0,V94=0,V65=0,V96=0,V56=0,V79=0,V98=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=131;
x[jvj+1]=20096;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3252&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,R,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=25)) goto l12;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(870,R,V53)*/
V53=pile[WZ2]; 
if((V53!=2)) goto l12;
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+8,V94)*/
V94=pile[WZ2]; 
x[jvj+9]=d[20];z[jvj+9]=0;
l5:if((x[jvj+9]<=0)) goto l12;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+10,R,jvj+11)*/
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=1273)) goto l6;
pile[v[22]]=268; pile[WZ1]=jvj+10; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+10,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+14,R,jvj+15)*/
pile[v[22]]=130; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+15,V65)*/
V65=pile[WZ2]; 
if((V65!=1)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+11; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+11,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+18]=w[x[jvj+17]][3])==incon) goto l6;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+18; pile[WZ3]=jvj+19; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(jvj+16,jvj+18,V96,jvj+19)*/
V96=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+11; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(107,jvj+11,jvj+20)*/
x[jvj+129]=x[jvj+20] ;z[jvj+129]=z[jvj+20];
l1:if((x[jvj+129]<=0)) goto l6;
x[jvj+2]=s[x[jvj+129]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+129];
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=484)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+21; 
(*f[200])( );if(v[102]) goto l6;     /*NDD0(jvj+2,jvj+21)*/
pile[v[22]]=509; pile[WZ2]=jvj+22; 
(*f[1969])( );     /*FNDEND0(509,jvj+21,jvj+22)*/
x[jvj+130]=x[jvj+20] ;z[jvj+130]=z[jvj+20];
l3:if((x[jvj+130]<=0)) goto l6;
x[jvj+4]=s[x[jvj+130]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+130];
if((x[jvj+4]==x[jvj+2])) goto l4;
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=484)) goto l4;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+23)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+24)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+25)*/
x[jvj+64]=x[jvj+23] ;z[jvj+64]=z[jvj+23];
x[jvj+84]=x[jvj+23] ;z[jvj+84]=z[jvj+23];
x[jvj+97]=x[jvj+23] ;z[jvj+97]=z[jvj+23];
x[jvj+115]=x[jvj+23] ;z[jvj+115]=z[jvj+23];
x[jvj+128]=x[jvj+23] ;z[jvj+128]=z[jvj+23];
x[jvj+70]=x[jvj+24] ;z[jvj+70]=z[jvj+24];
x[jvj+82]=x[jvj+24] ;z[jvj+82]=z[jvj+24];
x[jvj+100]=x[jvj+24] ;z[jvj+100]=z[jvj+24];
x[jvj+108]=x[jvj+24] ;z[jvj+108]=z[jvj+24];
x[jvj+126]=x[jvj+24] ;z[jvj+126]=z[jvj+24];
x[jvj+76]=x[jvj+25] ;z[jvj+76]=z[jvj+25];
x[jvj+89]=x[jvj+25] ;z[jvj+89]=z[jvj+25];
x[jvj+102]=x[jvj+25] ;z[jvj+102]=z[jvj+25];
x[jvj+110]=x[jvj+25] ;z[jvj+110]=z[jvj+25];
x[jvj+123]=x[jvj+25] ;z[jvj+123]=z[jvj+25];
x[jvj+26]=d[20];z[jvj+26]=0;
l7:if((x[jvj+26]<=0)) goto l6;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=268; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+27,jvj+28)*/
x[jvj+131]=x[jvj+22] ;z[jvj+131]=z[jvj+22];
l9:if((x[jvj+131]<=0)) goto l8;
x[jvj+29]=s[x[jvj+131]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+131];
if((x[jvj+29]==x[R])) goto l10;
pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+29,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=25)) goto l10;
pile[v[22]]=870; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(870,jvj+29,V56)*/
V56=pile[WZ2]; 
if((V56!=2)) goto l10;
pile[v[22]]=jvj+27; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+27,jvj+29,jvj+32)*/
pile[v[22]]=111; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+32,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]!=1273)) goto l10;
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+28,jvj+29,jvj+35)*/
pile[v[22]]=130; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+35,V79)*/
V79=pile[WZ2]; 
if((V79!=1)) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+32; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+32,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+18; pile[WZ3]=jvj+37; 
(*f[45])( );if(v[102]) goto l10;     /*FNDZ0(jvj+36,jvj+18,V98,jvj+37)*/
V98=pile[WZ2]; 
if((V96==V98)) goto l10;
pile[v[22]]=107; pile[WZ1]=jvj+32; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(107,jvj+32,jvj+38)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[1081])( );     /*IDENSEXP0(jvj+20,jvj+38,jvj+39)*/
if((x[jvj+39]==135)) goto l11;
l10:x[jvj+131]=t[x[jvj+131]];
goto l9;
l2:x[jvj+129]=t[x[jvj+129]];
goto l1;
l4:x[jvj+130]=t[x[jvj+130]];
goto l3;
l6:x[jvj+9]=t[x[jvj+9]];
goto l5;
l8:x[jvj+26]=t[x[jvj+26]];
goto l7;
l11:pile[v[22]]=jvj+36; pile[WZ1]=jvj+40; 
(*f[255])( );     /*COPEXP0(jvj+36,jvj+40)*/
x[jvj+74]=x[jvj+40] ;z[jvj+74]=z[jvj+40];
x[jvj+87]=x[jvj+40] ;z[jvj+87]=z[jvj+40];
x[jvj+95]=x[jvj+40] ;z[jvj+95]=z[jvj+40];
x[jvj+113]=x[jvj+40] ;z[jvj+113]=z[jvj+40];
x[jvj+121]=x[jvj+40] ;z[jvj+121]=z[jvj+40];
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=110; pile[WZ3]=(-657); pile[WZ4]=jvj+46; 
(*f[270])( );     /*QUADRI7(101,jvj+29,110,(-657),jvj+46)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+47; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+47)*/
pile[v[22]]=V94; pile[WZ1]=858; pile[WZ2]=jvj+43; 
(*f[46])( );     /*TRI0(V94,858,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+44; 
(*f[189])( );     /*TRI4(jvj+43,v[13],642,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=3252; pile[WZ2]=246; pile[WZ3]=jvj+45; 
(*f[189])( );     /*TRI4(jvj+44,3252,246,jvj+45)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20096; pile[WZ4]=jvj+45; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(158,1,218,20096,jvj+45,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=159; pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(jvj+41,159,jvj+46)*/
pile[WZ2]=jvj+47; 
(*f[36])( );     /*PLUSC0(jvj+41,159,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+48)*/
pile[WZ3]=55; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+55)*/
pile[WZ3]=25; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=111; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+58,111,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+24; pile[WZ2]=103; pile[WZ3]=jvj+60; 
(*f[58])( );     /*TRI3(jvj+59,jvj+24,103,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+60; pile[WZ5]=jvj+56; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+23,jvj+60,jvj+56)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+61; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=111; pile[WZ2]=jvj+62; 
(*f[54])( );     /*TRI1(jvj+61,111,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+40; pile[WZ2]=103; pile[WZ3]=jvj+63; 
(*f[58])( );     /*TRI3(jvj+62,jvj+40,103,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+64; pile[WZ4]=jvj+63; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+64,jvj+63,jvj+57)*/
pile[WZ2]=111; pile[WZ3]=jvj+55; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+55,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=107; pile[WZ2]=jvj+56; 
(*f[36])( );     /*PLUSC0(jvj+49,107,jvj+56)*/
pile[WZ2]=jvj+57; 
(*f[36])( );     /*PLUSC0(jvj+49,107,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+65; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+65)*/
pile[WZ3]=25; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=111; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,111,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=jvj+70; pile[WZ2]=103; pile[WZ3]=jvj+71; 
(*f[58])( );     /*TRI3(jvj+69,jvj+70,103,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+71; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+25,jvj+71,jvj+66)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+72; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=111; pile[WZ2]=jvj+73; 
(*f[54])( );     /*TRI1(jvj+72,111,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=jvj+74; pile[WZ2]=103; pile[WZ3]=jvj+75; 
(*f[58])( );     /*TRI3(jvj+73,jvj+74,103,jvj+75)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+76; pile[WZ4]=jvj+75; pile[WZ5]=jvj+67; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+76,jvj+75,jvj+67)*/
pile[WZ2]=111; pile[WZ3]=jvj+65; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+65,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=107; pile[WZ2]=jvj+66; 
(*f[36])( );     /*PLUSC0(jvj+50,107,jvj+66)*/
pile[WZ2]=jvj+67; 
(*f[36])( );     /*PLUSC0(jvj+50,107,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+77; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+77)*/
pile[WZ3]=26; pile[WZ4]=jvj+80; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=111; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(jvj+80,111,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+82; pile[WZ2]=103; pile[WZ3]=jvj+83; 
(*f[58])( );     /*TRI3(jvj+81,jvj+82,103,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+84; pile[WZ4]=jvj+83; pile[WZ5]=jvj+78; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+84,jvj+83,jvj+78)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+85; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=111; pile[WZ2]=jvj+86; 
(*f[54])( );     /*TRI1(jvj+85,111,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=jvj+87; pile[WZ2]=103; pile[WZ3]=jvj+88; 
(*f[58])( );     /*TRI3(jvj+86,jvj+87,103,jvj+88)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+89; pile[WZ4]=jvj+88; pile[WZ5]=jvj+79; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+89,jvj+88,jvj+79)*/
pile[WZ2]=111; pile[WZ3]=jvj+77; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+77,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=107; pile[WZ2]=jvj+78; 
(*f[36])( );     /*PLUSC0(jvj+51,107,jvj+78)*/
pile[WZ2]=jvj+79; 
(*f[36])( );     /*PLUSC0(jvj+51,107,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+90; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+90)*/
pile[WZ3]=26; pile[WZ4]=jvj+93; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=111; pile[WZ2]=jvj+94; 
(*f[54])( );     /*TRI1(jvj+93,111,jvj+94)*/
pile[v[22]]=jvj+94; pile[WZ1]=jvj+95; pile[WZ2]=103; pile[WZ3]=jvj+96; 
(*f[58])( );     /*TRI3(jvj+94,jvj+95,103,jvj+96)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+97; pile[WZ4]=jvj+96; pile[WZ5]=jvj+91; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+97,jvj+96,jvj+91)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+98; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=111; pile[WZ2]=jvj+99; 
(*f[54])( );     /*TRI1(jvj+98,111,jvj+99)*/
pile[v[22]]=jvj+99; pile[WZ1]=jvj+100; pile[WZ2]=103; pile[WZ3]=jvj+101; 
(*f[58])( );     /*TRI3(jvj+99,jvj+100,103,jvj+101)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+102; pile[WZ4]=jvj+101; pile[WZ5]=jvj+92; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+102,jvj+101,jvj+92)*/
pile[WZ2]=111; pile[WZ3]=jvj+90; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+90,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=107; pile[WZ2]=jvj+91; 
(*f[36])( );     /*PLUSC0(jvj+52,107,jvj+91)*/
pile[WZ2]=jvj+92; 
(*f[36])( );     /*PLUSC0(jvj+52,107,jvj+92)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+103; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+103)*/
pile[WZ3]=26; pile[WZ4]=jvj+106; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=111; pile[WZ2]=jvj+107; 
(*f[54])( );     /*TRI1(jvj+106,111,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=jvj+108; pile[WZ2]=103; pile[WZ3]=jvj+109; 
(*f[58])( );     /*TRI3(jvj+107,jvj+108,103,jvj+109)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+110; pile[WZ4]=jvj+109; pile[WZ5]=jvj+104; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+110,jvj+109,jvj+104)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+111; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+111)*/
pile[v[22]]=jvj+111; pile[WZ1]=111; pile[WZ2]=jvj+112; 
(*f[54])( );     /*TRI1(jvj+111,111,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=jvj+113; pile[WZ2]=103; pile[WZ3]=jvj+114; 
(*f[58])( );     /*TRI3(jvj+112,jvj+113,103,jvj+114)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+115; pile[WZ4]=jvj+114; pile[WZ5]=jvj+105; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+115,jvj+114,jvj+105)*/
pile[WZ2]=111; pile[WZ3]=jvj+103; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+103,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=107; pile[WZ2]=jvj+104; 
(*f[36])( );     /*PLUSC0(jvj+53,107,jvj+104)*/
pile[WZ2]=jvj+105; 
(*f[36])( );     /*PLUSC0(jvj+53,107,jvj+105)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+116; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+116)*/
pile[WZ3]=26; pile[WZ4]=jvj+119; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+119)*/
pile[v[22]]=jvj+119; pile[WZ1]=111; pile[WZ2]=jvj+120; 
(*f[54])( );     /*TRI1(jvj+119,111,jvj+120)*/
pile[v[22]]=jvj+120; pile[WZ1]=jvj+121; pile[WZ2]=103; pile[WZ3]=jvj+122; 
(*f[58])( );     /*TRI3(jvj+120,jvj+121,103,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+123; pile[WZ4]=jvj+122; pile[WZ5]=jvj+117; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+123,jvj+122,jvj+117)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+124; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+124)*/
pile[v[22]]=jvj+124; pile[WZ1]=111; pile[WZ2]=jvj+125; 
(*f[54])( );     /*TRI1(jvj+124,111,jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=jvj+126; pile[WZ2]=103; pile[WZ3]=jvj+127; 
(*f[58])( );     /*TRI3(jvj+125,jvj+126,103,jvj+127)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+128; pile[WZ4]=jvj+127; pile[WZ5]=jvj+118; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+128,jvj+127,jvj+118)*/
pile[WZ2]=111; pile[WZ3]=jvj+116; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+116,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=107; pile[WZ2]=jvj+117; 
(*f[36])( );     /*PLUSC0(jvj+54,107,jvj+117)*/
pile[WZ2]=jvj+118; 
(*f[36])( );     /*PLUSC0(jvj+54,107,jvj+118)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+48; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+48,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=107; pile[WZ2]=jvj+49; 
(*f[36])( );     /*PLUSC0(jvj+42,107,jvj+49)*/
pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(jvj+42,107,jvj+50)*/
pile[WZ2]=jvj+51; 
(*f[36])( );     /*PLUSC0(jvj+42,107,jvj+51)*/
pile[WZ2]=jvj+52; 
(*f[36])( );     /*PLUSC0(jvj+42,107,jvj+52)*/
pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(jvj+42,107,jvj+53)*/
pile[WZ2]=jvj+54; 
(*f[36])( );     /*PLUSC0(jvj+42,107,jvj+54)*/
pile[WZ1]=jvj+41; 
(*f[1296])( );     /*NOUVCONTR0(jvj+42,jvj+41)*/
goto l10;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
