#include "dx.h"
void COPTT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V6=0,V21=0,VL=0,V134=0,VV=0,W=0,V57=0,V58=0,V51=0,V33=0,V59=0,V90=0,V84=0,V155=0,V157=0,V160=0,V159=0;
int R,BT,X,S,RM,NV;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=109;
x[jvj+1]=10208;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1633&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; BT=pile[v[22]+1]; X=pile[v[22]+2]; S=pile[v[22]+3]; RM=pile[v[22]+4]; NV=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V134=NV;
x[jvj+8]=x[X] ;z[jvj+8]=z[X];
l27:x[jvj+19]=incon;
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+8,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=228)) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+8,jvj+19)*/
l8:pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+8,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]==1607)) goto l9;
if((x[jvj+27]!=847)) goto l10;
pile[v[22]]=69; pile[WZ1]=100; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(69,100,jvj+34)*/
V51=V134+1;
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+8,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[255])( );     /*COPEXP0(jvj+30,jvj+31)*/
pile[v[22]]=103; pile[WZ1]=jvj+8; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+8,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[255])( );     /*COPEXP0(jvj+32,jvj+33)*/
if((V155=w[x[BT]][1])==incon) goto l29;
if((V155!=23)) goto l31;
pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(R,BT,jvj+34)*/
l29:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=100; pile[WZ4]=jvj+97; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+97)*/
pile[WZ3]=570; pile[WZ4]=jvj+95; 
(*f[181])( );     /*QUADRI2(100,20,101,570,jvj+95)*/
pile[v[22]]=jvj+95; pile[WZ1]=103; pile[WZ2]=jvj+96; 
(*f[54])( );     /*TRI1(jvj+95,103,jvj+96)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+97; pile[WZ4]=jvj+96; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+97,jvj+96,jvj+35)*/
pile[v[22]]=jvj+34; pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+34,108,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=102; pile[WZ4]=jvj+99; 
(*f[181])( );     /*QUADRI2(100,20,101,102,jvj+99)*/
pile[v[22]]=jvj+31; pile[WZ1]=103; pile[WZ2]=jvj+98; 
(*f[54])( );     /*TRI1(jvj+31,103,jvj+98)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+99; pile[WZ4]=jvj+98; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+99,jvj+98,jvj+36)*/
pile[v[22]]=jvj+34; pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+34,108,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=103; pile[WZ4]=jvj+101; 
(*f[181])( );     /*QUADRI2(100,20,101,103,jvj+101)*/
pile[v[22]]=jvj+33; pile[WZ1]=103; pile[WZ2]=jvj+100; 
(*f[54])( );     /*TRI1(jvj+33,103,jvj+100)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+101; pile[WZ4]=jvj+100; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+101,jvj+100,jvj+37)*/
pile[v[22]]=jvj+34; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+34,108,jvj+37)*/
pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+34; pile[WZ3]=S; pile[WZ4]=RM; pile[WZ5]=V51; 
(*f[1633])( );     /*COPTT0(R,BT,jvj+34,S,RM,V51)*/
l10:if(x[jvj+27]!=137&&x[jvj+27]!=138&&x[jvj+27]!=139&&x[jvj+27]!=141&&x[jvj+27]!=149&&x[jvj+27]!=432&&x[jvj+27]!=1382&&x[jvj+27]!=1660) goto l11;
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+8,jvj+38)*/
if((x[jvj+38]!=22)) goto l11;
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+27,jvj+39)*/
pile[v[22]]=446; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(446,jvj+27,jvj+40)*/
pile[v[22]]=69; pile[WZ1]=100; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(69,100,jvj+43)*/
V33=V134+1;
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+8,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; 
(*f[255])( );     /*COPEXP0(jvj+41,jvj+42)*/
if((V157=w[x[BT]][1])==incon) goto l30;
if((V157!=23)) goto l32;
pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(R,BT,jvj+43)*/
l30:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=100; pile[WZ4]=jvj+104; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+104)*/
pile[WZ3]=jvj+39; pile[WZ4]=jvj+102; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+39,jvj+102)*/
pile[v[22]]=jvj+102; pile[WZ1]=103; pile[WZ2]=jvj+103; 
(*f[54])( );     /*TRI1(jvj+102,103,jvj+103)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+104; pile[WZ4]=jvj+103; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+104,jvj+103,jvj+44)*/
pile[v[22]]=jvj+43; pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+43,108,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+40; pile[WZ4]=jvj+106; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+40,jvj+106)*/
pile[v[22]]=jvj+42; pile[WZ1]=103; pile[WZ2]=jvj+105; 
(*f[54])( );     /*TRI1(jvj+42,103,jvj+105)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+106; pile[WZ4]=jvj+105; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+106,jvj+105,jvj+45)*/
pile[v[22]]=jvj+43; pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+43,108,jvj+45)*/
pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+43; pile[WZ3]=S; pile[WZ4]=RM; pile[WZ5]=V33; 
(*f[1633])( );     /*COPTT0(R,BT,jvj+43,S,RM,V33)*/
l11:if(x[jvj+27]!=278&&x[jvj+27]!=910) goto l13;
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+8,jvj+46)*/
if((x[jvj+46]!=22)) goto l13;
pile[v[22]]=103; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,jvj+8,jvj+2)*/
V6=incon;
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,jvj+2,V)*/
V=pile[WZ2]; 
if(V==(-3629)||V==(-4348)||V==(-4349)||V==(-3704)||V==(-1761)||V==(-1278)||V==(-3031)||V==(-5598)||V==(-6170)||V==(-6470)||V==(-10635)||V==(-10974)||V==(-11168)) goto l1;
V6=68;
l12:pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+8,jvj+6)*/
if((V6==67)) goto l2;
if((V6!=68)) goto l13;
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+2,VV)*/
VV=pile[WZ2]; 
pile[v[22]]=jvj+6; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+10)*/
(*f[1817])( );     /*NOUV2(W)*/
W=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10780; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,10780,jvj+66)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VV; pile[WZ4]=jvj+69; 
(*f[270])( );     /*QUADRI7(100,21,140,VV,jvj+69)*/
pile[WZ3]=(-600); pile[WZ4]=jvj+67; 
(*f[270])( );     /*QUADRI7(100,21,140,(-600),jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=103; pile[WZ2]=jvj+68; 
(*f[54])( );     /*TRI1(jvj+67,103,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+69; pile[WZ4]=jvj+68; pile[WZ5]=jvj+62; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+69,jvj+68,jvj+62)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+72; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+72)*/
pile[WZ3]=(-624); pile[WZ4]=jvj+70; 
(*f[270])( );     /*QUADRI7(100,21,140,(-624),jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=103; pile[WZ2]=jvj+71; 
(*f[54])( );     /*TRI1(jvj+70,103,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+72; pile[WZ4]=jvj+71; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+72,jvj+71,jvj+64)*/
pile[v[22]]=jvj+62; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+63; 
(*f[180])( );     /*TRIENS0(jvj+62,(-20),114,jvj+63)*/
pile[v[22]]=jvj+64; pile[WZ2]=jvj+63; pile[WZ3]=113; pile[WZ4]=jvj+65; 
(*f[298])( );     /*TRIENS1(jvj+64,(-20),jvj+63,113,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+66; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+66,jvj+65,jvj+11)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=jvj+8; pile[WZ3]=R; pile[WZ4]=jvj+11; 
(*f[1818])( );     /*COPV0(RM,BT,jvj+8,R,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10790; pile[WZ4]=jvj+75; 
(*f[181])( );     /*QUADRI2(100,20,101,10790,jvj+75)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+78; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=103; pile[WZ2]=jvj+79; 
(*f[54])( );     /*TRI1(jvj+78,103,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+79; pile[WZ5]=jvj+76; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+10,jvj+79,jvj+76)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+82; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+82)*/
pile[WZ3]=(-624); pile[WZ4]=jvj+80; 
(*f[270])( );     /*QUADRI7(100,21,140,(-624),jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=103; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(jvj+80,103,jvj+81)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+82; pile[WZ4]=jvj+81; pile[WZ5]=jvj+77; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+82,jvj+81,jvj+77)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+85; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+85)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-601); pile[WZ4]=jvj+83; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=103; pile[WZ2]=jvj+84; 
(*f[54])( );     /*TRI1(jvj+83,103,jvj+84)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+85; pile[WZ4]=jvj+84; pile[WZ5]=jvj+73; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+85,jvj+84,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+74; 
(*f[180])( );     /*TRIENS0(jvj+73,(-20),113,jvj+74)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+75; pile[WZ4]=jvj+74; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+75,jvj+74,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=114; pile[WZ2]=jvj+76; 
(*f[36])( );     /*PLUSC0(jvj+12,114,jvj+76)*/
pile[WZ2]=jvj+77; 
(*f[36])( );     /*PLUSC0(jvj+12,114,jvj+77)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=R; pile[WZ3]=jvj+12; 
(*f[1819])( );     /*COPV1(RM,BT,R,jvj+12)*/
l13:pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+8,jvj+47)*/
if((x[jvj+47]==42)) goto l14;
if((x[jvj+47]==452)) goto l14;
if((x[jvj+47]!=22)) goto l15;
pile[v[22]]=111; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+8,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+13,jvj+14)*/
if(x[jvj+14]==54||x[jvj+14]==48||x[jvj+14]==55||x[jvj+14]==50||x[jvj+14]==267||x[jvj+14]==156||x[jvj+14]==1272) goto l14;
l15:x[jvj+48]=x[RM] ;z[jvj+48]=z[RM];
l16:if(x[jvj+19]!=incon) goto l17;
l18:pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+8,jvj+52)*/
x[jvj+107]=w[x[jvj+52]][8];
V90=V134+1;
l19:if((x[jvj+107]>0)) goto l20;
x[jvj+109]=w[x[jvj+52]][9];
if((x[jvj+52]!=22)) goto l23;
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+8,jvj+50)*/
pile[v[22]]=101; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+50,jvj+51)*/
if(x[jvj+51]==228||x[jvj+51]==278||x[jvj+51]==137||x[jvj+51]==138||x[jvj+51]==139||x[jvj+51]==141||x[jvj+51]==149||x[jvj+51]==432||x[jvj+51]==1382||x[jvj+51]==1660) goto l26;
l23:V84=V134+1;
l24:if((x[jvj+109]<=0)) goto l26;
x[jvj+56]=s[x[jvj+109]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+109];
pile[v[22]]=jvj+56; pile[WZ1]=jvj+8; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(jvj+56,jvj+8,jvj+57)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+56; pile[WZ3]=S; pile[WZ4]=jvj+48; pile[WZ5]=V84; 
(*f[1633])( );     /*COPTT0(jvj+8,jvj+56,jvj+57,S,jvj+48,V84)*/
l25:x[jvj+109]=t[x[jvj+109]];
goto l24;
l1:V6=67;
goto l12;
l2:x[jvj+9]=incon;
x[jvj+3]=vo[15];z[jvj+3]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(583,jvj+3,jvj+4)*/
pile[v[22]]=1771; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1771,jvj+4,jvj+5)*/
if((x[jvj+5]!=68)) goto l3;
x[jvj+9]=68 ;z[jvj+9]=68;
l4:V21=x[jvj+8];
pile[v[22]]=R; pile[WZ1]=jvj+6; 
(*f[1821])( );     /*CPO0(R,jvj+6,VL)*/
VL=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VL; pile[WZ4]=jvj+7; 
(*f[270])( );     /*QUADRI7(100,21,140,VL,jvj+7)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+7; pile[WZ2]=R; pile[WZ3]=S; pile[WZ4]=VL; pile[WZ5]=V134; pile[v[22]+6]=jvj+8; pile[v[22]+7]=jvj+9; 
(*f[1820])( );     /*CPM0(jvj+2,jvj+7,R,S,VL,V134,jvj+8,jvj+9)*/
pile[v[22]]=BT; pile[WZ1]=R; pile[WZ2]=V21; 
(*f[134])( );     /*OTA0(BT,R,V21)*/
goto l13;
l3:x[jvj+9]=67 ;z[jvj+9]=67;
goto l4;
l6:x[jvj+16]=s[x[jvj+22]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+22];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+15,jvj+16)*/
x[jvj+22]=t[x[jvj+22]];
l5:if((x[jvj+22]>0)) goto l6;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+23; 
(*f[299])( );     /*COPEL0(jvj+15,jvj+23)*/
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+8,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+21; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+21,jvj+58)*/
pile[WZ3]=585; pile[WZ4]=jvj+86; 
(*f[181])( );     /*QUADRI2(100,20,101,585,jvj+86)*/
pile[WZ3]=156; pile[WZ4]=jvj+89; 
(*f[181])( );     /*QUADRI2(100,20,101,156,jvj+89)*/
pile[WZ3]=228; pile[WZ4]=jvj+93; 
(*f[181])( );     /*QUADRI2(100,20,101,228,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=111; pile[WZ2]=jvj+94; 
(*f[54])( );     /*TRI1(jvj+93,111,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+94; pile[WZ5]=jvj+92; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+25,jvj+94,jvj+92)*/
pile[v[22]]=jvj+89; pile[WZ1]=111; pile[WZ2]=jvj+90; 
(*f[54])( );     /*TRI1(jvj+89,111,jvj+90)*/
pile[v[22]]=jvj+90; pile[WZ1]=jvj+23; pile[WZ2]=107; pile[WZ3]=jvj+91; 
(*f[301])( );     /*TRI11(jvj+90,jvj+23,107,jvj+91)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+92; pile[WZ4]=jvj+91; pile[WZ5]=jvj+88; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+92,jvj+91,jvj+88)*/
pile[v[22]]=jvj+86; pile[WZ1]=111; pile[WZ2]=jvj+87; 
(*f[54])( );     /*TRI1(jvj+86,111,jvj+87)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+88; pile[WZ4]=jvj+87; pile[WZ5]=jvj+60; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+88,jvj+87,jvj+60)*/
pile[v[22]]=jvj+58; pile[WZ1]=111; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+58,111,jvj+59)*/
pile[v[22]]=jvj+60; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+61; 
(*f[298])( );     /*TRIENS1(jvj+60,(-20),jvj+59,107,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+61,22,100,jvj+19)*/
goto l8;
l7:if(x[jvj+18]!=614&&x[jvj+18]!=1162&&x[jvj+18]!=1282&&x[jvj+18]!=1283&&x[jvj+18]!=1284&&x[jvj+18]!=1285&&x[jvj+18]!=1036) goto l8;
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+8,jvj+20)*/
if((x[jvj+20]!=22)) goto l8;
pile[v[22]]=145; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(145,jvj+18,jvj+21)*/
pile[v[22]]=107; pile[WZ1]=jvj+8; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,jvj+8,jvj+22)*/
x[jvj+15]=0 ;z[jvj+15]=0;
goto l5;
l9:pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+8,jvj+28)*/
pile[v[22]]=103; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+8,jvj+29)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; pile[WZ2]=R; 
(*f[1822])( );     /*CPP0(jvj+28,jvj+29,R)*/
if((V57=w[x[BT]][1])==incon) goto l10;
if((V57!=23)) goto l10;
V58=x[jvj+8];
pile[v[22]]=BT; pile[WZ1]=R; pile[WZ2]=V58; 
(*f[134])( );     /*OTA0(BT,R,V58)*/
goto l10;
l14:x[jvj+48]=x[jvj+8] ;z[jvj+48]=z[jvj+8];
goto l16;
l17:V59=V134+1;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+48; pile[WZ2]=S; pile[WZ3]=V59; pile[WZ4]=jvj+49; 
(*f[1823])( );if(v[102]) goto l18;     /*COPE0(jvj+19,jvj+48,S,V59,jvj+49)*/
if((V160=w[x[BT]][1])==incon) goto l28;
if((V160!=23)) goto l33;
V159=x[jvj+8];
pile[v[22]]=BT; pile[WZ1]=R; pile[WZ2]=V159; 
(*f[134])( );     /*OTA0(BT,R,V159)*/
pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+49; 
(*f[36])( );     /*PLUSC0(R,BT,jvj+49)*/
l28:x[jvj+8]=x[jvj+49] ;z[jvj+8]=z[jvj+49];
V134=V59;
goto l27;
l20:x[jvj+53]=s[x[jvj+107]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+107];
pile[v[22]]=jvj+53; pile[WZ1]=jvj+8; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(jvj+53,jvj+8,jvj+54)*/
x[jvj+108]=x[jvj+54] ;z[jvj+108]=z[jvj+54];
l21:if((x[jvj+108]>0)) goto l22;
x[jvj+107]=t[x[jvj+107]];
goto l19;
l22:x[jvj+55]=s[x[jvj+108]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+108];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+53; pile[WZ2]=jvj+55; pile[WZ3]=S; pile[WZ4]=jvj+48; pile[WZ5]=V90; 
(*f[1633])( );     /*COPTT0(jvj+8,jvj+53,jvj+55,S,jvj+48,V90)*/
x[jvj+108]=t[x[jvj+108]];
goto l21;
l26:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; return;
l31:pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+34; 
(*f[35])( );     /*CHGC1(R,BT,jvj+34)*/
goto l29;
l32:pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+43; 
(*f[35])( );     /*CHGC1(R,BT,jvj+43)*/
goto l30;
l33:pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+49; 
(*f[35])( );     /*CHGC1(R,BT,jvj+49)*/
goto l28;
}
