#include "dx.h"
void CREPROVANTA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V1=0,V2=0,V3=0,V4=0,V5=0,V6=0,V7=0,V8=0,V40=0,V22=0,V24=0,V44=0,V43=0,V46=0,V47=0,V55=0,V59=0,V58=0,V54=0,V70=0,V71=0;
int X,N,Y,U,ND;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=163;
x[jvj+1]=11545;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==918&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; N=pile[v[22]+1]; Y=pile[v[22]+2]; U=pile[v[22]+3]; ND=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[jvj+3]=V=incon;
pile[v[22]]=218; pile[WZ1]=Y; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(218,Y,jvj+2)*/
l1:pile[v[22]]=288; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(288,X,jvj+3)*/
if((x[jvj+3]!=187)) goto l2;
x[jvj+45]=1529 ;z[jvj+45]=1529;
l3:pile[v[22]]=110; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l33;     /*FNDC1(110,X,V)*/
V=pile[WZ2]; 
l33:if(x[jvj+2]!=incon) goto l34;
l49:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l2:x[jvj+45]=1527 ;z[jvj+45]=1527;
goto l3;
l5:x[jvj+6]=s[x[jvj+159]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+159];
pile[v[22]]=986; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(986,jvj+6,jvj+7)*/
if((x[jvj+7]==616)) goto l6;
pile[v[22]]=1106; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1106,jvj+6,V2)*/
V2=pile[WZ2]; 
if(V2<V1) V1=V2;
l6:x[jvj+159]=t[x[jvj+159]];
l4:if((x[jvj+159]>0)) goto l5;
if((V1==999999)) goto l42;
V3=(-999999);
x[jvj+160]=x[jvj+35] ;z[jvj+160]=z[jvj+35];
l7:if((x[jvj+160]>0)) goto l8;
if((V3==(-999999))) goto l42;
if((V1==V3)) goto l17;
if((V1<=V5)) goto l18;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=28; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,28,jvj+51)*/
pile[WZ3]=jvj+2; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+58)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+56; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=103; pile[WZ2]=jvj+57; 
(*f[54])( );     /*TRI1(jvj+56,103,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+57; pile[WZ5]=jvj+55; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+58,jvj+57,jvj+55)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V1; pile[WZ4]=jvj+53; 
(*f[192])( );     /*QUADRI4(100,41,130,V1,jvj+53)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; pile[WZ2]=103; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+52,jvj+53,103,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+54; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+55,jvj+54,jvj+10)*/
pile[v[22]]=N; pile[WZ1]=U; pile[WZ2]=ND; pile[WZ3]=V; pile[WZ4]=jvj+3; 
(*f[1223])( );     /*AJOUPROVANT2(N,U,ND,V,jvj+3,jvj+10)*/
l18:if((V3>=V7)) goto l19;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+59)*/
pile[WZ3]=jvj+2; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+66)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+64; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=103; pile[WZ2]=jvj+65; 
(*f[54])( );     /*TRI1(jvj+64,103,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+66; pile[WZ4]=jvj+65; pile[WZ5]=jvj+63; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+66,jvj+65,jvj+63)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+61; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+61)*/
pile[v[22]]=jvj+59; pile[WZ1]=111; pile[WZ2]=jvj+60; 
(*f[54])( );     /*TRI1(jvj+59,111,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; pile[WZ2]=103; pile[WZ3]=jvj+62; 
(*f[58])( );     /*TRI3(jvj+60,jvj+61,103,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+63; pile[WZ4]=jvj+62; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+63,jvj+62,jvj+11)*/
pile[v[22]]=N; pile[WZ1]=U; pile[WZ2]=ND; pile[WZ3]=V; pile[WZ4]=jvj+3; 
(*f[1223])( );     /*AJOUPROVANT2(N,U,ND,V,jvj+3,jvj+11)*/
l19:if((V1==V3)) goto l17;
l42:if((x[jvj+35]!=0)) goto l44;
pile[v[22]]=986; pile[WZ1]=Y; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(986,Y,jvj+44)*/
if((x[jvj+44]!=616)) goto l43;
pile[v[22]]=1300; pile[WZ1]=22; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1300,22,jvj+15)*/
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l51;
l21:pile[v[22]]=1294; pile[WZ1]=1447; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1294,1447,jvj+17)*/
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l52;
l20:pile[v[22]]=1517; pile[WZ1]=1447; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1517,1447,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l53;
pile[v[22]]=1518; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1518,1447,jvj+14)*/
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l53;
l43:pile[v[22]]=18; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(18,X,V44)*/
V44=pile[WZ2]; 
if((V44<=0)) goto l44;
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(18,Y,V43)*/
V43=pile[WZ2]; 
if((V43!=V44)) goto l44;
pile[v[22]]=jvj+45; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(jvj+45,Y,V46)*/
V46=pile[WZ2]; 
pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(jvj+45,X,V47)*/
V47=pile[WZ2]; 
if((V46>=V47)) goto l44;
pile[v[22]]=1300; pile[WZ1]=22; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(1300,22,jvj+25)*/
for(a=x[jvj+25];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l54;
l28:pile[v[22]]=1294; pile[WZ1]=1447; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(1294,1447,jvj+27)*/
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l55;
l27:pile[v[22]]=1517; pile[WZ1]=1447; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1517,1447,jvj+23)*/
for(a=x[jvj+23];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l56;
pile[v[22]]=1518; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(1518,1447,jvj+24)*/
for(a=x[jvj+24];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l56;
l44:pile[v[22]]=1515; pile[WZ1]=1447; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(1515,1447,jvj+46)*/
for(a=x[jvj+46];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l45;
l48:pile[v[22]]=jvj+45; pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(jvj+45,Y,V70)*/
V70=pile[WZ2]; 
pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(jvj+45,X,V71)*/
V71=pile[WZ2]; 
if((V70>=V71)) goto l49;
pile[v[22]]=1514; pile[WZ1]=1447; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(1514,1447,jvj+30)*/
for(a=x[jvj+30];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l29;
pile[v[22]]=1515; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(1515,1447,jvj+31)*/
for(a=x[jvj+31];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l29;
goto l49;
l8:x[jvj+8]=s[x[jvj+160]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+160];
pile[v[22]]=986; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(986,jvj+8,jvj+9)*/
if((x[jvj+9]==616)) goto l9;
pile[v[22]]=1106; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(1106,jvj+8,V4)*/
V4=pile[WZ2]; 
if(V4>V3) V3=V4;
l9:x[jvj+160]=t[x[jvj+160]];
goto l7;
l10:V5=999999;
x[jvj+161]=x[jvj+35] ;z[jvj+161]=z[jvj+35];
l11:if((x[jvj+161]>0)) goto l12;
if((V5==999999)) goto l42;
V7=(-999999);
x[jvj+162]=x[jvj+35] ;z[jvj+162]=z[jvj+35];
l14:if((x[jvj+162]>0)) goto l15;
if((V7==(-999999))) goto l42;
V1=999999;
x[jvj+159]=x[jvj+35] ;z[jvj+159]=z[jvj+35];
goto l4;
l12:x[jvj+6]=s[x[jvj+161]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+161];
pile[v[22]]=1106; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(1106,jvj+6,V6)*/
V6=pile[WZ2]; 
if(V6<V5) V5=V6;
l13:x[jvj+161]=t[x[jvj+161]];
goto l11;
l15:x[jvj+8]=s[x[jvj+162]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+162];
pile[v[22]]=1106; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(1106,jvj+8,V8)*/
V8=pile[WZ2]; 
if(V8>V7) V7=V8;
l16:x[jvj+162]=t[x[jvj+162]];
goto l14;
l17:if((V1>V5)) goto l50;
if((V3<V7)) goto l50;
goto l42;
l22:x[jvj+41]=incon;
for(a=x[jvj+40];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l23;
l24:pile[v[22]]=1515; pile[WZ1]=1447; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(1515,1447,jvj+21)*/
for(a=x[jvj+21];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l25;
l26:if(x[jvj+41]==incon) goto l42;
l41:if((x[jvj+41]==(-99999998))) goto l42;
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; 
(*f[255])( );     /*COPEXP0(jvj+41,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=50; pile[WZ4]=jvj+135; 
(*f[181])( );     /*QUADRI2(100,20,101,50,jvj+135)*/
pile[WZ3]=25; pile[WZ4]=jvj+139; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+139)*/
pile[WZ3]=jvj+2; pile[WZ4]=jvj+145; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+145)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+143; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+143)*/
pile[v[22]]=jvj+143; pile[WZ1]=103; pile[WZ2]=jvj+144; 
(*f[54])( );     /*TRI1(jvj+143,103,jvj+144)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+145; pile[WZ4]=jvj+144; pile[WZ5]=jvj+142; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+145,jvj+144,jvj+142)*/
pile[v[22]]=jvj+139; pile[WZ1]=111; pile[WZ2]=jvj+140; 
(*f[54])( );     /*TRI1(jvj+139,111,jvj+140)*/
pile[v[22]]=jvj+140; pile[WZ1]=jvj+42; pile[WZ2]=103; pile[WZ3]=jvj+141; 
(*f[58])( );     /*TRI3(jvj+140,jvj+42,103,jvj+141)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+142; pile[WZ4]=jvj+141; pile[WZ5]=jvj+137; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+142,jvj+141,jvj+137)*/
pile[v[22]]=jvj+135; pile[WZ1]=111; pile[WZ2]=jvj+136; 
(*f[54])( );     /*TRI1(jvj+135,111,jvj+136)*/
pile[v[22]]=jvj+137; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+138; 
(*f[298])( );     /*TRIENS1(jvj+137,(-20),jvj+136,107,jvj+138)*/
pile[v[22]]=jvj+138; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+138,22,100,jvj+43)*/
pile[v[22]]=N; pile[WZ1]=U; pile[WZ2]=ND; pile[WZ3]=V; pile[WZ4]=jvj+3; pile[WZ5]=jvj+43; 
(*f[1223])( );     /*AJOUPROVANT2(N,U,ND,V,jvj+3,jvj+43)*/
goto l42;
l23:pile[v[22]]=1106; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(1106,jvj+20,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V40; pile[WZ4]=jvj+41; 
(*f[192])( );     /*QUADRI4(100,41,130,V40,jvj+41)*/
goto l24;
l25:pile[v[22]]=218; pile[WZ1]=jvj+20; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(218,jvj+20,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+22; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+22,jvj+41)*/
goto l41;
l29:pile[v[22]]=258; pile[WZ1]=Y; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(258,Y,jvj+32)*/
l30:if((x[jvj+32]>0)) goto l31;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=300; pile[WZ4]=jvj+154; 
(*f[181])( );     /*QUADRI2(100,20,101,300,jvj+154)*/
pile[WZ3]=jvj+2; pile[WZ4]=jvj+158; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+158)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+156; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+156)*/
pile[v[22]]=jvj+154; pile[WZ1]=111; pile[WZ2]=jvj+155; 
(*f[54])( );     /*TRI1(jvj+154,111,jvj+155)*/
pile[v[22]]=jvj+155; pile[WZ1]=jvj+156; pile[WZ2]=103; pile[WZ3]=jvj+157; 
(*f[58])( );     /*TRI3(jvj+155,jvj+156,103,jvj+157)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+158; pile[WZ4]=jvj+157; pile[WZ5]=jvj+50; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+158,jvj+157,jvj+50)*/
pile[v[22]]=N; pile[WZ1]=U; pile[WZ2]=ND; pile[WZ3]=V; pile[WZ4]=jvj+3; 
(*f[1223])( );     /*AJOUPROVANT2(N,U,ND,V,jvj+3,jvj+50)*/
goto l49;
l31:x[jvj+33]=s[x[jvj+32]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+32];
pile[v[22]]=986; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(986,jvj+33,jvj+34)*/
if((x[jvj+34]!=616)) goto l49;
l32:x[jvj+32]=t[x[jvj+32]];
goto l30;
l34:if(x[jvj+3]!=incon) goto l35;
goto l49;
l35:if(V!=incon) goto l36;
goto l49;
l36:pile[v[22]]=258; pile[WZ1]=Y; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(258,Y,jvj+35)*/
for(i=x[jvj+35],V22=0;i>0;i=t[i],V22++)  ;
if((V22>1)) goto l39;
if((V22!=1)) goto l42;
if((x[jvj+35]<=0)) goto l42;
x[jvj+20]=s[x[jvj+35]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+35];
pile[v[22]]=986; pile[WZ1]=jvj+20; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(986,jvj+20,jvj+39)*/
if((x[jvj+39]!=616)) goto l42;
pile[v[22]]=1516; pile[WZ1]=1447; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(1516,1447,jvj+40)*/
for(a=x[jvj+40];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l22;
goto l42;
l38:x[jvj+36]=s[x[jvj+163]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+163];
pile[v[22]]=986; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(986,jvj+36,jvj+37)*/
if((x[jvj+37]!=616)) goto l40;
pile[v[22]]=1106; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(1106,jvj+36,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+127; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+127)*/
pile[WZ3]=jvj+2; pile[WZ4]=jvj+134; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+134)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+132; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+132)*/
pile[v[22]]=jvj+132; pile[WZ1]=103; pile[WZ2]=jvj+133; 
(*f[54])( );     /*TRI1(jvj+132,103,jvj+133)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+134; pile[WZ4]=jvj+133; pile[WZ5]=jvj+131; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+134,jvj+133,jvj+131)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V24; pile[WZ4]=jvj+129; 
(*f[192])( );     /*QUADRI4(100,41,130,V24,jvj+129)*/
pile[v[22]]=jvj+127; pile[WZ1]=111; pile[WZ2]=jvj+128; 
(*f[54])( );     /*TRI1(jvj+127,111,jvj+128)*/
pile[v[22]]=jvj+128; pile[WZ1]=jvj+129; pile[WZ2]=103; pile[WZ3]=jvj+130; 
(*f[58])( );     /*TRI3(jvj+128,jvj+129,103,jvj+130)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+131; pile[WZ4]=jvj+130; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+131,jvj+130,jvj+38)*/
pile[v[22]]=N; pile[WZ1]=U; pile[WZ2]=ND; pile[WZ3]=V; pile[WZ4]=jvj+3; 
(*f[1223])( );     /*AJOUPROVANT2(N,U,ND,V,jvj+3,jvj+38)*/
l40:x[jvj+163]=t[x[jvj+163]];
l37:if((x[jvj+163]>0)) goto l38;
pile[v[22]]=1516; pile[WZ1]=1447; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1516,1447,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l10;
pile[v[22]]=1514; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1514,1447,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l10;
goto l42;
l39:x[jvj+163]=x[jvj+35] ;z[jvj+163]=z[jvj+35];
goto l37;
l45:pile[v[22]]=jvj+45; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(jvj+45,X,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=18; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(18,X,V59)*/
V59=pile[WZ2]; 
if((V59>0)) goto l46;
goto l48;
l50:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+67)*/
pile[WZ3]=jvj+2; pile[WZ4]=jvj+74; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+74)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+72; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=103; pile[WZ2]=jvj+73; 
(*f[54])( );     /*TRI1(jvj+72,103,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+74; pile[WZ4]=jvj+73; pile[WZ5]=jvj+71; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+74,jvj+73,jvj+71)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V1; pile[WZ4]=jvj+69; 
(*f[192])( );     /*QUADRI4(100,41,130,V1,jvj+69)*/
pile[v[22]]=jvj+67; pile[WZ1]=111; pile[WZ2]=jvj+68; 
(*f[54])( );     /*TRI1(jvj+67,111,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=jvj+69; pile[WZ2]=103; pile[WZ3]=jvj+70; 
(*f[58])( );     /*TRI3(jvj+68,jvj+69,103,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+71; pile[WZ4]=jvj+70; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+71,jvj+70,jvj+12)*/
pile[v[22]]=N; pile[WZ1]=U; pile[WZ2]=ND; pile[WZ3]=V; pile[WZ4]=jvj+3; 
(*f[1223])( );     /*AJOUPROVANT2(N,U,ND,V,jvj+3,jvj+12)*/
goto l42;
l51:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=45; pile[WZ4]=jvj+75; 
(*f[181])( );     /*QUADRI2(100,20,101,45,jvj+75)*/
pile[WZ3]=jvj+2; pile[WZ4]=jvj+79; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+79)*/
pile[WZ3]=1300; pile[WZ4]=jvj+82; 
(*f[181])( );     /*QUADRI2(100,20,101,1300,jvj+82)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+80; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=103; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(jvj+80,103,jvj+81)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+82; pile[WZ4]=jvj+81; pile[WZ5]=jvj+77; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+82,jvj+81,jvj+77)*/
pile[v[22]]=jvj+75; pile[WZ1]=111; pile[WZ2]=jvj+76; 
(*f[54])( );     /*TRI1(jvj+75,111,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=jvj+77; pile[WZ2]=103; pile[WZ3]=jvj+78; 
(*f[58])( );     /*TRI3(jvj+76,jvj+77,103,jvj+78)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+79; pile[WZ4]=jvj+78; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+79,jvj+78,jvj+16)*/
pile[v[22]]=N; pile[WZ1]=U; pile[WZ2]=ND; pile[WZ3]=V; pile[WZ4]=jvj+3; 
(*f[1223])( );     /*AJOUPROVANT2(N,U,ND,V,jvj+3,jvj+16)*/
goto l21;
l52:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=45; pile[WZ4]=jvj+83; 
(*f[181])( );     /*QUADRI2(100,20,101,45,jvj+83)*/
pile[WZ3]=jvj+2; pile[WZ4]=jvj+87; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+87)*/
pile[WZ3]=1294; pile[WZ4]=jvj+90; 
(*f[181])( );     /*QUADRI2(100,20,101,1294,jvj+90)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+88; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=103; pile[WZ2]=jvj+89; 
(*f[54])( );     /*TRI1(jvj+88,103,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+90; pile[WZ4]=jvj+89; pile[WZ5]=jvj+85; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+90,jvj+89,jvj+85)*/
pile[v[22]]=jvj+83; pile[WZ1]=111; pile[WZ2]=jvj+84; 
(*f[54])( );     /*TRI1(jvj+83,111,jvj+84)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+85; pile[WZ2]=103; pile[WZ3]=jvj+86; 
(*f[58])( );     /*TRI3(jvj+84,jvj+85,103,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+87; pile[WZ4]=jvj+86; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+87,jvj+86,jvj+18)*/
pile[v[22]]=N; pile[WZ1]=U; pile[WZ2]=ND; pile[WZ3]=V; pile[WZ4]=jvj+3; 
(*f[1223])( );     /*AJOUPROVANT2(N,U,ND,V,jvj+3,jvj+18)*/
goto l20;
l53:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=50; pile[WZ4]=jvj+91; 
(*f[181])( );     /*QUADRI2(100,20,101,50,jvj+91)*/
pile[WZ3]=25; pile[WZ4]=jvj+95; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+95)*/
pile[WZ3]=jvj+2; pile[WZ4]=jvj+102; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+102)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+100; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=103; pile[WZ2]=jvj+101; 
(*f[54])( );     /*TRI1(jvj+100,103,jvj+101)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+102; pile[WZ4]=jvj+101; pile[WZ5]=jvj+99; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+102,jvj+101,jvj+99)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=68; pile[WZ4]=jvj+97; 
(*f[181])( );     /*QUADRI2(100,20,101,68,jvj+97)*/
pile[v[22]]=jvj+95; pile[WZ1]=111; pile[WZ2]=jvj+96; 
(*f[54])( );     /*TRI1(jvj+95,111,jvj+96)*/
pile[v[22]]=jvj+96; pile[WZ1]=jvj+97; pile[WZ2]=103; pile[WZ3]=jvj+98; 
(*f[58])( );     /*TRI3(jvj+96,jvj+97,103,jvj+98)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+99; pile[WZ4]=jvj+98; pile[WZ5]=jvj+93; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+99,jvj+98,jvj+93)*/
pile[v[22]]=jvj+91; pile[WZ1]=111; pile[WZ2]=jvj+92; 
(*f[54])( );     /*TRI1(jvj+91,111,jvj+92)*/
pile[v[22]]=jvj+93; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+94; 
(*f[298])( );     /*TRIENS1(jvj+93,(-20),jvj+92,107,jvj+94)*/
pile[v[22]]=jvj+94; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+94,22,100,jvj+19)*/
pile[v[22]]=N; pile[WZ1]=U; pile[WZ2]=ND; pile[WZ3]=V; pile[WZ4]=jvj+3; pile[WZ5]=jvj+19; 
(*f[1223])( );     /*AJOUPROVANT2(N,U,ND,V,jvj+3,jvj+19)*/
goto l43;
l54:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+103; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+103)*/
pile[WZ3]=jvj+2; pile[WZ4]=jvj+107; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+107)*/
pile[WZ3]=1300; pile[WZ4]=jvj+110; 
(*f[181])( );     /*QUADRI2(100,20,101,1300,jvj+110)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+108; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=103; pile[WZ2]=jvj+109; 
(*f[54])( );     /*TRI1(jvj+108,103,jvj+109)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+110; pile[WZ4]=jvj+109; pile[WZ5]=jvj+105; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+110,jvj+109,jvj+105)*/
pile[v[22]]=jvj+103; pile[WZ1]=111; pile[WZ2]=jvj+104; 
(*f[54])( );     /*TRI1(jvj+103,111,jvj+104)*/
pile[v[22]]=jvj+104; pile[WZ1]=jvj+105; pile[WZ2]=103; pile[WZ3]=jvj+106; 
(*f[58])( );     /*TRI3(jvj+104,jvj+105,103,jvj+106)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+107; pile[WZ4]=jvj+106; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+107,jvj+106,jvj+26)*/
pile[v[22]]=N; pile[WZ1]=U; pile[WZ2]=ND; pile[WZ3]=V; pile[WZ4]=jvj+3; 
(*f[1223])( );     /*AJOUPROVANT2(N,U,ND,V,jvj+3,jvj+26)*/
goto l28;
l55:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+111; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+111)*/
pile[WZ3]=jvj+2; pile[WZ4]=jvj+115; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+115)*/
pile[WZ3]=1294; pile[WZ4]=jvj+118; 
(*f[181])( );     /*QUADRI2(100,20,101,1294,jvj+118)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+116; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+116)*/
pile[v[22]]=jvj+116; pile[WZ1]=103; pile[WZ2]=jvj+117; 
(*f[54])( );     /*TRI1(jvj+116,103,jvj+117)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+118; pile[WZ4]=jvj+117; pile[WZ5]=jvj+113; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+118,jvj+117,jvj+113)*/
pile[v[22]]=jvj+111; pile[WZ1]=111; pile[WZ2]=jvj+112; 
(*f[54])( );     /*TRI1(jvj+111,111,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=jvj+113; pile[WZ2]=103; pile[WZ3]=jvj+114; 
(*f[58])( );     /*TRI3(jvj+112,jvj+113,103,jvj+114)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+115; pile[WZ4]=jvj+114; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+115,jvj+114,jvj+28)*/
pile[v[22]]=N; pile[WZ1]=U; pile[WZ2]=ND; pile[WZ3]=V; pile[WZ4]=jvj+3; 
(*f[1223])( );     /*AJOUPROVANT2(N,U,ND,V,jvj+3,jvj+28)*/
goto l27;
l56:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+119; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+119)*/
pile[WZ3]=jvj+2; pile[WZ4]=jvj+126; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+126)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+124; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+124)*/
pile[v[22]]=jvj+124; pile[WZ1]=103; pile[WZ2]=jvj+125; 
(*f[54])( );     /*TRI1(jvj+124,103,jvj+125)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+126; pile[WZ4]=jvj+125; pile[WZ5]=jvj+123; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+126,jvj+125,jvj+123)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=68; pile[WZ4]=jvj+121; 
(*f[181])( );     /*QUADRI2(100,20,101,68,jvj+121)*/
pile[v[22]]=jvj+119; pile[WZ1]=111; pile[WZ2]=jvj+120; 
(*f[54])( );     /*TRI1(jvj+119,111,jvj+120)*/
pile[v[22]]=jvj+120; pile[WZ1]=jvj+121; pile[WZ2]=103; pile[WZ3]=jvj+122; 
(*f[58])( );     /*TRI3(jvj+120,jvj+121,103,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+123; pile[WZ4]=jvj+122; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+123,jvj+122,jvj+29)*/
pile[v[22]]=N; pile[WZ1]=U; pile[WZ2]=ND; pile[WZ3]=V; pile[WZ4]=jvj+3; 
(*f[1223])( );     /*AJOUPROVANT2(N,U,ND,V,jvj+3,jvj+29)*/
goto l44;
l46:if((x[jvj+35]<=0)) goto l48;
x[jvj+47]=s[x[jvj+35]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+35];
pile[v[22]]=18; pile[WZ1]=jvj+47; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(18,jvj+47,V58)*/
V58=pile[WZ2]; 
if((V58!=V59)) goto l47;
pile[v[22]]=jvj+45; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(jvj+45,jvj+47,V54)*/
V54=pile[WZ2]; 
if((V54>=V55)) goto l47;
pile[v[22]]=218; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(218,jvj+47,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+146; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+146)*/
pile[WZ3]=jvj+2; pile[WZ4]=jvj+153; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+153)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+151; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+151)*/
pile[v[22]]=jvj+151; pile[WZ1]=103; pile[WZ2]=jvj+152; 
(*f[54])( );     /*TRI1(jvj+151,103,jvj+152)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+153; pile[WZ4]=jvj+152; pile[WZ5]=jvj+150; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+153,jvj+152,jvj+150)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+48; pile[WZ4]=jvj+148; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+48,jvj+148)*/
pile[v[22]]=jvj+146; pile[WZ1]=111; pile[WZ2]=jvj+147; 
(*f[54])( );     /*TRI1(jvj+146,111,jvj+147)*/
pile[v[22]]=jvj+147; pile[WZ1]=jvj+148; pile[WZ2]=103; pile[WZ3]=jvj+149; 
(*f[58])( );     /*TRI3(jvj+147,jvj+148,103,jvj+149)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+150; pile[WZ4]=jvj+149; pile[WZ5]=jvj+49; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+150,jvj+149,jvj+49)*/
pile[v[22]]=N; pile[WZ1]=U; pile[WZ2]=ND; pile[WZ3]=V; pile[WZ4]=jvj+3; 
(*f[1223])( );     /*AJOUPROVANT2(N,U,ND,V,jvj+3,jvj+49)*/
l47:x[jvj+35]=t[x[jvj+35]];
goto l46;
}
