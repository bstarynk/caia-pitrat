#include "dx.h"
void DMR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V49=0,V57=0,V112=0,V145=0,V139=0,V140=0,V141=0,V142=0,V143=0,V144=0,V111=0,TT=0,V47=0,V19=0,V16=0,V1=0,E=0,V6=0,V134=0,V137=0,V127=0,V128=0,V129=0,V130=0,V131=0,V132=0,V133=0,V135=0,V136=0,V5=0,KK=0,K=0,V80=0,V=0,L=0;
int X,VA,XX,R,BT,VT,P;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=146;
x[jvj+1]=10493;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1645&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; VA=pile[v[22]+1]; XX=pile[v[22]+2]; R=pile[v[22]+3]; BT=pile[v[22]+4]; VT=pile[v[22]+5]; P=pile[v[22]+6]; v[22]+=7; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=x[X] ;z[jvj+10]=z[X];
x[jvj+35]=x[VA] ;z[jvj+35]=z[VA];
l52:K=incon;
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+10,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]==89)) goto l11;
TT=87;
l17:pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+10,jvj+24)*/
pile[v[22]]=162; pile[WZ1]=jvj+24; 
(*f[219])( );if(v[102]) goto l18;     /*FNDC2(162,jvj+24,V1)*/
V1=pile[WZ2]; 
if((V1==68)) goto l18;
E=V1;
l23:pile[v[22]]=160; pile[WZ1]=jvj+10; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(160,jvj+10,jvj+29)*/
pile[v[22]]=162; pile[WZ1]=jvj+29; 
(*f[219])( );if(v[102]) goto l26;     /*FNDC2(162,jvj+29,KK)*/
KK=pile[WZ2]; 
V16=incon;
if((KK!=46)) goto l16;
if((TT!=67)) goto l16;
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+10,jvj+23)*/
pile[v[22]]=162; pile[WZ1]=jvj+23; 
(*f[219])( );if(v[102]) goto l16;     /*FNDC2(162,jvj+23,V19)*/
V19=pile[WZ2]; 
if((V19!=68)) goto l16;
V16=43;
l24:K=V16;
if((K==37)) goto l25;
pile[v[22]]=120; pile[WZ1]=jvj+10; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(120,jvj+10,jvj+31)*/
pile[v[22]]=160; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(160,jvj+31,jvj+32)*/
pile[v[22]]=162; pile[WZ1]=jvj+32; 
(*f[219])( );if(v[102]) goto l26;     /*FNDC2(162,jvj+32,V80)*/
V80=pile[WZ2]; 
if((V80!=37)) goto l26;
pile[v[22]]=102; pile[WZ1]=jvj+31; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+31,jvj+30)*/
l36:if((E==100)) goto l38;
x[jvj+39]=incon;
pile[v[22]]=103; pile[WZ1]=jvj+10; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(103,jvj+10,jvj+33)*/
x[jvj+39]=x[jvj+33] ;z[jvj+39]=z[jvj+33];
l37:pile[v[22]]=E; pile[WZ1]=jvj+30; pile[WZ2]=jvj+35; pile[WZ3]=jvj+39; pile[WZ4]=jvj+10; pile[WZ5]=K; pile[v[22]+6]=XX; pile[v[22]+7]=R; pile[v[22]+8]=jvj+40; 
(*f[1831])( );if(v[102]) goto l38;     /*DMS0(E,jvj+30,jvj+35,jvj+39,jvj+10,K,XX,R,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=BT; pile[WZ2]=XX; pile[WZ3]=R; 
(*f[1647])( );     /*DMT0(jvj+40,BT,XX,R)*/
l38:if((x[VT]!=250)) goto l40;
if((E==100)) goto l40;
x[jvj+80]=incon;
if((x[P]==853)) goto l29;
x[jvj+80]=10449 ;z[jvj+80]=10449;
l28:pile[v[22]]=120; pile[WZ1]=jvj+10; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(120,jvj+10,jvj+37)*/
l40:if(K!=incon) goto l41;
l46:if((x[VT]!=250)) goto l30;
if((E!=100)) goto l48;
pile[v[22]]=jvj+35; pile[WZ1]=jvj+67; 
(*f[255])( );     /*COPEXP0(jvj+35,jvj+67)*/
pile[v[22]]=103; pile[WZ1]=jvj+10; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(103,jvj+10,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=jvj+69; 
(*f[255])( );     /*COPEXP0(jvj+68,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10449; pile[WZ4]=jvj+126; 
(*f[181])( );     /*QUADRI2(100,20,101,10449,jvj+126)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-593); pile[WZ4]=jvj+130; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+130)*/
pile[v[22]]=jvj+130; pile[WZ1]=103; pile[WZ2]=jvj+131; 
(*f[54])( );     /*TRI1(jvj+130,103,jvj+131)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+67; pile[WZ4]=jvj+131; pile[WZ5]=jvj+127; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+67,jvj+131,jvj+127)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+135; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+135)*/
pile[WZ3]=41; pile[WZ4]=jvj+137; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+137)*/
pile[v[22]]=jvj+135; pile[WZ1]=111; pile[WZ2]=jvj+136; 
(*f[54])( );     /*TRI1(jvj+135,111,jvj+136)*/
pile[v[22]]=jvj+136; pile[WZ1]=jvj+137; pile[WZ2]=103; pile[WZ3]=jvj+138; 
(*f[58])( );     /*TRI3(jvj+136,jvj+137,103,jvj+138)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+69; pile[WZ4]=jvj+138; pile[WZ5]=jvj+134; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+69,jvj+138,jvj+134)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-614); pile[WZ4]=jvj+132; 
(*f[270])( );     /*QUADRI7(100,21,140,(-614),jvj+132)*/
pile[v[22]]=jvj+132; pile[WZ1]=103; pile[WZ2]=jvj+133; 
(*f[54])( );     /*TRI1(jvj+132,103,jvj+133)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+134; pile[WZ4]=jvj+133; pile[WZ5]=jvj+128; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+134,jvj+133,jvj+128)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+142; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+142)*/
pile[WZ3]=41; pile[WZ4]=jvj+144; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+144)*/
pile[v[22]]=jvj+142; pile[WZ1]=111; pile[WZ2]=jvj+143; 
(*f[54])( );     /*TRI1(jvj+142,111,jvj+143)*/
pile[v[22]]=jvj+143; pile[WZ1]=jvj+144; pile[WZ2]=103; pile[WZ3]=jvj+145; 
(*f[58])( );     /*TRI3(jvj+143,jvj+144,103,jvj+145)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+69; pile[WZ4]=jvj+145; pile[WZ5]=jvj+141; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+69,jvj+145,jvj+141)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-594); pile[WZ4]=jvj+139; 
(*f[270])( );     /*QUADRI7(100,21,140,(-594),jvj+139)*/
pile[v[22]]=jvj+139; pile[WZ1]=103; pile[WZ2]=jvj+140; 
(*f[54])( );     /*TRI1(jvj+139,103,jvj+140)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+141; pile[WZ4]=jvj+140; pile[WZ5]=jvj+129; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+141,jvj+140,jvj+129)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+126; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+126,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=114; pile[WZ2]=jvj+127; 
(*f[36])( );     /*PLUSC0(jvj+70,114,jvj+127)*/
pile[WZ2]=jvj+128; 
(*f[36])( );     /*PLUSC0(jvj+70,114,jvj+128)*/
pile[WZ2]=jvj+129; 
(*f[36])( );     /*PLUSC0(jvj+70,114,jvj+129)*/
pile[WZ1]=BT; pile[WZ2]=XX; pile[WZ3]=R; 
(*f[1647])( );     /*DMT0(jvj+70,BT,XX,R)*/
l49:pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(100,jvj+10,jvj+71)*/
if((x[jvj+71]==185)) goto l50;
V111=g[90];
if((V111<=0)) goto l50;
V112=vg[90];
if((V112!=0)) goto l8;
if((V111<3)) goto l10;
l8:pile[v[22]]=90; pile[WZ1]=10493; pile[WZ2]=0; pile[WZ3]=(-596); pile[WZ4]=jvj+10; pile[WZ5]=jvj+11; 
(*f[232])( );     /*INTERP3(90,10493,0,(-596),jvj+10,jvj+11)*/
if((x[jvj+11]==135)) goto l9;
l50:if((E==100)) goto l51;
pile[v[22]]=120; pile[WZ1]=jvj+10; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(120,jvj+10,jvj+72)*/
x[jvj+35]=x[jvj+30] ;z[jvj+35]=z[jvj+30];
x[jvj+10]=x[jvj+72] ;z[jvj+10]=z[jvj+72];
goto l52;
l2:x[jvj+3]=t[x[jvj+3]];
l1:if((x[jvj+3]<=0)) goto l14;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+4,V49)*/
V49=pile[WZ2]; 
if((V49!=V47)) goto l2;
pile[v[22]]=158; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(158,jvj+4,jvj+19)*/
pile[v[22]]=162; pile[WZ1]=jvj+19; 
(*f[219])( );if(v[102]) goto l14;     /*FNDC2(162,jvj+19,TT)*/
TT=pile[WZ2]; 
goto l17;
l3:pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(365,jvj+5,jvj+6)*/
l4:if((x[jvj+6]<=0)) goto l15;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
if((x[jvj+7]==x[jvj+20])) goto l5;
pile[v[22]]=283; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(283,jvj+7,jvj+8)*/
x[jvj+146]=x[jvj+8] ;z[jvj+146]=z[jvj+8];
l6:if((x[jvj+146]<=0)) goto l5;
x[jvj+9]=s[x[jvj+146]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+146];
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+9,V57)*/
V57=pile[WZ2]; 
if((V57!=V47)) goto l7;
pile[v[22]]=158; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(158,jvj+9,jvj+22)*/
pile[v[22]]=162; pile[WZ1]=jvj+22; 
(*f[219])( );if(v[102]) goto l15;     /*FNDC2(162,jvj+22,TT)*/
TT=pile[WZ2]; 
goto l17;
l5:x[jvj+6]=t[x[jvj+6]];
goto l4;
l7:x[jvj+146]=t[x[jvj+146]];
goto l6;
l9:if((V111<4)) goto l10;
goto l50;
l10:V145=x[jvj+10];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V139)*/
V139=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V139; pile[WZ2]=10493; 
(*f[98])( );     /*SRA3(135,V139,10493,V140)*/
V140=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V140; 
(*f[39])( );     /*SDX0(41,2,V140,V141)*/
V141=pile[WZ3]; 
pile[v[22]]=V141; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V141,125,V142)*/
V142=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V142; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(20,V142,126,V143)*/
V143=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V145; pile[WZ2]=V143; 
(*f[39])( );     /*SDX0(20,V145,V143,V144)*/
V144=pile[WZ3]; 
pile[v[22]]=V144; 
(*f[40])( );     /*SLG0(V144)*/
if((V111!=2)) goto l50;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l50;
l11:pile[v[22]]=103; pile[WZ1]=jvj+10; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,jvj+10,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+14,jvj+15)*/
if(x[jvj+15]!=89&&x[jvj+15]!=96&&x[jvj+15]!=41&&x[jvj+15]!=20&&x[jvj+15]!=1317) goto l12;
pile[v[22]]=162; pile[WZ1]=jvj+15; 
(*f[219])( );if(v[102]) goto l12;     /*FNDC2(162,jvj+15,TT)*/
TT=pile[WZ2]; 
goto l17;
l12:if((x[jvj+15]!=22)) goto l13;
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+14,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+16,jvj+17)*/
pile[v[22]]=146; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(146,jvj+17,jvj+18)*/
pile[v[22]]=162; pile[WZ1]=jvj+18; 
(*f[219])( );if(v[102]) goto l13;     /*FNDC2(162,jvj+18,TT)*/
TT=pile[WZ2]; 
goto l17;
l13:pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+14,V47)*/
V47=pile[WZ2]; 
x[jvj+2]=vo[15];z[jvj+2]=vz[15];
pile[v[22]]=283; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(283,jvj+2,jvj+3)*/
goto l1;
l14:x[jvj+20]=vo[15];z[jvj+20]=vz[15];
pile[v[22]]=297; pile[WZ1]=jvj+20; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(297,jvj+20,jvj+5)*/
pile[v[22]]=147; pile[WZ1]=jvj+5; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(147,jvj+5,jvj+21)*/
for(a=x[jvj+21];a>0;a=t[a]) if(s[a]==V47) goto l3;
l15:TT=68;
goto l17;
l16:V16=KK;
goto l24;
l18:E=TT;
goto l23;
l20:if((V5<4)) goto l21;
goto l49;
l21:pile[v[22]]=103; pile[WZ1]=jvj+10; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+10,jvj+26)*/
x[jvj+27]=vo[15];z[jvj+27]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(583,jvj+27,jvj+28)*/
V134=x[jvj+26];
V137=x[jvj+28];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V127)*/
V127=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V127; pile[WZ2]=10493; 
(*f[98])( );     /*SRA3(135,V127,10493,V128)*/
V128=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V128; 
(*f[39])( );     /*SDX0(41,1,V128,V129)*/
V129=pile[WZ3]; 
pile[v[22]]=V129; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V129,125,V130)*/
V130=pile[WZ2]; 
pile[v[22]]=V130; pile[WZ1]=(-2943); 
(*f[37])( );     /*SRA0(V130,(-2943),V131)*/
V131=pile[WZ2]; 
pile[v[22]]=V131; pile[WZ1]=(-3412); 
(*f[37])( );     /*SRA0(V131,(-3412),V132)*/
V132=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V134; pile[WZ2]=V132; 
(*f[39])( );     /*SDX0(20,V134,V132,V133)*/
V133=pile[WZ3]; 
pile[v[22]]=V133; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V133,(-740),V135)*/
V135=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V137; pile[WZ2]=V135; 
(*f[39])( );     /*SDX0(20,V137,V135,V136)*/
V136=pile[WZ3]; 
pile[v[22]]=V136; 
(*f[40])( );     /*SLG0(V136)*/
l22:if((V5!=2)) goto l49;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l49;
l25:pile[v[22]]=103; pile[WZ1]=jvj+10; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(103,jvj+10,jvj+30)*/
goto l36;
l26:
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+30)*/
if(K!=incon) goto l36;
goto l38;
l27:x[jvj+50]=x[jvj+34] ;z[jvj+50]=z[jvj+34];
l43:pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; 
(*f[255])( );     /*COPEXP0(jvj+50,jvj+51)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+52; 
(*f[255])( );     /*COPEXP0(jvj+35,jvj+52)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+53; 
(*f[255])( );     /*COPEXP0(jvj+30,jvj+53)*/
pile[v[22]]=103; pile[WZ1]=jvj+10; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,jvj+10,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; 
(*f[255])( );     /*COPEXP0(jvj+54,jvj+55)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10358; pile[WZ4]=jvj+96; 
(*f[181])( );     /*QUADRI2(100,20,101,10358,jvj+96)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+100; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=103; pile[WZ2]=jvj+101; 
(*f[54])( );     /*TRI1(jvj+100,103,jvj+101)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+51; pile[WZ4]=jvj+101; pile[WZ5]=jvj+97; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+51,jvj+101,jvj+97)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-592); pile[WZ4]=jvj+102; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+102)*/
pile[v[22]]=jvj+102; pile[WZ1]=103; pile[WZ2]=jvj+103; 
(*f[54])( );     /*TRI1(jvj+102,103,jvj+103)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+52; pile[WZ4]=jvj+103; pile[WZ5]=jvj+98; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+52,jvj+103,jvj+98)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-632); pile[WZ4]=jvj+104; 
(*f[270])( );     /*QUADRI7(100,21,140,(-632),jvj+104)*/
pile[v[22]]=jvj+104; pile[WZ1]=103; pile[WZ2]=jvj+105; 
(*f[54])( );     /*TRI1(jvj+104,103,jvj+105)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+105; pile[WZ5]=jvj+99; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+55,jvj+105,jvj+99)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-593); pile[WZ4]=jvj+106; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=103; pile[WZ2]=jvj+107; 
(*f[54])( );     /*TRI1(jvj+106,103,jvj+107)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+53; pile[WZ4]=jvj+107; pile[WZ5]=jvj+94; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+53,jvj+107,jvj+94)*/
pile[v[22]]=jvj+94; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+95; 
(*f[180])( );     /*TRIENS0(jvj+94,(-20),113,jvj+95)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+96; pile[WZ4]=jvj+95; pile[WZ5]=jvj+56; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+96,jvj+95,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=114; pile[WZ2]=jvj+97; 
(*f[36])( );     /*PLUSC0(jvj+56,114,jvj+97)*/
pile[WZ2]=jvj+98; 
(*f[36])( );     /*PLUSC0(jvj+56,114,jvj+98)*/
pile[WZ2]=jvj+99; 
(*f[36])( );     /*PLUSC0(jvj+56,114,jvj+99)*/
pile[WZ1]=BT; pile[WZ2]=XX; pile[WZ3]=R; 
(*f[1647])( );     /*DMT0(jvj+56,BT,XX,R)*/
l44:if(K!=38&&K!=124&&K!=33&&K!=35&&K!=(-89)&&K!=126) goto l46;
x[jvj+114]=incon;
if((K==38)) goto l31;
if((K==124)) goto l32;
if((K==33)) goto l33;
if((K==(-89))) goto l34;
if((K==126)) goto l35;
x[jvj+114]=10863 ;z[jvj+114]=10863;
l45:pile[v[22]]=jvj+35; pile[WZ1]=jvj+57; 
(*f[255])( );     /*COPEXP0(jvj+35,jvj+57)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+58; 
(*f[255])( );     /*COPEXP0(jvj+30,jvj+58)*/
pile[v[22]]=103; pile[WZ1]=jvj+10; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(103,jvj+10,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; 
(*f[255])( );     /*COPEXP0(jvj+59,jvj+60)*/
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(102,jvj+10,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; 
(*f[255])( );     /*COPEXP0(jvj+61,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+114; pile[WZ4]=jvj+110; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+114,jvj+110)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-592); pile[WZ4]=jvj+115; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+115)*/
pile[v[22]]=jvj+115; pile[WZ1]=103; pile[WZ2]=jvj+116; 
(*f[54])( );     /*TRI1(jvj+115,103,jvj+116)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+57; pile[WZ4]=jvj+116; pile[WZ5]=jvj+111; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+57,jvj+116,jvj+111)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+117; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+117)*/
pile[v[22]]=jvj+117; pile[WZ1]=103; pile[WZ2]=jvj+118; 
(*f[54])( );     /*TRI1(jvj+117,103,jvj+118)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+60; pile[WZ4]=jvj+118; pile[WZ5]=jvj+112; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+60,jvj+118,jvj+112)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-632); pile[WZ4]=jvj+119; 
(*f[270])( );     /*QUADRI7(100,21,140,(-632),jvj+119)*/
pile[v[22]]=jvj+119; pile[WZ1]=103; pile[WZ2]=jvj+120; 
(*f[54])( );     /*TRI1(jvj+119,103,jvj+120)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+62; pile[WZ4]=jvj+120; pile[WZ5]=jvj+113; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+62,jvj+120,jvj+113)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-593); pile[WZ4]=jvj+121; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+121)*/
pile[v[22]]=jvj+121; pile[WZ1]=103; pile[WZ2]=jvj+122; 
(*f[54])( );     /*TRI1(jvj+121,103,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+122; pile[WZ5]=jvj+108; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+58,jvj+122,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+109; 
(*f[180])( );     /*TRIENS0(jvj+108,(-20),113,jvj+109)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+110; pile[WZ4]=jvj+109; pile[WZ5]=jvj+63; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+110,jvj+109,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=114; pile[WZ2]=jvj+111; 
(*f[36])( );     /*PLUSC0(jvj+63,114,jvj+111)*/
pile[WZ2]=jvj+112; 
(*f[36])( );     /*PLUSC0(jvj+63,114,jvj+112)*/
pile[WZ2]=jvj+113; 
(*f[36])( );     /*PLUSC0(jvj+63,114,jvj+113)*/
pile[WZ1]=BT; pile[WZ2]=XX; pile[WZ3]=R; 
(*f[1647])( );     /*DMT0(jvj+63,BT,XX,R)*/
goto l46;
l29:x[jvj+80]=10786 ;z[jvj+80]=10786;
goto l28;
l30:pile[v[22]]=120; pile[WZ1]=jvj+10; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(120,jvj+10,jvj+38)*/
l48:if((E!=68)) goto l49;
V5=g[12];
if((V5<=0)) goto l49;
V6=vg[12];
if((V6!=0)) goto l19;
if((V5<3)) goto l21;
l19:pile[v[22]]=12; pile[WZ1]=10493; pile[WZ2]=0; pile[WZ3]=(-596); pile[WZ4]=jvj+10; pile[WZ5]=jvj+25; 
(*f[232])( );     /*INTERP3(12,10493,0,(-596),jvj+10,jvj+25)*/
if((x[jvj+25]==135)) goto l20;
goto l49;
l31:x[jvj+114]=10527 ;z[jvj+114]=10527;
goto l45;
l32:x[jvj+114]=10550 ;z[jvj+114]=10550;
goto l45;
l33:x[jvj+114]=10819 ;z[jvj+114]=10819;
goto l45;
l34:x[jvj+114]=11524 ;z[jvj+114]=11524;
goto l45;
l35:x[jvj+114]=11636 ;z[jvj+114]=11636;
goto l45;
l39:pile[v[22]]=jvj+30; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(jvj+30,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+80; pile[WZ4]=jvj+79; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+80,jvj+79)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-593); pile[WZ4]=jvj+81; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=103; pile[WZ2]=jvj+82; 
(*f[54])( );     /*TRI1(jvj+81,103,jvj+82)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+82; pile[WZ5]=jvj+77; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+41,jvj+82,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+78; 
(*f[180])( );     /*TRIENS0(jvj+77,(-20),114,jvj+78)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+79; pile[WZ4]=jvj+78; pile[WZ5]=jvj+42; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+79,jvj+78,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=BT; pile[WZ2]=XX; pile[WZ3]=R; 
(*f[1647])( );     /*DMT0(jvj+42,BT,XX,R)*/
goto l40;
l41:if((K==47)) goto l42;
if((K!=95)) goto l44;
x[jvj+50]=incon;
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,jvj+10,jvj+34)*/
pile[v[22]]=130; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(130,jvj+34,L)*/
L=pile[WZ2]; 
if((L>=0)) goto l27;
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[255])( );     /*COPEXP0(jvj+35,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=64; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,20,101,64,jvj+73)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=75; pile[WZ4]=jvj+76; 
(*f[192])( );     /*QUADRI4(100,41,130,75,jvj+76)*/
pile[v[22]]=jvj+73; pile[WZ1]=111; pile[WZ2]=jvj+74; 
(*f[54])( );     /*TRI1(jvj+73,111,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+36; pile[WZ2]=103; pile[WZ3]=jvj+75; 
(*f[58])( );     /*TRI3(jvj+74,jvj+36,103,jvj+75)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+76; pile[WZ4]=jvj+75; pile[WZ5]=jvj+50; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+76,jvj+75,jvj+50)*/
goto l43;
l42:pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,jvj+10,jvj+43)*/
pile[v[22]]=101; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+43,jvj+44)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+45; 
(*f[255])( );     /*COPEXP0(jvj+35,jvj+45)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+46; 
(*f[255])( );     /*COPEXP0(jvj+30,jvj+46)*/
pile[v[22]]=103; pile[WZ1]=jvj+10; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,jvj+10,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; 
(*f[255])( );     /*COPEXP0(jvj+47,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+44; pile[WZ4]=jvj+85; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+44,jvj+85)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-592); pile[WZ4]=jvj+88; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=103; pile[WZ2]=jvj+89; 
(*f[54])( );     /*TRI1(jvj+88,103,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+89; pile[WZ5]=jvj+86; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+45,jvj+89,jvj+86)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+90; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+90)*/
pile[v[22]]=jvj+90; pile[WZ1]=103; pile[WZ2]=jvj+91; 
(*f[54])( );     /*TRI1(jvj+90,103,jvj+91)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+91; pile[WZ5]=jvj+87; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+48,jvj+91,jvj+87)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-593); pile[WZ4]=jvj+92; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=103; pile[WZ2]=jvj+93; 
(*f[54])( );     /*TRI1(jvj+92,103,jvj+93)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+46; pile[WZ4]=jvj+93; pile[WZ5]=jvj+83; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+46,jvj+93,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+84; 
(*f[180])( );     /*TRIENS0(jvj+83,(-20),113,jvj+84)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+85; pile[WZ4]=jvj+84; pile[WZ5]=jvj+49; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+85,jvj+84,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=114; pile[WZ2]=jvj+86; 
(*f[36])( );     /*PLUSC0(jvj+49,114,jvj+86)*/
pile[WZ2]=jvj+87; 
(*f[36])( );     /*PLUSC0(jvj+49,114,jvj+87)*/
pile[WZ1]=BT; pile[WZ2]=XX; pile[WZ3]=R; 
(*f[1647])( );     /*DMT0(jvj+49,BT,XX,R)*/
goto l44;
l47:pile[v[22]]=jvj+30; pile[WZ1]=jvj+64; 
(*f[255])( );     /*COPEXP0(jvj+30,jvj+64)*/
pile[v[22]]=VT; pile[WZ1]=jvj+65; 
(*f[255])( );     /*COPEXP0(VT,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+124; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+124)*/
pile[v[22]]=jvj+65; pile[WZ1]=436; pile[WZ2]=jvj+123; 
(*f[54])( );     /*TRI1(jvj+65,436,jvj+123)*/
pile[v[22]]=jvj+123; pile[WZ1]=jvj+124; pile[WZ2]=111; pile[WZ3]=jvj+125; 
(*f[58])( );     /*TRI3(jvj+123,jvj+124,111,jvj+125)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+64; pile[WZ4]=jvj+125; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+64,jvj+125,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=BT; pile[WZ2]=XX; pile[WZ3]=R; 
(*f[1647])( );     /*DMT0(jvj+66,BT,XX,R)*/
goto l48;
l51:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; return;
l53:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=250; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,250,jvj+39)*/
goto l37;
}
