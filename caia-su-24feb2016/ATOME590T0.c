#include "dx.h"
void ATOME590T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V110=0,V62=0,V116=0,V63=0,V117=0,V114=0,V68=0,V78=0,V90=0,V100=0;
int NNNM;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=141;
x[jvj+1]=20590;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3902&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNM=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNM; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,NNNM,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=25)) goto l23;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(642,jvj+2,V114)*/
V114=pile[WZ2]; 
x[jvj+9]=d[20];z[jvj+9]=0;
l6:if((x[jvj+9]<=0)) goto l23;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=NNNM; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+10,NNNM,jvj+11)*/
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=1273)) goto l7;
pile[v[22]]=107; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(107,jvj+11,jvj+14)*/
for(i=x[jvj+14],V68=0;i>0;i=t[i],V68++)  ;
if((V68!=2)) goto l7;
pile[v[22]]=268; pile[WZ1]=jvj+10; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(268,jvj+10,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=NNNM; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+15,NNNM,jvj+16)*/
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+16,V78)*/
V78=pile[WZ2]; 
if((V78!=1)) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+11; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+11,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
x[jvj+70]=x[jvj+18] ;z[jvj+70]=z[jvj+18];
x[jvj+82]=x[jvj+18] ;z[jvj+82]=z[jvj+18];
x[jvj+100]=x[jvj+18] ;z[jvj+100]=z[jvj+18];
x[jvj+108]=x[jvj+18] ;z[jvj+108]=z[jvj+18];
x[jvj+126]=x[jvj+18] ;z[jvj+126]=z[jvj+18];
x[jvj+19]=d[20];z[jvj+19]=0;
l8:if((x[jvj+19]<=0)) goto l7;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=268; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(268,jvj+20,jvj+21)*/
x[jvj+140]=x[jvj+14] ;z[jvj+140]=z[jvj+14];
l10:if((x[jvj+140]<=0)) goto l9;
x[jvj+135]=s[x[jvj+140]] ;z[jvj+135]=(x[jvj+135]<=sepcte) ? x[jvj+135] : z[jvj+140];
x[jvj+40]=x[jvj+135] ;z[jvj+40]=z[jvj+135];
x[jvj+22]=x[jvj+40] ;z[jvj+22]=z[jvj+40];
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]!=484)) goto l11;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+24; 
(*f[200])( );if(v[102]) goto l11;     /*NDD0(jvj+22,jvj+24)*/
pile[v[22]]=509; pile[WZ2]=jvj+25; 
(*f[1969])( );     /*FNDEND0(509,jvj+24,jvj+25)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+26; 
(*f[255])( );     /*COPEXP0(jvj+22,jvj+26)*/
x[jvj+64]=x[jvj+26] ;z[jvj+64]=z[jvj+26];
x[jvj+84]=x[jvj+26] ;z[jvj+84]=z[jvj+26];
x[jvj+97]=x[jvj+26] ;z[jvj+97]=z[jvj+26];
x[jvj+115]=x[jvj+26] ;z[jvj+115]=z[jvj+26];
x[jvj+128]=x[jvj+26] ;z[jvj+128]=z[jvj+26];
x[jvj+136]=x[jvj+25] ;z[jvj+136]=z[jvj+25];
l12:if((x[jvj+136]<=0)) goto l11;
x[jvj+4]=s[x[jvj+136]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+136];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+4,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=25)) goto l13;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+4; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+20,jvj+4,jvj+29)*/
pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+29,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=1273)) goto l13;
pile[v[22]]=107; pile[WZ1]=jvj+29; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(107,jvj+29,jvj+32)*/
for(i=x[jvj+32],V90=0;i>0;i=t[i],V90++)  ;
if((V90!=2)) goto l13;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+4; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+21,jvj+4,jvj+33)*/
pile[v[22]]=130; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+33,V100)*/
V100=pile[WZ2]; 
if((V100!=1)) goto l13;
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V110)*/
V110=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V110; 
(*f[207])( );     /*PLUE2(jvj+3,V110)*/
l1:pile[v[22]]=1006; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1006,jvj+4,jvj+5)*/
V116=x[jvj+5];
l2:if((V116>0)) goto l3;
pile[v[22]]=1006; pile[WZ1]=NNNM; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1006,NNNM,jvj+6)*/
V117=x[jvj+6];
l4:if((V117>0)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+29,jvj+34)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[760])( );     /*MEMEX0(jvj+17,jvj+34,jvj+35)*/
if((x[jvj+35]==134)) goto l14;
l13:x[jvj+136]=t[x[jvj+136]];
goto l12;
l3:V62=s[V116];
pile[v[22]]=jvj+3; pile[WZ1]=V62; 
(*f[207])( );     /*PLUE2(jvj+3,V62)*/
V116=t[V116];
goto l2;
l5:V63=s[V117];
pile[v[22]]=jvj+3; pile[WZ1]=V63; 
(*f[207])( );     /*PLUE2(jvj+3,V63)*/
V117=t[V117];
goto l4;
l7:x[jvj+9]=t[x[jvj+9]];
goto l6;
l9:x[jvj+19]=t[x[jvj+19]];
goto l8;
l11:x[jvj+140]=t[x[jvj+140]];
goto l10;
l14:pile[v[22]]=jvj+34; pile[WZ1]=jvj+36; 
(*f[255])( );     /*COPEXP0(jvj+34,jvj+36)*/
x[jvj+74]=x[jvj+36] ;z[jvj+74]=z[jvj+36];
x[jvj+87]=x[jvj+36] ;z[jvj+87]=z[jvj+36];
x[jvj+95]=x[jvj+36] ;z[jvj+95]=z[jvj+36];
x[jvj+113]=x[jvj+36] ;z[jvj+113]=z[jvj+36];
x[jvj+121]=x[jvj+36] ;z[jvj+121]=z[jvj+36];
x[jvj+137]=x[jvj+14] ;z[jvj+137]=z[jvj+14];
l15:if((x[jvj+137]<=0)) goto l13;
x[jvj+43]=s[x[jvj+137]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+137];
if((x[jvj+135]==x[jvj+43])) goto l16;
x[jvj+37]=x[jvj+43] ;z[jvj+37]=z[jvj+43];
pile[v[22]]=100; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+37,jvj+38)*/
if((x[jvj+38]!=484)) goto l16;
pile[v[22]]=jvj+37; pile[WZ1]=jvj+39; 
(*f[255])( );     /*COPEXP0(jvj+37,jvj+39)*/
x[jvj+76]=x[jvj+39] ;z[jvj+76]=z[jvj+39];
x[jvj+89]=x[jvj+39] ;z[jvj+89]=z[jvj+39];
x[jvj+102]=x[jvj+39] ;z[jvj+102]=z[jvj+39];
x[jvj+110]=x[jvj+39] ;z[jvj+110]=z[jvj+39];
x[jvj+123]=x[jvj+39] ;z[jvj+123]=z[jvj+39];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+48)*/
pile[WZ3]=55; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+55)*/
pile[WZ3]=25; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=111; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+58,111,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+18; pile[WZ2]=103; pile[WZ3]=jvj+60; 
(*f[58])( );     /*TRI3(jvj+59,jvj+18,103,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+60; pile[WZ5]=jvj+56; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+26,jvj+60,jvj+56)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+61; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=111; pile[WZ2]=jvj+62; 
(*f[54])( );     /*TRI1(jvj+61,111,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+36; pile[WZ2]=103; pile[WZ3]=jvj+63; 
(*f[58])( );     /*TRI3(jvj+62,jvj+36,103,jvj+63)*/
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
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+71; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+39,jvj+71,jvj+66)*/
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
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+48; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+48,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=107; pile[WZ2]=jvj+49; 
(*f[36])( );     /*PLUSC0(jvj+46,107,jvj+49)*/
pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(jvj+46,107,jvj+50)*/
pile[WZ2]=jvj+51; 
(*f[36])( );     /*PLUSC0(jvj+46,107,jvj+51)*/
pile[WZ2]=jvj+52; 
(*f[36])( );     /*PLUSC0(jvj+46,107,jvj+52)*/
pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(jvj+46,107,jvj+53)*/
pile[WZ2]=jvj+54; 
(*f[36])( );     /*PLUSC0(jvj+46,107,jvj+54)*/
x[jvj+141]=x[jvj+32] ;z[jvj+141]=z[jvj+32];
l17:if((x[jvj+141]<=0)) goto l16;
x[jvj+138]=s[x[jvj+141]] ;z[jvj+138]=(x[jvj+138]<=sepcte) ? x[jvj+138] : z[jvj+141];
x[jvj+41]=x[jvj+138] ;z[jvj+41]=z[jvj+138];
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[760])( );     /*MEMEX0(jvj+40,jvj+41,jvj+42)*/
if((x[jvj+42]==135)) goto l20;
l18:x[jvj+141]=t[x[jvj+141]];
goto l17;
l16:x[jvj+137]=t[x[jvj+137]];
goto l15;
l20:x[jvj+139]=x[jvj+32] ;z[jvj+139]=z[jvj+32];
l19:if((x[jvj+139]<=0)) goto l18;
x[jvj+44]=s[x[jvj+139]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+139];
if((x[jvj+138]==x[jvj+44])) goto l21;
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[760])( );     /*MEMEX0(jvj+43,jvj+44,jvj+45)*/
if((x[jvj+45]==135)) goto l22;
l21:x[jvj+139]=t[x[jvj+139]];
goto l19;
l22:pile[v[22]]=jvj+46; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+46,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=NNNM; pile[WZ2]=110; pile[WZ3]=(-11752); pile[WZ4]=jvj+133; 
(*f[270])( );     /*QUADRI7(101,NNNM,110,(-11752),jvj+133)*/
pile[v[22]]=V114; pile[WZ1]=858; pile[WZ2]=jvj+129; 
(*f[46])( );     /*TRI0(V114,858,jvj+129)*/
pile[v[22]]=jvj+129; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+130; 
(*f[189])( );     /*TRI4(jvj+129,v[13],642,jvj+130)*/
pile[v[22]]=jvj+130; pile[WZ1]=3902; pile[WZ2]=246; pile[WZ3]=jvj+131; 
(*f[189])( );     /*TRI4(jvj+130,3902,246,jvj+131)*/
pile[v[22]]=jvj+131; pile[WZ1]=20590; pile[WZ2]=218; pile[WZ3]=jvj+132; 
(*f[58])( );     /*TRI3(jvj+131,20590,218,jvj+132)*/
pile[v[22]]=jvj+133; pile[WZ1]=(-20); pile[WZ2]=jvj+132; pile[WZ3]=159; pile[WZ4]=jvj+134; 
(*f[298])( );     /*TRIENS1(jvj+133,(-20),jvj+132,159,jvj+134)*/
pile[v[22]]=jvj+134; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+134,1,158,jvj+47)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; 
(*f[1296])( );     /*NOUVCONTR0(jvj+46,jvj+47)*/
goto l21;
l23:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
