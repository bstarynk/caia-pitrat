#include "dx.h"
void ATOME45T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V64=0,V54=0,V68=0,V70=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=88;
x[jvj+1]=20045;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3596&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=25)) goto l12;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,RR,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=25)) goto l12;
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+7,V64)*/
V64=pile[WZ2]; 
x[jvj+8]=d[20];z[jvj+8]=0;
l1:if((x[jvj+8]<=0)) goto l12;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+9,R,jvj+10)*/
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=486)) goto l2;
pile[v[22]]=268; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+9,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+13,R,jvj+14)*/
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=486)) goto l2;
pile[v[22]]=107; pile[WZ1]=jvj+10; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,jvj+10,jvj+17)*/
pile[WZ1]=jvj+14; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+14,jvj+18)*/
x[jvj+19]=d[20];z[jvj+19]=0;
l3:if((x[jvj+19]<=0)) goto l2;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=jvj+20; pile[WZ1]=RR; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+20,RR,jvj+21)*/
pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+21,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=636)) goto l4;
pile[v[22]]=268; pile[WZ1]=jvj+20; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(268,jvj+20,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=RR; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+24,RR,jvj+25)*/
pile[v[22]]=130; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+25,V54)*/
V54=pile[WZ2]; 
if((V54!=1)) goto l4;
x[jvj+26]=d[20];z[jvj+26]=0;
l5:if((x[jvj+26]<=0)) goto l4;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=jvj+21; pile[WZ1]=jvj+27; pile[WZ3]=jvj+28; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(jvj+21,jvj+27,V68,jvj+28)*/
V68=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+27,jvj+29)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+29; pile[WZ3]=jvj+30; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(jvj+21,jvj+29,V70,jvj+30)*/
V70=pile[WZ2]; 
x[jvj+39]=V68 ;z[jvj+39]=(x[jvj+28]==20&&V68<=sepcte) ? V68 : (x[jvj+28]==41) ? (-1000) : 0;
x[jvj+42]=V70 ;z[jvj+42]=(x[jvj+30]==20&&V70<=sepcte) ? V70 : (x[jvj+30]==41) ? (-1000) : 0;
x[jvj+31]=x[jvj+39] ;z[jvj+31]=z[jvj+39];
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[255])( );     /*COPEXP0(jvj+31,jvj+32)*/
x[jvj+85]=x[jvj+17] ;z[jvj+85]=z[jvj+17];
l14:if((x[jvj+85]>0)) goto l15;
l6:x[jvj+26]=t[x[jvj+26]];
goto l5;
l2:x[jvj+8]=t[x[jvj+8]];
goto l1;
l4:x[jvj+19]=t[x[jvj+19]];
goto l3;
l10:x[jvj+84]=x[jvj+18] ;z[jvj+84]=z[jvj+18];
l9:if((x[jvj+84]<=0)) goto l8;
x[jvj+43]=s[x[jvj+84]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+84];
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[760])( );     /*MEMEX0(jvj+42,jvj+43,jvj+44)*/
if((x[jvj+44]==135)) goto l13;
l11:x[jvj+84]=t[x[jvj+84]];
goto l9;
l12:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l13:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+52; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+52)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+53; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+53)*/
pile[v[22]]=V64; pile[WZ1]=858; pile[WZ2]=jvj+49; 
(*f[46])( );     /*TRI0(V64,858,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+50; 
(*f[189])( );     /*TRI4(jvj+49,v[13],642,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=3596; pile[WZ2]=246; pile[WZ3]=jvj+51; 
(*f[189])( );     /*TRI4(jvj+50,3596,246,jvj+51)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20045; pile[WZ4]=jvj+51; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(158,1,218,20045,jvj+51,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=159; pile[WZ2]=jvj+52; 
(*f[36])( );     /*PLUSC0(jvj+45,159,jvj+52)*/
pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(jvj+45,159,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+54)*/
pile[WZ3]=486; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=111; pile[WZ2]=jvj+60; 
(*f[54])( );     /*TRI1(jvj+59,111,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+36; pile[WZ2]=107; pile[WZ3]=jvj+61; 
(*f[301])( );     /*TRI11(jvj+60,jvj+36,107,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+56; 
(*f[58])( );     /*TRI3(jvj+61,22,100,jvj+56)*/
pile[v[22]]=jvj+54; pile[WZ1]=111; pile[WZ2]=jvj+55; 
(*f[54])( );     /*TRI1(jvj+54,111,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; pile[WZ2]=103; pile[WZ3]=jvj+57; 
(*f[58])( );     /*TRI3(jvj+55,jvj+56,103,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+57; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+58,jvj+57,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+45; 
(*f[1296])( );     /*NOUVCONTR0(jvj+46,jvj+45)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+65; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+65)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+66; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+66)*/
pile[v[22]]=V64; pile[WZ1]=858; pile[WZ2]=jvj+62; 
(*f[46])( );     /*TRI0(V64,858,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+63; 
(*f[189])( );     /*TRI4(jvj+62,v[13],642,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=3596; pile[WZ2]=246; pile[WZ3]=jvj+64; 
(*f[189])( );     /*TRI4(jvj+63,3596,246,jvj+64)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20045; pile[WZ4]=jvj+64; pile[WZ5]=jvj+47; 
(*f[269])( );     /*QUADRI6(158,1,218,20045,jvj+64,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=159; pile[WZ2]=jvj+65; 
(*f[36])( );     /*PLUSC0(jvj+47,159,jvj+65)*/
pile[WZ2]=jvj+66; 
(*f[36])( );     /*PLUSC0(jvj+47,159,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+67)*/
pile[WZ3]=486; pile[WZ4]=jvj+71; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=111; pile[WZ2]=jvj+72; 
(*f[54])( );     /*TRI1(jvj+71,111,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+73; pile[WZ2]=107; pile[WZ3]=jvj+74; 
(*f[301])( );     /*TRI11(jvj+72,jvj+73,107,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+69; 
(*f[58])( );     /*TRI3(jvj+74,22,100,jvj+69)*/
pile[v[22]]=jvj+67; pile[WZ1]=111; pile[WZ2]=jvj+68; 
(*f[54])( );     /*TRI1(jvj+67,111,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=jvj+69; pile[WZ2]=103; pile[WZ3]=jvj+70; 
(*f[58])( );     /*TRI3(jvj+68,jvj+69,103,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+70; pile[WZ5]=jvj+48; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+38,jvj+70,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+47; 
(*f[1296])( );     /*NOUVCONTR0(jvj+48,jvj+47)*/
goto l11;
l15:x[jvj+75]=s[x[jvj+85]] ;z[jvj+75]=(x[jvj+75]<=sepcte) ? x[jvj+75] : z[jvj+85];
pile[v[22]]=jvj+75; pile[WZ1]=jvj+31; pile[WZ2]=jvj+76; 
(*f[760])( );     /*MEMEX0(jvj+75,jvj+31,jvj+76)*/
if((x[jvj+76]==135)) goto l16;
x[jvj+85]=t[x[jvj+85]];
goto l14;
l16:x[jvj+77]=0 ;z[jvj+77]=0;
x[jvj+86]=x[jvj+17] ;z[jvj+86]=z[jvj+17];
l17:if((x[jvj+86]>0)) goto l18;
x[jvj+33]=x[jvj+77] ;z[jvj+33]=z[jvj+77];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[299])( );     /*COPEL0(jvj+33,jvj+34)*/
x[jvj+37]=x[jvj+42] ;z[jvj+37]=z[jvj+42];
x[jvj+87]=x[jvj+18] ;z[jvj+87]=z[jvj+18];
l20:if((x[jvj+87]>0)) goto l21;
goto l6;
l18:x[jvj+78]=s[x[jvj+86]] ;z[jvj+78]=(x[jvj+78]<=sepcte) ? x[jvj+78] : z[jvj+86];
if((x[jvj+78]==x[jvj+75])) goto l19;
pile[v[22]]=jvj+77; pile[WZ1]=jvj+78; 
(*f[68])( );     /*PLUE0(jvj+77,jvj+78)*/
l19:x[jvj+86]=t[x[jvj+86]];
goto l17;
l21:x[jvj+79]=s[x[jvj+87]] ;z[jvj+79]=(x[jvj+79]<=sepcte) ? x[jvj+79] : z[jvj+87];
pile[v[22]]=jvj+79; pile[WZ1]=jvj+37; pile[WZ2]=jvj+80; 
(*f[760])( );     /*MEMEX0(jvj+79,jvj+37,jvj+80)*/
if((x[jvj+80]==135)) goto l22;
x[jvj+87]=t[x[jvj+87]];
goto l20;
l22:x[jvj+81]=0 ;z[jvj+81]=0;
x[jvj+88]=x[jvj+18] ;z[jvj+88]=z[jvj+18];
l23:if((x[jvj+88]>0)) goto l24;
x[jvj+35]=x[jvj+81] ;z[jvj+35]=z[jvj+81];
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[299])( );     /*COPEL0(jvj+35,jvj+36)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[255])( );     /*COPEXP0(jvj+37,jvj+38)*/
x[jvj+58]=x[jvj+32] ;z[jvj+58]=z[jvj+32];
x[jvj+73]=x[jvj+34] ;z[jvj+73]=z[jvj+34];
x[jvj+83]=x[jvj+17] ;z[jvj+83]=z[jvj+17];
l7:if((x[jvj+83]<=0)) goto l6;
x[jvj+40]=s[x[jvj+83]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+83];
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[760])( );     /*MEMEX0(jvj+39,jvj+40,jvj+41)*/
if((x[jvj+41]==135)) goto l10;
l8:x[jvj+83]=t[x[jvj+83]];
goto l7;
l24:x[jvj+82]=s[x[jvj+88]] ;z[jvj+82]=(x[jvj+82]<=sepcte) ? x[jvj+82] : z[jvj+88];
if((x[jvj+82]==x[jvj+79])) goto l25;
pile[v[22]]=jvj+81; pile[WZ1]=jvj+82; 
(*f[68])( );     /*PLUE0(jvj+81,jvj+82)*/
l25:x[jvj+88]=t[x[jvj+88]];
goto l23;
}
