#include "dx.h"
void Z59Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int AA=0,BB=0,V147=0,V186=0,V267=0,V269=0,V321=0,V323=0,V86=0,V190=0,K=0,V39=0,L=0,V50=0,V183=0,V174=0,V152=0,V151=0,V187=0,V100=0,V204=0,V114=0,V140=0,V115=0,N=0,V148=0,V414=0,V426=0,V420=0,V402=0,P=0,V439=0,I=0,V432=0,V453=0,V341=0,V326=0,V349=0,V325=0,V361=0,V250=0,V219=0,V260=0,V220=0,V218=0,V456=0,V467=0,V455=0,V460=0,V481=0,V379=0,V364=0,V387=0,V363=0,V399=0,V54=0,V77=0,V53=0,V83=0,V304=0,V273=0,V314=0,V274=0,V272=0,V13=0,V16=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=350;
x[jvj+1]=15560;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1856&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=539; pile[WZ1]=NNNY; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(539,NNNY,jvj+28)*/
pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+28,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]==30)) goto l8;
if((x[jvj+30]!=29)) goto l11;
pile[v[22]]=102; pile[WZ1]=jvj+28; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+28,jvj+35)*/
if((x[NNNY]!=x[jvj+35])) goto l11;
pile[v[22]]=130; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+35,V190)*/
V190=pile[WZ2]; 
if((V190>=0)) goto l11;
pile[v[22]]=103; pile[WZ1]=jvj+28; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+28,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[1353])( );     /*POSOUNUL0(jvj+36,jvj+37)*/
if((x[jvj+37]==135)) goto l10;
l11:if(x[jvj+30]!=25&&x[jvj+30]!=26&&x[jvj+30]!=27&&x[jvj+30]!=28&&x[jvj+30]!=29&&x[jvj+30]!=30&&x[jvj+30]!=625) goto l14;
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+28,jvj+39)*/
if((x[jvj+39]!=22)) goto l14;
pile[v[22]]=103; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,jvj+28,jvj+40)*/
if((x[NNNY]!=x[jvj+40])) goto l14;
pile[v[22]]=130; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+40,K)*/
K=pile[WZ2]; 
if((K==0)) goto l14;
pile[v[22]]=102; pile[WZ1]=jvj+28; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+28,jvj+41)*/
pile[v[22]]=111; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+41,jvj+42)*/
pile[v[22]]=101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+42,jvj+43)*/
if((x[jvj+43]!=485)) goto l14;
pile[v[22]]=107; pile[WZ1]=jvj+41; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(107,jvj+41,jvj+44)*/
x[jvj+309]=x[jvj+44] ;z[jvj+309]=z[jvj+44];
l12:if((x[jvj+309]<=0)) goto l14;
x[jvj+45]=s[x[jvj+309]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+309];
pile[v[22]]=130; pile[WZ1]=jvj+45; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+45,V39)*/
V39=pile[WZ2]; 
L=V39;
if((L==0)) goto l13;
x[jvj+337]=x[jvj+44] ;z[jvj+337]=z[jvj+44];
l113:if((x[jvj+337]>0)) goto l114;
l13:x[jvj+309]=t[x[jvj+309]];
goto l12;
l1:pile[v[22]]=AA; pile[WZ1]=BB; pile[WZ2]=jvj+3; 
(*f[2022])( );     /*POSOM1(AA,BB,jvj+3)*/
if((x[jvj+3]==134)) goto l73;
l143:x[jvj+347]=x[jvj+350] ;z[jvj+347]=z[jvj+350];
l144:if((x[jvj+347]>0)) goto l145;
l73:x[jvj+324]=t[x[jvj+324]];
l72:if((x[jvj+324]<=0)) goto l71;
x[jvj+175]=s[x[jvj+324]] ;z[jvj+175]=(x[jvj+175]<=sepcte) ? x[jvj+175] : z[jvj+324];
if((x[jvj+174]==x[jvj+175])) goto l73;
pile[v[22]]=130; pile[WZ1]=jvj+175; 
(*f[26])( );if(v[102]) goto l73;     /*FNDC0(130,jvj+175,V16)*/
V16=pile[WZ2]; 
BB=V16;
if((x[jvj+173]==485)) goto l1;
if((x[jvj+173]!=486)) goto l143;
pile[v[22]]=AA; pile[WZ1]=BB; pile[WZ2]=jvj+2; 
(*f[1165])( );     /*POSPRD1(AA,BB,jvj+2)*/
if((x[jvj+2]==134)) goto l73;
goto l143;
l8:pile[v[22]]=102; pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+28,jvj+31)*/
if((x[NNNY]!=x[jvj+31])) goto l11;
pile[v[22]]=130; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+31,V86)*/
V86=pile[WZ2]; 
if((V86>0)) goto l11;
pile[v[22]]=103; pile[WZ1]=jvj+28; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+28,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[1353])( );     /*POSOUNUL0(jvj+32,jvj+33)*/
if((x[jvj+33]==135)) goto l9;
goto l11;
l9:NNNT=59;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+34)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+34; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+28,jvj+34,NNNX)*/
l76:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l10:NNNT=79;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+38)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+38; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+28,jvj+38,NNNX)*/
goto l76;
l14:if(x[jvj+30]!=25&&x[jvj+30]!=26&&x[jvj+30]!=27&&x[jvj+30]!=28&&x[jvj+30]!=29&&x[jvj+30]!=30) goto l18;
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+28,jvj+49)*/
if((x[jvj+49]!=22)) goto l18;
pile[v[22]]=103; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,jvj+28,jvj+50)*/
if((x[NNNY]!=x[jvj+50])) goto l18;
pile[v[22]]=130; pile[WZ1]=jvj+50; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+50,V183)*/
V183=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+28; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+28,jvj+51)*/
pile[v[22]]=111; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+51,jvj+52)*/
pile[v[22]]=101; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+52,jvj+53)*/
if((x[jvj+53]!=486)) goto l18;
pile[v[22]]=107; pile[WZ1]=jvj+51; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(107,jvj+51,jvj+54)*/
x[jvj+310]=x[jvj+54] ;z[jvj+310]=z[jvj+54];
l15:if((x[jvj+310]<=0)) goto l18;
x[jvj+55]=s[x[jvj+310]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+310];
pile[v[22]]=130; pile[WZ1]=jvj+55; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+55,V174)*/
V174=pile[WZ2]; 
V152=V174;
if((V152==0)) goto l16;
pile[v[22]]=V183; pile[WZ1]=V152; 
(*f[1011])( );     /*PGCD0(V183,V152,V151)*/
V151=pile[WZ2]; 
if((V151<=1)) goto l16;
x[jvj+10]=0 ;z[jvj+10]=0;
V186=V152/V151;
x[jvj+8]=d[29];z[jvj+8]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V186; pile[WZ4]=jvj+9; 
(*f[192])( );     /*QUADRI4(100,41,130,V186,jvj+9)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[196])( );     /*PLUF0(jvj+8,jvj+9,jvj+10)*/
x[jvj+327]=x[jvj+54] ;z[jvj+327]=z[jvj+54];
l83:if((x[jvj+327]>0)) goto l84;
l17:pile[v[22]]=jvj+10; pile[WZ1]=jvj+56; 
(*f[299])( );     /*COPEL0(jvj+10,jvj+56)*/
V187=V183/V151;
NNNT=67;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+30; pile[WZ4]=jvj+189; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+30,jvj+189)*/
pile[WZ3]=486; pile[WZ4]=jvj+194; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+194)*/
pile[v[22]]=jvj+194; pile[WZ1]=111; pile[WZ2]=jvj+195; 
(*f[54])( );     /*TRI1(jvj+194,111,jvj+195)*/
pile[v[22]]=jvj+195; pile[WZ1]=jvj+56; pile[WZ2]=107; pile[WZ3]=jvj+196; 
(*f[301])( );     /*TRI11(jvj+195,jvj+56,107,jvj+196)*/
pile[v[22]]=jvj+196; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+193; 
(*f[58])( );     /*TRI3(jvj+196,22,100,jvj+193)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V187; pile[WZ4]=jvj+191; 
(*f[192])( );     /*QUADRI4(100,41,130,V187,jvj+191)*/
pile[v[22]]=jvj+189; pile[WZ1]=111; pile[WZ2]=jvj+190; 
(*f[54])( );     /*TRI1(jvj+189,111,jvj+190)*/
pile[v[22]]=jvj+190; pile[WZ1]=jvj+191; pile[WZ2]=103; pile[WZ3]=jvj+192; 
(*f[58])( );     /*TRI3(jvj+190,jvj+191,103,jvj+192)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+193; pile[WZ4]=jvj+192; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+193,jvj+192,jvj+57)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+57; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+28,jvj+57,NNNX)*/
goto l76;
l16:x[jvj+310]=t[x[jvj+310]];
goto l15;
l18:pile[v[22]]=538; pile[WZ1]=NNNY; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(538,NNNY,jvj+58)*/
pile[v[22]]=111; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+58,jvj+59)*/
pile[v[22]]=101; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+59,jvj+60)*/
if((x[jvj+60]==30)) goto l19;
if((x[jvj+60]!=29)) goto l22;
pile[v[22]]=103; pile[WZ1]=jvj+58; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+58,jvj+65)*/
if((x[NNNY]!=x[jvj+65])) goto l22;
pile[v[22]]=130; pile[WZ1]=jvj+65; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+65,V204)*/
V204=pile[WZ2]; 
if((V204>0)) goto l22;
pile[v[22]]=102; pile[WZ1]=jvj+58; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+58,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+67; 
(*f[1353])( );     /*POSOUNUL0(jvj+66,jvj+67)*/
if((x[jvj+67]==135)) goto l21;
l22:if(x[jvj+60]!=25&&x[jvj+60]!=26&&x[jvj+60]!=27&&x[jvj+60]!=28&&x[jvj+60]!=29&&x[jvj+60]!=30) goto l26;
pile[v[22]]=100; pile[WZ1]=jvj+58; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+58,jvj+69)*/
if((x[jvj+69]!=22)) goto l26;
pile[v[22]]=103; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(103,jvj+58,jvj+70)*/
pile[v[22]]=111; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+70,jvj+71)*/
pile[v[22]]=101; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+71,jvj+72)*/
if((x[jvj+72]!=486)) goto l26;
pile[v[22]]=102; pile[WZ1]=jvj+58; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+58,jvj+73)*/
pile[v[22]]=130; pile[WZ1]=jvj+73; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+73,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+70; pile[WZ2]=jvj+74; 
(*f[33])( );     /*FNDE0(107,jvj+70,jvj+74)*/
x[jvj+311]=x[jvj+74] ;z[jvj+311]=z[jvj+74];
l23:if((x[jvj+311]<=0)) goto l26;
x[jvj+75]=s[x[jvj+311]] ;z[jvj+75]=(x[jvj+75]<=sepcte) ? x[jvj+75] : z[jvj+311];
pile[v[22]]=130; pile[WZ1]=jvj+75; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,jvj+75,V140)*/
V140=pile[WZ2]; 
V115=V140;
if((V115==0)) goto l24;
pile[v[22]]=V115; pile[WZ1]=V114; 
(*f[1011])( );     /*PGCD0(V115,V114,N)*/
N=pile[WZ2]; 
if((N<=1)) goto l24;
x[jvj+6]=0 ;z[jvj+6]=0;
V147=V115/N;
x[jvj+4]=d[29];z[jvj+4]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V147; pile[WZ4]=jvj+5; 
(*f[192])( );     /*QUADRI4(100,41,130,V147,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[196])( );     /*PLUF0(jvj+4,jvj+5,jvj+6)*/
x[jvj+325]=x[jvj+74] ;z[jvj+325]=z[jvj+74];
l77:if((x[jvj+325]>0)) goto l78;
l25:pile[v[22]]=jvj+6; pile[WZ1]=jvj+76; 
(*f[299])( );     /*COPEL0(jvj+6,jvj+76)*/
V148=V114/N;
NNNT=66;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+60; pile[WZ4]=jvj+197; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+60,jvj+197)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V148; pile[WZ4]=jvj+201; 
(*f[192])( );     /*QUADRI4(100,41,130,V148,jvj+201)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+202; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+202)*/
pile[v[22]]=jvj+202; pile[WZ1]=111; pile[WZ2]=jvj+203; 
(*f[54])( );     /*TRI1(jvj+202,111,jvj+203)*/
pile[v[22]]=jvj+203; pile[WZ1]=jvj+76; pile[WZ2]=107; pile[WZ3]=jvj+204; 
(*f[301])( );     /*TRI11(jvj+203,jvj+76,107,jvj+204)*/
pile[v[22]]=jvj+204; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+199; 
(*f[58])( );     /*TRI3(jvj+204,22,100,jvj+199)*/
pile[v[22]]=jvj+197; pile[WZ1]=111; pile[WZ2]=jvj+198; 
(*f[54])( );     /*TRI1(jvj+197,111,jvj+198)*/
pile[v[22]]=jvj+198; pile[WZ1]=jvj+199; pile[WZ2]=103; pile[WZ3]=jvj+200; 
(*f[58])( );     /*TRI3(jvj+198,jvj+199,103,jvj+200)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+201; pile[WZ4]=jvj+200; pile[WZ5]=jvj+77; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+201,jvj+200,jvj+77)*/
pile[v[22]]=jvj+58; pile[WZ1]=jvj+77; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+58,jvj+77,NNNX)*/
goto l76;
l19:pile[v[22]]=103; pile[WZ1]=jvj+58; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+58,jvj+61)*/
if((x[NNNY]!=x[jvj+61])) goto l22;
pile[v[22]]=130; pile[WZ1]=jvj+61; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+61,V100)*/
V100=pile[WZ2]; 
if((V100>=0)) goto l22;
pile[v[22]]=102; pile[WZ1]=jvj+58; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+58,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; 
(*f[1353])( );     /*POSOUNUL0(jvj+62,jvj+63)*/
if((x[jvj+63]==135)) goto l20;
goto l22;
l20:NNNT=60;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+64; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+64)*/
pile[v[22]]=jvj+58; pile[WZ1]=jvj+64; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+58,jvj+64,NNNX)*/
goto l76;
l21:NNNT=80;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+68)*/
pile[v[22]]=jvj+58; pile[WZ1]=jvj+68; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+58,jvj+68,NNNX)*/
goto l76;
l24:x[jvj+311]=t[x[jvj+311]];
goto l23;
l26:pile[v[22]]=543; pile[WZ1]=NNNY; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(543,NNNY,jvj+78)*/
pile[v[22]]=538; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(538,jvj+78,jvj+79)*/
pile[v[22]]=111; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(111,jvj+79,jvj+80)*/
pile[v[22]]=101; pile[WZ1]=jvj+80; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(101,jvj+80,jvj+81)*/
if((x[jvj+81]==29)) goto l27;
if((x[jvj+81]!=625)) goto l42;
pile[v[22]]=160; pile[WZ1]=jvj+79; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(160,jvj+79,jvj+91)*/
pile[v[22]]=130; pile[WZ1]=jvj+91; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(130,jvj+91,P)*/
P=pile[WZ2]; 
x[jvj+92]=d[20];z[jvj+92]=0;
l33:if((x[jvj+92]<=0)) goto l38;
x[jvj+93]=s[x[jvj+92]] ;z[jvj+93]=(x[jvj+93]<=sepcte) ? x[jvj+93] : z[jvj+92];
pile[v[22]]=jvj+93; pile[WZ1]=jvj+79; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(jvj+93,jvj+79,jvj+94)*/
pile[v[22]]=111; pile[WZ1]=jvj+94; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+94,jvj+95)*/
pile[v[22]]=101; pile[WZ1]=jvj+95; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+95,jvj+96)*/
if((x[jvj+96]!=485)) goto l34;
pile[v[22]]=107; pile[WZ1]=jvj+94; pile[WZ2]=jvj+97; 
(*f[33])( );     /*FNDE0(107,jvj+94,jvj+97)*/
x[jvj+314]=x[jvj+97] ;z[jvj+314]=z[jvj+97];
l35:if((x[jvj+314]<=0)) goto l34;
x[jvj+98]=s[x[jvj+314]] ;z[jvj+98]=(x[jvj+98]<=sepcte) ? x[jvj+98] : z[jvj+314];
if((x[NNNY]!=x[jvj+98])) goto l36;
pile[v[22]]=130; pile[WZ1]=jvj+98; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(130,jvj+98,V439)*/
V439=pile[WZ2]; 
I=V439;
V432=abs(I);
if((V432<P)) goto l36;
V453=I%P;
NNNT=221;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V453; pile[WZ4]=jvj+99; 
(*f[192])( );     /*QUADRI4(100,41,130,V453,jvj+99)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+99; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+99,NNNX)*/
goto l76;
l27:pile[v[22]]=102; pile[WZ1]=jvj+79; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,jvj+79,jvj+82)*/
pile[v[22]]=111; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,jvj+82,jvj+83)*/
pile[v[22]]=101; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+83,jvj+84)*/
if((x[jvj+84]!=485)) goto l42;
pile[v[22]]=107; pile[WZ1]=jvj+82; pile[WZ2]=jvj+85; 
(*f[33])( );     /*FNDE0(107,jvj+82,jvj+85)*/
for(i=x[jvj+85],V414=0;i>0;i=t[i],V414++)  ;
if((V414!=2)) goto l42;
pile[v[22]]=103; pile[WZ1]=jvj+79; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(103,jvj+79,jvj+86)*/
pile[v[22]]=130; pile[WZ1]=jvj+86; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+86,V426)*/
V426=pile[WZ2]; 
if((V426!=0)) goto l42;
x[jvj+349]=x[jvj+85] ;z[jvj+349]=z[jvj+85];
l28:if((x[jvj+349]<=0)) goto l42;
x[jvj+312]=s[x[jvj+349]] ;z[jvj+312]=(x[jvj+312]<=sepcte) ? x[jvj+312] : z[jvj+349];
x[jvj+87]=x[jvj+312] ;z[jvj+87]=z[jvj+312];
pile[v[22]]=jvj+87; pile[WZ1]=jvj+88; 
(*f[1353])( );     /*POSOUNUL0(jvj+87,jvj+88)*/
if((x[jvj+88]==135)) goto l31;
l29:x[jvj+349]=t[x[jvj+349]];
goto l28;
l31:x[jvj+313]=x[jvj+85] ;z[jvj+313]=z[jvj+85];
l30:if((x[jvj+313]<=0)) goto l29;
x[jvj+89]=s[x[jvj+313]] ;z[jvj+89]=(x[jvj+89]<=sepcte) ? x[jvj+89] : z[jvj+313];
if((x[jvj+312]==x[jvj+89])) goto l32;
pile[v[22]]=130; pile[WZ1]=jvj+89; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(130,jvj+89,V420)*/
V420=pile[WZ2]; 
V402=V420;
if((V402<=0)) goto l32;
NNNT=211;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+90; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+90)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+90; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+79,jvj+90,NNNX)*/
goto l76;
l32:x[jvj+313]=t[x[jvj+313]];
goto l30;
l34:x[jvj+92]=t[x[jvj+92]];
goto l33;
l36:x[jvj+314]=t[x[jvj+314]];
goto l35;
l38:x[jvj+100]=d[20];z[jvj+100]=0;
l37:if((x[jvj+100]<=0)) goto l42;
x[jvj+101]=s[x[jvj+100]] ;z[jvj+101]=(x[jvj+101]<=sepcte) ? x[jvj+101] : z[jvj+100];
pile[v[22]]=268; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(268,jvj+101,jvj+102)*/
pile[v[22]]=jvj+102; pile[WZ1]=jvj+79; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(jvj+102,jvj+79,jvj+103)*/
pile[v[22]]=111; pile[WZ1]=jvj+103; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,jvj+103,jvj+104)*/
pile[v[22]]=101; pile[WZ1]=jvj+104; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(101,jvj+104,jvj+105)*/
if((x[jvj+105]!=485)) goto l39;
pile[v[22]]=jvj+101; pile[WZ1]=jvj+79; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(jvj+101,jvj+79,jvj+106)*/
pile[v[22]]=130; pile[WZ1]=jvj+106; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(130,jvj+106,V341)*/
V341=pile[WZ2]; 
V326=V341;
if((V326==0)) goto l39;
pile[v[22]]=107; pile[WZ1]=jvj+103; pile[WZ2]=jvj+107; 
(*f[33])( );     /*FNDE0(107,jvj+103,jvj+107)*/
x[jvj+315]=x[jvj+107] ;z[jvj+315]=z[jvj+107];
l40:if((x[jvj+315]<=0)) goto l39;
x[jvj+108]=s[x[jvj+315]] ;z[jvj+108]=(x[jvj+108]<=sepcte) ? x[jvj+108] : z[jvj+315];
pile[v[22]]=130; pile[WZ1]=jvj+108; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(130,jvj+108,V349)*/
V349=pile[WZ2]; 
V325=V349;
if((V325==0)) goto l41;
x[jvj+339]=x[jvj+107] ;z[jvj+339]=z[jvj+107];
l119:if((x[jvj+339]>0)) goto l120;
l41:x[jvj+315]=t[x[jvj+315]];
goto l40;
l39:x[jvj+100]=t[x[jvj+100]];
goto l37;
l42:if(x[jvj+81]!=25&&x[jvj+81]!=26&&x[jvj+81]!=27&&x[jvj+81]!=28&&x[jvj+81]!=29&&x[jvj+81]!=30) goto l49;
pile[v[22]]=100; pile[WZ1]=jvj+79; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(100,jvj+79,jvj+112)*/
if((x[jvj+112]!=22)) goto l49;
pile[v[22]]=102; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(102,jvj+79,jvj+113)*/
pile[v[22]]=111; pile[WZ1]=jvj+113; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(111,jvj+113,jvj+114)*/
pile[v[22]]=101; pile[WZ1]=jvj+114; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(101,jvj+114,jvj+115)*/
if((x[jvj+115]!=486)) goto l49;
pile[v[22]]=103; pile[WZ1]=jvj+79; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(103,jvj+79,jvj+116)*/
pile[v[22]]=111; pile[WZ1]=jvj+116; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(111,jvj+116,jvj+117)*/
pile[v[22]]=101; pile[WZ1]=jvj+117; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(101,jvj+117,jvj+118)*/
if((x[jvj+118]!=486)) goto l49;
pile[v[22]]=107; pile[WZ1]=jvj+113; pile[WZ2]=jvj+119; 
(*f[33])( );     /*FNDE0(107,jvj+113,jvj+119)*/
pile[WZ1]=jvj+116; pile[WZ2]=jvj+120; 
(*f[33])( );     /*FNDE0(107,jvj+116,jvj+120)*/
x[jvj+316]=x[jvj+119] ;z[jvj+316]=z[jvj+119];
l43:if((x[jvj+316]<=0)) goto l49;
x[jvj+121]=s[x[jvj+316]] ;z[jvj+121]=(x[jvj+121]<=sepcte) ? x[jvj+121] : z[jvj+316];
pile[v[22]]=130; pile[WZ1]=jvj+121; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(130,jvj+121,V250)*/
V250=pile[WZ2]; 
V219=V250;
if((V219==0)) goto l44;
x[jvj+317]=x[jvj+120] ;z[jvj+317]=z[jvj+120];
l45:if((x[jvj+317]<=0)) goto l44;
x[jvj+122]=s[x[jvj+317]] ;z[jvj+122]=(x[jvj+122]<=sepcte) ? x[jvj+122] : z[jvj+317];
pile[v[22]]=130; pile[WZ1]=jvj+122; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(130,jvj+122,V260)*/
V260=pile[WZ2]; 
V220=V260;
if((V220==0)) goto l46;
pile[v[22]]=V220; pile[WZ1]=V219; 
(*f[1011])( );     /*PGCD0(V220,V219,V218)*/
V218=pile[WZ2]; 
if((V218<=1)) goto l46;
x[jvj+14]=0 ;z[jvj+14]=0;
V267=V219/V218;
x[jvj+12]=d[29];z[jvj+12]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V267; pile[WZ4]=jvj+13; 
(*f[192])( );     /*QUADRI4(100,41,130,V267,jvj+13)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[196])( );     /*PLUF0(jvj+12,jvj+13,jvj+14)*/
x[jvj+329]=x[jvj+119] ;z[jvj+329]=z[jvj+119];
l89:if((x[jvj+329]>0)) goto l90;
l47:pile[v[22]]=jvj+14; pile[WZ1]=jvj+123; 
(*f[299])( );     /*COPEL0(jvj+14,jvj+123)*/
x[jvj+18]=0 ;z[jvj+18]=0;
V269=V220/V218;
x[jvj+16]=d[29];z[jvj+16]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V269; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,V269,jvj+17)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[196])( );     /*PLUF0(jvj+16,jvj+17,jvj+18)*/
x[jvj+331]=x[jvj+120] ;z[jvj+331]=z[jvj+120];
l95:if((x[jvj+331]>0)) goto l96;
l48:pile[v[22]]=jvj+18; pile[WZ1]=jvj+124; 
(*f[299])( );     /*COPEL0(jvj+18,jvj+124)*/
NNNT=157;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+81; pile[WZ4]=jvj+214; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+81,jvj+214)*/
pile[WZ3]=486; pile[WZ4]=jvj+219; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+219)*/
pile[v[22]]=jvj+219; pile[WZ1]=111; pile[WZ2]=jvj+220; 
(*f[54])( );     /*TRI1(jvj+219,111,jvj+220)*/
pile[v[22]]=jvj+220; pile[WZ1]=jvj+123; pile[WZ2]=107; pile[WZ3]=jvj+221; 
(*f[301])( );     /*TRI11(jvj+220,jvj+123,107,jvj+221)*/
pile[v[22]]=jvj+221; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+218; 
(*f[58])( );     /*TRI3(jvj+221,22,100,jvj+218)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+222; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+222)*/
pile[v[22]]=jvj+222; pile[WZ1]=111; pile[WZ2]=jvj+223; 
(*f[54])( );     /*TRI1(jvj+222,111,jvj+223)*/
pile[v[22]]=jvj+223; pile[WZ1]=jvj+124; pile[WZ2]=107; pile[WZ3]=jvj+224; 
(*f[301])( );     /*TRI11(jvj+223,jvj+124,107,jvj+224)*/
pile[v[22]]=jvj+224; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+216; 
(*f[58])( );     /*TRI3(jvj+224,22,100,jvj+216)*/
pile[v[22]]=jvj+214; pile[WZ1]=111; pile[WZ2]=jvj+215; 
(*f[54])( );     /*TRI1(jvj+214,111,jvj+215)*/
pile[v[22]]=jvj+215; pile[WZ1]=jvj+216; pile[WZ2]=103; pile[WZ3]=jvj+217; 
(*f[58])( );     /*TRI3(jvj+215,jvj+216,103,jvj+217)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+218; pile[WZ4]=jvj+217; pile[WZ5]=jvj+125; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+218,jvj+217,jvj+125)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+125; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+79,jvj+125,NNNX)*/
goto l76;
l44:x[jvj+316]=t[x[jvj+316]];
goto l43;
l46:x[jvj+317]=t[x[jvj+317]];
goto l45;
l49:pile[v[22]]=539; pile[WZ1]=jvj+78; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(539,jvj+78,jvj+126)*/
pile[v[22]]=111; pile[WZ1]=jvj+126; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(111,jvj+126,jvj+127)*/
pile[v[22]]=101; pile[WZ1]=jvj+127; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(101,jvj+127,jvj+128)*/
if((x[jvj+128]!=625)) goto l59;
pile[v[22]]=160; pile[WZ1]=jvj+126; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(160,jvj+126,jvj+129)*/
pile[v[22]]=130; pile[WZ1]=jvj+129; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(130,jvj+129,V456)*/
V456=pile[WZ2]; 
x[jvj+130]=d[20];z[jvj+130]=0;
l50:if((x[jvj+130]<=0)) goto l55;
x[jvj+131]=s[x[jvj+130]] ;z[jvj+131]=(x[jvj+131]<=sepcte) ? x[jvj+131] : z[jvj+130];
pile[v[22]]=jvj+131; pile[WZ1]=jvj+126; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(jvj+131,jvj+126,jvj+132)*/
pile[v[22]]=111; pile[WZ1]=jvj+132; pile[WZ2]=jvj+133; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(111,jvj+132,jvj+133)*/
pile[v[22]]=101; pile[WZ1]=jvj+133; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+133,jvj+134)*/
if((x[jvj+134]!=485)) goto l51;
pile[v[22]]=107; pile[WZ1]=jvj+132; pile[WZ2]=jvj+135; 
(*f[33])( );     /*FNDE0(107,jvj+132,jvj+135)*/
x[jvj+318]=x[jvj+135] ;z[jvj+318]=z[jvj+135];
l52:if((x[jvj+318]<=0)) goto l51;
x[jvj+136]=s[x[jvj+318]] ;z[jvj+136]=(x[jvj+136]<=sepcte) ? x[jvj+136] : z[jvj+318];
if((x[NNNY]!=x[jvj+136])) goto l53;
pile[v[22]]=130; pile[WZ1]=jvj+136; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(130,jvj+136,V467)*/
V467=pile[WZ2]; 
V455=V467;
V460=abs(V455);
if((V460<V456)) goto l53;
V481=V455%V456;
NNNT=221;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V481; pile[WZ4]=jvj+137; 
(*f[192])( );     /*QUADRI4(100,41,130,V481,jvj+137)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+137; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+137,NNNX)*/
goto l76;
l51:x[jvj+130]=t[x[jvj+130]];
goto l50;
l53:x[jvj+318]=t[x[jvj+318]];
goto l52;
l55:x[jvj+138]=d[20];z[jvj+138]=0;
l54:if((x[jvj+138]<=0)) goto l59;
x[jvj+139]=s[x[jvj+138]] ;z[jvj+139]=(x[jvj+139]<=sepcte) ? x[jvj+139] : z[jvj+138];
pile[v[22]]=268; pile[WZ1]=jvj+139; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(268,jvj+139,jvj+140)*/
pile[v[22]]=jvj+140; pile[WZ1]=jvj+126; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(jvj+140,jvj+126,jvj+141)*/
pile[v[22]]=111; pile[WZ1]=jvj+141; pile[WZ2]=jvj+142; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(111,jvj+141,jvj+142)*/
pile[v[22]]=101; pile[WZ1]=jvj+142; pile[WZ2]=jvj+143; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(101,jvj+142,jvj+143)*/
if((x[jvj+143]!=485)) goto l56;
pile[v[22]]=jvj+139; pile[WZ1]=jvj+126; pile[WZ2]=jvj+144; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(jvj+139,jvj+126,jvj+144)*/
pile[v[22]]=130; pile[WZ1]=jvj+144; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(130,jvj+144,V379)*/
V379=pile[WZ2]; 
V364=V379;
if((V364==0)) goto l56;
pile[v[22]]=107; pile[WZ1]=jvj+141; pile[WZ2]=jvj+145; 
(*f[33])( );     /*FNDE0(107,jvj+141,jvj+145)*/
x[jvj+319]=x[jvj+145] ;z[jvj+319]=z[jvj+145];
l57:if((x[jvj+319]<=0)) goto l56;
x[jvj+146]=s[x[jvj+319]] ;z[jvj+146]=(x[jvj+146]<=sepcte) ? x[jvj+146] : z[jvj+319];
pile[v[22]]=130; pile[WZ1]=jvj+146; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(130,jvj+146,V387)*/
V387=pile[WZ2]; 
V363=V387;
if((V363==0)) goto l58;
x[jvj+341]=x[jvj+145] ;z[jvj+341]=z[jvj+145];
l125:if((x[jvj+341]>0)) goto l126;
l58:x[jvj+319]=t[x[jvj+319]];
goto l57;
l56:x[jvj+138]=t[x[jvj+138]];
goto l54;
l59:if(x[jvj+128]!=25&&x[jvj+128]!=26&&x[jvj+128]!=27&&x[jvj+128]!=28&&x[jvj+128]!=29&&x[jvj+128]!=30) goto l69;
pile[v[22]]=100; pile[WZ1]=jvj+126; pile[WZ2]=jvj+150; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(100,jvj+126,jvj+150)*/
if((x[jvj+150]!=22)) goto l69;
pile[v[22]]=103; pile[WZ2]=jvj+151; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(103,jvj+126,jvj+151)*/
pile[v[22]]=111; pile[WZ1]=jvj+151; pile[WZ2]=jvj+152; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(111,jvj+151,jvj+152)*/
pile[v[22]]=101; pile[WZ1]=jvj+152; pile[WZ2]=jvj+153; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(101,jvj+152,jvj+153)*/
if((x[jvj+153]==485)) goto l60;
if((x[jvj+153]!=486)) goto l69;
pile[v[22]]=102; pile[WZ1]=jvj+126; pile[WZ2]=jvj+160; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(102,jvj+126,jvj+160)*/
pile[v[22]]=111; pile[WZ1]=jvj+160; pile[WZ2]=jvj+161; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(111,jvj+160,jvj+161)*/
pile[v[22]]=101; pile[WZ1]=jvj+161; pile[WZ2]=jvj+162; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(101,jvj+161,jvj+162)*/
if((x[jvj+162]!=486)) goto l69;
pile[v[22]]=107; pile[WZ1]=jvj+160; pile[WZ2]=jvj+163; 
(*f[33])( );     /*FNDE0(107,jvj+160,jvj+163)*/
pile[WZ1]=jvj+151; pile[WZ2]=jvj+164; 
(*f[33])( );     /*FNDE0(107,jvj+151,jvj+164)*/
x[jvj+321]=x[jvj+163] ;z[jvj+321]=z[jvj+163];
l63:if((x[jvj+321]<=0)) goto l69;
x[jvj+165]=s[x[jvj+321]] ;z[jvj+165]=(x[jvj+165]<=sepcte) ? x[jvj+165] : z[jvj+321];
pile[v[22]]=130; pile[WZ1]=jvj+165; 
(*f[26])( );if(v[102]) goto l64;     /*FNDC0(130,jvj+165,V304)*/
V304=pile[WZ2]; 
V273=V304;
if((V273==0)) goto l64;
x[jvj+322]=x[jvj+164] ;z[jvj+322]=z[jvj+164];
l65:if((x[jvj+322]<=0)) goto l64;
x[jvj+166]=s[x[jvj+322]] ;z[jvj+166]=(x[jvj+166]<=sepcte) ? x[jvj+166] : z[jvj+322];
pile[v[22]]=130; pile[WZ1]=jvj+166; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(130,jvj+166,V314)*/
V314=pile[WZ2]; 
V274=V314;
if((V274==0)) goto l66;
pile[v[22]]=V274; pile[WZ1]=V273; 
(*f[1011])( );     /*PGCD0(V274,V273,V272)*/
V272=pile[WZ2]; 
if((V272<=1)) goto l66;
x[jvj+22]=0 ;z[jvj+22]=0;
V321=V273/V272;
x[jvj+20]=d[29];z[jvj+20]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V321; pile[WZ4]=jvj+21; 
(*f[192])( );     /*QUADRI4(100,41,130,V321,jvj+21)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[196])( );     /*PLUF0(jvj+20,jvj+21,jvj+22)*/
x[jvj+333]=x[jvj+163] ;z[jvj+333]=z[jvj+163];
l101:if((x[jvj+333]>0)) goto l102;
l67:pile[v[22]]=jvj+22; pile[WZ1]=jvj+167; 
(*f[299])( );     /*COPEL0(jvj+22,jvj+167)*/
x[jvj+26]=0 ;z[jvj+26]=0;
V323=V274/V272;
x[jvj+24]=d[29];z[jvj+24]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V323; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(100,41,130,V323,jvj+25)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[196])( );     /*PLUF0(jvj+24,jvj+25,jvj+26)*/
x[jvj+335]=x[jvj+164] ;z[jvj+335]=z[jvj+164];
l107:if((x[jvj+335]>0)) goto l108;
l68:pile[v[22]]=jvj+26; pile[WZ1]=jvj+168; 
(*f[299])( );     /*COPEL0(jvj+26,jvj+168)*/
NNNT=157;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+128; pile[WZ4]=jvj+242; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+128,jvj+242)*/
pile[WZ3]=486; pile[WZ4]=jvj+247; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+247)*/
pile[v[22]]=jvj+247; pile[WZ1]=111; pile[WZ2]=jvj+248; 
(*f[54])( );     /*TRI1(jvj+247,111,jvj+248)*/
pile[v[22]]=jvj+248; pile[WZ1]=jvj+167; pile[WZ2]=107; pile[WZ3]=jvj+249; 
(*f[301])( );     /*TRI11(jvj+248,jvj+167,107,jvj+249)*/
pile[v[22]]=jvj+249; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+246; 
(*f[58])( );     /*TRI3(jvj+249,22,100,jvj+246)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+250; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+250)*/
pile[v[22]]=jvj+250; pile[WZ1]=111; pile[WZ2]=jvj+251; 
(*f[54])( );     /*TRI1(jvj+250,111,jvj+251)*/
pile[v[22]]=jvj+251; pile[WZ1]=jvj+168; pile[WZ2]=107; pile[WZ3]=jvj+252; 
(*f[301])( );     /*TRI11(jvj+251,jvj+168,107,jvj+252)*/
pile[v[22]]=jvj+252; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+244; 
(*f[58])( );     /*TRI3(jvj+252,22,100,jvj+244)*/
pile[v[22]]=jvj+242; pile[WZ1]=111; pile[WZ2]=jvj+243; 
(*f[54])( );     /*TRI1(jvj+242,111,jvj+243)*/
pile[v[22]]=jvj+243; pile[WZ1]=jvj+244; pile[WZ2]=103; pile[WZ3]=jvj+245; 
(*f[58])( );     /*TRI3(jvj+243,jvj+244,103,jvj+245)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+246; pile[WZ4]=jvj+245; pile[WZ5]=jvj+169; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+246,jvj+245,jvj+169)*/
pile[v[22]]=jvj+126; pile[WZ1]=jvj+169; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+126,jvj+169,NNNX)*/
goto l76;
l60:pile[v[22]]=102; pile[WZ1]=jvj+126; pile[WZ2]=jvj+154; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(102,jvj+126,jvj+154)*/
pile[v[22]]=130; pile[WZ1]=jvj+154; 
(*f[26])( );if(v[102]) goto l69;     /*FNDC0(130,jvj+154,V54)*/
V54=pile[WZ2]; 
if((V54==0)) goto l69;
pile[v[22]]=107; pile[WZ1]=jvj+151; pile[WZ2]=jvj+155; 
(*f[33])( );     /*FNDE0(107,jvj+151,jvj+155)*/
x[jvj+320]=x[jvj+155] ;z[jvj+320]=z[jvj+155];
l61:if((x[jvj+320]<=0)) goto l69;
x[jvj+156]=s[x[jvj+320]] ;z[jvj+156]=(x[jvj+156]<=sepcte) ? x[jvj+156] : z[jvj+320];
pile[v[22]]=130; pile[WZ1]=jvj+156; 
(*f[26])( );if(v[102]) goto l62;     /*FNDC0(130,jvj+156,V77)*/
V77=pile[WZ2]; 
V53=V77;
if((V53==0)) goto l62;
x[jvj+343]=x[jvj+155] ;z[jvj+343]=z[jvj+155];
l131:if((x[jvj+343]>0)) goto l132;
l62:x[jvj+320]=t[x[jvj+320]];
goto l61;
l64:x[jvj+321]=t[x[jvj+321]];
goto l63;
l66:x[jvj+322]=t[x[jvj+322]];
goto l65;
l69:pile[v[22]]=100; pile[WZ1]=jvj+78; pile[WZ2]=jvj+170; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(100,jvj+78,jvj+170)*/
if((x[jvj+170]!=22)) goto l75;
pile[v[22]]=107; pile[WZ2]=jvj+171; 
(*f[33])( );     /*FNDE0(107,jvj+78,jvj+171)*/
pile[v[22]]=111; pile[WZ2]=jvj+172; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(111,jvj+78,jvj+172)*/
pile[v[22]]=101; pile[WZ1]=jvj+172; pile[WZ2]=jvj+173; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(101,jvj+172,jvj+173)*/
if(x[jvj+173]!=485&&x[jvj+173]!=486) goto l75;
x[jvj+345]=x[jvj+171] ;z[jvj+345]=z[jvj+171];
l137:if((x[jvj+345]>0)) goto l138;
l75:x[NNNX]=NNNT=incon;
l74:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l71:x[jvj+323]=t[x[jvj+323]];
l70:if((x[jvj+323]<=0)) goto l75;
x[jvj+174]=s[x[jvj+323]] ;z[jvj+174]=(x[jvj+174]<=sepcte) ? x[jvj+174] : z[jvj+323];
if((x[NNNY]!=x[jvj+174])) goto l71;
pile[v[22]]=130; pile[WZ1]=jvj+174; 
(*f[26])( );if(v[102]) goto l71;     /*FNDC0(130,jvj+174,V13)*/
V13=pile[WZ2]; 
AA=V13;
x[jvj+324]=x[jvj+171] ;z[jvj+324]=z[jvj+171];
goto l72;
l78:x[jvj+255]=s[x[jvj+325]] ;z[jvj+255]=(x[jvj+255]<=sepcte) ? x[jvj+255] : z[jvj+325];
pile[v[22]]=jvj+255; pile[WZ1]=jvj+75; pile[WZ2]=jvj+256; 
(*f[760])( );     /*MEMEX0(jvj+255,jvj+75,jvj+256)*/
if((x[jvj+256]==135)) goto l79;
x[jvj+325]=t[x[jvj+325]];
goto l77;
l79:x[jvj+257]=0 ;z[jvj+257]=0;
x[jvj+326]=x[jvj+74] ;z[jvj+326]=z[jvj+74];
l80:if((x[jvj+326]>0)) goto l81;
x[jvj+303]=x[jvj+257] ;z[jvj+303]=z[jvj+257];
l2:if((x[jvj+303]<=0)) goto l25;
x[jvj+7]=s[x[jvj+303]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+303];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+7)*/
x[jvj+303]=t[x[jvj+303]];
goto l2;
l81:x[jvj+258]=s[x[jvj+326]] ;z[jvj+258]=(x[jvj+258]<=sepcte) ? x[jvj+258] : z[jvj+326];
if((x[jvj+258]==x[jvj+255])) goto l82;
pile[v[22]]=jvj+257; pile[WZ1]=jvj+258; 
(*f[68])( );     /*PLUE0(jvj+257,jvj+258)*/
l82:x[jvj+326]=t[x[jvj+326]];
goto l80;
l84:x[jvj+259]=s[x[jvj+327]] ;z[jvj+259]=(x[jvj+259]<=sepcte) ? x[jvj+259] : z[jvj+327];
pile[v[22]]=jvj+259; pile[WZ1]=jvj+55; pile[WZ2]=jvj+260; 
(*f[760])( );     /*MEMEX0(jvj+259,jvj+55,jvj+260)*/
if((x[jvj+260]==135)) goto l85;
x[jvj+327]=t[x[jvj+327]];
goto l83;
l85:x[jvj+261]=0 ;z[jvj+261]=0;
x[jvj+328]=x[jvj+54] ;z[jvj+328]=z[jvj+54];
l86:if((x[jvj+328]>0)) goto l87;
x[jvj+304]=x[jvj+261] ;z[jvj+304]=z[jvj+261];
l3:if((x[jvj+304]<=0)) goto l17;
x[jvj+11]=s[x[jvj+304]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+304];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+11)*/
x[jvj+304]=t[x[jvj+304]];
goto l3;
l87:x[jvj+262]=s[x[jvj+328]] ;z[jvj+262]=(x[jvj+262]<=sepcte) ? x[jvj+262] : z[jvj+328];
if((x[jvj+262]==x[jvj+259])) goto l88;
pile[v[22]]=jvj+261; pile[WZ1]=jvj+262; 
(*f[68])( );     /*PLUE0(jvj+261,jvj+262)*/
l88:x[jvj+328]=t[x[jvj+328]];
goto l86;
l90:x[jvj+263]=s[x[jvj+329]] ;z[jvj+263]=(x[jvj+263]<=sepcte) ? x[jvj+263] : z[jvj+329];
pile[v[22]]=jvj+263; pile[WZ1]=jvj+121; pile[WZ2]=jvj+264; 
(*f[760])( );     /*MEMEX0(jvj+263,jvj+121,jvj+264)*/
if((x[jvj+264]==135)) goto l91;
x[jvj+329]=t[x[jvj+329]];
goto l89;
l91:x[jvj+265]=0 ;z[jvj+265]=0;
x[jvj+330]=x[jvj+119] ;z[jvj+330]=z[jvj+119];
l92:if((x[jvj+330]>0)) goto l93;
x[jvj+305]=x[jvj+265] ;z[jvj+305]=z[jvj+265];
l4:if((x[jvj+305]<=0)) goto l47;
x[jvj+15]=s[x[jvj+305]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+305];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+14,jvj+15)*/
x[jvj+305]=t[x[jvj+305]];
goto l4;
l93:x[jvj+266]=s[x[jvj+330]] ;z[jvj+266]=(x[jvj+266]<=sepcte) ? x[jvj+266] : z[jvj+330];
if((x[jvj+266]==x[jvj+263])) goto l94;
pile[v[22]]=jvj+265; pile[WZ1]=jvj+266; 
(*f[68])( );     /*PLUE0(jvj+265,jvj+266)*/
l94:x[jvj+330]=t[x[jvj+330]];
goto l92;
l96:x[jvj+267]=s[x[jvj+331]] ;z[jvj+267]=(x[jvj+267]<=sepcte) ? x[jvj+267] : z[jvj+331];
pile[v[22]]=jvj+267; pile[WZ1]=jvj+122; pile[WZ2]=jvj+268; 
(*f[760])( );     /*MEMEX0(jvj+267,jvj+122,jvj+268)*/
if((x[jvj+268]==135)) goto l97;
x[jvj+331]=t[x[jvj+331]];
goto l95;
l97:x[jvj+269]=0 ;z[jvj+269]=0;
x[jvj+332]=x[jvj+120] ;z[jvj+332]=z[jvj+120];
l98:if((x[jvj+332]>0)) goto l99;
x[jvj+306]=x[jvj+269] ;z[jvj+306]=z[jvj+269];
l5:if((x[jvj+306]<=0)) goto l48;
x[jvj+19]=s[x[jvj+306]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+306];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[68])( );     /*PLUE0(jvj+18,jvj+19)*/
x[jvj+306]=t[x[jvj+306]];
goto l5;
l99:x[jvj+270]=s[x[jvj+332]] ;z[jvj+270]=(x[jvj+270]<=sepcte) ? x[jvj+270] : z[jvj+332];
if((x[jvj+270]==x[jvj+267])) goto l100;
pile[v[22]]=jvj+269; pile[WZ1]=jvj+270; 
(*f[68])( );     /*PLUE0(jvj+269,jvj+270)*/
l100:x[jvj+332]=t[x[jvj+332]];
goto l98;
l102:x[jvj+271]=s[x[jvj+333]] ;z[jvj+271]=(x[jvj+271]<=sepcte) ? x[jvj+271] : z[jvj+333];
pile[v[22]]=jvj+271; pile[WZ1]=jvj+165; pile[WZ2]=jvj+272; 
(*f[760])( );     /*MEMEX0(jvj+271,jvj+165,jvj+272)*/
if((x[jvj+272]==135)) goto l103;
x[jvj+333]=t[x[jvj+333]];
goto l101;
l103:x[jvj+273]=0 ;z[jvj+273]=0;
x[jvj+334]=x[jvj+163] ;z[jvj+334]=z[jvj+163];
l104:if((x[jvj+334]>0)) goto l105;
x[jvj+307]=x[jvj+273] ;z[jvj+307]=z[jvj+273];
l6:if((x[jvj+307]<=0)) goto l67;
x[jvj+23]=s[x[jvj+307]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+307];
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[68])( );     /*PLUE0(jvj+22,jvj+23)*/
x[jvj+307]=t[x[jvj+307]];
goto l6;
l105:x[jvj+274]=s[x[jvj+334]] ;z[jvj+274]=(x[jvj+274]<=sepcte) ? x[jvj+274] : z[jvj+334];
if((x[jvj+274]==x[jvj+271])) goto l106;
pile[v[22]]=jvj+273; pile[WZ1]=jvj+274; 
(*f[68])( );     /*PLUE0(jvj+273,jvj+274)*/
l106:x[jvj+334]=t[x[jvj+334]];
goto l104;
l108:x[jvj+275]=s[x[jvj+335]] ;z[jvj+275]=(x[jvj+275]<=sepcte) ? x[jvj+275] : z[jvj+335];
pile[v[22]]=jvj+275; pile[WZ1]=jvj+166; pile[WZ2]=jvj+276; 
(*f[760])( );     /*MEMEX0(jvj+275,jvj+166,jvj+276)*/
if((x[jvj+276]==135)) goto l109;
x[jvj+335]=t[x[jvj+335]];
goto l107;
l109:x[jvj+277]=0 ;z[jvj+277]=0;
x[jvj+336]=x[jvj+164] ;z[jvj+336]=z[jvj+164];
l110:if((x[jvj+336]>0)) goto l111;
x[jvj+308]=x[jvj+277] ;z[jvj+308]=z[jvj+277];
l7:if((x[jvj+308]<=0)) goto l68;
x[jvj+27]=s[x[jvj+308]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+308];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[68])( );     /*PLUE0(jvj+26,jvj+27)*/
x[jvj+308]=t[x[jvj+308]];
goto l7;
l111:x[jvj+278]=s[x[jvj+336]] ;z[jvj+278]=(x[jvj+278]<=sepcte) ? x[jvj+278] : z[jvj+336];
if((x[jvj+278]==x[jvj+275])) goto l112;
pile[v[22]]=jvj+277; pile[WZ1]=jvj+278; 
(*f[68])( );     /*PLUE0(jvj+277,jvj+278)*/
l112:x[jvj+336]=t[x[jvj+336]];
goto l110;
l114:x[jvj+279]=s[x[jvj+337]] ;z[jvj+279]=(x[jvj+279]<=sepcte) ? x[jvj+279] : z[jvj+337];
pile[v[22]]=jvj+279; pile[WZ1]=jvj+45; pile[WZ2]=jvj+280; 
(*f[760])( );     /*MEMEX0(jvj+279,jvj+45,jvj+280)*/
if((x[jvj+280]==135)) goto l115;
x[jvj+337]=t[x[jvj+337]];
goto l113;
l115:x[jvj+281]=0 ;z[jvj+281]=0;
x[jvj+338]=x[jvj+44] ;z[jvj+338]=z[jvj+44];
l116:if((x[jvj+338]>0)) goto l117;
x[jvj+46]=x[jvj+281] ;z[jvj+46]=z[jvj+281];
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; 
(*f[299])( );     /*COPEL0(jvj+46,jvj+47)*/
V50=K-L;
NNNT=14;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+30; pile[WZ4]=jvj+181; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+30,jvj+181)*/
pile[WZ3]=485; pile[WZ4]=jvj+186; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+186)*/
pile[v[22]]=jvj+186; pile[WZ1]=111; pile[WZ2]=jvj+187; 
(*f[54])( );     /*TRI1(jvj+186,111,jvj+187)*/
pile[v[22]]=jvj+187; pile[WZ1]=jvj+47; pile[WZ2]=107; pile[WZ3]=jvj+188; 
(*f[301])( );     /*TRI11(jvj+187,jvj+47,107,jvj+188)*/
pile[v[22]]=jvj+188; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+185; 
(*f[58])( );     /*TRI3(jvj+188,22,100,jvj+185)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V50; pile[WZ4]=jvj+183; 
(*f[192])( );     /*QUADRI4(100,41,130,V50,jvj+183)*/
pile[v[22]]=jvj+181; pile[WZ1]=111; pile[WZ2]=jvj+182; 
(*f[54])( );     /*TRI1(jvj+181,111,jvj+182)*/
pile[v[22]]=jvj+182; pile[WZ1]=jvj+183; pile[WZ2]=103; pile[WZ3]=jvj+184; 
(*f[58])( );     /*TRI3(jvj+182,jvj+183,103,jvj+184)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+185; pile[WZ4]=jvj+184; pile[WZ5]=jvj+48; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+185,jvj+184,jvj+48)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+48; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+28,jvj+48,NNNX)*/
goto l76;
l117:x[jvj+282]=s[x[jvj+338]] ;z[jvj+282]=(x[jvj+282]<=sepcte) ? x[jvj+282] : z[jvj+338];
if((x[jvj+282]==x[jvj+279])) goto l118;
pile[v[22]]=jvj+281; pile[WZ1]=jvj+282; 
(*f[68])( );     /*PLUE0(jvj+281,jvj+282)*/
l118:x[jvj+338]=t[x[jvj+338]];
goto l116;
l120:x[jvj+283]=s[x[jvj+339]] ;z[jvj+283]=(x[jvj+283]<=sepcte) ? x[jvj+283] : z[jvj+339];
pile[v[22]]=jvj+283; pile[WZ1]=jvj+108; pile[WZ2]=jvj+284; 
(*f[760])( );     /*MEMEX0(jvj+283,jvj+108,jvj+284)*/
if((x[jvj+284]==135)) goto l121;
x[jvj+339]=t[x[jvj+339]];
goto l119;
l121:x[jvj+285]=0 ;z[jvj+285]=0;
x[jvj+340]=x[jvj+107] ;z[jvj+340]=z[jvj+107];
l122:if((x[jvj+340]>0)) goto l123;
x[jvj+109]=x[jvj+285] ;z[jvj+109]=z[jvj+285];
pile[v[22]]=jvj+109; pile[WZ1]=jvj+110; 
(*f[299])( );     /*COPEL0(jvj+109,jvj+110)*/
V361=V326-V325;
NNNT=184;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+206; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+206)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V361; pile[WZ4]=jvj+210; 
(*f[192])( );     /*QUADRI4(100,41,130,V361,jvj+210)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+211; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+211)*/
pile[v[22]]=jvj+211; pile[WZ1]=111; pile[WZ2]=jvj+212; 
(*f[54])( );     /*TRI1(jvj+211,111,jvj+212)*/
pile[v[22]]=jvj+212; pile[WZ1]=jvj+110; pile[WZ2]=107; pile[WZ3]=jvj+213; 
(*f[301])( );     /*TRI11(jvj+212,jvj+110,107,jvj+213)*/
pile[v[22]]=jvj+213; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+208; 
(*f[58])( );     /*TRI3(jvj+213,22,100,jvj+208)*/
pile[v[22]]=jvj+91; pile[WZ1]=160; pile[WZ2]=jvj+205; 
(*f[54])( );     /*TRI1(jvj+91,160,jvj+205)*/
pile[v[22]]=jvj+205; pile[WZ1]=jvj+206; pile[WZ2]=111; pile[WZ3]=jvj+207; 
(*f[58])( );     /*TRI3(jvj+205,jvj+206,111,jvj+207)*/
pile[v[22]]=jvj+207; pile[WZ1]=jvj+208; pile[WZ2]=103; pile[WZ3]=jvj+209; 
(*f[58])( );     /*TRI3(jvj+207,jvj+208,103,jvj+209)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+210; pile[WZ4]=jvj+209; pile[WZ5]=jvj+111; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+210,jvj+209,jvj+111)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+111; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+79,jvj+111,NNNX)*/
goto l76;
l123:x[jvj+286]=s[x[jvj+340]] ;z[jvj+286]=(x[jvj+286]<=sepcte) ? x[jvj+286] : z[jvj+340];
if((x[jvj+286]==x[jvj+283])) goto l124;
pile[v[22]]=jvj+285; pile[WZ1]=jvj+286; 
(*f[68])( );     /*PLUE0(jvj+285,jvj+286)*/
l124:x[jvj+340]=t[x[jvj+340]];
goto l122;
l126:x[jvj+287]=s[x[jvj+341]] ;z[jvj+287]=(x[jvj+287]<=sepcte) ? x[jvj+287] : z[jvj+341];
pile[v[22]]=jvj+287; pile[WZ1]=jvj+146; pile[WZ2]=jvj+288; 
(*f[760])( );     /*MEMEX0(jvj+287,jvj+146,jvj+288)*/
if((x[jvj+288]==135)) goto l127;
x[jvj+341]=t[x[jvj+341]];
goto l125;
l127:x[jvj+289]=0 ;z[jvj+289]=0;
x[jvj+342]=x[jvj+145] ;z[jvj+342]=z[jvj+145];
l128:if((x[jvj+342]>0)) goto l129;
x[jvj+147]=x[jvj+289] ;z[jvj+147]=z[jvj+289];
pile[v[22]]=jvj+147; pile[WZ1]=jvj+148; 
(*f[299])( );     /*COPEL0(jvj+147,jvj+148)*/
V399=V364-V363;
NNNT=184;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+226; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+226)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V399; pile[WZ4]=jvj+230; 
(*f[192])( );     /*QUADRI4(100,41,130,V399,jvj+230)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+231; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+231)*/
pile[v[22]]=jvj+231; pile[WZ1]=111; pile[WZ2]=jvj+232; 
(*f[54])( );     /*TRI1(jvj+231,111,jvj+232)*/
pile[v[22]]=jvj+232; pile[WZ1]=jvj+148; pile[WZ2]=107; pile[WZ3]=jvj+233; 
(*f[301])( );     /*TRI11(jvj+232,jvj+148,107,jvj+233)*/
pile[v[22]]=jvj+233; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+228; 
(*f[58])( );     /*TRI3(jvj+233,22,100,jvj+228)*/
pile[v[22]]=jvj+129; pile[WZ1]=160; pile[WZ2]=jvj+225; 
(*f[54])( );     /*TRI1(jvj+129,160,jvj+225)*/
pile[v[22]]=jvj+225; pile[WZ1]=jvj+226; pile[WZ2]=111; pile[WZ3]=jvj+227; 
(*f[58])( );     /*TRI3(jvj+225,jvj+226,111,jvj+227)*/
pile[v[22]]=jvj+227; pile[WZ1]=jvj+228; pile[WZ2]=103; pile[WZ3]=jvj+229; 
(*f[58])( );     /*TRI3(jvj+227,jvj+228,103,jvj+229)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+230; pile[WZ4]=jvj+229; pile[WZ5]=jvj+149; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+230,jvj+229,jvj+149)*/
pile[v[22]]=jvj+126; pile[WZ1]=jvj+149; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+126,jvj+149,NNNX)*/
goto l76;
l129:x[jvj+290]=s[x[jvj+342]] ;z[jvj+290]=(x[jvj+290]<=sepcte) ? x[jvj+290] : z[jvj+342];
if((x[jvj+290]==x[jvj+287])) goto l130;
pile[v[22]]=jvj+289; pile[WZ1]=jvj+290; 
(*f[68])( );     /*PLUE0(jvj+289,jvj+290)*/
l130:x[jvj+342]=t[x[jvj+342]];
goto l128;
l132:x[jvj+291]=s[x[jvj+343]] ;z[jvj+291]=(x[jvj+291]<=sepcte) ? x[jvj+291] : z[jvj+343];
pile[v[22]]=jvj+291; pile[WZ1]=jvj+156; pile[WZ2]=jvj+292; 
(*f[760])( );     /*MEMEX0(jvj+291,jvj+156,jvj+292)*/
if((x[jvj+292]==135)) goto l133;
x[jvj+343]=t[x[jvj+343]];
goto l131;
l133:x[jvj+293]=0 ;z[jvj+293]=0;
x[jvj+344]=x[jvj+155] ;z[jvj+344]=z[jvj+155];
l134:if((x[jvj+344]>0)) goto l135;
x[jvj+157]=x[jvj+293] ;z[jvj+157]=z[jvj+293];
pile[v[22]]=jvj+157; pile[WZ1]=jvj+158; 
(*f[299])( );     /*COPEL0(jvj+157,jvj+158)*/
V83=V54-V53;
NNNT=57;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+128; pile[WZ4]=jvj+234; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+128,jvj+234)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V83; pile[WZ4]=jvj+238; 
(*f[192])( );     /*QUADRI4(100,41,130,V83,jvj+238)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+239; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+239)*/
pile[v[22]]=jvj+239; pile[WZ1]=111; pile[WZ2]=jvj+240; 
(*f[54])( );     /*TRI1(jvj+239,111,jvj+240)*/
pile[v[22]]=jvj+240; pile[WZ1]=jvj+158; pile[WZ2]=107; pile[WZ3]=jvj+241; 
(*f[301])( );     /*TRI11(jvj+240,jvj+158,107,jvj+241)*/
pile[v[22]]=jvj+241; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+236; 
(*f[58])( );     /*TRI3(jvj+241,22,100,jvj+236)*/
pile[v[22]]=jvj+234; pile[WZ1]=111; pile[WZ2]=jvj+235; 
(*f[54])( );     /*TRI1(jvj+234,111,jvj+235)*/
pile[v[22]]=jvj+235; pile[WZ1]=jvj+236; pile[WZ2]=103; pile[WZ3]=jvj+237; 
(*f[58])( );     /*TRI3(jvj+235,jvj+236,103,jvj+237)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+238; pile[WZ4]=jvj+237; pile[WZ5]=jvj+159; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+238,jvj+237,jvj+159)*/
pile[v[22]]=jvj+126; pile[WZ1]=jvj+159; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+126,jvj+159,NNNX)*/
goto l76;
l135:x[jvj+294]=s[x[jvj+344]] ;z[jvj+294]=(x[jvj+294]<=sepcte) ? x[jvj+294] : z[jvj+344];
if((x[jvj+294]==x[jvj+291])) goto l136;
pile[v[22]]=jvj+293; pile[WZ1]=jvj+294; 
(*f[68])( );     /*PLUE0(jvj+293,jvj+294)*/
l136:x[jvj+344]=t[x[jvj+344]];
goto l134;
l138:x[jvj+295]=s[x[jvj+345]] ;z[jvj+295]=(x[jvj+295]<=sepcte) ? x[jvj+295] : z[jvj+345];
pile[v[22]]=jvj+295; pile[WZ1]=NNNY; pile[WZ2]=jvj+296; 
(*f[760])( );     /*MEMEX0(jvj+295,NNNY,jvj+296)*/
if((x[jvj+296]==135)) goto l139;
x[jvj+345]=t[x[jvj+345]];
goto l137;
l139:x[jvj+297]=0 ;z[jvj+297]=0;
x[jvj+346]=x[jvj+171] ;z[jvj+346]=z[jvj+171];
l140:if((x[jvj+346]>0)) goto l141;
x[jvj+350]=x[jvj+297] ;z[jvj+350]=z[jvj+297];
x[jvj+323]=x[jvj+171] ;z[jvj+323]=z[jvj+171];
goto l70;
l141:x[jvj+298]=s[x[jvj+346]] ;z[jvj+298]=(x[jvj+298]<=sepcte) ? x[jvj+298] : z[jvj+346];
if((x[jvj+298]==x[jvj+295])) goto l142;
pile[v[22]]=jvj+297; pile[WZ1]=jvj+298; 
(*f[68])( );     /*PLUE0(jvj+297,jvj+298)*/
l142:x[jvj+346]=t[x[jvj+346]];
goto l140;
l145:x[jvj+299]=s[x[jvj+347]] ;z[jvj+299]=(x[jvj+299]<=sepcte) ? x[jvj+299] : z[jvj+347];
pile[v[22]]=jvj+299; pile[WZ1]=jvj+175; pile[WZ2]=jvj+300; 
(*f[760])( );     /*MEMEX0(jvj+299,jvj+175,jvj+300)*/
if((x[jvj+300]==135)) goto l146;
x[jvj+347]=t[x[jvj+347]];
goto l144;
l146:x[jvj+301]=0 ;z[jvj+301]=0;
x[jvj+348]=x[jvj+350] ;z[jvj+348]=z[jvj+350];
l147:if((x[jvj+348]>0)) goto l148;
x[jvj+176]=x[jvj+301] ;z[jvj+176]=z[jvj+301];
pile[v[22]]=jvj+176; pile[WZ1]=jvj+177; 
(*f[299])( );     /*COPEL0(jvj+176,jvj+177)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+173; pile[WZ4]=jvj+253; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+173,jvj+253)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+253; pile[WZ4]=jvj+178; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+253,jvj+178)*/
pile[v[22]]=jvj+178; pile[WZ1]=107; pile[WZ2]=NNNY; 
(*f[36])( );     /*PLUSC0(jvj+178,107,NNNY)*/
pile[WZ2]=jvj+175; 
(*f[36])( );     /*PLUSC0(jvj+178,107,jvj+175)*/
pile[WZ1]=jvj+179; 
(*f[980])( );if(v[102]) goto l73;     /*EVL4(jvj+178,jvj+179)*/
NNNT=6;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+173; pile[WZ4]=jvj+254; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+173,jvj+254)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+254; pile[WZ4]=jvj+180; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+254,jvj+180)*/
pile[v[22]]=jvj+177; pile[WZ1]=jvj+180; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+177,jvj+180,107)*/
pile[v[22]]=jvj+180; pile[WZ1]=107; pile[WZ2]=jvj+179; 
(*f[36])( );     /*PLUSC0(jvj+180,107,jvj+179)*/
pile[v[22]]=jvj+78; pile[WZ1]=jvj+180; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+78,jvj+180,NNNX)*/
goto l76;
l148:x[jvj+302]=s[x[jvj+348]] ;z[jvj+302]=(x[jvj+302]<=sepcte) ? x[jvj+302] : z[jvj+348];
if((x[jvj+302]==x[jvj+299])) goto l149;
pile[v[22]]=jvj+301; pile[WZ1]=jvj+302; 
(*f[68])( );     /*PLUE0(jvj+301,jvj+302)*/
l149:x[jvj+348]=t[x[jvj+348]];
goto l147;
}
