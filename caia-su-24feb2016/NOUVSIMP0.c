#include "dx.h"
void NOUVSIMP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,V4=0,V25=0,V6=0,V27=0,WW=0,V63=0,V38=0,VA=0,V42=0,VB=0,V48=0,V51=0,V54=0,V46=0,V47=0,V49=0,V50=0,V52=0,V53=0,V57=0,V55=0,V56=0,V91=0,V95=0,V99=0;
int N,A,B,E,NK;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=87;
x[jvj+1]=11341;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1218&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; E=pile[v[22]+3]; NK=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=218; pile[WZ1]=397; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(218,397,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(jvj+2,N,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l29;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=176; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(176,jvj+4,jvj+5)*/
if(x[jvj+5]==614||x[jvj+5]==310||x[jvj+5]==1282||x[jvj+5]==1283) goto l27;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=218; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(218,jvj+7,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=N; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(jvj+8,N,jvj+9)*/
x[jvj+85]=x[jvj+9] ;z[jvj+85]=z[jvj+9];
l6:if((x[jvj+85]<=0)) goto l5;
x[jvj+10]=s[x[jvj+85]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+85];
pile[v[22]]=1408; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1408,jvj+10,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=jvj+11; pile[WZ1]=117; pile[WZ2]=V21; 
(*f[186])( );     /*BTC0(jvj+11,117,V21)*/
l7:x[jvj+85]=t[x[jvj+85]];
goto l6;
l5:x[jvj+6]=t[x[jvj+6]];
l3:if((x[jvj+6]>0)) goto l4;
pile[v[22]]=117; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(117,jvj+11,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(0,117,jvj+16)*/
x[jvj+12]=d[148];z[jvj+12]=0;
l8:if((x[jvj+12]>0)) goto l9;
pile[v[22]]=117; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(117,jvj+16,V6)*/
V6=pile[WZ2]; 
if((V4<=V6)) goto l27;
pile[v[22]]=N; pile[WZ1]=A; pile[WZ2]=jvj+31; 
(*f[1480])( );if(v[102]) goto l27;     /*CHOIXCTE0(N,A,jvj+31)*/
pile[v[22]]=117; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(117,jvj+31,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-664); pile[WZ4]=jvj+67; 
(*f[270])( );     /*QUADRI7(100,21,140,(-664),jvj+67)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V91; pile[WZ4]=jvj+68; 
(*f[192])( );     /*QUADRI4(100,41,130,V91,jvj+68)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=772; pile[WZ4]=jvj+69; 
(*f[181])( );     /*QUADRI2(100,20,101,772,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=111; pile[WZ2]=jvj+70; 
(*f[54])( );     /*TRI1(jvj+69,111,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+68; pile[WZ2]=103; pile[WZ3]=jvj+71; 
(*f[58])( );     /*TRI3(jvj+70,jvj+68,103,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+67; pile[WZ4]=jvj+71; pile[WZ5]=jvj+51; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+67,jvj+71,jvj+51)*/
l26:pile[v[22]]=A; pile[WZ1]=135; pile[WZ2]=jvj+36; pile[WZ3]=jvj+37; 
(*f[1481])( );if(v[102]) goto l27;     /*TRADANT0(A,135,jvj+36,jvj+37)*/
pile[v[22]]=B; pile[WZ1]=jvj+36; pile[WZ2]=135; pile[WZ3]=jvj+38; 
(*f[1482])( );if(v[102]) goto l27;     /*TRADCONS0(B,jvj+36,135,jvj+38)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+39; 
(*f[255])( );     /*COPEXP0(jvj+37,jvj+39)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+40; 
(*f[255])( );     /*COPEXP0(jvj+38,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+59)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-601); pile[WZ4]=jvj+62; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+62)*/
pile[v[22]]=jvj+59; pile[WZ1]=111; pile[WZ2]=jvj+60; 
(*f[54])( );     /*TRI1(jvj+59,111,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+39; pile[WZ2]=103; pile[WZ3]=jvj+61; 
(*f[58])( );     /*TRI3(jvj+60,jvj+39,103,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+62; pile[WZ4]=jvj+61; pile[WZ5]=jvj+47; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+62,jvj+61,jvj+47)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-601); pile[WZ4]=jvj+66; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+66)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=633; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,633,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+40; pile[WZ2]=103; pile[WZ3]=jvj+65; 
(*f[58])( );     /*TRI3(jvj+64,jvj+40,103,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+66; pile[WZ4]=jvj+65; pile[WZ5]=jvj+49; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+66,jvj+65,jvj+49)*/
pile[v[22]]=jvj+47; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+48; 
(*f[180])( );     /*TRIENS0(jvj+47,(-20),107,jvj+48)*/
pile[v[22]]=jvj+49; pile[WZ2]=jvj+48; pile[WZ3]=105; pile[WZ4]=jvj+50; 
(*f[298])( );     /*TRIENS1(jvj+49,(-20),jvj+48,105,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+50,42,100,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=NK; pile[WZ4]=jvj+54; 
(*f[192])( );     /*QUADRI4(100,41,130,NK,jvj+54)*/
pile[v[22]]=jvj+51; pile[WZ1]=160; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,160,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+30; pile[WZ2]=103; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+52,jvj+30,103,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=537; pile[WZ2]=102; pile[WZ3]=jvj+54; pile[WZ4]=jvj+53; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,537,102,jvj+54,jvj+53,jvj+33)*/
V57=x[jvj+33];
pile[v[22]]=A; pile[WZ1]=jvj+31; pile[WZ2]=jvj+17; 
(*f[1484])( );if(v[102]) goto l22;     /*LOCALISE0(A,jvj+31,jvj+17)*/
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+17,V27)*/
V27=pile[WZ2]; 
if((V27==(-664))) goto l22;
l21:pile[v[22]]=jvj+17; pile[WZ1]=jvj+32; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+55)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-601); pile[WZ4]=jvj+58; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+58)*/
pile[v[22]]=jvj+55; pile[WZ1]=111; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,111,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+32; pile[WZ2]=103; pile[WZ3]=jvj+57; 
(*f[58])( );     /*TRI3(jvj+56,jvj+32,103,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+57; pile[WZ5]=jvj+34; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+58,jvj+57,jvj+34)*/
pile[v[22]]=jvj+33; pile[WZ1]=107; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+33,107,jvj+34)*/
l22:pile[v[22]]=A; pile[WZ1]=jvj+35; 
(*f[703])( );     /*USW0(A,jvj+35)*/
x[jvj+87]=x[E] ;z[jvj+87]=z[E];
l23:if((x[jvj+87]>0)) goto l24;
pile[v[22]]=28001; pile[WZ1]=565; pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(28001,565,jvj+33)*/
pile[v[22]]=41; pile[WZ1]=9; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,9,0,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V57; pile[WZ2]=V55; 
(*f[39])( );     /*SDX0(20,V57,V55,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=V56; 
(*f[40])( );     /*SLG0(V56)*/
l27:if((v[148]<=0)) goto l28;
pile[v[22]]=565; pile[WZ1]=28001; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(565,28001,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=102; 
(*f[1485])( );     /*NUMEROTENS0(jvj+41,102)*/
l28:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l9:x[jvj+7]=s[x[jvj+12]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+12];
pile[v[22]]=218; pile[WZ1]=jvj+7; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(218,jvj+7,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=N; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(jvj+13,N,jvj+14)*/
x[jvj+86]=x[jvj+14] ;z[jvj+86]=z[jvj+14];
l11:if((x[jvj+86]<=0)) goto l10;
x[jvj+15]=s[x[jvj+86]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+86];
pile[v[22]]=1408; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(1408,jvj+15,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=jvj+16; pile[WZ1]=117; pile[WZ2]=V25; 
(*f[186])( );     /*BTC0(jvj+16,117,V25)*/
l12:x[jvj+86]=t[x[jvj+86]];
goto l11;
l10:x[jvj+12]=t[x[jvj+12]];
goto l8;
l14:WW=s[V63];
for(a=x[jvj+35];a>0;a=t[a]) if(s[a]==WW) goto l15;
pile[v[22]]=jvj+20; pile[WZ1]=WW; 
(*f[331])( );     /*PLUE3(jvj+20,WW)*/
l15:V63=t[V63];
l13:if((V63>0)) goto l14;
if((x[jvj+20]==0)) goto l16;
V48=x[jvj+18];
V51=x[A];
V54=x[jvj+20];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=107; 
(*f[42])( );     /*SRA1(135,0,107,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V48; pile[WZ2]=V46; 
(*f[39])( );     /*SDX0(20,V48,V46,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=V47; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V47,(-740),V49)*/
V49=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V51; pile[WZ2]=V49; 
(*f[39])( );     /*SDX0(20,V51,V49,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V50; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V50,876,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V54; pile[WZ2]=V52; 
(*f[39])( );     /*SDX0(23,V54,V52,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; 
(*f[40])( );     /*SLG0(V53)*/
l25:x[jvj+87]=t[x[jvj+87]];
goto l23;
l16:x[jvj+29]=incon;
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+18,jvj+21)*/
if((x[jvj+21]!=22)) goto l19;
pile[v[22]]=102; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+18,jvj+22)*/
pile[v[22]]=140; pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+22,V38)*/
V38=pile[WZ2]; 
VA=V38;
pile[v[22]]=103; pile[WZ1]=jvj+18; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,jvj+18,jvj+23)*/
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+23,V42)*/
V42=pile[WZ2]; 
VB=V42;
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+18,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+24,jvj+25)*/
x[jvj+27]=x[jvj+25] ;z[jvj+27]=z[jvj+25];
if(x[jvj+27]!=25&&x[jvj+27]!=26) goto l19;
pile[v[22]]=525; pile[WZ1]=21; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(525,21,jvj+26)*/
for(a=x[jvj+26];a>0;a=t[a]) if(s[a]==VA) goto l17;
l19:pile[v[22]]=jvj+18; pile[WZ1]=jvj+29; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+29)*/
l20:pile[v[22]]=jvj+30; pile[WZ1]=107; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+30,107,jvj+29)*/
goto l25;
l17:for(a=x[jvj+26];a>0;a=t[a]) if(s[a]==VB) goto l18;
goto l19;
l18:pile[v[22]]=218; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(218,jvj+27,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=641; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,641,jvj+42)*/
pile[WZ3]=jvj+28; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+28,jvj+46)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VB; pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(100,21,140,VB,jvj+44)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; pile[WZ2]=103; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+43,jvj+44,103,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+46; pile[WZ4]=jvj+45; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+46,jvj+45,jvj+29)*/
goto l20;
l24:x[jvj+18]=s[x[jvj+87]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+87];
x[jvj+20]=0 ;z[jvj+20]=0;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[703])( );     /*USW0(jvj+18,jvj+19)*/
V63=x[jvj+19];
goto l13;
l29:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+11; 
(*f[46])( );     /*TRI0(0,117,jvj+11)*/
x[jvj+6]=d[147];z[jvj+6]=0;
goto l3;
l30:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-664); pile[WZ4]=jvj+72; 
(*f[270])( );     /*QUADRI7(100,21,140,(-664),jvj+72)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+77; pile[WZ4]=jvj+75; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+77,jvj+75)*/
pile[WZ3]=826; pile[WZ4]=jvj+76; 
(*f[181])( );     /*QUADRI2(100,20,101,826,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=111; pile[WZ2]=jvj+74; 
(*f[54])( );     /*TRI1(jvj+76,111,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+75; pile[WZ2]=103; pile[WZ3]=jvj+73; 
(*f[58])( );     /*TRI3(jvj+74,jvj+75,103,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+72; pile[WZ4]=jvj+73; pile[WZ5]=jvj+51; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+72,jvj+73,jvj+51)*/
goto l26;
l31:pile[v[22]]=155; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(155,jvj+77,jvj+78)*/
l32:pile[v[22]]=118; pile[WZ1]=jvj+77; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(118,jvj+77,V95)*/
V95=pile[WZ2]; 
if((V95>0)) goto l35;
l33:pile[v[22]]=155; pile[WZ1]=jvj+77; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(155,jvj+77,jvj+79)*/
if((x[jvj+79]==68)) goto l35;
goto l27;
l34:pile[v[22]]=176; pile[WZ1]=jvj+31; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(176,jvj+31,jvj+77)*/
pile[v[22]]=118; pile[WZ1]=jvj+77; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(118,jvj+77,V99)*/
V99=pile[WZ2]; 
goto l32;
l35:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-664); pile[WZ4]=jvj+80; 
(*f[270])( );     /*QUADRI7(100,21,140,(-664),jvj+80)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+77; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+77,jvj+81)*/
pile[WZ3]=827; pile[WZ4]=jvj+82; 
(*f[181])( );     /*QUADRI2(100,20,101,827,jvj+82)*/
pile[v[22]]=jvj+82; pile[WZ1]=111; pile[WZ2]=jvj+83; 
(*f[54])( );     /*TRI1(jvj+82,111,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=jvj+81; pile[WZ2]=103; pile[WZ3]=jvj+84; 
(*f[58])( );     /*TRI3(jvj+83,jvj+81,103,jvj+84)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+80; pile[WZ4]=jvj+84; pile[WZ5]=jvj+51; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+80,jvj+84,jvj+51)*/
goto l26;
}
