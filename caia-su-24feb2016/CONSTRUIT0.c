#include "dx.h"
void CONSTRUIT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int D=0,V33=0,V34=0,V125=0,T=0,V67=0,V69=0,F=0,V92=0,V94=0,V63=0,V8=0,V65=0,V11=0,V23=0,V124=0,V87=0,V89=0,V91=0,V72=0,V73=0,V74=0,V75=0,V76=0,V78=0,V80=0,V127=0,V82=0,V84=0,V86=0,V88=0,V90=0,V22=0,PP=0,V96=0,V98=0,V55=0,V54=0,V57=0,V56=0,V100=0,V102=0,V62=0,V128=0;
int Y,I,J,A,B,AT,K,V,L,P,TY,H;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=72;
x[jvj+1]=10671;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1395&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Y=pile[v[22]]; I=pile[v[22]+1]; J=pile[v[22]+2]; A=pile[v[22]+3]; B=pile[v[22]+4]; AT=pile[v[22]+5]; K=pile[v[22]+6]; V=pile[v[22]+7]; L=pile[v[22]+8]; P=pile[v[22]+9]; TY=pile[v[22]+10]; H=pile[v[22]+11]; v[22]+=12; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V128=x[H];
V127=P;
x[jvj+2]=x[A] ;z[jvj+2]=z[A];
V125=J;
V124=I;
l29:D=x[jvj+30]=incon;
if((V127==(-1))) goto l1;
if((V127==(-2))) goto l2;
V34=V127+1;
D=V34;
l3:pile[v[22]]=V125; 
(*f[986])( );if(v[102]) goto l4;     /*ANTILOG0(V125,T)*/
T=pile[WZ1]; 
if((T<=V127)) goto l4;
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+4]=w[x[jvj+3]][3])==incon) goto l4;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; pile[WZ3]=jvj+5; 
(*f[45])( );if(v[102]) goto l4;     /*FNDZ0(jvj+2,jvj+4,V67,jvj+5)*/
V67=pile[WZ2]; 
pile[v[22]]=B; pile[WZ3]=jvj+6; 
(*f[45])( );if(v[102]) goto l4;     /*FNDZ0(B,jvj+4,V69,jvj+6)*/
V69=pile[WZ2]; 
if((V67==V69)) goto l4;
F=T;
l12:if((V128!=68)) goto l14;
pile[v[22]]=287; pile[WZ1]=TY; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(287,TY,jvj+20)*/
if((x[jvj+20]!=30)) goto l14;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+48)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+52; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+52)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=F; pile[WZ4]=jvj+50; 
(*f[192])( );     /*QUADRI4(100,41,130,F,jvj+50)*/
pile[v[22]]=jvj+48; pile[WZ1]=111; pile[WZ2]=jvj+49; 
(*f[54])( );     /*TRI1(jvj+48,111,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+50; pile[WZ2]=103; pile[WZ3]=jvj+51; 
(*f[58])( );     /*TRI3(jvj+49,jvj+50,103,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+52; pile[WZ4]=jvj+51; pile[WZ5]=jvj+39; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+52,jvj+51,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+40; 
(*f[180])( );     /*TRIENS0(jvj+39,(-20),107,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=452; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+40; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,452,102,jvj+21,jvj+40,jvj+30)*/
l13:PP=F;
l21:pile[v[22]]=Y; pile[WZ1]=107; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(Y,107,jvj+30)*/
l22:if(D!=incon) goto l11;
l26:pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+2,jvj+35)*/
if((x[jvj+36]=w[x[jvj+35]][3])==incon) goto l28;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+36; pile[WZ3]=jvj+37; 
(*f[45])( );if(v[102]) goto l28;     /*FNDZ0(jvj+2,jvj+36,V100,jvj+37)*/
V100=pile[WZ2]; 
pile[v[22]]=B; pile[WZ3]=jvj+38; 
(*f[45])( );if(v[102]) goto l28;     /*FNDZ0(B,jvj+36,V102,jvj+38)*/
V102=pile[WZ2]; 
if((V100==V102)) goto l28;
x[jvj+47]=incon;
if((x[AT]==87)) goto l23;
if((x[AT]==88)) goto l24;
if((x[AT]==242)) goto l25;
if((x[AT]!=196)) goto l28;
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+2,jvj+33)*/
pile[v[22]]=196; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(196,jvj+33,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+34; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+34,jvj+47)*/
l27:if((x[jvj+47]==(-99999998))) goto l28;
V62=V125+K;
V124=F;
V125=V62;
x[jvj+2]=x[jvj+47] ;z[jvj+2]=z[jvj+47];
V127=PP;
V128=67;
goto l29;
l1:D=V124;
goto l3;
l2:V33=V124-1;
D=V33;
goto l3;
l4:pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+2,jvj+7)*/
if((x[jvj+8]=w[x[jvj+7]][3])==incon) goto l5;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+8; pile[WZ3]=jvj+9; 
(*f[45])( );if(v[102]) goto l5;     /*FNDZ0(jvj+2,jvj+8,V92,jvj+9)*/
V92=pile[WZ2]; 
pile[v[22]]=B; pile[WZ3]=jvj+10; 
(*f[45])( );if(v[102]) goto l5;     /*FNDZ0(B,jvj+8,V94,jvj+10)*/
V94=pile[WZ2]; 
if((V92!=V94)) goto l5;
F=L;
goto l12;
l5:F=V124;
goto l12;
l6:pile[v[22]]=287; pile[WZ1]=TY; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(287,TY,jvj+11)*/
if((x[jvj+11]==25)) goto l15;
l16:if((D>=F)) goto l18;
if((V128!=68)) goto l7;
pile[v[22]]=287; pile[WZ1]=TY; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(287,TY,jvj+18)*/
if((x[jvj+18]==30)) goto l18;
l7:pile[v[22]]=80; pile[WZ1]=TY; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(80,TY,jvj+13)*/
if((x[jvj+13]!=28)) goto l17;
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+2,jvj+14)*/
if((x[jvj+15]=w[x[jvj+14]][3])==incon) goto l17;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+15; pile[WZ3]=jvj+16; 
(*f[45])( );if(v[102]) goto l17;     /*FNDZ0(jvj+2,jvj+15,V63,jvj+16)*/
V63=pile[WZ2]; 
V8=V63;
pile[v[22]]=B; pile[WZ3]=jvj+17; 
(*f[45])( );if(v[102]) goto l17;     /*FNDZ0(B,jvj+15,V65,jvj+17)*/
V65=pile[WZ2]; 
V11=V65;
if((V8==V11)) goto l18;
l17:pile[v[22]]=jvj+2; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=28; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,28,jvj+58)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+62; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+62)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=D; pile[WZ4]=jvj+60; 
(*f[192])( );     /*QUADRI4(100,41,130,D,jvj+60)*/
pile[v[22]]=jvj+58; pile[WZ1]=111; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+58,111,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; pile[WZ2]=103; pile[WZ3]=jvj+61; 
(*f[58])( );     /*TRI3(jvj+59,jvj+60,103,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+62; pile[WZ4]=jvj+61; pile[WZ5]=jvj+43; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+62,jvj+61,jvj+43)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+63)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+67; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+67)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=F; pile[WZ4]=jvj+65; 
(*f[192])( );     /*QUADRI4(100,41,130,F,jvj+65)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+65; pile[WZ2]=103; pile[WZ3]=jvj+66; 
(*f[58])( );     /*TRI3(jvj+64,jvj+65,103,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+67; pile[WZ4]=jvj+66; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+67,jvj+66,jvj+44)*/
pile[WZ1]=452; pile[WZ3]=jvj+23; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,452,102,jvj+23,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=107; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(jvj+30,107,jvj+43)*/
pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+30,107,jvj+44)*/
goto l13;
l9:if((V22<4)) goto l10;
goto l26;
l10:V87=x[jvj+2];
V89=x[B];
V91=x[TY];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V72; pile[WZ2]=10671; 
(*f[98])( );     /*SRA3(135,V72,10671,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V73,125,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=10671; pile[WZ2]=V74; 
(*f[39])( );     /*SDX0(20,10671,V74,V75)*/
V75=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V124; pile[WZ2]=V75; 
(*f[39])( );     /*SDX0(41,V124,V75,V76)*/
V76=pile[WZ3]; 
pile[WZ1]=D; pile[WZ2]=V76; 
(*f[39])( );     /*SDX0(41,D,V76,V78)*/
V78=pile[WZ3]; 
pile[WZ1]=F; pile[WZ2]=V78; 
(*f[39])( );     /*SDX0(41,F,V78,V80)*/
V80=pile[WZ3]; 
pile[WZ1]=V127; pile[WZ2]=V80; 
(*f[39])( );     /*SDX0(41,V127,V80,V82)*/
V82=pile[WZ3]; 
pile[WZ1]=V125; pile[WZ2]=V82; 
(*f[39])( );     /*SDX0(41,V125,V82,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V87; pile[WZ2]=V84; 
(*f[39])( );     /*SDX0(20,V87,V84,V86)*/
V86=pile[WZ3]; 
pile[WZ1]=V89; pile[WZ2]=V86; 
(*f[39])( );     /*SDX0(20,V89,V86,V88)*/
V88=pile[WZ3]; 
pile[WZ1]=V91; pile[WZ2]=V88; 
(*f[39])( );     /*SDX0(20,V91,V88,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=V90; 
(*f[40])( );     /*SLG0(V90)*/
if((V22!=2)) goto l26;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l26;
l11:V22=g[380];
if((V22<=0)) goto l26;
V23=vg[380];
if((V23!=0)) goto l8;
if((V22<3)) goto l10;
l8:pile[v[22]]=380; pile[WZ1]=10671; pile[WZ2]=0; pile[WZ3]=(-592); pile[WZ4]=V124; pile[WZ5]=(-656); pile[v[22]+6]=D; pile[v[22]+7]=(-598); pile[v[22]+8]=jvj+2; pile[v[22]+9]=(-591); pile[v[22]+10]=B; pile[v[22]+11]=(-619); pile[v[22]+12]=TY; pile[v[22]+13]=jvj+19; 
(*f[1614])( );     /*INTERP20(380,10671,0,(-592),V124,(-656),D,(-598),jvj+2,(-591),B,(-619),TY,jvj+19)*/
if((x[jvj+19]==135)) goto l9;
goto l26;
l14:if((D!=F)) goto l16;
if((V128==68)) goto l6;
if((V128!=67)) goto l16;
pile[v[22]]=80; pile[WZ1]=TY; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(80,TY,jvj+12)*/
if((x[jvj+12]==25)) goto l15;
goto l16;
l15:pile[v[22]]=jvj+2; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+53)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+57; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+57)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=D; pile[WZ4]=jvj+55; 
(*f[192])( );     /*QUADRI4(100,41,130,D,jvj+55)*/
pile[v[22]]=jvj+53; pile[WZ1]=111; pile[WZ2]=jvj+54; 
(*f[54])( );     /*TRI1(jvj+53,111,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; pile[WZ2]=103; pile[WZ3]=jvj+56; 
(*f[58])( );     /*TRI3(jvj+54,jvj+55,103,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+57; pile[WZ4]=jvj+56; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+57,jvj+56,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+42; 
(*f[180])( );     /*TRIENS0(jvj+41,(-20),107,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=452; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+42; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,452,102,jvj+22,jvj+42,jvj+30)*/
goto l13;
l18:if(D!=incon) goto l19;
l20:PP=V127;
if(x[jvj+30]!=incon) goto l21;
goto l22;
l19:pile[v[22]]=80; pile[WZ1]=TY; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(80,TY,jvj+24)*/
if((x[jvj+24]!=28)) goto l20;
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+2,jvj+25)*/
if((x[jvj+26]=w[x[jvj+25]][3])==incon) goto l20;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+26; pile[WZ3]=jvj+27; 
(*f[45])( );if(v[102]) goto l20;     /*FNDZ0(jvj+2,jvj+26,V96,jvj+27)*/
V96=pile[WZ2]; 
pile[v[22]]=B; pile[WZ3]=jvj+28; 
(*f[45])( );if(v[102]) goto l20;     /*FNDZ0(B,jvj+26,V98,jvj+28)*/
V98=pile[WZ2]; 
if((V96!=V98)) goto l20;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+29; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=28; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,28,jvj+68)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+72; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+72)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=D; pile[WZ4]=jvj+70; 
(*f[192])( );     /*QUADRI4(100,41,130,D,jvj+70)*/
pile[v[22]]=jvj+68; pile[WZ1]=111; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,111,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=jvj+70; pile[WZ2]=103; pile[WZ3]=jvj+71; 
(*f[58])( );     /*TRI3(jvj+69,jvj+70,103,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+72; pile[WZ4]=jvj+71; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+72,jvj+71,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+46; 
(*f[180])( );     /*TRIENS0(jvj+45,(-20),107,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=452; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+46; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,452,102,jvj+29,jvj+46,jvj+30)*/
goto l20;
l23:pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+2,V55)*/
V55=pile[WZ2]; 
V54=V55+1;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V54; pile[WZ4]=jvj+47; 
(*f[192])( );     /*QUADRI4(100,41,130,V54,jvj+47)*/
goto l27;
l24:pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+2,V57)*/
V57=pile[WZ2]; 
V56=V57-1;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V56; pile[WZ4]=jvj+47; 
(*f[192])( );     /*QUADRI4(100,41,130,V56,jvj+47)*/
goto l27;
l25:pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+2,jvj+31)*/
pile[v[22]]=242; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(242,jvj+31,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+32; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+32,jvj+47)*/
goto l27;
l28:x[jvj+1]=incon; v[0]=jvj; v[22]-=12; return;
}
