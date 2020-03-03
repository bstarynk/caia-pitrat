#include "dx.h"
void COPW0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V285=0,V282=0,V267=0,SUITE=0,V91=0,V263=0,V310=0,V234=0,V198=0,V118=0,V311=0,V322=0,V=0,V11=0,V49=0,V187=0,V188=0,V186=0,V464=0,V465=0,V466=0,V467=0;
int R,Y,BT,RM;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=310;
x[jvj+1]=10401;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2083&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; Y=pile[v[22]+1]; BT=pile[v[22]+2]; RM=pile[v[22]+3]; RES=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[RES]=SUITE=incon;
pile[v[22]]=111; pile[WZ1]=Y; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(111,Y,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=178)) goto l12;
pile[v[22]]=Y; pile[WZ1]=374; pile[WZ2]=178; 
(*f[35])( );     /*CHGC1(Y,374,178)*/
l12:pile[v[22]]=100; pile[WZ1]=Y; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,Y,jvj+30)*/
if((x[jvj+30]!=22)) goto l26;
pile[v[22]]=102; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,Y,jvj+2)*/
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+2,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]!=74)) goto l13;
pile[v[22]]=145; pile[WZ1]=jvj+29; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(145,jvj+29,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=102; pile[WZ2]=Y; 
(*f[2158])( );     /*COPZ0(jvj+33,102,Y)*/
l13:pile[v[22]]=39; pile[WZ1]=jvj+29; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(39,jvj+29,jvj+34)*/
if((x[jvj+34]!=10152)) goto l14;
pile[v[22]]=103; pile[WZ1]=Y; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,Y,jvj+35)*/
pile[v[22]]=R; pile[WZ2]=BT; pile[WZ3]=RM; pile[WZ4]=jvj+2; pile[WZ5]=jvj+35; pile[v[22]+6]=jvj+29; pile[v[22]+7]=RES; 
(*f[2157])( );if(v[102]) goto l14;     /*COPWB0(R,Y,BT,RM,jvj+2,jvj+35,jvj+29,RES)*/
l19:pile[v[22]]=103; pile[WZ1]=Y; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,Y,jvj+57)*/
pile[v[22]]=111; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+57,jvj+58)*/
pile[v[22]]=101; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+58,jvj+59)*/
if((x[jvj+59]!=74)) goto l20;
pile[v[22]]=268; pile[WZ1]=jvj+29; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(268,jvj+29,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=103; pile[WZ2]=Y; 
(*f[2158])( );     /*COPZ0(jvj+60,103,Y)*/
l20:if(x[jvj+29]!=44&&x[jvj+29]!=45) goto l21;
pile[v[22]]=100; pile[WZ1]=jvj+57; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+57,jvj+61)*/
if((x[jvj+61]!=43)) goto l21;
pile[v[22]]=102; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+57,jvj+62)*/
pile[v[22]]=101; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+62,jvj+63)*/
if((V91=w[x[jvj+63]][1])==incon) goto l21;
if((V91==23)) goto l21;
pile[v[22]]=145; pile[WZ1]=jvj+29; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(145,jvj+29,jvj+64)*/
pile[v[22]]=jvj+28; pile[WZ1]=101; 
(*f[35])( );     /*CHGC1(jvj+28,101,jvj+64)*/
l21:pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,R,jvj+65)*/
if((x[jvj+65]!=435)) goto l22;
pile[v[22]]=436; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(436,R,jvj+66)*/
pile[v[22]]=140; pile[WZ1]=jvj+66; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+66,V263)*/
V263=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,R,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+67,jvj+68)*/
if((x[jvj+68]!=22)) goto l22;
pile[v[22]]=111; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+67,jvj+69)*/
pile[v[22]]=101; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+69,jvj+70)*/
if((x[jvj+29]!=x[jvj+70])) goto l22;
pile[v[22]]=39; pile[WZ1]=jvj+29; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(39,jvj+29,jvj+71)*/
if(x[jvj+71]!=10457&&x[jvj+71]!=10616&&x[jvj+71]!=10106&&x[jvj+71]!=10206&&x[jvj+71]!=10152) goto l22;
pile[v[22]]=146; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(146,jvj+29,jvj+72)*/
pile[v[22]]=V263; pile[WZ1]=jvj+72; 
(*f[1791])( );     /*DVF0(V263,jvj+72)*/
l22:if(x[RES]==incon) goto l23;
l38:if(SUITE==incon) goto l39;
l44:if((x[jvj+29]==44)) goto l45;
l47:if(x[RES]!=incon) goto l48;
l46:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
l2:x[jvj+6]=s[x[jvj+54]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+54];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+29; pile[WZ4]=jvj+149; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+29,jvj+149)*/
pile[v[22]]=jvj+149; pile[WZ1]=111; pile[WZ2]=jvj+150; 
(*f[54])( );     /*TRI1(jvj+149,111,jvj+150)*/
pile[v[22]]=jvj+150; pile[WZ1]=jvj+7; pile[WZ2]=103; pile[WZ3]=jvj+151; 
(*f[58])( );     /*TRI3(jvj+150,jvj+7,103,jvj+151)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+151; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+4,jvj+151,jvj+8)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[196])( );     /*PLUF0(jvj+5,jvj+8,jvj+9)*/
x[jvj+54]=t[x[jvj+54]];
l1:if((x[jvj+54]>0)) goto l2;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+55; 
(*f[299])( );     /*COPEL0(jvj+9,jvj+55)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+53; pile[WZ4]=jvj+165; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+53,jvj+165)*/
pile[v[22]]=jvj+165; pile[WZ1]=111; pile[WZ2]=jvj+166; 
(*f[54])( );     /*TRI1(jvj+165,111,jvj+166)*/
pile[v[22]]=jvj+166; pile[WZ1]=jvj+55; pile[WZ2]=107; pile[WZ3]=jvj+167; 
(*f[301])( );     /*TRI11(jvj+166,jvj+55,107,jvj+167)*/
pile[v[22]]=jvj+167; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+56; 
(*f[58])( );     /*TRI3(jvj+167,22,100,jvj+56)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+56; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+56)*/
x[RES]=67 ;z[RES]=67;
SUITE=68;
goto l19;
l4:x[jvj+10]=s[x[jvj+128]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+128];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
pile[v[22]]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+12,jvj+11)*/
x[jvj+128]=t[x[jvj+128]];
l3:if((x[jvj+128]>0)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+122; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,jvj+122,jvj+129)*/
pile[v[22]]=jvj+129; pile[WZ1]=jvj+130; 
(*f[255])( );     /*COPEXP0(jvj+129,jvj+130)*/
(*f[1817])( );     /*NOUV2(V49)*/
V49=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V49; pile[WZ4]=jvj+298; 
(*f[270])( );     /*QUADRI7(100,21,140,V49,jvj+298)*/
pile[v[22]]=jvj+127; pile[WZ1]=111; pile[WZ2]=jvj+296; 
(*f[54])( );     /*TRI1(jvj+127,111,jvj+296)*/
pile[v[22]]=jvj+296; pile[WZ1]=jvj+130; pile[WZ2]=103; pile[WZ3]=jvj+297; 
(*f[58])( );     /*TRI3(jvj+296,jvj+130,103,jvj+297)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+298; pile[WZ4]=jvj+297; pile[WZ5]=jvj+147; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+298,jvj+297,jvj+147)*/
pile[v[22]]=jvj+12; pile[WZ1]=107; pile[WZ2]=jvj+146; 
(*f[300])( );     /*TRI10(jvj+12,107,jvj+146)*/
pile[v[22]]=jvj+147; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+148; 
(*f[298])( );     /*TRIENS1(jvj+147,(-20),jvj+146,105,jvj+148)*/
pile[v[22]]=jvj+148; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+133; 
(*f[58])( );     /*TRI3(jvj+148,42,100,jvj+133)*/
pile[v[22]]=RM; pile[WZ1]=V49; pile[WZ2]=jvj+131; 
(*f[2152])( );     /*COPXX0(RM,V49,jvj+131)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V49; pile[WZ4]=jvj+132; 
(*f[270])( );     /*QUADRI7(100,21,140,V49,jvj+132)*/
pile[v[22]]=Y; pile[WZ1]=103; pile[WZ2]=jvj+132; 
(*f[35])( );     /*CHGC1(Y,103,jvj+132)*/
pile[v[22]]=jvj+133; pile[WZ1]=184; pile[WZ2]=jvj+131; pile[WZ3]=jvj+133; 
(*f[1819])( );     /*COPV1(jvj+133,184,jvj+131,jvj+133)*/
l45:pile[v[22]]=103; pile[WZ1]=Y; pile[WZ2]=jvj+137; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(103,Y,jvj+137)*/
pile[v[22]]=111; pile[WZ1]=jvj+137; pile[WZ2]=jvj+138; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,jvj+137,jvj+138)*/
pile[v[22]]=101; pile[WZ1]=jvj+138; pile[WZ2]=jvj+139; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+138,jvj+139)*/
if((x[jvj+139]!=676)) goto l47;
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,Y,jvj+140)*/
pile[v[22]]=100; pile[WZ1]=jvj+140; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(100,jvj+140,jvj+141)*/
if((x[jvj+141]!=128)) goto l47;
pile[v[22]]=128; pile[WZ2]=jvj+142; 
(*f[33])( );     /*FNDE0(128,jvj+140,jvj+142)*/
for(i=x[jvj+142],V187=0;i>0;i=t[i],V187++)  ;
pile[v[22]]=107; pile[WZ1]=jvj+137; pile[WZ2]=jvj+143; 
(*f[33])( );     /*FNDE0(107,jvj+137,jvj+143)*/
for(i=x[jvj+143],V188=0;i>0;i=t[i],V188++)  ;
V186=V187+V188;
pile[v[22]]=102; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,jvj+137,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+144; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+144)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+299; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+299)*/
pile[WZ3]=74; pile[WZ4]=jvj+304; 
(*f[181])( );     /*QUADRI2(100,20,101,74,jvj+304)*/
pile[WZ3]=622; pile[WZ4]=jvj+307; 
(*f[181])( );     /*QUADRI2(100,20,101,622,jvj+307)*/
pile[v[22]]=jvj+307; pile[WZ1]=111; pile[WZ2]=jvj+308; 
(*f[54])( );     /*TRI1(jvj+307,111,jvj+308)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+144; pile[WZ4]=jvj+308; pile[WZ5]=jvj+306; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+144,jvj+308,jvj+306)*/
pile[v[22]]=jvj+304; pile[WZ1]=111; pile[WZ2]=jvj+305; 
(*f[54])( );     /*TRI1(jvj+304,111,jvj+305)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+306; pile[WZ4]=jvj+305; pile[WZ5]=jvj+303; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+306,jvj+305,jvj+303)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V186; pile[WZ4]=jvj+301; 
(*f[192])( );     /*QUADRI4(100,41,130,V186,jvj+301)*/
pile[v[22]]=jvj+299; pile[WZ1]=111; pile[WZ2]=jvj+300; 
(*f[54])( );     /*TRI1(jvj+299,111,jvj+300)*/
pile[v[22]]=jvj+300; pile[WZ1]=jvj+301; pile[WZ2]=103; pile[WZ3]=jvj+302; 
(*f[58])( );     /*TRI3(jvj+300,jvj+301,103,jvj+302)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+303; pile[WZ4]=jvj+302; pile[WZ5]=jvj+145; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+303,jvj+302,jvj+145)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+145; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+145)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
x[jvj+309]=x[jvj+142] ;z[jvj+309]=z[jvj+142];
l7:if((x[jvj+309]>0)) goto l8;
x[jvj+15]=0 ;z[jvj+15]=0;
l5:if((x[jvj+142]<=0)) goto l6;
x[jvj+16]=s[x[jvj+142]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+142];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+15,jvj+16)*/
x[jvj+142]=t[x[jvj+142]];
goto l5;
l8:x[jvj+20]=s[x[jvj+309]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+309];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+152; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+152)*/
pile[WZ3]=622; pile[WZ4]=jvj+156; 
(*f[181])( );     /*QUADRI2(100,20,101,622,jvj+156)*/
pile[v[22]]=jvj+156; pile[WZ1]=111; pile[WZ2]=jvj+157; 
(*f[54])( );     /*TRI1(jvj+156,111,jvj+157)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+157; pile[WZ5]=jvj+154; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+19,jvj+157,jvj+154)*/
pile[v[22]]=jvj+152; pile[WZ1]=111; pile[WZ2]=jvj+153; 
(*f[54])( );     /*TRI1(jvj+152,111,jvj+153)*/
pile[v[22]]=jvj+153; pile[WZ1]=jvj+154; pile[WZ2]=103; pile[WZ3]=jvj+155; 
(*f[58])( );     /*TRI3(jvj+153,jvj+154,103,jvj+155)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+155; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+21,jvj+155,jvj+22)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=R; pile[WZ3]=jvj+22; 
(*f[1819])( );     /*COPV1(RM,BT,R,jvj+22)*/
x[jvj+309]=t[x[jvj+309]];
goto l7;
l11:x[jvj+25]=s[x[jvj+310]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+310];
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[255])( );     /*COPEXP0(jvj+25,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+158; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+158)*/
pile[v[22]]=jvj+158; pile[WZ1]=111; pile[WZ2]=jvj+159; 
(*f[54])( );     /*TRI1(jvj+158,111,jvj+159)*/
pile[v[22]]=jvj+159; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+160; 
(*f[58])( );     /*TRI3(jvj+159,jvj+26,103,jvj+160)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+160; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+160,jvj+27)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=R; pile[WZ3]=jvj+27; 
(*f[1819])( );     /*COPV1(RM,BT,R,jvj+27)*/
x[jvj+310]=t[x[jvj+310]];
l10:if((x[jvj+310]>0)) goto l11;
x[jvj+15]=t[x[jvj+15]];
l9:if((x[jvj+15]<=0)) goto l47;
x[jvj+23]=s[x[jvj+15]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+15];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+24)*/
x[jvj+310]=t[x[jvj+15]];
goto l10;
l14:pile[v[22]]=118; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(118,jvj+29,V285)*/
V285=pile[WZ2]; 
if((V285==1)) goto l15;
if((V285!=2)) goto l17;
pile[v[22]]=555; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(555,jvj+29,jvj+41)*/
if((x[jvj+41]!=68)) goto l17;
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+2,jvj+42)*/
if(x[jvj+42]!=96&&x[jvj+42]!=89&&x[jvj+42]!=41&&x[jvj+42]!=20&&x[jvj+42]!=128&&x[jvj+42]!=570&&x[jvj+42]!=1317) goto l17;
pile[v[22]]=103; pile[WZ1]=Y; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,Y,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+43,jvj+44)*/
if(x[jvj+44]!=96&&x[jvj+44]!=89&&x[jvj+44]!=41&&x[jvj+44]!=20&&x[jvj+44]!=128&&x[jvj+44]!=570&&x[jvj+44]!=1317) goto l17;
pile[v[22]]=10547; pile[WZ1]=109; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(10547,109,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=Y; pile[WZ3]=jvj+46; 
(*f[110])( );if(v[102]) goto l17;     /*EVL2(jvj+45,Y,V267,jvj+46)*/
V267=pile[WZ2]; 
x[jvj+163]=V267 ;z[jvj+163]=(x[jvj+46]==20&&V267<=sepcte) ? V267 : (x[jvj+46]==41) ? (-1000) : 0;
if((x[jvj+164]=w[x[jvj+46]][3])==incon) goto l17;
pile[v[22]]=jvj+46; pile[WZ1]=100; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,100,jvj+47)*/
V466=x[jvj+163];
V467=z[jvj+163];
pile[v[22]]=jvj+47; pile[WZ1]=V466; pile[WZ2]=jvj+164; pile[WZ3]=V467; 
(*f[49])( );     /*CHP0(jvj+47,V466,jvj+164,V467)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+47; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+47)*/
l16:x[RES]=67 ;z[RES]=67;
goto l19;
l15:pile[v[22]]=555; pile[WZ1]=jvj+29; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(555,jvj+29,jvj+36)*/
if((x[jvj+36]!=68)) goto l17;
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+2,jvj+37)*/
if(x[jvj+37]!=96&&x[jvj+37]!=89&&x[jvj+37]!=41&&x[jvj+37]!=20&&x[jvj+37]!=128&&x[jvj+37]!=570&&x[jvj+37]!=1317) goto l17;
pile[v[22]]=10547; pile[WZ1]=109; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(10547,109,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=Y; pile[WZ3]=jvj+39; 
(*f[110])( );if(v[102]) goto l17;     /*EVL2(jvj+38,Y,V282,jvj+39)*/
V282=pile[WZ2]; 
x[jvj+161]=V282 ;z[jvj+161]=(x[jvj+39]==20&&V282<=sepcte) ? V282 : (x[jvj+39]==41) ? (-1000) : 0;
if((x[jvj+162]=w[x[jvj+39]][3])==incon) goto l17;
pile[v[22]]=jvj+39; pile[WZ1]=100; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,100,jvj+40)*/
V464=x[jvj+161];
V465=z[jvj+161];
pile[v[22]]=jvj+40; pile[WZ1]=V464; pile[WZ2]=jvj+162; pile[WZ3]=V465; 
(*f[49])( );     /*CHP0(jvj+40,V464,jvj+162,V465)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+40; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+40)*/
goto l16;
l17:pile[v[22]]=103; pile[WZ1]=Y; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,Y,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+48,jvj+49)*/
if((x[jvj+49]!=22)) goto l19;
pile[v[22]]=111; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+48,jvj+50)*/
pile[v[22]]=101; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+50,jvj+51)*/
if(x[jvj+51]!=424&&x[jvj+51]!=425) goto l19;
if((x[jvj+29]==45)) goto l18;
if((x[jvj+29]!=44)) goto l19;
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]==21)) goto l19;
l18:pile[v[22]]=122; pile[WZ1]=jvj+29; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(122,jvj+29,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+51; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+52,jvj+51,jvj+53)*/
pile[v[22]]=107; pile[WZ1]=jvj+48; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(107,jvj+48,jvj+54)*/
x[jvj+9]=0 ;z[jvj+9]=0;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+4)*/
x[jvj+5]=d[76];z[jvj+5]=0;
goto l1;
l23:pile[v[22]]=39; pile[WZ1]=jvj+29; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(39,jvj+29,jvj+73)*/
if((x[jvj+73]==10457)) goto l24;
if((x[jvj+73]!=10616)) goto l26;
pile[v[22]]=111; pile[WZ1]=RM; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,RM,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]==67)) goto l26;
l25:pile[v[22]]=R; pile[WZ1]=Y; pile[WZ2]=BT; pile[WZ3]=RM; pile[WZ4]=68; pile[WZ5]=RES; 
(*f[2156])( );if(v[102]) goto l26;     /*COPWY0(R,Y,BT,RM,68,RES)*/
goto l38;
l24:pile[v[22]]=R; pile[WZ1]=Y; pile[WZ2]=BT; pile[WZ3]=RM; pile[WZ4]=RES; 
(*f[2155])( );if(v[102]) goto l26;     /*COPWX0(R,Y,BT,RM,RES)*/
goto l38;
l26:if((x[jvj+29]==67)) goto l27;
if((x[jvj+29]==25)) goto l29;
if((x[jvj+29]==44)) goto l31;
if((x[jvj+29]==8)) goto l36;
if((x[jvj+29]!=300)) goto l38;
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,Y,jvj+117)*/
pile[v[22]]=jvj+117; pile[WZ1]=jvj+118; 
(*f[255])( );     /*COPEXP0(jvj+117,jvj+118)*/
pile[v[22]]=103; pile[WZ1]=Y; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(103,Y,jvj+119)*/
pile[v[22]]=jvj+119; pile[WZ1]=jvj+120; 
(*f[255])( );     /*COPEXP0(jvj+119,jvj+120)*/
(*f[1817])( );     /*NOUV2(V11)*/
V11=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=50; pile[WZ4]=jvj+286; 
(*f[181])( );     /*QUADRI2(100,20,101,50,jvj+286)*/
pile[v[22]]=jvj+120; pile[WZ1]=103; pile[WZ2]=jvj+295; 
(*f[54])( );     /*TRI1(jvj+120,103,jvj+295)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+118; pile[WZ4]=jvj+295; pile[WZ5]=jvj+294; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+118,jvj+295,jvj+294)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+292; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+292)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V11; pile[WZ4]=jvj+290; 
(*f[270])( );     /*QUADRI7(100,21,140,V11,jvj+290)*/
pile[v[22]]=jvj+290; pile[WZ1]=436; pile[WZ2]=jvj+291; 
(*f[54])( );     /*TRI1(jvj+290,436,jvj+291)*/
pile[v[22]]=jvj+291; pile[WZ1]=jvj+292; pile[WZ2]=111; pile[WZ3]=jvj+293; 
(*f[58])( );     /*TRI3(jvj+291,jvj+292,111,jvj+293)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+294; pile[WZ4]=jvj+293; pile[WZ5]=jvj+288; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+294,jvj+293,jvj+288)*/
pile[v[22]]=jvj+286; pile[WZ1]=111; pile[WZ2]=jvj+287; 
(*f[54])( );     /*TRI1(jvj+286,111,jvj+287)*/
pile[v[22]]=jvj+288; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+289; 
(*f[298])( );     /*TRIENS1(jvj+288,(-20),jvj+287,107,jvj+289)*/
pile[v[22]]=jvj+289; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+121; 
(*f[58])( );     /*TRI3(jvj+289,22,100,jvj+121)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+121; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+121)*/
l37:x[RES]=67 ;z[RES]=67;
goto l38;
l27:pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,Y,jvj+74)*/
pile[v[22]]=100; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,jvj+74,jvj+75)*/
if((x[jvj+75]!=22)) goto l38;
pile[v[22]]=111; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+74,jvj+76)*/
pile[v[22]]=101; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+76,jvj+77)*/
pile[v[22]]=39; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(39,jvj+77,jvj+78)*/
if((x[jvj+78]!=10616)) goto l38;
V310=x[Y];
pile[v[22]]=R; pile[WZ1]=jvj+74; pile[WZ2]=BT; pile[WZ3]=RM; pile[WZ4]=67; pile[WZ5]=RES; 
(*f[2156])( );if(v[102]) goto l38;     /*COPWY0(R,jvj+74,BT,RM,67,RES)*/
pile[v[22]]=107; pile[WZ1]=RM; pile[WZ2]=V310; 
(*f[134])( );     /*OTA0(107,RM,V310)*/
goto l38;
l29:x[jvj+79]=d[20];z[jvj+79]=0;
l28:if((x[jvj+79]<=0)) goto l38;
x[jvj+80]=s[x[jvj+79]] ;z[jvj+80]=(x[jvj+80]<=sepcte) ? x[jvj+80] : z[jvj+79];
pile[v[22]]=jvj+80; pile[WZ1]=Y; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(jvj+80,Y,jvj+81)*/
pile[v[22]]=140; pile[WZ1]=jvj+81; 
(*f[44])( );if(v[102]) goto l30;     /*FNDC1(140,jvj+81,V234)*/
V234=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+80; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(268,jvj+80,jvj+82)*/
pile[v[22]]=jvj+82; pile[WZ1]=Y; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(jvj+82,Y,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,jvj+83,jvj+84)*/
if((x[jvj+84]!=69)) goto l30;
pile[v[22]]=jvj+83; pile[WZ1]=jvj+85; 
(*f[255])( );     /*COPEXP0(jvj+83,jvj+85)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+170; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+170)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V234; pile[WZ4]=jvj+168; 
(*f[270])( );     /*QUADRI7(100,21,140,V234,jvj+168)*/
pile[v[22]]=jvj+168; pile[WZ1]=436; pile[WZ2]=jvj+169; 
(*f[54])( );     /*TRI1(jvj+168,436,jvj+169)*/
pile[v[22]]=jvj+169; pile[WZ1]=jvj+170; pile[WZ2]=111; pile[WZ3]=jvj+171; 
(*f[58])( );     /*TRI3(jvj+169,jvj+170,111,jvj+171)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+85; pile[WZ4]=jvj+171; pile[WZ5]=jvj+86; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+85,jvj+171,jvj+86)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+86; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+86)*/
goto l37;
l30:x[jvj+79]=t[x[jvj+79]];
goto l28;
l31:pile[v[22]]=103; pile[WZ1]=Y; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(103,Y,jvj+87)*/
pile[v[22]]=100; pile[WZ1]=jvj+87; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,jvj+87,jvj+88)*/
if((x[jvj+88]!=61)) goto l32;
pile[v[22]]=jvj+87; pile[WZ1]=jvj+89; 
(*f[255])( );     /*COPEXP0(jvj+87,jvj+89)*/
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,Y,jvj+90)*/
pile[v[22]]=jvj+90; pile[WZ1]=jvj+91; 
(*f[255])( );     /*COPEXP0(jvj+90,jvj+91)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=353; pile[WZ4]=jvj+173; 
(*f[181])( );     /*QUADRI2(100,20,101,353,jvj+173)*/
pile[v[22]]=jvj+91; pile[WZ1]=436; pile[WZ2]=jvj+172; 
(*f[54])( );     /*TRI1(jvj+91,436,jvj+172)*/
pile[v[22]]=jvj+172; pile[WZ1]=jvj+173; pile[WZ2]=111; pile[WZ3]=jvj+174; 
(*f[58])( );     /*TRI3(jvj+172,jvj+173,111,jvj+174)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+89; pile[WZ4]=jvj+174; pile[WZ5]=jvj+92; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+89,jvj+174,jvj+92)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+92; 
(*f[1818])( );     /*COPV0(RM,107,Y,R,jvj+92)*/
goto l37;
l32:pile[v[22]]=140; pile[WZ1]=jvj+87; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(140,jvj+87,V198)*/
V198=pile[WZ2]; 
if((V198==(-1761))) goto l33;
if((V198==(-3704))) goto l34;
if((V198==(-5598))) goto l35;
if((V198!=(-11168))) goto l38;
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,Y,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=jvj+108; 
(*f[255])( );     /*COPEXP0(jvj+107,jvj+108)*/
x[RES]=67 ;z[RES]=67;
(*f[1817])( );     /*NOUV2(V322)*/
V322=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+252; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+252)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V322; pile[WZ4]=jvj+256; 
(*f[270])( );     /*QUADRI7(100,21,140,V322,jvj+256)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=87; pile[WZ4]=jvj+260; 
(*f[181])( );     /*QUADRI2(100,20,101,87,jvj+260)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-5088); pile[WZ4]=jvj+262; 
(*f[270])( );     /*QUADRI7(100,21,140,(-5088),jvj+262)*/
pile[v[22]]=jvj+260; pile[WZ1]=111; pile[WZ2]=jvj+261; 
(*f[54])( );     /*TRI1(jvj+260,111,jvj+261)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+262; pile[WZ4]=jvj+261; pile[WZ5]=jvj+259; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+262,jvj+261,jvj+259)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-10947); pile[WZ4]=jvj+257; 
(*f[270])( );     /*QUADRI7(100,21,140,(-10947),jvj+257)*/
pile[v[22]]=jvj+257; pile[WZ1]=103; pile[WZ2]=jvj+258; 
(*f[54])( );     /*TRI1(jvj+257,103,jvj+258)*/
pile[v[22]]=100; pile[WZ1]=61; pile[WZ2]=102; pile[WZ3]=jvj+259; pile[WZ4]=jvj+258; pile[WZ5]=jvj+254; 
(*f[269])( );     /*QUADRI6(100,61,102,jvj+259,jvj+258,jvj+254)*/
pile[v[22]]=jvj+252; pile[WZ1]=111; pile[WZ2]=jvj+253; 
(*f[54])( );     /*TRI1(jvj+252,111,jvj+253)*/
pile[v[22]]=jvj+253; pile[WZ1]=jvj+254; pile[WZ2]=103; pile[WZ3]=jvj+255; 
(*f[58])( );     /*TRI3(jvj+253,jvj+254,103,jvj+255)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+256; pile[WZ4]=jvj+255; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+256,jvj+255,jvj+109)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+109; 
(*f[1818])( );     /*COPV0(RM,107,Y,R,jvj+109)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+263; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+263)*/
pile[WZ3]=172; pile[WZ4]=jvj+267; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+267)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V322; pile[WZ4]=jvj+271; 
(*f[270])( );     /*QUADRI7(100,21,140,V322,jvj+271)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=20; pile[WZ4]=jvj+269; 
(*f[181])( );     /*QUADRI2(100,20,101,20,jvj+269)*/
pile[v[22]]=jvj+267; pile[WZ1]=111; pile[WZ2]=jvj+268; 
(*f[54])( );     /*TRI1(jvj+267,111,jvj+268)*/
pile[v[22]]=jvj+268; pile[WZ1]=jvj+269; pile[WZ2]=103; pile[WZ3]=jvj+270; 
(*f[58])( );     /*TRI3(jvj+268,jvj+269,103,jvj+270)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+271; pile[WZ4]=jvj+270; pile[WZ5]=jvj+265; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+271,jvj+270,jvj+265)*/
pile[v[22]]=jvj+263; pile[WZ1]=111; pile[WZ2]=jvj+264; 
(*f[54])( );     /*TRI1(jvj+263,111,jvj+264)*/
pile[v[22]]=jvj+264; pile[WZ1]=jvj+265; pile[WZ2]=103; pile[WZ3]=jvj+266; 
(*f[58])( );     /*TRI3(jvj+264,jvj+265,103,jvj+266)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+108; pile[WZ4]=jvj+266; pile[WZ5]=jvj+110; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+108,jvj+266,jvj+110)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+110; 
(*f[1818])( );     /*COPV0(RM,107,Y,R,jvj+110)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+272; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+272)*/
pile[WZ3]=181; pile[WZ4]=jvj+277; 
(*f[181])( );     /*QUADRI2(100,20,101,181,jvj+277)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V322; pile[WZ4]=jvj+279; 
(*f[270])( );     /*QUADRI7(100,21,140,V322,jvj+279)*/
pile[v[22]]=jvj+277; pile[WZ1]=111; pile[WZ2]=jvj+278; 
(*f[54])( );     /*TRI1(jvj+277,111,jvj+278)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+279; pile[WZ4]=jvj+278; pile[WZ5]=jvj+276; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+279,jvj+278,jvj+276)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+274; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+274)*/
pile[v[22]]=jvj+272; pile[WZ1]=111; pile[WZ2]=jvj+273; 
(*f[54])( );     /*TRI1(jvj+272,111,jvj+273)*/
pile[v[22]]=jvj+273; pile[WZ1]=jvj+274; pile[WZ2]=103; pile[WZ3]=jvj+275; 
(*f[58])( );     /*TRI3(jvj+273,jvj+274,103,jvj+275)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+276; pile[WZ4]=jvj+275; pile[WZ5]=jvj+111; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+276,jvj+275,jvj+111)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+111; 
(*f[1818])( );     /*COPV0(RM,107,Y,R,jvj+111)*/
goto l38;
l33:pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,Y,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=jvj+94; 
(*f[255])( );     /*COPEXP0(jvj+93,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+175; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+175)*/
pile[WZ3]=311; pile[WZ4]=jvj+181; 
(*f[181])( );     /*QUADRI2(100,20,101,311,jvj+181)*/
pile[WZ3]=324; pile[WZ4]=jvj+179; 
(*f[181])( );     /*QUADRI2(100,20,101,324,jvj+179)*/
pile[v[22]]=jvj+179; pile[WZ1]=103; pile[WZ2]=jvj+180; 
(*f[54])( );     /*TRI1(jvj+179,103,jvj+180)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+181; pile[WZ4]=jvj+180; pile[WZ5]=jvj+177; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+181,jvj+180,jvj+177)*/
pile[v[22]]=jvj+175; pile[WZ1]=111; pile[WZ2]=jvj+176; 
(*f[54])( );     /*TRI1(jvj+175,111,jvj+176)*/
pile[v[22]]=jvj+176; pile[WZ1]=jvj+177; pile[WZ2]=103; pile[WZ3]=jvj+178; 
(*f[58])( );     /*TRI3(jvj+176,jvj+177,103,jvj+178)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+94; pile[WZ4]=jvj+178; pile[WZ5]=jvj+95; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+94,jvj+178,jvj+95)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+95; 
(*f[1818])( );     /*COPV0(RM,107,Y,R,jvj+95)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+182; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+182)*/
pile[WZ3]=172; pile[WZ4]=jvj+187; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+187)*/
pile[WZ3]=41; pile[WZ4]=jvj+189; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+189)*/
pile[v[22]]=jvj+187; pile[WZ1]=111; pile[WZ2]=jvj+188; 
(*f[54])( );     /*TRI1(jvj+187,111,jvj+188)*/
pile[v[22]]=jvj+188; pile[WZ1]=jvj+189; pile[WZ2]=103; pile[WZ3]=jvj+190; 
(*f[58])( );     /*TRI3(jvj+188,jvj+189,103,jvj+190)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+94; pile[WZ4]=jvj+190; pile[WZ5]=jvj+186; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+94,jvj+190,jvj+186)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-5086); pile[WZ4]=jvj+184; 
(*f[270])( );     /*QUADRI7(100,21,140,(-5086),jvj+184)*/
pile[v[22]]=jvj+182; pile[WZ1]=111; pile[WZ2]=jvj+183; 
(*f[54])( );     /*TRI1(jvj+182,111,jvj+183)*/
pile[v[22]]=jvj+183; pile[WZ1]=jvj+184; pile[WZ2]=103; pile[WZ3]=jvj+185; 
(*f[58])( );     /*TRI3(jvj+183,jvj+184,103,jvj+185)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+186; pile[WZ4]=jvj+185; pile[WZ5]=jvj+96; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+186,jvj+185,jvj+96)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+96; 
(*f[1818])( );     /*COPV0(RM,107,Y,R,jvj+96)*/
goto l37;
l34:pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,Y,jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=jvj+98; 
(*f[255])( );     /*COPEXP0(jvj+97,jvj+98)*/
x[RES]=67 ;z[RES]=67;
(*f[1817])( );     /*NOUV2(V118)*/
V118=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+191; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+191)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V118; pile[WZ4]=jvj+195; 
(*f[270])( );     /*QUADRI7(100,21,140,V118,jvj+195)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+198; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+198)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-5085); pile[WZ4]=jvj+196; 
(*f[270])( );     /*QUADRI7(100,21,140,(-5085),jvj+196)*/
pile[v[22]]=jvj+196; pile[WZ1]=103; pile[WZ2]=jvj+197; 
(*f[54])( );     /*TRI1(jvj+196,103,jvj+197)*/
pile[v[22]]=100; pile[WZ1]=61; pile[WZ2]=102; pile[WZ3]=jvj+198; pile[WZ4]=jvj+197; pile[WZ5]=jvj+193; 
(*f[269])( );     /*QUADRI6(100,61,102,jvj+198,jvj+197,jvj+193)*/
pile[v[22]]=jvj+191; pile[WZ1]=111; pile[WZ2]=jvj+192; 
(*f[54])( );     /*TRI1(jvj+191,111,jvj+192)*/
pile[v[22]]=jvj+192; pile[WZ1]=jvj+193; pile[WZ2]=103; pile[WZ3]=jvj+194; 
(*f[58])( );     /*TRI3(jvj+192,jvj+193,103,jvj+194)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+195; pile[WZ4]=jvj+194; pile[WZ5]=jvj+99; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+195,jvj+194,jvj+99)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+99; 
(*f[1818])( );     /*COPV0(RM,107,Y,R,jvj+99)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+199; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+199)*/
pile[WZ3]=172; pile[WZ4]=jvj+203; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+203)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V118; pile[WZ4]=jvj+207; 
(*f[270])( );     /*QUADRI7(100,21,140,V118,jvj+207)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=20; pile[WZ4]=jvj+205; 
(*f[181])( );     /*QUADRI2(100,20,101,20,jvj+205)*/
pile[v[22]]=jvj+203; pile[WZ1]=111; pile[WZ2]=jvj+204; 
(*f[54])( );     /*TRI1(jvj+203,111,jvj+204)*/
pile[v[22]]=jvj+204; pile[WZ1]=jvj+205; pile[WZ2]=103; pile[WZ3]=jvj+206; 
(*f[58])( );     /*TRI3(jvj+204,jvj+205,103,jvj+206)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+207; pile[WZ4]=jvj+206; pile[WZ5]=jvj+201; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+207,jvj+206,jvj+201)*/
pile[v[22]]=jvj+199; pile[WZ1]=111; pile[WZ2]=jvj+200; 
(*f[54])( );     /*TRI1(jvj+199,111,jvj+200)*/
pile[v[22]]=jvj+200; pile[WZ1]=jvj+201; pile[WZ2]=103; pile[WZ3]=jvj+202; 
(*f[58])( );     /*TRI3(jvj+200,jvj+201,103,jvj+202)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+98; pile[WZ4]=jvj+202; pile[WZ5]=jvj+100; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+98,jvj+202,jvj+100)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+100; 
(*f[1818])( );     /*COPV0(RM,107,Y,R,jvj+100)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+208; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+208)*/
pile[WZ3]=181; pile[WZ4]=jvj+213; 
(*f[181])( );     /*QUADRI2(100,20,101,181,jvj+213)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V118; pile[WZ4]=jvj+215; 
(*f[270])( );     /*QUADRI7(100,21,140,V118,jvj+215)*/
pile[v[22]]=jvj+213; pile[WZ1]=111; pile[WZ2]=jvj+214; 
(*f[54])( );     /*TRI1(jvj+213,111,jvj+214)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+215; pile[WZ4]=jvj+214; pile[WZ5]=jvj+212; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+215,jvj+214,jvj+212)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+210; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+210)*/
pile[v[22]]=jvj+208; pile[WZ1]=111; pile[WZ2]=jvj+209; 
(*f[54])( );     /*TRI1(jvj+208,111,jvj+209)*/
pile[v[22]]=jvj+209; pile[WZ1]=jvj+210; pile[WZ2]=103; pile[WZ3]=jvj+211; 
(*f[58])( );     /*TRI3(jvj+209,jvj+210,103,jvj+211)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+212; pile[WZ4]=jvj+211; pile[WZ5]=jvj+101; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+212,jvj+211,jvj+101)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+101; 
(*f[1818])( );     /*COPV0(RM,107,Y,R,jvj+101)*/
goto l38;
l35:pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,Y,jvj+102)*/
pile[v[22]]=jvj+102; pile[WZ1]=jvj+103; 
(*f[255])( );     /*COPEXP0(jvj+102,jvj+103)*/
x[RES]=67 ;z[RES]=67;
(*f[1817])( );     /*NOUV2(V311)*/
V311=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+216; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+216)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V311; pile[WZ4]=jvj+220; 
(*f[270])( );     /*QUADRI7(100,21,140,V311,jvj+220)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=87; pile[WZ4]=jvj+224; 
(*f[181])( );     /*QUADRI2(100,20,101,87,jvj+224)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-10947); pile[WZ4]=jvj+226; 
(*f[270])( );     /*QUADRI7(100,21,140,(-10947),jvj+226)*/
pile[v[22]]=jvj+224; pile[WZ1]=111; pile[WZ2]=jvj+225; 
(*f[54])( );     /*TRI1(jvj+224,111,jvj+225)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+226; pile[WZ4]=jvj+225; pile[WZ5]=jvj+223; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+226,jvj+225,jvj+223)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=51; pile[WZ4]=jvj+227; 
(*f[181])( );     /*QUADRI2(100,20,101,51,jvj+227)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-10947); pile[WZ4]=jvj+231; 
(*f[270])( );     /*QUADRI7(100,21,140,(-10947),jvj+231)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1484; pile[WZ4]=jvj+234; 
(*f[181])( );     /*QUADRI2(100,20,101,1484,jvj+234)*/
pile[WZ3]=854; pile[WZ4]=jvj+232; 
(*f[181])( );     /*QUADRI2(100,20,101,854,jvj+232)*/
pile[v[22]]=jvj+232; pile[WZ1]=103; pile[WZ2]=jvj+233; 
(*f[54])( );     /*TRI1(jvj+232,103,jvj+233)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+234; pile[WZ4]=jvj+233; pile[WZ5]=jvj+229; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+234,jvj+233,jvj+229)*/
pile[v[22]]=jvj+227; pile[WZ1]=111; pile[WZ2]=jvj+228; 
(*f[54])( );     /*TRI1(jvj+227,111,jvj+228)*/
pile[v[22]]=jvj+228; pile[WZ1]=jvj+229; pile[WZ2]=103; pile[WZ3]=jvj+230; 
(*f[58])( );     /*TRI3(jvj+228,jvj+229,103,jvj+230)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+231; pile[WZ4]=jvj+230; pile[WZ5]=jvj+221; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+231,jvj+230,jvj+221)*/
pile[v[22]]=jvj+221; pile[WZ1]=103; pile[WZ2]=jvj+222; 
(*f[54])( );     /*TRI1(jvj+221,103,jvj+222)*/
pile[v[22]]=100; pile[WZ1]=61; pile[WZ2]=102; pile[WZ3]=jvj+223; pile[WZ4]=jvj+222; pile[WZ5]=jvj+218; 
(*f[269])( );     /*QUADRI6(100,61,102,jvj+223,jvj+222,jvj+218)*/
pile[v[22]]=jvj+216; pile[WZ1]=111; pile[WZ2]=jvj+217; 
(*f[54])( );     /*TRI1(jvj+216,111,jvj+217)*/
pile[v[22]]=jvj+217; pile[WZ1]=jvj+218; pile[WZ2]=103; pile[WZ3]=jvj+219; 
(*f[58])( );     /*TRI3(jvj+217,jvj+218,103,jvj+219)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+220; pile[WZ4]=jvj+219; pile[WZ5]=jvj+104; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+220,jvj+219,jvj+104)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+104; 
(*f[1818])( );     /*COPV0(RM,107,Y,R,jvj+104)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+235; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+235)*/
pile[WZ3]=172; pile[WZ4]=jvj+239; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+239)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V311; pile[WZ4]=jvj+243; 
(*f[270])( );     /*QUADRI7(100,21,140,V311,jvj+243)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=20; pile[WZ4]=jvj+241; 
(*f[181])( );     /*QUADRI2(100,20,101,20,jvj+241)*/
pile[v[22]]=jvj+239; pile[WZ1]=111; pile[WZ2]=jvj+240; 
(*f[54])( );     /*TRI1(jvj+239,111,jvj+240)*/
pile[v[22]]=jvj+240; pile[WZ1]=jvj+241; pile[WZ2]=103; pile[WZ3]=jvj+242; 
(*f[58])( );     /*TRI3(jvj+240,jvj+241,103,jvj+242)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+243; pile[WZ4]=jvj+242; pile[WZ5]=jvj+237; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+243,jvj+242,jvj+237)*/
pile[v[22]]=jvj+235; pile[WZ1]=111; pile[WZ2]=jvj+236; 
(*f[54])( );     /*TRI1(jvj+235,111,jvj+236)*/
pile[v[22]]=jvj+236; pile[WZ1]=jvj+237; pile[WZ2]=103; pile[WZ3]=jvj+238; 
(*f[58])( );     /*TRI3(jvj+236,jvj+237,103,jvj+238)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+103; pile[WZ4]=jvj+238; pile[WZ5]=jvj+105; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+103,jvj+238,jvj+105)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+105; 
(*f[1818])( );     /*COPV0(RM,107,Y,R,jvj+105)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+244; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+244)*/
pile[WZ3]=181; pile[WZ4]=jvj+249; 
(*f[181])( );     /*QUADRI2(100,20,101,181,jvj+249)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V311; pile[WZ4]=jvj+251; 
(*f[270])( );     /*QUADRI7(100,21,140,V311,jvj+251)*/
pile[v[22]]=jvj+249; pile[WZ1]=111; pile[WZ2]=jvj+250; 
(*f[54])( );     /*TRI1(jvj+249,111,jvj+250)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+251; pile[WZ4]=jvj+250; pile[WZ5]=jvj+248; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+251,jvj+250,jvj+248)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+246; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+246)*/
pile[v[22]]=jvj+244; pile[WZ1]=111; pile[WZ2]=jvj+245; 
(*f[54])( );     /*TRI1(jvj+244,111,jvj+245)*/
pile[v[22]]=jvj+245; pile[WZ1]=jvj+246; pile[WZ2]=103; pile[WZ3]=jvj+247; 
(*f[58])( );     /*TRI3(jvj+245,jvj+246,103,jvj+247)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+248; pile[WZ4]=jvj+247; pile[WZ5]=jvj+106; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+248,jvj+247,jvj+106)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+106; 
(*f[1818])( );     /*COPV0(RM,107,Y,R,jvj+106)*/
goto l38;
l36:pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,Y,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=jvj+113; 
(*f[255])( );     /*COPEXP0(jvj+112,jvj+113)*/
pile[v[22]]=103; pile[WZ1]=Y; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(103,Y,jvj+114)*/
pile[v[22]]=jvj+114; pile[WZ1]=jvj+115; 
(*f[255])( );     /*COPEXP0(jvj+114,jvj+115)*/
x[RES]=67 ;z[RES]=67;
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
pile[v[22]]=jvj+115; pile[WZ1]=103; pile[WZ2]=jvj+285; 
(*f[54])( );     /*TRI1(jvj+115,103,jvj+285)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+113; pile[WZ4]=jvj+285; pile[WZ5]=jvj+284; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+113,jvj+285,jvj+284)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+282; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+282)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+280; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+280)*/
pile[v[22]]=jvj+280; pile[WZ1]=436; pile[WZ2]=jvj+281; 
(*f[54])( );     /*TRI1(jvj+280,436,jvj+281)*/
pile[v[22]]=jvj+281; pile[WZ1]=jvj+282; pile[WZ2]=111; pile[WZ3]=jvj+283; 
(*f[58])( );     /*TRI3(jvj+281,jvj+282,111,jvj+283)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+284; pile[WZ4]=jvj+283; pile[WZ5]=jvj+116; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+284,jvj+283,jvj+116)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; pile[WZ4]=jvj+116; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+116)*/
goto l38;
l39:if((x[jvj+29]!=44)) goto l41;
pile[v[22]]=103; pile[WZ1]=Y; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,Y,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=jvj+122; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(100,jvj+122,jvj+123)*/
if((x[jvj+123]!=22)) goto l41;
pile[v[22]]=111; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,jvj+122,jvj+124)*/
pile[v[22]]=101; pile[WZ1]=jvj+124; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+124,jvj+125)*/
if(x[jvj+125]!=267&&x[jvj+125]!=156) goto l41;
x[jvj+126]=incon;
if((x[jvj+125]==156)) goto l49;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=430; pile[WZ4]=jvj+126; 
(*f[181])( );     /*QUADRI2(100,20,101,430,jvj+126)*/
l40:pile[v[22]]=jvj+126; pile[WZ1]=jvj+127; 
(*f[255])( );     /*COPEXP0(jvj+126,jvj+127)*/
pile[v[22]]=107; pile[WZ1]=jvj+122; pile[WZ2]=jvj+128; 
(*f[33])( );     /*FNDE0(107,jvj+122,jvj+128)*/
x[jvj+12]=0 ;z[jvj+12]=0;
goto l3;
l41:if(x[RES]==incon) goto l42;
goto l44;
l42:pile[v[22]]=100; pile[WZ1]=Y; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,Y,jvj+134)*/
if((x[jvj+134]!=22)) goto l44;
pile[WZ1]=jvj+28; pile[WZ2]=jvj+135; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+28,jvj+135)*/
if((x[jvj+135]!=20)) goto l44;
pile[v[22]]=39; pile[WZ1]=jvj+29; pile[WZ2]=jvj+136; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(39,jvj+29,jvj+136)*/
if((x[jvj+136]==10106)) goto l43;
if((x[jvj+136]!=10206)) goto l44;
pile[v[22]]=R; pile[WZ1]=Y; pile[WZ2]=BT; pile[WZ3]=RM; pile[WZ4]=RES; 
(*f[2154])( );     /*COPWW0(R,Y,BT,RM,RES)*/
goto l44;
l43:pile[v[22]]=R; pile[WZ1]=Y; pile[WZ2]=RM; pile[WZ3]=BT; 
(*f[2153])( );     /*COPX0(R,Y,RM,BT)*/
x[RES]=67 ;z[RES]=67;
goto l44;
l48:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=0;return;
l49:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=732; pile[WZ4]=jvj+126; 
(*f[181])( );     /*QUADRI2(100,20,101,732,jvj+126)*/
goto l40;
l6:if((x[jvj+143]<=0)) goto l9;
x[jvj+17]=s[x[jvj+143]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+143];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+17; 
(*f[68])( );     /*PLUE0(jvj+15,jvj+17)*/
x[jvj+143]=t[x[jvj+143]];
goto l6;
}
