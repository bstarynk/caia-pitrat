#include "dx.h"
void Z244Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V8=0,V71=0,V54=0,V88=0,V268=0,V157=0,V357=0,V163=0,V312=0,V195=0,V358=0,V201=0,V77=0,V246=0,V248=0,V68=0,V56=0,V70=0,V52=0,V53=0,V114=0,V147=0,V26=0,V27=0,NT=0,NH=0,V32=0,V3=0,V24=0,V292=0,V286=0,V267=0,V275=0,V298=0,V269=0,V174=0,V183=0,V180=0,V159=0,V337=0,V331=0,V311=0,V320=0,V343=0,V314=0,V212=0,V221=0,V218=0,V197=0,V474=0,V475=0,V476=0,V477=0,V273=0,V480=0,V479=0,V478=0,V481=0,V482=0,V483=0,V484=0,V318=0,V487=0,V486=0,V485=0,V488=0,V2=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=200;
x[jvj+1]=15745;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1896&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,NNNY,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=1356)) goto l35;
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(102,NNNY,jvj+7)*/
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(130,jvj+7,V77)*/
V77=pile[WZ2]; 
if((V77==1)) goto l14;
if((V77==0)) goto l15;
if((V77!=(-1))) goto l18;
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,NNNY,jvj+9)*/
V88=incon;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[996])( );if(v[102]) goto l6;     /*PAIR0(jvj+9,jvj+10)*/
if((x[jvj+10]==135)) goto l5;
l6:pile[v[22]]=jvj+9; pile[WZ1]=jvj+11; 
(*f[997])( );if(v[102]) goto l8;     /*IMPAIR0(jvj+9,jvj+11)*/
if((x[jvj+11]==135)) goto l7;
l8:if(V88==incon) goto l18;
if((V88!=(-99999998))) goto l17;
l18:if((V77>=0)) goto l22;
pile[v[22]]=160; pile[WZ1]=NNNY; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(160,NNNY,jvj+23)*/
pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+23,V246)*/
V246=pile[WZ2]; 
V248=(-V77);
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,NNNY,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[996])( );if(v[102]) goto l20;     /*PAIR0(jvj+24,jvj+25)*/
if((x[jvj+25]==135)) goto l19;
l20:pile[v[22]]=jvj+24; pile[WZ1]=jvj+27; 
(*f[997])( );if(v[102]) goto l22;     /*IMPAIR0(jvj+24,jvj+27)*/
if((x[jvj+27]==135)) goto l21;
l22:pile[v[22]]=160; pile[WZ1]=NNNY; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(160,NNNY,jvj+29)*/
pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(130,jvj+29,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(103,NNNY,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+30,jvj+31)*/
if((x[jvj+31]!=484)) goto l24;
pile[v[22]]=jvj+30; pile[WZ1]=jvj+32; 
(*f[200])( );if(v[102]) goto l24;     /*NDD0(jvj+30,jvj+32)*/
pile[v[22]]=1474; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(1474,jvj+32,jvj+33)*/
pile[v[22]]=510; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(510,jvj+33,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(117,jvj+33,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=V68; pile[WZ1]=V70; pile[WZ2]=V77; 
(*f[1041])( );if(v[102]) goto l24;     /*MODPUI0(V68,V70,V77,V52)*/
V52=pile[WZ3]; 
if((V52!=1)) goto l24;
V54=incon;
if((V56<0)) goto l4;
V54=V56;
l23:pile[v[22]]=V68; pile[WZ1]=V54; pile[WZ2]=V77; 
(*f[1041])( );if(v[102]) goto l24;     /*MODPUI0(V68,V54,V77,V53)*/
V53=pile[WZ3]; 
NNNT=222;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V53; pile[WZ4]=jvj+34; 
(*f[192])( );     /*QUADRI4(100,41,130,V53,jvj+34)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+34; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+34,NNNX)*/
l55:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l1:pile[v[22]]=1310; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1310,jvj+2,jvj+4)*/
l2:if((x[jvj+4]<=0)) goto l35;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+5,V7)*/
V7=pile[WZ2]; 
if((V7!=V27)) goto l3;
pile[v[22]]=195; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(195,jvj+5,jvj+6)*/
for(i=x[jvj+6],V8=0;i>0;i=t[i],V8++)  ;
if((V8!=1)) goto l3;
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==0) goto l76;
l3:x[jvj+4]=t[x[jvj+4]];
goto l2;
l4:V71=V56+V70;
V54=V71;
goto l23;
l5:V88=1;
goto l6;
l7:V88=(-1);
l17:NNNT=225;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V88; pile[WZ4]=jvj+22; 
(*f[192])( );     /*QUADRI4(100,41,130,V88,jvj+22)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+22; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+22,NNNX)*/
goto l55;
l10:x[jvj+12]=s[x[jvj+194]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+194];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[1446])( );     /*NONUL0(jvj+12,jvj+13)*/
if((x[jvj+13]==135)) goto l11;
l30:pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+7,jvj+47)*/
if((x[jvj+47]!=484)) goto l35;
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(103,NNNY,jvj+48)*/
pile[v[22]]=130; pile[WZ1]=jvj+48; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(130,jvj+48,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=NNNY; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(160,NNNY,jvj+49)*/
pile[v[22]]=130; pile[WZ1]=jvj+49; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(130,jvj+49,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=jvj+2; 
(*f[200])( );if(v[102]) goto l35;     /*NDD0(jvj+7,jvj+2)*/
pile[v[22]]=V26; pile[WZ1]=V27; pile[WZ2]=jvj+2; 
(*f[2036])( );if(v[102]) goto l32;     /*MODVRAI0(V26,V27,jvj+2,NT,NH)*/
NT=pile[WZ3]; NH=pile[WZ4]; 
V32=V26-NT;
if((V32>0)) goto l31;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1446])( );     /*NONUL0(jvj+7,jvj+8)*/
if((x[jvj+8]==135)) goto l31;
l32:V3=V27-1;
if((V26<V3)) goto l35;
pile[v[22]]=1287; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1287,jvj+2,jvj+3)*/
if((x[jvj+3]==0)) goto l1;
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==V27) goto l1;
l76:pile[v[22]]=V27; pile[WZ1]=jvj+193; 
(*f[992])( );if(v[102]) goto l77;     /*FACTPREM0(V27,jvj+193)*/
for(i=x[jvj+193],V488=0;i>0;i=t[i],V488++)  ;
if((V488!=1)) goto l77;
V2=135;
l33:if((V2==135)) goto l34;
l35:pile[v[22]]=538; pile[WZ1]=NNNY; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(538,NNNY,jvj+52)*/
pile[v[22]]=111; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(111,jvj+52,jvj+53)*/
pile[v[22]]=101; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+53,jvj+54)*/
if((x[jvj+54]!=625)) goto l44;
pile[v[22]]=160; pile[WZ1]=jvj+52; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(160,jvj+52,jvj+55)*/
pile[v[22]]=130; pile[WZ1]=jvj+55; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(130,jvj+55,V268)*/
V268=pile[WZ2]; 
x[jvj+56]=d[20];z[jvj+56]=0;
l36:if((x[jvj+56]>0)) goto l37;
x[jvj+67]=d[20];z[jvj+67]=0;
l41:if((x[jvj+67]<=0)) goto l44;
x[jvj+68]=s[x[jvj+67]] ;z[jvj+68]=(x[jvj+68]<=sepcte) ? x[jvj+68] : z[jvj+67];
pile[v[22]]=jvj+68; pile[WZ1]=jvj+52; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(jvj+68,jvj+52,jvj+69)*/
pile[v[22]]=111; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,jvj+69,jvj+70)*/
pile[v[22]]=101; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+70,jvj+71)*/
if((x[jvj+71]!=1356)) goto l42;
pile[v[22]]=102; pile[WZ1]=jvj+69; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,jvj+69,jvj+72)*/
pile[v[22]]=130; pile[WZ1]=jvj+72; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+72,V174)*/
V174=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+68; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(268,jvj+68,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=jvj+52; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(jvj+73,jvj+52,jvj+74)*/
pile[v[22]]=130; pile[WZ1]=jvj+74; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+74,V183)*/
V183=pile[WZ2]; 
if((V183!=0)) goto l42;
pile[v[22]]=160; pile[WZ1]=jvj+69; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(160,jvj+69,jvj+75)*/
pile[v[22]]=130; pile[WZ1]=jvj+75; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+75,V180)*/
V180=pile[WZ2]; 
if((V268!=V180)) goto l42;
V159=V174;
pile[v[22]]=V268; pile[WZ1]=jvj+14; 
(*f[992])( );if(v[102]) goto l42;     /*FACTPREM0(V268,jvj+14)*/
V357=x[jvj+14];
l12:if((V357<=0)) goto l42;
V157=s[V357];
V163=V159%V157;
if((V163!=0)) goto l43;
V357=t[V357];
goto l12;
l11:x[jvj+194]=t[x[jvj+194]];
l9:if((x[jvj+194]>0)) goto l10;
x[jvj+196]=x[jvj+42] ;z[jvj+196]=z[jvj+42];
l28:if((x[jvj+196]<=0)) goto l30;
x[jvj+43]=s[x[jvj+196]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+196];
pile[v[22]]=130; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(130,jvj+43,V147)*/
V147=pile[WZ2]; 
x[jvj+199]=x[jvj+42] ;z[jvj+199]=z[jvj+42];
l66:if((x[jvj+199]>0)) goto l67;
l29:x[jvj+196]=t[x[jvj+196]];
goto l28;
l14:NNNT=223;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+18)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+18; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+18,NNNX)*/
goto l55;
l15:pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,NNNY,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[1446])( );     /*NONUL0(jvj+19,jvj+20)*/
if((x[jvj+20]==135)) goto l16;
goto l18;
l16:NNNT=224;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+21; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+21)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+21; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+21,NNNX)*/
goto l55;
l19:NNNT=229;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1356; pile[WZ4]=jvj+120; 
(*f[181])( );     /*QUADRI2(100,20,101,1356,jvj+120)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V248; pile[WZ4]=jvj+123; 
(*f[192])( );     /*QUADRI4(100,41,130,V248,jvj+123)*/
pile[WZ3]=V246; pile[WZ4]=jvj+118; 
(*f[192])( );     /*QUADRI4(100,41,130,V246,jvj+118)*/
pile[v[22]]=jvj+118; pile[WZ1]=160; pile[WZ2]=jvj+119; 
(*f[54])( );     /*TRI1(jvj+118,160,jvj+119)*/
pile[v[22]]=jvj+119; pile[WZ1]=jvj+120; pile[WZ2]=111; pile[WZ3]=jvj+121; 
(*f[58])( );     /*TRI3(jvj+119,jvj+120,111,jvj+121)*/
pile[v[22]]=jvj+121; pile[WZ1]=jvj+24; pile[WZ2]=103; pile[WZ3]=jvj+122; 
(*f[58])( );     /*TRI3(jvj+121,jvj+24,103,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+123; pile[WZ4]=jvj+122; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+123,jvj+122,jvj+26)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+26; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+26,NNNX)*/
goto l55;
l21:NNNT=230;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+124; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+124)*/
pile[WZ3]=1356; pile[WZ4]=jvj+129; 
(*f[181])( );     /*QUADRI2(100,20,101,1356,jvj+129)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V248; pile[WZ4]=jvj+132; 
(*f[192])( );     /*QUADRI4(100,41,130,V248,jvj+132)*/
pile[WZ3]=V246; pile[WZ4]=jvj+127; 
(*f[192])( );     /*QUADRI4(100,41,130,V246,jvj+127)*/
pile[v[22]]=jvj+127; pile[WZ1]=160; pile[WZ2]=jvj+128; 
(*f[54])( );     /*TRI1(jvj+127,160,jvj+128)*/
pile[v[22]]=jvj+128; pile[WZ1]=jvj+129; pile[WZ2]=111; pile[WZ3]=jvj+130; 
(*f[58])( );     /*TRI3(jvj+128,jvj+129,111,jvj+130)*/
pile[v[22]]=jvj+130; pile[WZ1]=jvj+24; pile[WZ2]=103; pile[WZ3]=jvj+131; 
(*f[58])( );     /*TRI3(jvj+130,jvj+24,103,jvj+131)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+132; pile[WZ4]=jvj+131; pile[WZ5]=jvj+126; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+132,jvj+131,jvj+126)*/
pile[v[22]]=jvj+124; pile[WZ1]=111; pile[WZ2]=jvj+125; 
(*f[54])( );     /*TRI1(jvj+124,111,jvj+125)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+126; pile[WZ4]=jvj+125; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+126,jvj+125,jvj+28)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+28; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+28,NNNX)*/
goto l55;
l24:pile[v[22]]=111; pile[WZ1]=jvj+30; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,jvj+30,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]==485)) goto l25;
if((x[jvj+36]!=486)) goto l30;
pile[v[22]]=107; pile[WZ1]=jvj+30; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(107,jvj+30,jvj+42)*/
x[jvj+194]=x[jvj+42] ;z[jvj+194]=z[jvj+42];
goto l9;
l25:pile[v[22]]=107; pile[WZ1]=jvj+30; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(107,jvj+30,jvj+37)*/
x[jvj+195]=x[jvj+37] ;z[jvj+195]=z[jvj+37];
l26:if((x[jvj+195]<=0)) goto l30;
x[jvj+38]=s[x[jvj+195]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+195];
pile[v[22]]=130; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(130,jvj+38,V114)*/
V114=pile[WZ2]; 
x[jvj+197]=x[jvj+37] ;z[jvj+197]=z[jvj+37];
l60:if((x[jvj+197]>0)) goto l61;
l27:x[jvj+195]=t[x[jvj+195]];
goto l26;
l31:NNNT=220;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+170; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+170)*/
pile[WZ3]=1356; pile[WZ4]=jvj+175; 
(*f[181])( );     /*QUADRI2(100,20,101,1356,jvj+175)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V32; pile[WZ4]=jvj+177; 
(*f[192])( );     /*QUADRI4(100,41,130,V32,jvj+177)*/
pile[WZ3]=V27; pile[WZ4]=jvj+173; 
(*f[192])( );     /*QUADRI4(100,41,130,V27,jvj+173)*/
pile[v[22]]=jvj+173; pile[WZ1]=160; pile[WZ2]=jvj+174; 
(*f[54])( );     /*TRI1(jvj+173,160,jvj+174)*/
pile[v[22]]=jvj+174; pile[WZ1]=jvj+175; pile[WZ2]=111; pile[WZ3]=jvj+176; 
(*f[58])( );     /*TRI3(jvj+174,jvj+175,111,jvj+176)*/
pile[v[22]]=jvj+176; pile[WZ1]=jvj+177; pile[WZ2]=103; pile[WZ3]=jvj+178; 
(*f[58])( );     /*TRI3(jvj+176,jvj+177,103,jvj+178)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+7; pile[WZ4]=jvj+178; pile[WZ5]=jvj+171; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+7,jvj+178,jvj+171)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=NH; pile[WZ4]=jvj+172; 
(*f[192])( );     /*QUADRI4(100,41,130,NH,jvj+172)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+170; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+170,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=107; pile[WZ2]=jvj+171; 
(*f[36])( );     /*PLUSC0(jvj+50,107,jvj+171)*/
pile[WZ2]=jvj+172; 
(*f[36])( );     /*PLUSC0(jvj+50,107,jvj+172)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+50; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+50,NNNX)*/
goto l55;
l34:V24=V26-V3;
NNNT=219;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1356; pile[WZ4]=jvj+181; 
(*f[181])( );     /*QUADRI2(100,20,101,1356,jvj+181)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V24; pile[WZ4]=jvj+183; 
(*f[192])( );     /*QUADRI4(100,41,130,V24,jvj+183)*/
pile[WZ3]=V27; pile[WZ4]=jvj+179; 
(*f[192])( );     /*QUADRI4(100,41,130,V27,jvj+179)*/
pile[v[22]]=jvj+179; pile[WZ1]=160; pile[WZ2]=jvj+180; 
(*f[54])( );     /*TRI1(jvj+179,160,jvj+180)*/
pile[v[22]]=jvj+180; pile[WZ1]=jvj+181; pile[WZ2]=111; pile[WZ3]=jvj+182; 
(*f[58])( );     /*TRI3(jvj+180,jvj+181,111,jvj+182)*/
pile[v[22]]=jvj+182; pile[WZ1]=jvj+183; pile[WZ2]=103; pile[WZ3]=jvj+184; 
(*f[58])( );     /*TRI3(jvj+182,jvj+183,103,jvj+184)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+7; pile[WZ4]=jvj+184; pile[WZ5]=jvj+51; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+7,jvj+184,jvj+51)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+51; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+51,NNNX)*/
goto l55;
l37:x[jvj+57]=s[x[jvj+56]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+56];
pile[v[22]]=jvj+57; pile[WZ1]=jvj+52; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(jvj+57,jvj+52,jvj+58)*/
pile[v[22]]=160; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(160,jvj+58,jvj+59)*/
pile[v[22]]=130; pile[WZ1]=jvj+59; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(130,jvj+59,V292)*/
V292=pile[WZ2]; 
if((V268!=V292)) goto l38;
pile[v[22]]=111; pile[WZ1]=jvj+58; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+58,jvj+60)*/
pile[v[22]]=101; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+60,jvj+61)*/
if((x[jvj+61]!=1356)) goto l38;
pile[v[22]]=102; pile[WZ1]=jvj+58; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,jvj+58,jvj+62)*/
pile[v[22]]=130; pile[WZ1]=jvj+62; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(130,jvj+62,V286)*/
V286=pile[WZ2]; 
V267=V286;
V275=V267%V268;
if((V275!=0)) goto l38;
pile[v[22]]=268; pile[WZ1]=jvj+57; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(268,jvj+57,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+52; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(jvj+63,jvj+52,jvj+64)*/
pile[v[22]]=130; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(130,jvj+64,V298)*/
V298=pile[WZ2]; 
V269=V298;
V474=V269%V268;
V475=V474;
if((V475<=0)) goto l73;
V476=V268/2;
if((V475<=V476)) goto l73;
V477=V475-V268;
V273=V477;
l39:pile[v[22]]=103; pile[WZ1]=jvj+58; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(103,jvj+58,jvj+65)*/
x[jvj+66]=incon;
if((V273==0)) goto l56;
if((V273==1)) goto l57;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+66)*/
l40:NNNT=231;
pile[v[22]]=jvj+52; pile[WZ1]=jvj+66; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+52,jvj+66,NNNX)*/
goto l55;
l38:x[jvj+56]=t[x[jvj+56]];
goto l36;
l42:x[jvj+67]=t[x[jvj+67]];
goto l41;
l43:NNNT=228;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+76; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+76)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+76; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+52,jvj+76,NNNX)*/
goto l55;
l44:pile[v[22]]=539; pile[WZ1]=NNNY; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(539,NNNY,jvj+77)*/
pile[v[22]]=111; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(111,jvj+77,jvj+78)*/
pile[v[22]]=101; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(101,jvj+78,jvj+79)*/
if((x[jvj+79]!=625)) goto l54;
pile[v[22]]=160; pile[WZ1]=jvj+77; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(160,jvj+77,jvj+80)*/
pile[v[22]]=130; pile[WZ1]=jvj+80; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(130,jvj+80,V312)*/
V312=pile[WZ2]; 
x[jvj+81]=d[20];z[jvj+81]=0;
l45:if((x[jvj+81]>0)) goto l46;
x[jvj+92]=d[20];z[jvj+92]=0;
l50:if((x[jvj+92]<=0)) goto l54;
x[jvj+93]=s[x[jvj+92]] ;z[jvj+93]=(x[jvj+93]<=sepcte) ? x[jvj+93] : z[jvj+92];
pile[v[22]]=jvj+93; pile[WZ1]=jvj+77; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(jvj+93,jvj+77,jvj+94)*/
pile[v[22]]=111; pile[WZ1]=jvj+94; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(111,jvj+94,jvj+95)*/
pile[v[22]]=101; pile[WZ1]=jvj+95; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+95,jvj+96)*/
if((x[jvj+96]!=1356)) goto l51;
pile[v[22]]=102; pile[WZ1]=jvj+94; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(102,jvj+94,jvj+97)*/
pile[v[22]]=130; pile[WZ1]=jvj+97; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(130,jvj+97,V212)*/
V212=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+93; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(268,jvj+93,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=jvj+77; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(jvj+98,jvj+77,jvj+99)*/
pile[v[22]]=130; pile[WZ1]=jvj+99; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(130,jvj+99,V221)*/
V221=pile[WZ2]; 
if((V221!=0)) goto l51;
pile[v[22]]=160; pile[WZ1]=jvj+94; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(160,jvj+94,jvj+100)*/
pile[v[22]]=130; pile[WZ1]=jvj+100; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(130,jvj+100,V218)*/
V218=pile[WZ2]; 
if((V312!=V218)) goto l51;
V197=V212;
pile[v[22]]=V312; pile[WZ1]=jvj+15; 
(*f[992])( );if(v[102]) goto l51;     /*FACTPREM0(V312,jvj+15)*/
V358=x[jvj+15];
l13:if((V358<=0)) goto l51;
V195=s[V358];
V201=V197%V195;
if((V201!=0)) goto l52;
V358=t[V358];
goto l13;
l46:x[jvj+82]=s[x[jvj+81]] ;z[jvj+82]=(x[jvj+82]<=sepcte) ? x[jvj+82] : z[jvj+81];
pile[v[22]]=jvj+82; pile[WZ1]=jvj+77; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(jvj+82,jvj+77,jvj+83)*/
pile[v[22]]=160; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(160,jvj+83,jvj+84)*/
pile[v[22]]=130; pile[WZ1]=jvj+84; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(130,jvj+84,V337)*/
V337=pile[WZ2]; 
if((V312!=V337)) goto l47;
pile[v[22]]=111; pile[WZ1]=jvj+83; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,jvj+83,jvj+85)*/
pile[v[22]]=101; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+85,jvj+86)*/
if((x[jvj+86]!=1356)) goto l47;
pile[v[22]]=102; pile[WZ1]=jvj+83; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,jvj+83,jvj+87)*/
pile[v[22]]=130; pile[WZ1]=jvj+87; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(130,jvj+87,V331)*/
V331=pile[WZ2]; 
V311=V331;
V320=V311%V312;
if((V320!=0)) goto l47;
pile[v[22]]=268; pile[WZ1]=jvj+82; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(268,jvj+82,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+77; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(jvj+88,jvj+77,jvj+89)*/
pile[v[22]]=130; pile[WZ1]=jvj+89; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(130,jvj+89,V343)*/
V343=pile[WZ2]; 
V314=V343;
V481=V314%V312;
V482=V481;
if((V482<=0)) goto l75;
V483=V312/2;
if((V482<=V483)) goto l75;
V484=V482-V312;
V318=V484;
l48:pile[v[22]]=103; pile[WZ1]=jvj+83; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(103,jvj+83,jvj+90)*/
x[jvj+91]=incon;
if((V318==0)) goto l58;
if((V318==1)) goto l59;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+91; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+91)*/
l49:NNNT=231;
pile[v[22]]=jvj+77; pile[WZ1]=jvj+91; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+77,jvj+91,NNNX)*/
goto l55;
l47:x[jvj+81]=t[x[jvj+81]];
goto l45;
l51:x[jvj+92]=t[x[jvj+92]];
goto l50;
l52:NNNT=228;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+101; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+101)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+101; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+77,jvj+101,NNNX)*/
goto l55;
l54:x[NNNX]=NNNT=incon;
l53:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l56:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+102; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+102)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+104; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+104)*/
pile[v[22]]=jvj+102; pile[WZ1]=111; pile[WZ2]=jvj+103; 
(*f[54])( );     /*TRI1(jvj+102,111,jvj+103)*/
pile[v[22]]=jvj+103; pile[WZ1]=jvj+104; pile[WZ2]=103; pile[WZ3]=jvj+105; 
(*f[58])( );     /*TRI3(jvj+103,jvj+104,103,jvj+105)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+65; pile[WZ4]=jvj+105; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+65,jvj+105,jvj+66)*/
goto l40;
l57:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+106; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+106)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+108; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+108)*/
pile[v[22]]=jvj+106; pile[WZ1]=111; pile[WZ2]=jvj+107; 
(*f[54])( );     /*TRI1(jvj+106,111,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=jvj+108; pile[WZ2]=103; pile[WZ3]=jvj+109; 
(*f[58])( );     /*TRI3(jvj+107,jvj+108,103,jvj+109)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+65; pile[WZ4]=jvj+109; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+65,jvj+109,jvj+66)*/
goto l40;
l58:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+110; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+110)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+112; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+112)*/
pile[v[22]]=jvj+110; pile[WZ1]=111; pile[WZ2]=jvj+111; 
(*f[54])( );     /*TRI1(jvj+110,111,jvj+111)*/
pile[v[22]]=jvj+111; pile[WZ1]=jvj+112; pile[WZ2]=103; pile[WZ3]=jvj+113; 
(*f[58])( );     /*TRI3(jvj+111,jvj+112,103,jvj+113)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+90; pile[WZ4]=jvj+113; pile[WZ5]=jvj+91; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+90,jvj+113,jvj+91)*/
goto l49;
l59:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+114; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+114)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+116; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+116)*/
pile[v[22]]=jvj+114; pile[WZ1]=111; pile[WZ2]=jvj+115; 
(*f[54])( );     /*TRI1(jvj+114,111,jvj+115)*/
pile[v[22]]=jvj+115; pile[WZ1]=jvj+116; pile[WZ2]=103; pile[WZ3]=jvj+117; 
(*f[58])( );     /*TRI3(jvj+115,jvj+116,103,jvj+117)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+90; pile[WZ4]=jvj+117; pile[WZ5]=jvj+91; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+90,jvj+117,jvj+91)*/
goto l49;
l61:x[jvj+185]=s[x[jvj+197]] ;z[jvj+185]=(x[jvj+185]<=sepcte) ? x[jvj+185] : z[jvj+197];
pile[v[22]]=jvj+185; pile[WZ1]=jvj+38; pile[WZ2]=jvj+186; 
(*f[760])( );     /*MEMEX0(jvj+185,jvj+38,jvj+186)*/
if((x[jvj+186]==135)) goto l62;
x[jvj+197]=t[x[jvj+197]];
goto l60;
l62:x[jvj+187]=0 ;z[jvj+187]=0;
x[jvj+198]=x[jvj+37] ;z[jvj+198]=z[jvj+37];
l63:if((x[jvj+198]>0)) goto l64;
x[jvj+39]=x[jvj+187] ;z[jvj+39]=z[jvj+187];
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; 
(*f[299])( );     /*COPEL0(jvj+39,jvj+40)*/
NNNT=226;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+133; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+133)*/
pile[WZ3]=1356; pile[WZ4]=jvj+138; 
(*f[181])( );     /*QUADRI2(100,20,101,1356,jvj+138)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V77; pile[WZ4]=jvj+142; 
(*f[192])( );     /*QUADRI4(100,41,130,V77,jvj+142)*/
pile[WZ3]=V114; pile[WZ4]=jvj+140; 
(*f[192])( );     /*QUADRI4(100,41,130,V114,jvj+140)*/
pile[WZ3]=V68; pile[WZ4]=jvj+136; 
(*f[192])( );     /*QUADRI4(100,41,130,V68,jvj+136)*/
pile[v[22]]=jvj+136; pile[WZ1]=160; pile[WZ2]=jvj+137; 
(*f[54])( );     /*TRI1(jvj+136,160,jvj+137)*/
pile[v[22]]=jvj+137; pile[WZ1]=jvj+138; pile[WZ2]=111; pile[WZ3]=jvj+139; 
(*f[58])( );     /*TRI3(jvj+137,jvj+138,111,jvj+139)*/
pile[v[22]]=jvj+139; pile[WZ1]=jvj+140; pile[WZ2]=103; pile[WZ3]=jvj+141; 
(*f[58])( );     /*TRI3(jvj+139,jvj+140,103,jvj+141)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+142; pile[WZ4]=jvj+141; pile[WZ5]=jvj+134; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+142,jvj+141,jvj+134)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1356; pile[WZ4]=jvj+145; 
(*f[181])( );     /*QUADRI2(100,20,101,1356,jvj+145)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V77; pile[WZ4]=jvj+149; 
(*f[192])( );     /*QUADRI4(100,41,130,V77,jvj+149)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+150; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+150)*/
pile[v[22]]=jvj+150; pile[WZ1]=111; pile[WZ2]=jvj+151; 
(*f[54])( );     /*TRI1(jvj+150,111,jvj+151)*/
pile[v[22]]=jvj+151; pile[WZ1]=jvj+40; pile[WZ2]=107; pile[WZ3]=jvj+152; 
(*f[301])( );     /*TRI11(jvj+151,jvj+40,107,jvj+152)*/
pile[v[22]]=jvj+152; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+147; 
(*f[58])( );     /*TRI3(jvj+152,22,100,jvj+147)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V68; pile[WZ4]=jvj+143; 
(*f[192])( );     /*QUADRI4(100,41,130,V68,jvj+143)*/
pile[v[22]]=jvj+143; pile[WZ1]=160; pile[WZ2]=jvj+144; 
(*f[54])( );     /*TRI1(jvj+143,160,jvj+144)*/
pile[v[22]]=jvj+144; pile[WZ1]=jvj+145; pile[WZ2]=111; pile[WZ3]=jvj+146; 
(*f[58])( );     /*TRI3(jvj+144,jvj+145,111,jvj+146)*/
pile[v[22]]=jvj+146; pile[WZ1]=jvj+147; pile[WZ2]=103; pile[WZ3]=jvj+148; 
(*f[58])( );     /*TRI3(jvj+146,jvj+147,103,jvj+148)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+149; pile[WZ4]=jvj+148; pile[WZ5]=jvj+135; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+149,jvj+148,jvj+135)*/
pile[WZ2]=111; pile[WZ3]=jvj+133; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+133,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=107; pile[WZ2]=jvj+134; 
(*f[36])( );     /*PLUSC0(jvj+41,107,jvj+134)*/
pile[WZ2]=jvj+135; 
(*f[36])( );     /*PLUSC0(jvj+41,107,jvj+135)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+41; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+41,NNNX)*/
goto l55;
l64:x[jvj+188]=s[x[jvj+198]] ;z[jvj+188]=(x[jvj+188]<=sepcte) ? x[jvj+188] : z[jvj+198];
if((x[jvj+188]==x[jvj+185])) goto l65;
pile[v[22]]=jvj+187; pile[WZ1]=jvj+188; 
(*f[68])( );     /*PLUE0(jvj+187,jvj+188)*/
l65:x[jvj+198]=t[x[jvj+198]];
goto l63;
l67:x[jvj+189]=s[x[jvj+199]] ;z[jvj+189]=(x[jvj+189]<=sepcte) ? x[jvj+189] : z[jvj+199];
pile[v[22]]=jvj+189; pile[WZ1]=jvj+43; pile[WZ2]=jvj+190; 
(*f[760])( );     /*MEMEX0(jvj+189,jvj+43,jvj+190)*/
if((x[jvj+190]==135)) goto l68;
x[jvj+199]=t[x[jvj+199]];
goto l66;
l68:x[jvj+191]=0 ;z[jvj+191]=0;
x[jvj+200]=x[jvj+42] ;z[jvj+200]=z[jvj+42];
l69:if((x[jvj+200]>0)) goto l70;
x[jvj+44]=x[jvj+191] ;z[jvj+44]=z[jvj+191];
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; 
(*f[299])( );     /*COPEL0(jvj+44,jvj+45)*/
NNNT=227;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1356; pile[WZ4]=jvj+155; 
(*f[181])( );     /*QUADRI2(100,20,101,1356,jvj+155)*/
pile[WZ4]=jvj+162; 
(*f[181])( );     /*QUADRI2(100,20,101,1356,jvj+162)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V77; pile[WZ4]=jvj+166; 
(*f[192])( );     /*QUADRI4(100,41,130,V77,jvj+166)*/
pile[WZ3]=V147; pile[WZ4]=jvj+164; 
(*f[192])( );     /*QUADRI4(100,41,130,V147,jvj+164)*/
pile[WZ3]=V68; pile[WZ4]=jvj+160; 
(*f[192])( );     /*QUADRI4(100,41,130,V68,jvj+160)*/
pile[v[22]]=jvj+160; pile[WZ1]=160; pile[WZ2]=jvj+161; 
(*f[54])( );     /*TRI1(jvj+160,160,jvj+161)*/
pile[v[22]]=jvj+161; pile[WZ1]=jvj+162; pile[WZ2]=111; pile[WZ3]=jvj+163; 
(*f[58])( );     /*TRI3(jvj+161,jvj+162,111,jvj+163)*/
pile[v[22]]=jvj+163; pile[WZ1]=jvj+164; pile[WZ2]=103; pile[WZ3]=jvj+165; 
(*f[58])( );     /*TRI3(jvj+163,jvj+164,103,jvj+165)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+166; pile[WZ4]=jvj+165; pile[WZ5]=jvj+159; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+166,jvj+165,jvj+159)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+167; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+167)*/
pile[v[22]]=jvj+167; pile[WZ1]=111; pile[WZ2]=jvj+168; 
(*f[54])( );     /*TRI1(jvj+167,111,jvj+168)*/
pile[v[22]]=jvj+168; pile[WZ1]=jvj+45; pile[WZ2]=107; pile[WZ3]=jvj+169; 
(*f[301])( );     /*TRI11(jvj+168,jvj+45,107,jvj+169)*/
pile[v[22]]=jvj+169; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+157; 
(*f[58])( );     /*TRI3(jvj+169,22,100,jvj+157)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V68; pile[WZ4]=jvj+153; 
(*f[192])( );     /*QUADRI4(100,41,130,V68,jvj+153)*/
pile[v[22]]=jvj+153; pile[WZ1]=160; pile[WZ2]=jvj+154; 
(*f[54])( );     /*TRI1(jvj+153,160,jvj+154)*/
pile[v[22]]=jvj+154; pile[WZ1]=jvj+155; pile[WZ2]=111; pile[WZ3]=jvj+156; 
(*f[58])( );     /*TRI3(jvj+154,jvj+155,111,jvj+156)*/
pile[v[22]]=jvj+156; pile[WZ1]=jvj+157; pile[WZ2]=103; pile[WZ3]=jvj+158; 
(*f[58])( );     /*TRI3(jvj+156,jvj+157,103,jvj+158)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+159; pile[WZ4]=jvj+158; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+159,jvj+158,jvj+46)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+46; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+46,NNNX)*/
goto l55;
l70:x[jvj+192]=s[x[jvj+200]] ;z[jvj+192]=(x[jvj+192]<=sepcte) ? x[jvj+192] : z[jvj+200];
if((x[jvj+192]==x[jvj+189])) goto l71;
pile[v[22]]=jvj+191; pile[WZ1]=jvj+192; 
(*f[68])( );     /*PLUE0(jvj+191,jvj+192)*/
l71:x[jvj+200]=t[x[jvj+200]];
goto l69;
l72:V273=V475;
goto l39;
l73:if((V475>=0)) goto l72;
V479=abs(V475);
V478=2*V479;
if((V478<V268)) goto l72;
V480=V475+V268;
V273=V480;
goto l39;
l74:V318=V482;
goto l48;
l75:if((V482>=0)) goto l74;
V486=abs(V482);
V485=2*V486;
if((V485<V312)) goto l74;
V487=V482+V312;
V318=V487;
goto l48;
l77:V2=134;
goto l33;
}
