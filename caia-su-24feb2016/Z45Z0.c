#include "dx.h"
void Z45Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V464=0,V547=0,V560=0,V430=0,V435=0,V449=0,V429=0,V601=0,V486=0,V492=0,V14=0,V34=0,V20=0,F=0,V9=0,V25=0,V41=0,V5=0,V606=0,V77=0,V61=0,V83=0,V69=0,V90=0,V65=0,V608=0,V168=0,V179=0,V463=0,V409=0,V279=0,V287=0,V301=0,V328=0,V342=0,V124=0,V594=0,V116=0,V115=0,V590=0,V596=0,V120=0,V119=0,V592=0,V574=0,V572=0,V625=0,V210=0,V265=0,V230=0,V245=0,V362=0,V373=0;
int EXEXEX,RRRT;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=221;
if(v[0]>99700) (*f[6])( );

EXEXEX=pile[v[22]]; RRRT=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[RRRT] ;z[jvj+3]=z[RRRT];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]==25)) goto l2;
if((x[jvj+5]!=55)) goto l76;
pile[v[22]]=107; pile[WZ1]=jvj+3; pile[WZ2]=jvj+94; 
(*f[33])( );     /*FNDE0(107,jvj+3,jvj+94)*/
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l69;     /*FNDC0(870,jvj+3,V409)*/
V409=pile[WZ2]; 
x[jvj+95]=vo[16];z[jvj+95]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+95; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(498,jvj+95,jvj+96)*/
pile[v[22]]=1216; pile[WZ1]=jvj+96; pile[WZ2]=jvj+97; 
(*f[33])( );     /*FNDE0(1216,jvj+96,jvj+97)*/
for(a=x[jvj+97];a>0;a=t[a]) if(s[a]==1291) goto l43;
l48:if((V409==1)) goto l49;
if((V409!=2)) goto l69;
for(i=x[jvj+94],V124=0;i>0;i=t[i],V124++)  ;
if((V124!=2)) goto l69;
x[jvj+219]=x[jvj+94] ;z[jvj+219]=z[jvj+94];
l61:if((x[jvj+219]<=0)) goto l69;
x[jvj+130]=s[x[jvj+219]] ;z[jvj+130]=(x[jvj+130]<=sepcte) ? x[jvj+130] : z[jvj+219];
pile[v[22]]=111; pile[WZ1]=jvj+130; pile[WZ2]=jvj+131; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(111,jvj+130,jvj+131)*/
pile[v[22]]=101; pile[WZ1]=jvj+131; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(101,jvj+131,jvj+132)*/
if((x[jvj+132]!=26)) goto l62;
x[jvj+220]=x[jvj+94] ;z[jvj+220]=z[jvj+94];
l63:if((x[jvj+220]<=0)) goto l62;
x[jvj+133]=s[x[jvj+220]] ;z[jvj+133]=(x[jvj+133]<=sepcte) ? x[jvj+133] : z[jvj+220];
if((x[jvj+130]==x[jvj+133])) goto l64;
pile[v[22]]=111; pile[WZ1]=jvj+133; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(111,jvj+133,jvj+134)*/
pile[v[22]]=101; pile[WZ1]=jvj+134; pile[WZ2]=jvj+135; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(101,jvj+134,jvj+135)*/
if((x[jvj+135]!=25)) goto l64;
x[jvj+136]=d[20];z[jvj+136]=0;
l65:if((x[jvj+136]<=0)) goto l64;
x[jvj+137]=s[x[jvj+136]] ;z[jvj+137]=(x[jvj+137]<=sepcte) ? x[jvj+137] : z[jvj+136];
pile[v[22]]=268; pile[WZ1]=jvj+137; pile[WZ2]=jvj+138; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(268,jvj+137,jvj+138)*/
pile[v[22]]=jvj+138; pile[WZ1]=jvj+130; pile[WZ2]=jvj+139; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(jvj+138,jvj+130,jvj+139)*/
pile[v[22]]=100; pile[WZ1]=jvj+139; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(100,jvj+139,jvj+140)*/
if(x[jvj+140]!=96&&x[jvj+140]!=89&&x[jvj+140]!=41&&x[jvj+140]!=20&&x[jvj+140]!=128&&x[jvj+140]!=570&&x[jvj+140]!=1317) goto l66;
if((x[jvj+141]=w[x[jvj+140]][3])==incon) goto l66;
pile[v[22]]=jvj+139; pile[WZ1]=jvj+141; pile[WZ3]=jvj+142; 
(*f[45])( );if(v[102]) goto l66;     /*FNDZ0(jvj+139,jvj+141,V594,jvj+142)*/
V594=pile[WZ2]; 
V116=V594;
V115=V116;
pile[v[22]]=jvj+130; pile[WZ1]=jvj+137; pile[WZ3]=jvj+143; 
(*f[45])( );if(v[102]) goto l66;     /*FNDZ0(jvj+130,jvj+137,V590,jvj+143)*/
V590=pile[WZ2]; 
x[jvj+144]=d[20];z[jvj+144]=0;
l67:if((x[jvj+144]<=0)) goto l66;
x[jvj+145]=s[x[jvj+144]] ;z[jvj+145]=(x[jvj+145]<=sepcte) ? x[jvj+145] : z[jvj+144];
pile[v[22]]=268; pile[WZ1]=jvj+145; pile[WZ2]=jvj+146; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(268,jvj+145,jvj+146)*/
pile[v[22]]=jvj+146; pile[WZ1]=jvj+133; pile[WZ2]=jvj+147; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(jvj+146,jvj+133,jvj+147)*/
pile[v[22]]=100; pile[WZ1]=jvj+147; pile[WZ2]=jvj+148; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(100,jvj+147,jvj+148)*/
if(x[jvj+148]!=96&&x[jvj+148]!=89&&x[jvj+148]!=41&&x[jvj+148]!=20&&x[jvj+148]!=128&&x[jvj+148]!=570&&x[jvj+148]!=1317) goto l68;
if((x[jvj+149]=w[x[jvj+148]][3])==incon) goto l68;
pile[v[22]]=jvj+147; pile[WZ1]=jvj+149; pile[WZ3]=jvj+150; 
(*f[45])( );if(v[102]) goto l68;     /*FNDZ0(jvj+147,jvj+149,V596,jvj+150)*/
V596=pile[WZ2]; 
V120=V596;
V119=V120;
if((V115<=V119)) goto l68;
pile[v[22]]=jvj+133; pile[WZ1]=jvj+145; pile[WZ3]=jvj+151; 
(*f[45])( );if(v[102]) goto l68;     /*FNDZ0(jvj+133,jvj+145,V592,jvj+151)*/
V592=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=292; 
(*f[207])( );     /*PLUE2(EXEXEX,292)*/
l68:x[jvj+144]=t[x[jvj+144]];
goto l67;
l1:pile[v[22]]=1274; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(1274,jvj+3,V464)*/
V464=pile[WZ2]; 
if((V464!=0)) goto l76;
l40:x[jvj+88]=d[20];z[jvj+88]=0;
l39:if((x[jvj+88]<=0)) goto l76;
x[jvj+89]=s[x[jvj+88]] ;z[jvj+89]=(x[jvj+89]<=sepcte) ? x[jvj+89] : z[jvj+88];
pile[v[22]]=jvj+89; pile[WZ1]=jvj+3; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(jvj+89,jvj+3,jvj+1)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+90; 
(*f[887])( );     /*VARND0(jvj+1,jvj+90)*/
for(i=x[jvj+90],V463=0;i>0;i=t[i],V463++)  ;
if((V463!=1)) goto l41;
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,jvj+1,jvj+2)*/
if((x[jvj+2]==484)) goto l41;
l42:pile[v[22]]=268; pile[WZ1]=jvj+89; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(268,jvj+89,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=jvj+3; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(jvj+91,jvj+3,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=jvj+93; 
(*f[887])( );     /*VARND0(jvj+92,jvj+93)*/
if((x[jvj+93]!=0)) goto l41;
pile[v[22]]=EXEXEX; pile[WZ1]=225; 
(*f[207])( );     /*PLUE2(EXEXEX,225)*/
l41:x[jvj+88]=t[x[jvj+88]];
goto l39;
l2:pile[v[22]]=1142; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1142,jvj+3,jvj+6)*/
if((x[jvj+6]!=68)) goto l5;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(870,jvj+3,V547)*/
V547=pile[WZ2]; 
if((V547<=2)) goto l5;
x[jvj+7]=d[20];z[jvj+7]=0;
l3:if((x[jvj+7]<=0)) goto l5;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+8,jvj+3,jvj+9)*/
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=485)) goto l4;
pile[v[22]]=268; pile[WZ1]=jvj+8; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(268,jvj+8,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+3; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+12,jvj+3,jvj+13)*/
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+13,V560)*/
V560=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+9; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(107,jvj+9,jvj+14)*/
pile[v[22]]=EXEXEX; pile[WZ1]=276; 
(*f[207])( );     /*PLUE2(EXEXEX,276)*/
l4:x[jvj+7]=t[x[jvj+7]];
goto l3;
l5:pile[v[22]]=870; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(870,jvj+3,V430)*/
V430=pile[WZ2]; 
if((V430!=2)) goto l13;
pile[v[22]]=869; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(869,jvj+3,jvj+15)*/
if((x[jvj+15]!=769)) goto l13;
x[jvj+16]=d[20];z[jvj+16]=0;
l6:if((x[jvj+16]<=0)) goto l13;
x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+3; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+17,jvj+3,jvj+18)*/
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+18,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=485)) goto l7;
pile[v[22]]=107; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+18,jvj+21)*/
for(i=x[jvj+21],V435=0;i>0;i=t[i],V435++)  ;
if((V435!=2)) goto l7;
pile[v[22]]=268; pile[WZ1]=jvj+17; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(268,jvj+17,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+3; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+22,jvj+3,jvj+23)*/
pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+23,V449)*/
V449=pile[WZ2]; 
x[jvj+208]=x[jvj+21] ;z[jvj+208]=z[jvj+21];
l8:if((x[jvj+208]<=0)) goto l7;
x[jvj+24]=s[x[jvj+208]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+208];
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=484)) goto l9;
V601=x[jvj+21];
l10:if((V601<=0)) goto l9;
V429=s[V601];
if((x[jvj+24]==V429)) goto l11;
pile[v[22]]=EXEXEX; pile[WZ1]=246; 
(*f[207])( );     /*PLUE2(EXEXEX,246)*/
l11:V601=t[V601];
goto l10;
l7:x[jvj+16]=t[x[jvj+16]];
goto l6;
l9:x[jvj+208]=t[x[jvj+208]];
goto l8;
l13:x[jvj+26]=d[20];z[jvj+26]=0;
l12:if((x[jvj+26]<=0)) goto l32;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+3; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+27,jvj+3,jvj+28)*/
pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+28,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]!=1273)) goto l15;
pile[v[22]]=102; pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+28,jvj+31)*/
pile[v[22]]=130; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,jvj+31,V486)*/
V486=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+27; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(268,jvj+27,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+3; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(jvj+32,jvj+3,jvj+33)*/
pile[v[22]]=130; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,jvj+33,V492)*/
V492=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+28; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(107,jvj+28,jvj+34)*/
pile[v[22]]=EXEXEX; pile[WZ1]=198; 
(*f[207])( );     /*PLUE2(EXEXEX,198)*/
pile[WZ1]=199; 
(*f[207])( );     /*PLUE2(EXEXEX,199)*/
l15:if((V430!=3)) goto l14;
if((x[jvj+30]!=485)) goto l26;
pile[v[22]]=107; pile[WZ1]=jvj+28; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,jvj+28,jvj+35)*/
for(i=x[jvj+35],V14=0;i>0;i=t[i],V14++)  ;
if((V14!=2)) goto l26;
pile[v[22]]=268; pile[WZ1]=jvj+27; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(268,jvj+27,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+3; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(jvj+36,jvj+3,jvj+37)*/
pile[v[22]]=111; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+37,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+39]!=485)) goto l26;
pile[v[22]]=107; pile[WZ1]=jvj+37; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(107,jvj+37,jvj+40)*/
for(i=x[jvj+40],V34=0;i>0;i=t[i],V34++)  ;
if((V34!=2)) goto l26;
x[jvj+209]=x[jvj+35] ;z[jvj+209]=z[jvj+35];
l16:if((x[jvj+209]<=0)) goto l26;
x[jvj+41]=s[x[jvj+209]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+209];
pile[v[22]]=100; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+41,jvj+42)*/
if((x[jvj+42]!=484)) goto l17;
pile[v[22]]=111; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+41,jvj+43)*/
pile[v[22]]=140; pile[WZ1]=jvj+43; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,jvj+43,V20)*/
V20=pile[WZ2]; 
x[jvj+44]=x[jvj+41] ;z[jvj+44]=z[jvj+41];
F=V20;
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; 
(*f[200])( );if(v[102]) goto l17;     /*NDD0(jvj+44,jvj+45)*/
pile[v[22]]=498; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(498,jvj+45,jvj+46)*/
pile[v[22]]=688; pile[WZ1]=jvj+46; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(688,jvj+46,V9)*/
V9=pile[WZ2]; 
if((V9!=1)) goto l17;
pile[v[22]]=102; pile[WZ1]=jvj+41; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+41,jvj+47)*/
x[jvj+210]=x[jvj+35] ;z[jvj+210]=z[jvj+35];
l18:if((x[jvj+210]<=0)) goto l17;
x[jvj+48]=s[x[jvj+210]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+210];
if((x[jvj+41]==x[jvj+48])) goto l19;
pile[v[22]]=130; pile[WZ1]=jvj+48; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+48,V25)*/
V25=pile[WZ2]; 
x[jvj+211]=x[jvj+40] ;z[jvj+211]=z[jvj+40];
l20:if((x[jvj+211]<=0)) goto l19;
x[jvj+49]=s[x[jvj+211]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+211];
pile[v[22]]=100; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+49,jvj+50)*/
if((x[jvj+50]!=484)) goto l21;
pile[v[22]]=111; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+49,jvj+51)*/
pile[v[22]]=140; pile[WZ1]=jvj+51; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+51,V41)*/
V41=pile[WZ2]; 
if((F!=V41)) goto l21;
pile[v[22]]=102; pile[WZ1]=jvj+49; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+49,jvj+52)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[760])( );     /*MEMEX0(jvj+47,jvj+52,jvj+53)*/
if((x[jvj+53]==134)) goto l23;
l21:x[jvj+211]=t[x[jvj+211]];
goto l20;
l17:x[jvj+209]=t[x[jvj+209]];
goto l16;
l19:x[jvj+210]=t[x[jvj+210]];
goto l18;
l23:V606=x[jvj+40];
l22:if((V606<=0)) goto l21;
V5=s[V606];
if((x[jvj+49]==V5)) goto l24;
pile[v[22]]=EXEXEX; pile[WZ1]=72; 
(*f[207])( );     /*PLUE2(EXEXEX,72)*/
l24:V606=t[V606];
goto l22;
l25:if((V430==3)) goto l26;
l14:x[jvj+26]=t[x[jvj+26]];
goto l12;
l26:pile[v[22]]=140; pile[WZ1]=jvj+29; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+29,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+28,jvj+54)*/
if((x[jvj+54]!=484)) goto l14;
V61=V77;
pile[v[22]]=268; pile[WZ1]=jvj+27; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(268,jvj+27,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+3; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+55,jvj+3,jvj+56)*/
pile[v[22]]=111; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+56,jvj+57)*/
pile[v[22]]=101; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+57,jvj+58)*/
if((x[jvj+58]!=485)) goto l14;
pile[v[22]]=107; pile[WZ1]=jvj+56; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(107,jvj+56,jvj+59)*/
for(i=x[jvj+59],V83=0;i>0;i=t[i],V83++)  ;
if((V83!=2)) goto l14;
pile[v[22]]=jvj+28; pile[WZ1]=jvj+60; 
(*f[200])( );if(v[102]) goto l14;     /*NDD0(jvj+28,jvj+60)*/
pile[v[22]]=498; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(498,jvj+60,jvj+61)*/
pile[v[22]]=688; pile[WZ1]=jvj+61; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(688,jvj+61,V69)*/
V69=pile[WZ2]; 
if((V69!=1)) goto l14;
pile[v[22]]=102; pile[WZ1]=jvj+28; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+28,jvj+62)*/
x[jvj+212]=x[jvj+59] ;z[jvj+212]=z[jvj+59];
l27:if((x[jvj+212]<=0)) goto l14;
x[jvj+63]=s[x[jvj+212]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+212];
pile[v[22]]=100; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+63,jvj+64)*/
if((x[jvj+64]!=484)) goto l28;
pile[v[22]]=111; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+63,jvj+65)*/
pile[v[22]]=140; pile[WZ1]=jvj+65; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(140,jvj+65,V90)*/
V90=pile[WZ2]; 
if((V61!=V90)) goto l28;
pile[v[22]]=102; pile[WZ1]=jvj+63; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,jvj+63,jvj+66)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[760])( );     /*MEMEX0(jvj+62,jvj+66,jvj+67)*/
if((x[jvj+67]==134)) goto l30;
l28:x[jvj+212]=t[x[jvj+212]];
goto l27;
l30:V608=x[jvj+59];
l29:if((V608<=0)) goto l28;
V65=s[V608];
if((x[jvj+63]==V65)) goto l31;
pile[v[22]]=EXEXEX; pile[WZ1]=186; 
(*f[207])( );     /*PLUE2(EXEXEX,186)*/
l31:V608=t[V608];
goto l29;
l32:x[jvj+68]=vo[16];z[jvj+68]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(498,jvj+68,jvj+69)*/
pile[v[22]]=1182; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1182,jvj+69,jvj+70)*/
if((68!=x[jvj+70])) goto l1;
pile[v[22]]=242; pile[WZ1]=jvj+68; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(242,jvj+68,jvj+71)*/
x[jvj+72]=d[20];z[jvj+72]=0;
l33:if((x[jvj+72]<=0)) goto l1;
x[jvj+73]=s[x[jvj+72]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+72];
pile[v[22]]=268; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(268,jvj+73,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+3; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(jvj+74,jvj+3,jvj+75)*/
pile[v[22]]=111; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+75,jvj+76)*/
pile[v[22]]=101; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+76,jvj+77)*/
if((x[jvj+77]!=485)) goto l34;
pile[v[22]]=107; pile[WZ1]=jvj+75; pile[WZ2]=jvj+78; 
(*f[33])( );     /*FNDE0(107,jvj+75,jvj+78)*/
for(i=x[jvj+78],V168=0;i>0;i=t[i],V168++)  ;
if((V168!=2)) goto l34;
pile[v[22]]=jvj+73; pile[WZ1]=jvj+3; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(jvj+73,jvj+3,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(100,jvj+79,jvj+80)*/
if((x[jvj+80]!=484)) goto l34;
pile[v[22]]=102; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(102,jvj+79,jvj+81)*/
pile[v[22]]=100; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(100,jvj+81,jvj+82)*/
if(x[jvj+82]!=96&&x[jvj+82]!=89&&x[jvj+82]!=41&&x[jvj+82]!=20&&x[jvj+82]!=128&&x[jvj+82]!=570&&x[jvj+82]!=1317) goto l34;
x[jvj+213]=x[jvj+78] ;z[jvj+213]=z[jvj+78];
l35:if((x[jvj+213]<=0)) goto l34;
x[jvj+83]=s[x[jvj+213]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+213];
pile[v[22]]=100; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(100,jvj+83,jvj+84)*/
if((x[jvj+84]!=484)) goto l36;
pile[v[22]]=102; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(102,jvj+83,jvj+85)*/
pile[v[22]]=100; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(100,jvj+85,jvj+86)*/
if(x[jvj+86]!=96&&x[jvj+86]!=89&&x[jvj+86]!=41&&x[jvj+86]!=20&&x[jvj+86]!=128&&x[jvj+86]!=570&&x[jvj+86]!=1317) goto l36;
x[jvj+214]=x[jvj+78] ;z[jvj+214]=z[jvj+78];
l37:if((x[jvj+214]<=0)) goto l36;
x[jvj+87]=s[x[jvj+214]] ;z[jvj+87]=(x[jvj+87]<=sepcte) ? x[jvj+87] : z[jvj+214];
if((x[jvj+83]==x[jvj+87])) goto l38;
pile[v[22]]=130; pile[WZ1]=jvj+87; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(130,jvj+87,V179)*/
V179=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=195; 
(*f[207])( );     /*PLUE2(EXEXEX,195)*/
l38:x[jvj+214]=t[x[jvj+214]];
goto l37;
l34:x[jvj+72]=t[x[jvj+72]];
goto l33;
l36:x[jvj+213]=t[x[jvj+213]];
goto l35;
l43:for(a=x[jvj+97];a>0;a=t[a]) if(s[a]==1301) goto l44;
goto l48;
l44:pile[v[22]]=1294; pile[WZ1]=jvj+3; pile[WZ2]=jvj+98; 
(*f[33])( );     /*FNDE0(1294,jvj+3,jvj+98)*/
for(a=x[jvj+98];a>0;a=t[a]) if(s[a]==1291) goto l46;
goto l48;
l46:x[jvj+215]=x[jvj+94] ;z[jvj+215]=z[jvj+94];
l45:if((x[jvj+215]<=0)) goto l48;
x[jvj+99]=s[x[jvj+215]] ;z[jvj+99]=(x[jvj+99]<=sepcte) ? x[jvj+99] : z[jvj+215];
pile[v[22]]=111; pile[WZ1]=jvj+99; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,jvj+99,jvj+100)*/
pile[v[22]]=101; pile[WZ1]=jvj+100; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+100,jvj+101)*/
if((x[jvj+101]!=48)) goto l47;
pile[v[22]]=107; pile[WZ1]=jvj+99; pile[WZ2]=jvj+102; 
(*f[33])( );     /*FNDE0(107,jvj+99,jvj+102)*/
pile[v[22]]=EXEXEX; pile[WZ1]=28; 
(*f[207])( );     /*PLUE2(EXEXEX,28)*/
l47:x[jvj+215]=t[x[jvj+215]];
goto l45;
l49:for(i=x[jvj+94],V279=0;i>0;i=t[i],V279++)  ;
if((V279!=2)) goto l69;
x[jvj+103]=d[20];z[jvj+103]=0;
l50:if((x[jvj+103]<=0)) goto l69;
x[jvj+104]=s[x[jvj+103]] ;z[jvj+104]=(x[jvj+104]<=sepcte) ? x[jvj+104] : z[jvj+103];
pile[v[22]]=268; pile[WZ1]=jvj+104; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(268,jvj+104,jvj+105)*/
x[jvj+106]=d[20];z[jvj+106]=0;
l52:if((x[jvj+106]<=0)) goto l51;
x[jvj+107]=s[x[jvj+106]] ;z[jvj+107]=(x[jvj+107]<=sepcte) ? x[jvj+107] : z[jvj+106];
pile[v[22]]=268; pile[WZ1]=jvj+107; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(268,jvj+107,jvj+108)*/
x[jvj+216]=x[jvj+94] ;z[jvj+216]=z[jvj+94];
l54:if((x[jvj+216]<=0)) goto l53;
x[jvj+109]=s[x[jvj+216]] ;z[jvj+109]=(x[jvj+109]<=sepcte) ? x[jvj+109] : z[jvj+216];
pile[v[22]]=111; pile[WZ1]=jvj+109; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(111,jvj+109,jvj+110)*/
pile[v[22]]=101; pile[WZ1]=jvj+110; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(101,jvj+110,jvj+111)*/
if((x[jvj+111]==25)) goto l56;
if((x[jvj+111]!=26)) goto l55;
pile[v[22]]=jvj+105; pile[WZ1]=jvj+109; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(jvj+105,jvj+109,jvj+121)*/
pile[v[22]]=130; pile[WZ1]=jvj+121; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(130,jvj+121,V328)*/
V328=pile[WZ2]; 
pile[v[22]]=jvj+104; pile[WZ1]=jvj+109; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(jvj+104,jvj+109,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=jvj+122; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(100,jvj+122,jvj+123)*/
if((x[jvj+123]!=484)) goto l55;
x[jvj+218]=x[jvj+94] ;z[jvj+218]=z[jvj+94];
l59:if((x[jvj+218]<=0)) goto l55;
x[jvj+124]=s[x[jvj+218]] ;z[jvj+124]=(x[jvj+124]<=sepcte) ? x[jvj+124] : z[jvj+218];
if((x[jvj+109]==x[jvj+124])) goto l60;
pile[v[22]]=111; pile[WZ1]=jvj+124; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(111,jvj+124,jvj+125)*/
pile[v[22]]=101; pile[WZ1]=jvj+125; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(101,jvj+125,jvj+126)*/
if((x[jvj+126]!=26)) goto l60;
pile[v[22]]=jvj+108; pile[WZ1]=jvj+124; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(jvj+108,jvj+124,jvj+127)*/
pile[v[22]]=130; pile[WZ1]=jvj+127; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(130,jvj+127,V342)*/
V342=pile[WZ2]; 
pile[v[22]]=jvj+107; pile[WZ1]=jvj+124; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(jvj+107,jvj+124,jvj+128)*/
pile[v[22]]=100; pile[WZ1]=jvj+128; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(100,jvj+128,jvj+129)*/
if((x[jvj+129]!=484)) goto l60;
pile[v[22]]=EXEXEX; pile[WZ1]=591; 
(*f[207])( );     /*PLUE2(EXEXEX,591)*/
l60:x[jvj+218]=t[x[jvj+218]];
goto l59;
l51:x[jvj+103]=t[x[jvj+103]];
goto l50;
l53:x[jvj+106]=t[x[jvj+106]];
goto l52;
l55:x[jvj+216]=t[x[jvj+216]];
goto l54;
l56:pile[v[22]]=jvj+105; pile[WZ1]=jvj+109; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(jvj+105,jvj+109,jvj+112)*/
pile[v[22]]=130; pile[WZ1]=jvj+112; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(130,jvj+112,V287)*/
V287=pile[WZ2]; 
pile[v[22]]=jvj+104; pile[WZ1]=jvj+109; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(jvj+104,jvj+109,jvj+113)*/
pile[v[22]]=100; pile[WZ1]=jvj+113; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(100,jvj+113,jvj+114)*/
if((x[jvj+114]!=484)) goto l55;
x[jvj+217]=x[jvj+94] ;z[jvj+217]=z[jvj+94];
l57:if((x[jvj+217]<=0)) goto l55;
x[jvj+115]=s[x[jvj+217]] ;z[jvj+115]=(x[jvj+115]<=sepcte) ? x[jvj+115] : z[jvj+217];
if((x[jvj+109]==x[jvj+115])) goto l58;
pile[v[22]]=111; pile[WZ1]=jvj+115; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(111,jvj+115,jvj+116)*/
pile[v[22]]=101; pile[WZ1]=jvj+116; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(101,jvj+116,jvj+117)*/
if((x[jvj+117]!=25)) goto l58;
pile[v[22]]=jvj+108; pile[WZ1]=jvj+115; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(jvj+108,jvj+115,jvj+118)*/
pile[v[22]]=130; pile[WZ1]=jvj+118; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(130,jvj+118,V301)*/
V301=pile[WZ2]; 
pile[v[22]]=jvj+107; pile[WZ1]=jvj+115; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(jvj+107,jvj+115,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=jvj+119; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(100,jvj+119,jvj+120)*/
if((x[jvj+120]!=484)) goto l58;
pile[v[22]]=EXEXEX; pile[WZ1]=588; 
(*f[207])( );     /*PLUE2(EXEXEX,588)*/
l58:x[jvj+217]=t[x[jvj+217]];
goto l57;
l62:x[jvj+219]=t[x[jvj+219]];
goto l61;
l64:x[jvj+220]=t[x[jvj+220]];
goto l63;
l66:x[jvj+136]=t[x[jvj+136]];
goto l65;
l69:for(i=x[jvj+94],V574=0;i>0;i=t[i],V574++)  ;
if((V574!=2)) goto l76;
x[jvj+152]=d[20];z[jvj+152]=0;
l70:if((x[jvj+152]<=0)) goto l76;
x[jvj+153]=s[x[jvj+152]] ;z[jvj+153]=(x[jvj+153]<=sepcte) ? x[jvj+153] : z[jvj+152];
pile[v[22]]=268; pile[WZ1]=jvj+153; pile[WZ2]=jvj+154; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(268,jvj+153,jvj+154)*/
x[jvj+221]=x[jvj+94] ;z[jvj+221]=z[jvj+94];
l72:if((x[jvj+221]<=0)) goto l71;
x[jvj+155]=s[x[jvj+221]] ;z[jvj+155]=(x[jvj+155]<=sepcte) ? x[jvj+155] : z[jvj+221];
pile[v[22]]=111; pile[WZ1]=jvj+155; pile[WZ2]=jvj+156; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(111,jvj+155,jvj+156)*/
pile[v[22]]=101; pile[WZ1]=jvj+156; pile[WZ2]=jvj+157; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(101,jvj+156,jvj+157)*/
if((x[jvj+157]!=26)) goto l73;
pile[v[22]]=jvj+153; pile[WZ1]=jvj+155; pile[WZ2]=jvj+158; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(jvj+153,jvj+155,jvj+158)*/
pile[v[22]]=100; pile[WZ1]=jvj+158; pile[WZ2]=jvj+159; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(100,jvj+158,jvj+159)*/
if((x[jvj+159]!=484)) goto l73;
pile[v[22]]=jvj+154; pile[WZ1]=jvj+155; pile[WZ2]=jvj+160; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(jvj+154,jvj+155,jvj+160)*/
pile[v[22]]=100; pile[WZ1]=jvj+160; pile[WZ2]=jvj+161; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(100,jvj+160,jvj+161)*/
if(x[jvj+161]!=96&&x[jvj+161]!=89&&x[jvj+161]!=41&&x[jvj+161]!=20&&x[jvj+161]!=128&&x[jvj+161]!=570&&x[jvj+161]!=1317) goto l73;
V625=x[jvj+94];
l74:if((V625<=0)) goto l73;
V572=s[V625];
if((x[jvj+155]==V572)) goto l75;
pile[v[22]]=EXEXEX; pile[WZ1]=285; 
(*f[207])( );     /*PLUE2(EXEXEX,285)*/
l75:V625=t[V625];
goto l74;
l71:x[jvj+152]=t[x[jvj+152]];
goto l70;
l73:x[jvj+221]=t[x[jvj+221]];
goto l72;
l76:if(x[jvj+5]!=25&&x[jvj+5]!=30) goto l78;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+162; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(100,jvj+3,jvj+162)*/
if((x[jvj+162]!=22)) goto l78;
pile[v[22]]=102; pile[WZ2]=jvj+163; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(102,jvj+3,jvj+163)*/
pile[v[22]]=103; pile[WZ2]=jvj+164; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(103,jvj+3,jvj+164)*/
pile[v[22]]=1294; pile[WZ2]=jvj+165; 
(*f[33])( );     /*FNDE0(1294,jvj+3,jvj+165)*/
for(a=x[jvj+165];a>0;a=t[a]) if(s[a]==1492) goto l77;
l78:if(x[jvj+5]!=25&&x[jvj+5]!=27&&x[jvj+5]!=28) goto l80;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+166; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(100,jvj+3,jvj+166)*/
if((x[jvj+166]!=22)) goto l80;
pile[v[22]]=103; pile[WZ2]=jvj+167; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(103,jvj+3,jvj+167)*/
pile[v[22]]=130; pile[WZ1]=jvj+167; 
(*f[26])( );if(v[102]) goto l79;     /*FNDC0(130,jvj+167,V210)*/
V210=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+168; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(102,jvj+3,jvj+168)*/
pile[v[22]]=100; pile[WZ1]=jvj+168; pile[WZ2]=jvj+169; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(100,jvj+168,jvj+169)*/
if((x[jvj+169]!=484)) goto l79;
x[jvj+170]=vo[16];z[jvj+170]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+170; pile[WZ2]=jvj+171; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(498,jvj+170,jvj+171)*/
pile[v[22]]=1182; pile[WZ1]=jvj+171; pile[WZ2]=jvj+172; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(1182,jvj+171,jvj+172)*/
if((68!=x[jvj+172])) goto l79;
pile[v[22]]=102; pile[WZ1]=jvj+168; pile[WZ2]=jvj+173; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(102,jvj+168,jvj+173)*/
pile[v[22]]=100; pile[WZ1]=jvj+173; pile[WZ2]=jvj+174; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(100,jvj+173,jvj+174)*/
if(x[jvj+174]!=96&&x[jvj+174]!=89&&x[jvj+174]!=41&&x[jvj+174]!=20&&x[jvj+174]!=128&&x[jvj+174]!=570&&x[jvj+174]!=1317) goto l79;
pile[v[22]]=EXEXEX; pile[WZ1]=21; 
(*f[207])( );     /*PLUE2(EXEXEX,21)*/
l79:pile[v[22]]=100; pile[WZ1]=jvj+167; pile[WZ2]=jvj+175; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(100,jvj+167,jvj+175)*/
if((x[jvj+175]!=484)) goto l80;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+176; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(102,jvj+3,jvj+176)*/
pile[v[22]]=130; pile[WZ1]=jvj+176; 
(*f[26])( );if(v[102]) goto l80;     /*FNDC0(130,jvj+176,V265)*/
V265=pile[WZ2]; 
x[jvj+177]=vo[16];z[jvj+177]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+177; pile[WZ2]=jvj+178; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(498,jvj+177,jvj+178)*/
pile[v[22]]=1182; pile[WZ1]=jvj+178; pile[WZ2]=jvj+179; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(1182,jvj+178,jvj+179)*/
if((68!=x[jvj+179])) goto l80;
pile[v[22]]=102; pile[WZ1]=jvj+167; pile[WZ2]=jvj+180; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(102,jvj+167,jvj+180)*/
pile[v[22]]=100; pile[WZ1]=jvj+180; pile[WZ2]=jvj+181; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(100,jvj+180,jvj+181)*/
if(x[jvj+181]!=96&&x[jvj+181]!=89&&x[jvj+181]!=41&&x[jvj+181]!=20&&x[jvj+181]!=128&&x[jvj+181]!=570&&x[jvj+181]!=1317) goto l80;
pile[v[22]]=EXEXEX; pile[WZ1]=99; 
(*f[207])( );     /*PLUE2(EXEXEX,99)*/
l80:if(x[jvj+5]!=25&&x[jvj+5]!=29&&x[jvj+5]!=30) goto l82;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+182; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(100,jvj+3,jvj+182)*/
if((x[jvj+182]!=22)) goto l82;
pile[v[22]]=103; pile[WZ2]=jvj+183; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(103,jvj+3,jvj+183)*/
pile[v[22]]=130; pile[WZ1]=jvj+183; 
(*f[26])( );if(v[102]) goto l81;     /*FNDC0(130,jvj+183,V230)*/
V230=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+184; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(102,jvj+3,jvj+184)*/
pile[v[22]]=100; pile[WZ1]=jvj+184; pile[WZ2]=jvj+185; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(100,jvj+184,jvj+185)*/
if((x[jvj+185]!=484)) goto l81;
x[jvj+186]=vo[16];z[jvj+186]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+186; pile[WZ2]=jvj+187; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(498,jvj+186,jvj+187)*/
pile[v[22]]=1182; pile[WZ1]=jvj+187; pile[WZ2]=jvj+188; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(1182,jvj+187,jvj+188)*/
if((68!=x[jvj+188])) goto l81;
pile[v[22]]=102; pile[WZ1]=jvj+184; pile[WZ2]=jvj+189; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(102,jvj+184,jvj+189)*/
pile[v[22]]=100; pile[WZ1]=jvj+189; pile[WZ2]=jvj+190; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(100,jvj+189,jvj+190)*/
if(x[jvj+190]!=96&&x[jvj+190]!=89&&x[jvj+190]!=41&&x[jvj+190]!=20&&x[jvj+190]!=128&&x[jvj+190]!=570&&x[jvj+190]!=1317) goto l81;
pile[v[22]]=EXEXEX; pile[WZ1]=30; 
(*f[207])( );     /*PLUE2(EXEXEX,30)*/
l81:pile[v[22]]=100; pile[WZ1]=jvj+183; pile[WZ2]=jvj+191; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(100,jvj+183,jvj+191)*/
if((x[jvj+191]!=484)) goto l82;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+192; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(102,jvj+3,jvj+192)*/
pile[v[22]]=130; pile[WZ1]=jvj+192; 
(*f[26])( );if(v[102]) goto l82;     /*FNDC0(130,jvj+192,V245)*/
V245=pile[WZ2]; 
x[jvj+193]=vo[16];z[jvj+193]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+193; pile[WZ2]=jvj+194; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(498,jvj+193,jvj+194)*/
pile[v[22]]=1182; pile[WZ1]=jvj+194; pile[WZ2]=jvj+195; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(1182,jvj+194,jvj+195)*/
if((68!=x[jvj+195])) goto l82;
pile[v[22]]=102; pile[WZ1]=jvj+183; pile[WZ2]=jvj+196; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(102,jvj+183,jvj+196)*/
pile[v[22]]=100; pile[WZ1]=jvj+196; pile[WZ2]=jvj+197; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(100,jvj+196,jvj+197)*/
if(x[jvj+197]!=96&&x[jvj+197]!=89&&x[jvj+197]!=41&&x[jvj+197]!=20&&x[jvj+197]!=128&&x[jvj+197]!=570&&x[jvj+197]!=1317) goto l82;
pile[v[22]]=EXEXEX; pile[WZ1]=69; 
(*f[207])( );     /*PLUE2(EXEXEX,69)*/
l82:if((x[jvj+5]!=29)) goto l83;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+198; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(102,jvj+3,jvj+198)*/
pile[v[22]]=100; pile[WZ1]=jvj+198; pile[WZ2]=jvj+199; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(100,jvj+198,jvj+199)*/
if((x[jvj+199]!=484)) goto l83;
pile[v[22]]=111; pile[WZ2]=jvj+200; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(111,jvj+198,jvj+200)*/
pile[v[22]]=140; pile[WZ1]=jvj+200; 
(*f[44])( );if(v[102]) goto l83;     /*FNDC1(140,jvj+200,V362)*/
V362=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+201; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(103,jvj+3,jvj+201)*/
pile[v[22]]=100; pile[WZ1]=jvj+201; pile[WZ2]=jvj+202; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(100,jvj+201,jvj+202)*/
if((x[jvj+202]!=484)) goto l83;
pile[v[22]]=111; pile[WZ2]=jvj+203; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(111,jvj+201,jvj+203)*/
pile[v[22]]=140; pile[WZ1]=jvj+203; 
(*f[44])( );if(v[102]) goto l83;     /*FNDC1(140,jvj+203,V373)*/
V373=pile[WZ2]; 
if((V362!=V373)) goto l83;
pile[v[22]]=102; pile[WZ1]=jvj+198; pile[WZ2]=jvj+204; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(102,jvj+198,jvj+204)*/
pile[v[22]]=100; pile[WZ1]=jvj+204; pile[WZ2]=jvj+205; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(100,jvj+204,jvj+205)*/
if(x[jvj+205]!=96&&x[jvj+205]!=89&&x[jvj+205]!=41&&x[jvj+205]!=20&&x[jvj+205]!=128&&x[jvj+205]!=570&&x[jvj+205]!=1317) goto l83;
pile[v[22]]=102; pile[WZ1]=jvj+201; pile[WZ2]=jvj+206; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(102,jvj+201,jvj+206)*/
pile[v[22]]=100; pile[WZ1]=jvj+206; pile[WZ2]=jvj+207; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(100,jvj+206,jvj+207)*/
if(x[jvj+207]!=96&&x[jvj+207]!=89&&x[jvj+207]!=41&&x[jvj+207]!=20&&x[jvj+207]!=128&&x[jvj+207]!=570&&x[jvj+207]!=1317) goto l83;
pile[v[22]]=EXEXEX; pile[WZ1]=138; 
(*f[207])( );     /*PLUE2(EXEXEX,138)*/
pile[WZ1]=174; 
(*f[207])( );     /*PLUE2(EXEXEX,174)*/
l83:v[0]=jvj; v[22]-=2; return;
l77:pile[v[22]]=EXEXEX; pile[WZ1]=231; 
(*f[207])( );     /*PLUE2(EXEXEX,231)*/
pile[WZ1]=232; 
(*f[207])( );     /*PLUE2(EXEXEX,232)*/
goto l78;
}
