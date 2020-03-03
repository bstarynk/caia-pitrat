#include "dx.h"
void ISLAK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int AT=0,BT=0,V49=0,VA=0,WW=0,VV=0;
int X,S,V;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=83;
x[jvj+1]=10147;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1850&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; S=pile[v[22]+1]; V=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+11]=0 ;z[jvj+11]=0;
pile[v[22]]=108; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(108,X,jvj+6)*/
x[jvj+81]=x[jvj+6] ;z[jvj+81]=z[jvj+6];
l4:if((x[jvj+81]>0)) goto l5;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[299])( );     /*COPEL0(jvj+11,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=108; pile[WZ2]=jvj+45; 
(*f[300])( );     /*TRI10(jvj+12,108,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=69; pile[WZ2]=100; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+45,69,100,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+14; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+14)*/
pile[v[22]]=jvj+13; pile[WZ1]=S; pile[WZ2]=V; pile[WZ3]=jvj+14; 
(*f[2012])( );     /*ISLAV0(jvj+13,S,V,jvj+14)*/
x[jvj+30]=0 ;z[jvj+30]=0;
pile[v[22]]=108; pile[WZ1]=X; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(108,X,jvj+25)*/
l11:if((x[jvj+25]<=0)) goto l13;
x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=108)) goto l12;
pile[v[22]]=102; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+26,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+28,jvj+29)*/
if((x[jvj+29]!=21)) goto l12;
pile[v[22]]=jvj+30; pile[WZ1]=jvj+26; 
(*f[68])( );     /*PLUE0(jvj+30,jvj+26)*/
l12:x[jvj+25]=t[x[jvj+25]];
goto l11;
l2:x[jvj+2]=s[x[jvj+80]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+80];
if((x[jvj+2]==x[jvj+7])) goto l3;
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=108)) goto l3;
pile[v[22]]=102; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+2,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+4,jvj+5)*/
if((AT==x[jvj+5])) goto l6;
l3:x[jvj+80]=t[x[jvj+80]];
l1:if((x[jvj+80]>0)) goto l2;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+7)*/
l6:x[jvj+81]=t[x[jvj+81]];
goto l4;
l5:x[jvj+7]=s[x[jvj+81]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+81];
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=108)) goto l6;
pile[v[22]]=102; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+7,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+9,jvj+10)*/
AT=x[jvj+10];
x[jvj+80]=x[jvj+6] ;z[jvj+80]=z[jvj+6];
goto l1;
l8:x[jvj+82]=t[x[jvj+82]];
l7:if((x[jvj+82]<=0)) goto l16;
x[jvj+16]=s[x[jvj+82]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+82];
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=108)) goto l8;
pile[v[22]]=102; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+16,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+18,jvj+19)*/
BT=x[jvj+19];
x[jvj+83]=x[jvj+15] ;z[jvj+83]=z[jvj+15];
l9:if((x[jvj+83]<=0)) goto l8;
x[jvj+20]=s[x[jvj+83]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+83];
if((x[jvj+20]==x[jvj+16])) goto l10;
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]!=108)) goto l10;
pile[v[22]]=102; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+20,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+22,jvj+23)*/
if((BT!=x[jvj+23])) goto l10;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+24,jvj+16)*/
l10:x[jvj+83]=t[x[jvj+83]];
goto l9;
l14:x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=100; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+31,jvj+32)*/
if((x[jvj+32]!=108)) goto l15;
pile[v[22]]=102; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+31,jvj+33)*/
pile[v[22]]=140; pile[WZ1]=jvj+33; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+33,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+31; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,jvj+31,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; 
(*f[255])( );     /*COPEXP0(jvj+34,jvj+35)*/
VA=V49;
x[jvj+62]=x[jvj+35] ;z[jvj+62]=z[jvj+35];
(*f[1817])( );     /*NOUV2(WW)*/
WW=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+51)*/
pile[WZ3]=41; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+53)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; pile[WZ2]=103; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+52,jvj+53,103,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+35; pile[WZ4]=jvj+54; pile[WZ5]=jvj+50; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+35,jvj+54,jvj+50)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+48)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=WW; pile[WZ4]=jvj+46; 
(*f[270])( );     /*QUADRI7(100,21,140,WW,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=436; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,436,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; pile[WZ2]=111; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+47,jvj+48,111,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+50; pile[WZ4]=jvj+49; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+50,jvj+49,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=S; 
(*f[2014])( );     /*RECA1(jvj+36,S)*/
(*f[1817])( );     /*NOUV2(VV)*/
VV=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=306; pile[WZ4]=jvj+60; 
(*f[181])( );     /*QUADRI2(100,20,101,306,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=111; pile[WZ2]=jvj+61; 
(*f[54])( );     /*TRI1(jvj+60,111,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+62; pile[WZ4]=jvj+61; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+62,jvj+61,jvj+59)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+57; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+57)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VV; pile[WZ4]=jvj+55; 
(*f[270])( );     /*QUADRI7(100,21,140,VV,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=436; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,436,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; pile[WZ2]=111; pile[WZ3]=jvj+58; 
(*f[58])( );     /*TRI3(jvj+56,jvj+57,111,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+59; pile[WZ4]=jvj+58; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+59,jvj+58,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=S; 
(*f[2014])( );     /*RECA1(jvj+37,S)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10126; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,10126,jvj+63)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+70; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+70)*/
pile[WZ3]=(-596); pile[WZ4]=jvj+68; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=103; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,103,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+70; pile[WZ4]=jvj+69; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+70,jvj+69,jvj+64)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=WW; pile[WZ4]=jvj+73; 
(*f[270])( );     /*QUADRI7(100,21,140,WW,jvj+73)*/
pile[WZ3]=(-2506); pile[WZ4]=jvj+71; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2506),jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=103; pile[WZ2]=jvj+72; 
(*f[54])( );     /*TRI1(jvj+71,103,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+73; pile[WZ4]=jvj+72; pile[WZ5]=jvj+65; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+73,jvj+72,jvj+65)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VA; pile[WZ4]=jvj+76; 
(*f[270])( );     /*QUADRI7(100,21,140,VA,jvj+76)*/
pile[WZ3]=(-602); pile[WZ4]=jvj+74; 
(*f[270])( );     /*QUADRI7(100,21,140,(-602),jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=103; pile[WZ2]=jvj+75; 
(*f[54])( );     /*TRI1(jvj+74,103,jvj+75)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+76; pile[WZ4]=jvj+75; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+76,jvj+75,jvj+66)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VV; pile[WZ4]=jvj+79; 
(*f[270])( );     /*QUADRI7(100,21,140,VV,jvj+79)*/
pile[WZ3]=(-3163); pile[WZ4]=jvj+77; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3163),jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=103; pile[WZ2]=jvj+78; 
(*f[54])( );     /*TRI1(jvj+77,103,jvj+78)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+79; pile[WZ4]=jvj+78; pile[WZ5]=jvj+67; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+79,jvj+78,jvj+67)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+63; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+63,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=114; pile[WZ2]=jvj+64; 
(*f[36])( );     /*PLUSC0(jvj+38,114,jvj+64)*/
pile[WZ2]=jvj+65; 
(*f[36])( );     /*PLUSC0(jvj+38,114,jvj+65)*/
pile[WZ2]=jvj+66; 
(*f[36])( );     /*PLUSC0(jvj+38,114,jvj+66)*/
pile[WZ2]=jvj+67; 
(*f[36])( );     /*PLUSC0(jvj+38,114,jvj+67)*/
pile[WZ1]=S; 
(*f[2014])( );     /*RECA1(jvj+38,S)*/
l15:x[jvj+30]=t[x[jvj+30]];
l13:if((x[jvj+30]>0)) goto l14;
x[jvj+24]=0 ;z[jvj+24]=0;
pile[v[22]]=108; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(108,X,jvj+15)*/
x[jvj+82]=x[jvj+15] ;z[jvj+82]=z[jvj+15];
goto l7;
l17:x[jvj+39]=s[x[jvj+24]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+24];
pile[v[22]]=100; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+39,jvj+40)*/
if((x[jvj+40]!=108)) goto l18;
pile[v[22]]=102; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+39,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+41,jvj+42)*/
pile[v[22]]=103; pile[WZ1]=jvj+39; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,jvj+39,jvj+43)*/
x[jvj+44]=x[jvj+42] ;z[jvj+44]=z[jvj+42];
pile[v[22]]=S; pile[WZ1]=V; pile[WZ2]=jvj+44; pile[WZ3]=jvj+43; 
(*f[2013])( );     /*ISLAZ0(S,V,jvj+44,jvj+43)*/
l18:x[jvj+24]=t[x[jvj+24]];
l16:if((x[jvj+24]>0)) goto l17;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
}
