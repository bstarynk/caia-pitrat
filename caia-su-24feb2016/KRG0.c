#include "dx.h"
void KRG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V1=0,V2=0,V3=0,V4=0,V54=0,V60=0,V65=0,V61=0,V40=0,V43=0,V44=0,V29=0,V57=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=161;
x[jvj+1]=10109;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==94&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=d[4];z[jvj+2]=0;
l1:if((x[jvj+2]>0)) goto l2;
V60=1;
l8:if((V60<=sepbase)) goto l10;
x[jvj+19]=d[5];z[jvj+19]=0;
l20:if((x[jvj+19]>0)) goto l21;
x[jvj+22]=d[6];z[jvj+22]=0;
l22:if((x[jvj+22]>0)) goto l23;
x[jvj+161]=w[177][8];
l25:if((x[jvj+161]>0)) goto l26;
l32:x[jvj+1]=incon; v[0]=jvj; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
V5=x[jvj+3];
pile[v[22]]=jvj+3; pile[WZ1]=10109; 
(*f[294])( );     /*PLUK2(jvj+3,10109)*/
pile[WZ1]=0; pile[WZ2]=V5; pile[WZ3]=184; 
(*f[285])( );     /*ENLY0(jvj+3,0,V5,184,V1,V2)*/
V1=pile[WZ4]; V2=pile[WZ5]; 
pile[WZ1]=V2; pile[WZ2]=V1; pile[WZ3]=565; 
(*f[285])( );     /*ENLY0(jvj+3,V2,V1,565,V3,V4)*/
V3=pile[WZ4]; V4=pile[WZ5]; 
x[jvj+2]=t[x[jvj+2]];
goto l1;
l10:V65=r[V60];
if((V65!=1)) goto l9;
x[jvj+4]=V60 ;z[jvj+4]=(V60<=sepcte) ? V60 : 0;
pile[v[22]]=118; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(118,jvj+4,V61)*/
V61=pile[WZ2]; 
if((V61==0)) goto l11;
if((V61==1)) goto l13;
if((V61==2)) goto l15;
if((V61!=3)) goto l18;
pile[v[22]]=277; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(277,jvj+4,jvj+14)*/
if((x[jvj+14]==68)) goto l18;
l7:pile[v[22]]=155; pile[WZ1]=jvj+4; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(155,jvj+4,jvj+15)*/
if((x[jvj+15]!=67)) goto l18;
l17:pile[v[22]]=jvj+4; pile[WZ1]=10604; 
(*f[295])( );     /*KRD0(jvj+4,10604)*/
l18:if(x[jvj+4]==316||x[jvj+4]==431) goto l9;
pile[v[22]]=116; pile[WZ1]=jvj+4; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(116,jvj+4,jvj+18)*/
if((x[jvj+18]!=73)) goto l9;
pile[v[22]]=277; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(277,jvj+4,jvj+13)*/
if((x[jvj+13]==68)) goto l9;
l19:pile[v[22]]=jvj+4; 
(*f[296])( );     /*KRO0(jvj+4)*/
l9:V60++;
goto l8;
l11:pile[v[22]]=155; pile[WZ1]=jvj+4; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(155,jvj+4,jvj+16)*/
if((x[jvj+16]!=68)) goto l4;
pile[v[22]]=277; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(277,jvj+4,jvj+17)*/
if((x[jvj+17]!=67)) goto l4;
pile[v[22]]=jvj+4; pile[WZ1]=11246; 
(*f[297])( );     /*KRVAR0(jvj+4,11246)*/
l4:pile[v[22]]=277; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(277,jvj+4,jvj+7)*/
if((x[jvj+7]==68)) goto l18;
l5:pile[v[22]]=155; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(155,jvj+4,jvj+8)*/
if((x[jvj+8]!=67)) goto l18;
l12:pile[v[22]]=jvj+4; pile[WZ1]=10465; 
(*f[295])( );     /*KRD0(jvj+4,10465)*/
goto l18;
l13:if(x[jvj+4]==225||x[jvj+4]==178) goto l18;
pile[v[22]]=277; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(277,jvj+4,jvj+5)*/
if((x[jvj+5]==68)) goto l18;
l3:pile[v[22]]=155; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(155,jvj+4,jvj+6)*/
if((x[jvj+6]!=67)) goto l18;
l14:pile[v[22]]=jvj+4; pile[WZ1]=10202; 
(*f[295])( );     /*KRD0(jvj+4,10202)*/
goto l18;
l15:if((x[jvj+4]==354)) goto l18;
pile[v[22]]=277; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(277,jvj+4,jvj+9)*/
if((x[jvj+9]==68)) goto l18;
l6:pile[v[22]]=155; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(155,jvj+4,jvj+10)*/
if((x[jvj+10]!=67)) goto l18;
l16:pile[v[22]]=jvj+4; pile[WZ1]=10512; 
(*f[295])( );     /*KRD0(jvj+4,10512)*/
goto l18;
l21:x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+34)*/
pile[WZ3]=11; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,11,jvj+41)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=103; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,103,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+40; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+41,jvj+40,jvj+38)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+36)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; pile[WZ2]=103; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+35,jvj+36,103,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+37; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+38,jvj+37,jvj+32)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=178; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,178,jvj+42)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+44)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+43; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+44,jvj+43,jvj+33)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+50)*/
pile[WZ3]=134; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+54)*/
pile[WZ3]=41; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+52)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; pile[WZ2]=103; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+51,jvj+52,103,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+54; pile[WZ4]=jvj+53; pile[WZ5]=jvj+49; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+54,jvj+53,jvj+49)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+47)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=436; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,436,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; pile[WZ2]=111; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+46,jvj+47,111,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+48; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+49,jvj+48,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+31; 
(*f[180])( );     /*TRIENS0(jvj+30,(-20),105,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+31,42,100,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=107; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+21,107,jvj+32)*/
pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+21,107,jvj+33)*/
pile[v[22]]=jvj+20; pile[WZ1]=184; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+20,184,jvj+21)*/
x[jvj+19]=t[x[jvj+19]];
goto l20;
l23:x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=754; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(754,jvj+23,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10345; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,10345,jvj+59)*/
pile[WZ3]=jvj+23; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+23,jvj+70)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+68; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=103; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,103,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+70; pile[WZ4]=jvj+69; pile[WZ5]=jvj+67; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+70,jvj+69,jvj+67)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+65; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=103; pile[WZ2]=jvj+66; 
(*f[54])( );     /*TRI1(jvj+65,103,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+67; pile[WZ4]=jvj+66; pile[WZ5]=jvj+60; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+67,jvj+66,jvj+60)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+73; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+73)*/
pile[WZ4]=jvj+71; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=103; pile[WZ2]=jvj+72; 
(*f[54])( );     /*TRI1(jvj+71,103,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+73; pile[WZ4]=jvj+72; pile[WZ5]=jvj+61; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+73,jvj+72,jvj+61)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1967); pile[WZ4]=jvj+76; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1967),jvj+76)*/
pile[WZ3]=(-627); pile[WZ4]=jvj+74; 
(*f[270])( );     /*QUADRI7(100,21,140,(-627),jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=103; pile[WZ2]=jvj+75; 
(*f[54])( );     /*TRI1(jvj+74,103,jvj+75)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+76; pile[WZ4]=jvj+75; pile[WZ5]=jvj+62; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+76,jvj+75,jvj+62)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-623); pile[WZ4]=jvj+79; 
(*f[270])( );     /*QUADRI7(100,21,140,(-623),jvj+79)*/
pile[WZ3]=(-619); pile[WZ4]=jvj+77; 
(*f[270])( );     /*QUADRI7(100,21,140,(-619),jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=103; pile[WZ2]=jvj+78; 
(*f[54])( );     /*TRI1(jvj+77,103,jvj+78)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+79; pile[WZ4]=jvj+78; pile[WZ5]=jvj+63; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+79,jvj+78,jvj+63)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1859); pile[WZ4]=jvj+82; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1859),jvj+82)*/
pile[WZ3]=(-609); pile[WZ4]=jvj+80; 
(*f[270])( );     /*QUADRI7(100,21,140,(-609),jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=103; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(jvj+80,103,jvj+81)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+82; pile[WZ4]=jvj+81; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+82,jvj+81,jvj+64)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+59; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+59,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=114; pile[WZ2]=jvj+60; 
(*f[36])( );     /*PLUSC0(jvj+55,114,jvj+60)*/
pile[WZ2]=jvj+61; 
(*f[36])( );     /*PLUSC0(jvj+55,114,jvj+61)*/
pile[WZ1]=113; pile[WZ2]=jvj+62; 
(*f[36])( );     /*PLUSC0(jvj+55,113,jvj+62)*/
pile[WZ2]=jvj+63; 
(*f[36])( );     /*PLUSC0(jvj+55,113,jvj+63)*/
pile[WZ2]=jvj+64; 
(*f[36])( );     /*PLUSC0(jvj+55,113,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1859); pile[WZ4]=jvj+87; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1859),jvj+87)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+85; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+85)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V40; pile[WZ4]=jvj+83; 
(*f[270])( );     /*QUADRI7(100,21,140,V40,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=436; pile[WZ2]=jvj+84; 
(*f[54])( );     /*TRI1(jvj+83,436,jvj+84)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+85; pile[WZ2]=111; pile[WZ3]=jvj+86; 
(*f[58])( );     /*TRI3(jvj+84,jvj+85,111,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+87; pile[WZ4]=jvj+86; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+87,jvj+86,jvj+57)*/
pile[v[22]]=jvj+55; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+56; 
(*f[180])( );     /*TRIENS0(jvj+55,(-20),107,jvj+56)*/
pile[v[22]]=jvj+57; pile[WZ2]=jvj+56; pile[WZ3]=105; pile[WZ4]=jvj+58; 
(*f[298])( );     /*TRIENS1(jvj+57,(-20),jvj+56,105,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+58,42,100,jvj+24)*/
pile[v[22]]=10514; pile[WZ1]=184; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(10514,184,jvj+24)*/
l24:x[jvj+22]=t[x[jvj+22]];
goto l22;
l26:x[jvj+11]=s[x[jvj+161]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+161];
pile[v[22]]=118; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(118,jvj+11,V43)*/
V43=pile[WZ2]; 
if((V43==2)) goto l28;
if((V43!=1)) goto l30;
pile[v[22]]=288; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(288,jvj+11,jvj+12)*/
if(x[jvj+12]==690||x[jvj+12]==1151) goto l30;
l29:pile[v[22]]=190; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l30;     /*FNDC1(190,jvj+11,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+113; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+113)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+117; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+117)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V29; pile[WZ4]=jvj+115; 
(*f[270])( );     /*QUADRI7(100,96,163,V29,jvj+115)*/
pile[v[22]]=jvj+113; pile[WZ1]=111; pile[WZ2]=jvj+114; 
(*f[54])( );     /*TRI1(jvj+113,111,jvj+114)*/
pile[v[22]]=jvj+114; pile[WZ1]=jvj+115; pile[WZ2]=103; pile[WZ3]=jvj+116; 
(*f[58])( );     /*TRI3(jvj+114,jvj+115,103,jvj+116)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+117; pile[WZ4]=jvj+116; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+117,jvj+116,jvj+109)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=285; pile[WZ4]=jvj+123; 
(*f[181])( );     /*QUADRI2(100,20,101,285,jvj+123)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V29; pile[WZ4]=jvj+127; 
(*f[270])( );     /*QUADRI7(100,96,163,V29,jvj+127)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+125; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+125)*/
pile[v[22]]=jvj+123; pile[WZ1]=111; pile[WZ2]=jvj+124; 
(*f[54])( );     /*TRI1(jvj+123,111,jvj+124)*/
pile[v[22]]=jvj+124; pile[WZ1]=jvj+125; pile[WZ2]=103; pile[WZ3]=jvj+126; 
(*f[58])( );     /*TRI3(jvj+124,jvj+125,103,jvj+126)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+127; pile[WZ4]=jvj+126; pile[WZ5]=jvj+122; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+127,jvj+126,jvj+122)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+120; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+120)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+118; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+118)*/
pile[v[22]]=jvj+118; pile[WZ1]=436; pile[WZ2]=jvj+119; 
(*f[54])( );     /*TRI1(jvj+118,436,jvj+119)*/
pile[v[22]]=jvj+119; pile[WZ1]=jvj+120; pile[WZ2]=111; pile[WZ3]=jvj+121; 
(*f[58])( );     /*TRI3(jvj+119,jvj+120,111,jvj+121)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+122; pile[WZ4]=jvj+121; pile[WZ5]=jvj+111; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+122,jvj+121,jvj+111)*/
pile[v[22]]=jvj+109; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+110; 
(*f[180])( );     /*TRIENS0(jvj+109,(-20),107,jvj+110)*/
pile[v[22]]=jvj+111; pile[WZ2]=jvj+110; pile[WZ3]=105; pile[WZ4]=jvj+112; 
(*f[298])( );     /*TRIENS1(jvj+111,(-20),jvj+110,105,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+112,42,100,jvj+26)*/
pile[v[22]]=10591; pile[WZ1]=184; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(10591,184,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+132; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+132)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-657); pile[WZ4]=jvj+136; 
(*f[270])( );     /*QUADRI7(100,21,140,(-657),jvj+136)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V29; pile[WZ4]=jvj+134; 
(*f[270])( );     /*QUADRI7(100,96,163,V29,jvj+134)*/
pile[v[22]]=jvj+132; pile[WZ1]=111; pile[WZ2]=jvj+133; 
(*f[54])( );     /*TRI1(jvj+132,111,jvj+133)*/
pile[v[22]]=jvj+133; pile[WZ1]=jvj+134; pile[WZ2]=103; pile[WZ3]=jvj+135; 
(*f[58])( );     /*TRI3(jvj+133,jvj+134,103,jvj+135)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+136; pile[WZ4]=jvj+135; pile[WZ5]=jvj+128; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+136,jvj+135,jvj+128)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V29; pile[WZ4]=jvj+143; 
(*f[270])( );     /*QUADRI7(100,96,163,V29,jvj+143)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+141; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+141)*/
pile[WZ3]=(-600); pile[WZ4]=jvj+137; 
(*f[270])( );     /*QUADRI7(100,21,140,(-600),jvj+137)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=16; pile[WZ4]=jvj+139; 
(*f[181])( );     /*QUADRI2(100,20,101,16,jvj+139)*/
pile[v[22]]=jvj+137; pile[WZ1]=160; pile[WZ2]=jvj+138; 
(*f[54])( );     /*TRI1(jvj+137,160,jvj+138)*/
pile[v[22]]=jvj+138; pile[WZ1]=jvj+139; pile[WZ2]=111; pile[WZ3]=jvj+140; 
(*f[58])( );     /*TRI3(jvj+138,jvj+139,111,jvj+140)*/
pile[v[22]]=jvj+140; pile[WZ1]=jvj+141; pile[WZ2]=103; pile[WZ3]=jvj+142; 
(*f[58])( );     /*TRI3(jvj+140,jvj+141,103,jvj+142)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+143; pile[WZ4]=jvj+142; pile[WZ5]=jvj+130; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+143,jvj+142,jvj+130)*/
pile[v[22]]=jvj+128; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+129; 
(*f[180])( );     /*TRIENS0(jvj+128,(-20),107,jvj+129)*/
pile[v[22]]=jvj+130; pile[WZ2]=jvj+129; pile[WZ3]=105; pile[WZ4]=jvj+131; 
(*f[298])( );     /*TRIENS1(jvj+130,(-20),jvj+129,105,jvj+131)*/
pile[v[22]]=jvj+131; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+131,42,100,jvj+27)*/
pile[v[22]]=10098; pile[WZ1]=184; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(10098,184,jvj+27)*/
l30:pile[v[22]]=288; pile[WZ1]=jvj+11; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(288,jvj+11,jvj+28)*/
if((x[jvj+28]!=276)) goto l27;
pile[v[22]]=118; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(118,jvj+11,V54)*/
V54=pile[WZ2]; 
l27:x[jvj+161]=t[x[jvj+161]];
goto l25;
l28:pile[v[22]]=190; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l30;     /*FNDC1(190,jvj+11,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+92; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+92)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+96; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+96)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V44; pile[WZ4]=jvj+94; 
(*f[270])( );     /*QUADRI7(100,96,163,V44,jvj+94)*/
pile[v[22]]=jvj+92; pile[WZ1]=111; pile[WZ2]=jvj+93; 
(*f[54])( );     /*TRI1(jvj+92,111,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=jvj+94; pile[WZ2]=103; pile[WZ3]=jvj+95; 
(*f[58])( );     /*TRI3(jvj+93,jvj+94,103,jvj+95)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+96; pile[WZ4]=jvj+95; pile[WZ5]=jvj+88; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+96,jvj+95,jvj+88)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=469; pile[WZ4]=jvj+104; 
(*f[181])( );     /*QUADRI2(100,20,101,469,jvj+104)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V44; pile[WZ4]=jvj+108; 
(*f[270])( );     /*QUADRI7(100,96,163,V44,jvj+108)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+106; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+106)*/
pile[WZ3]=(-632); pile[WZ4]=jvj+102; 
(*f[270])( );     /*QUADRI7(100,21,140,(-632),jvj+102)*/
pile[v[22]]=jvj+102; pile[WZ1]=160; pile[WZ2]=jvj+103; 
(*f[54])( );     /*TRI1(jvj+102,160,jvj+103)*/
pile[v[22]]=jvj+103; pile[WZ1]=jvj+104; pile[WZ2]=111; pile[WZ3]=jvj+105; 
(*f[58])( );     /*TRI3(jvj+103,jvj+104,111,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=jvj+106; pile[WZ2]=103; pile[WZ3]=jvj+107; 
(*f[58])( );     /*TRI3(jvj+105,jvj+106,103,jvj+107)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+108; pile[WZ4]=jvj+107; pile[WZ5]=jvj+101; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+108,jvj+107,jvj+101)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+99; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+99)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+97; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=436; pile[WZ2]=jvj+98; 
(*f[54])( );     /*TRI1(jvj+97,436,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=jvj+99; pile[WZ2]=111; pile[WZ3]=jvj+100; 
(*f[58])( );     /*TRI3(jvj+98,jvj+99,111,jvj+100)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+101; pile[WZ4]=jvj+100; pile[WZ5]=jvj+90; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+101,jvj+100,jvj+90)*/
pile[v[22]]=jvj+88; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+89; 
(*f[180])( );     /*TRIENS0(jvj+88,(-20),107,jvj+89)*/
pile[v[22]]=jvj+90; pile[WZ2]=jvj+89; pile[WZ3]=105; pile[WZ4]=jvj+91; 
(*f[298])( );     /*TRIENS1(jvj+90,(-20),jvj+89,105,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+91,42,100,jvj+25)*/
pile[v[22]]=10174; pile[WZ1]=184; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(10174,184,jvj+25)*/
goto l30;
l31:pile[v[22]]=190; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(190,jvj+11,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+148; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+148)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+152; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+152)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V57; pile[WZ4]=jvj+150; 
(*f[270])( );     /*QUADRI7(100,96,163,V57,jvj+150)*/
pile[v[22]]=jvj+148; pile[WZ1]=111; pile[WZ2]=jvj+149; 
(*f[54])( );     /*TRI1(jvj+148,111,jvj+149)*/
pile[v[22]]=jvj+149; pile[WZ1]=jvj+150; pile[WZ2]=103; pile[WZ3]=jvj+151; 
(*f[58])( );     /*TRI3(jvj+149,jvj+150,103,jvj+151)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+152; pile[WZ4]=jvj+151; pile[WZ5]=jvj+144; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+152,jvj+151,jvj+144)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1326; pile[WZ4]=jvj+158; 
(*f[181])( );     /*QUADRI2(100,20,101,1326,jvj+158)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V57; pile[WZ4]=jvj+160; 
(*f[270])( );     /*QUADRI7(100,96,163,V57,jvj+160)*/
pile[v[22]]=jvj+158; pile[WZ1]=111; pile[WZ2]=jvj+159; 
(*f[54])( );     /*TRI1(jvj+158,111,jvj+159)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+160; pile[WZ4]=jvj+159; pile[WZ5]=jvj+157; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+160,jvj+159,jvj+157)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+155; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+155)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+153; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+153)*/
pile[v[22]]=jvj+153; pile[WZ1]=436; pile[WZ2]=jvj+154; 
(*f[54])( );     /*TRI1(jvj+153,436,jvj+154)*/
pile[v[22]]=jvj+154; pile[WZ1]=jvj+155; pile[WZ2]=111; pile[WZ3]=jvj+156; 
(*f[58])( );     /*TRI3(jvj+154,jvj+155,111,jvj+156)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+157; pile[WZ4]=jvj+156; pile[WZ5]=jvj+146; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+157,jvj+156,jvj+146)*/
pile[v[22]]=jvj+144; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+145; 
(*f[180])( );     /*TRIENS0(jvj+144,(-20),107,jvj+145)*/
pile[v[22]]=jvj+146; pile[WZ2]=jvj+145; pile[WZ3]=105; pile[WZ4]=jvj+147; 
(*f[298])( );     /*TRIENS1(jvj+146,(-20),jvj+145,105,jvj+147)*/
pile[v[22]]=jvj+147; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+147,42,100,jvj+29)*/
pile[v[22]]=11299; pile[WZ1]=184; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(11299,184,jvj+29)*/
goto l27;
}
