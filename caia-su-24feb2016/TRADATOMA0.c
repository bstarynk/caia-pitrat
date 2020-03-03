#include "dx.h"
void TRADATOMA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V146=0,V148=0,V143=0,V144=0,V145=0,V147=0,V14=0,V1=0,V2=0,V3=0,V4=0,V5=0,V6=0,V7=0,V8=0,V9=0,V10=0,V11=0,V12=0,V140=0,V142=0,V137=0,V138=0,V139=0,V141=0,V163=0,V165=0,V160=0,V161=0,V162=0,V164=0,V158=0,V52=0,V155=0,V156=0,V157=0,V159=0,V95=0,V89=0,V74=0,V151=0,V154=0,V149=0,V150=0,V152=0,V153=0,V=0,V34=0,V46=0,V69=0,V54=0,W=0,V116=0,V121=0,V105=0,V126=0,V174=0,V169=0,V170=0,V171=0,V172=0,V173=0,V125=0,V167=0;
int N,VV,IV,RX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=110;
x[jvj+1]=11633;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1718&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; VV=pile[v[22]+1]; IV=pile[v[22]+2]; RX=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=498; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(498,N,jvj+2)*/
x[jvj+3]=x[jvj+2] ;z[jvj+3]=z[jvj+2];
l3:pile[v[22]]=101; pile[WZ1]=RX; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,RX,jvj+5)*/
if((x[jvj+5]!=250)) goto l4;
x[jvj+107]=0 ;z[jvj+107]=0;
x[jvj+6]=x[jvj+107] ;z[jvj+6]=z[jvj+107];
l5:V146=x[jvj+3];
V148=x[jvj+6];
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V143)*/
V143=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=11785; pile[WZ2]=V143; 
(*f[39])( );     /*SDX0(20,11785,V143,V144)*/
V144=pile[WZ3]; 
pile[WZ1]=V146; pile[WZ2]=V144; 
(*f[39])( );     /*SDX0(20,V146,V144,V145)*/
V145=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V148; pile[WZ2]=V145; 
(*f[39])( );     /*SDX0(23,V148,V145,V147)*/
V147=pile[WZ3]; 
pile[v[22]]=V147; 
(*f[40])( );     /*SLG0(V147)*/
pile[v[22]]=1363; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1363,jvj+3,jvj+4)*/
if((x[jvj+4]>0)) goto l2;
pile[v[22]]=jvj+9; 
(*f[128])( );if(v[102]) goto l50;     /*CODN0(jvj+9)*/
V140=x[jvj+3];
V142=x[jvj+9];
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V137)*/
V137=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=11785; pile[WZ2]=V137; 
(*f[39])( );     /*SDX0(20,11785,V137,V138)*/
V138=pile[WZ3]; 
pile[WZ1]=V140; pile[WZ2]=V138; 
(*f[39])( );     /*SDX0(20,V140,V138,V139)*/
V139=pile[WZ3]; 
pile[WZ1]=V142; pile[WZ2]=V139; 
(*f[39])( );     /*SDX0(20,V142,V139,V141)*/
V141=pile[WZ3]; 
pile[v[22]]=V141; 
(*f[40])( );     /*SLG0(V141)*/
pile[v[22]]=69; pile[WZ1]=100; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(69,100,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=102; 
(*f[35])( );     /*CHGC1(jvj+9,102,jvj+10)*/
l6:pile[v[22]]=jvj+9; pile[WZ1]=970; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(jvj+9,970,jvj+3)*/
pile[v[22]]=970; pile[WZ1]=jvj+9; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(970,jvj+9,jvj+11)*/
V163=x[jvj+11];
V165=x[jvj+3];
pile[v[22]]=20; pile[WZ1]=11785; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11785,0,V160)*/
V160=pile[WZ3]; 
pile[WZ1]=970; pile[WZ2]=V160; 
(*f[39])( );     /*SDX0(20,970,V160,V161)*/
V161=pile[WZ3]; 
pile[WZ1]=V163; pile[WZ2]=V161; 
(*f[39])( );     /*SDX0(20,V163,V161,V162)*/
V162=pile[WZ3]; 
pile[WZ1]=V165; pile[WZ2]=V162; 
(*f[39])( );     /*SDX0(20,V165,V162,V164)*/
V164=pile[WZ3]; 
pile[v[22]]=V164; 
(*f[40])( );     /*SLG0(V164)*/
l7:if(x[IV]!=1814&&x[IV]!=1050&&x[IV]!=758&&x[IV]!=576) goto l51;
if((VV==(-7141))) goto l51;
pile[v[22]]=218; pile[WZ1]=IV; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(218,IV,jvj+12)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+12; pile[WZ2]=VV; 
(*f[1923])( );     /*AJTYPE0(jvj+9,jvj+12,VV)*/
l51:pile[v[22]]=42; pile[WZ1]=100; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(42,100,jvj+13)*/
pile[v[22]]=jvj+9; pile[WZ1]=184; 
(*f[36])( );     /*PLUSC0(jvj+9,184,jvj+13)*/
x[jvj+108]=x[jvj+6] ;z[jvj+108]=z[jvj+6];
l13:if((x[jvj+108]>0)) goto l14;
pile[v[22]]=N; pile[WZ1]=jvj+6; pile[WZ2]=VV; pile[WZ3]=IV; pile[WZ4]=jvj+14; 
(*f[1924])( );     /*TRADNEX0(N,jvj+6,VV,IV,jvj+14)*/
V151=x[jvj+6];
V154=x[IV];
pile[v[22]]=1260; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1260,jvj+14,jvj+15)*/
V158=x[jvj+3];
l8:if((x[jvj+15]>0)) goto l9;
pile[v[22]]=jvj+14; pile[WZ1]=1682; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(jvj+14,1682,jvj+9)*/
pile[WZ1]=970; pile[WZ2]=11786; 
(*f[35])( );     /*CHGC1(jvj+14,970,11786)*/
pile[v[22]]=20; pile[WZ1]=11785; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11785,0,V149)*/
V149=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V151; pile[WZ2]=V149; 
(*f[39])( );     /*SDX0(23,V151,V149,V150)*/
V150=pile[WZ3]; 
pile[v[22]]=V150; pile[WZ1]=VV; 
(*f[37])( );     /*SRA0(V150,VV,V152)*/
V152=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V154; pile[WZ2]=V152; 
(*f[39])( );     /*SDX0(20,V154,V152,V153)*/
V153=pile[WZ3]; 
pile[v[22]]=V153; 
(*f[40])( );     /*SLG0(V153)*/
pile[v[22]]=jvj+14; pile[WZ1]=1738; pile[WZ2]=jvj+13; 
(*f[35])( );     /*CHGC1(jvj+14,1738,jvj+13)*/
x[jvj+109]=x[jvj+6] ;z[jvj+109]=z[jvj+6];
l20:if((x[jvj+109]>0)) goto l21;
pile[v[22]]=N; pile[WZ1]=jvj+59; 
(*f[1235])( );     /*Z16Z0(N,jvj+59)*/
x[jvj+56]=0 ;z[jvj+56]=0;
l24:if((x[jvj+59]<=0)) goto l26;
x[jvj+51]=s[x[jvj+59]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+59];
pile[v[22]]=100; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+51,jvj+52)*/
if((x[jvj+52]!=43)) goto l25;
pile[v[22]]=103; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(103,jvj+51,jvj+53)*/
pile[v[22]]=140; pile[WZ1]=jvj+53; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(140,jvj+53,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+51; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,jvj+51,jvj+54)*/
pile[v[22]]=101; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+54,jvj+55)*/
if((x[jvj+55]!=365)) goto l25;
V54=V69;
pile[v[22]]=jvj+56; pile[WZ1]=V54; 
(*f[331])( );     /*PLUE3(jvj+56,V54)*/
l25:x[jvj+59]=t[x[jvj+59]];
goto l24;
l1:x[jvj+3]=x[N] ;z[jvj+3]=z[N];
goto l3;
l2:x[jvj+7]=s[x[jvj+4]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+4];
V14=x[jvj+7];
x[jvj+9]=x[jvj+7] ;z[jvj+9]=z[jvj+7];
pile[v[22]]=jvj+7; pile[WZ1]=0; pile[WZ2]=V14; pile[WZ3]=105; 
(*f[285])( );     /*ENLY0(jvj+7,0,V14,105,V1,V2)*/
V1=pile[WZ4]; V2=pile[WZ5]; 
pile[WZ1]=V2; pile[WZ2]=V1; pile[WZ3]=107; 
(*f[285])( );     /*ENLY0(jvj+7,V2,V1,107,V3,V4)*/
V3=pile[WZ4]; V4=pile[WZ5]; 
pile[WZ1]=V4; pile[WZ2]=V3; pile[WZ3]=184; 
(*f[285])( );     /*ENLY0(jvj+7,V4,V3,184,V5,V6)*/
V5=pile[WZ4]; V6=pile[WZ5]; 
pile[WZ1]=V6; pile[WZ2]=V5; pile[WZ3]=762; 
(*f[285])( );     /*ENLY0(jvj+7,V6,V5,762,V7,V8)*/
V7=pile[WZ4]; V8=pile[WZ5]; 
pile[WZ1]=V8; pile[WZ2]=V7; pile[WZ3]=1232; 
(*f[285])( );     /*ENLY0(jvj+7,V8,V7,1232,V9,V10)*/
V9=pile[WZ4]; V10=pile[WZ5]; 
pile[WZ1]=V10; pile[WZ2]=V9; pile[WZ3]=1782; 
(*f[285])( );     /*ENLY0(jvj+7,V10,V9,1782,V11,V12)*/
V11=pile[WZ4]; V12=pile[WZ5]; 
pile[v[22]]=1363; pile[WZ1]=jvj+3; pile[WZ2]=V14; 
(*f[134])( );     /*OTA0(1363,jvj+3,V14)*/
pile[v[22]]=69; pile[WZ1]=100; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(69,100,jvj+8)*/
pile[v[22]]=jvj+7; pile[WZ1]=102; 
(*f[35])( );     /*CHGC1(jvj+7,102,jvj+8)*/
goto l6;
l4:pile[v[22]]=20; pile[WZ1]=RX; pile[WZ2]=jvj+6; 
(*f[409])( );     /*TRI14(20,RX,jvj+6)*/
goto l5;
l9:x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=110; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(110,jvj+16,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=1261; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1261,jvj+16,jvj+17)*/
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==129) goto l11;
l10:x[jvj+15]=t[x[jvj+15]];
goto l8;
l11:for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==1917) goto l12;
goto l10;
l12:pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V155)*/
V155=pile[WZ2]; 
pile[v[22]]=30; pile[WZ1]=V155; pile[WZ2]=(-89); 
(*f[41])( );     /*SRB0(30,V155,(-89),V156)*/
V156=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V158; pile[WZ2]=V156; 
(*f[39])( );     /*SDX0(20,V158,V156,V157)*/
V157=pile[WZ3]; 
pile[v[22]]=V157; pile[WZ1]=V52; 
(*f[37])( );     /*SRA0(V157,V52,V159)*/
V159=pile[WZ2]; 
pile[v[22]]=V159; 
(*f[40])( );     /*SLG0(V159)*/
goto l10;
l14:x[jvj+18]=s[x[jvj+108]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+108];
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+18,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=1604)) goto l15;
pile[v[22]]=102; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+18,jvj+21)*/
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+21,V95)*/
V95=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+18; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,jvj+18,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+22,jvj+23)*/
x[jvj+24]=x[jvj+23] ;z[jvj+24]=z[jvj+23];
if(x[jvj+24]!=1814&&x[jvj+24]!=1050&&x[jvj+24]!=758&&x[jvj+24]!=576) goto l16;
pile[v[22]]=218; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(218,jvj+24,jvj+25)*/
V89=V95;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+25; pile[WZ2]=V89; 
(*f[1923])( );     /*AJTYPE0(jvj+9,jvj+25,V89)*/
l16:if((x[jvj+24]==1814)) goto l15;
pile[v[22]]=159; pile[WZ1]=1604; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(159,1604,jvj+26)*/
for(a=x[jvj+26];a>0;a=t[a]) if(s[a]==x[jvj+24]) goto l17;
l15:x[jvj+108]=t[x[jvj+108]];
goto l13;
l17:V74=V95;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+24; pile[WZ2]=V74; 
(*f[1923])( );     /*AJTYPE0(jvj+9,jvj+24,V74)*/
goto l15;
l21:x[jvj+27]=s[x[jvj+109]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+109];
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+27,jvj+42)*/
if((x[jvj+42]!=22)) goto l19;
pile[v[22]]=102; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+27,jvj+43)*/
pile[v[22]]=140; pile[WZ1]=jvj+43; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+43,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+27,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+44,jvj+45)*/
x[jvj+46]=x[jvj+45] ;z[jvj+46]=z[jvj+45];
pile[v[22]]=1045; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(1045,jvj+46,jvj+47)*/
if((x[jvj+47]!=68)) goto l19;
pile[v[22]]=103; pile[WZ1]=jvj+27; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,jvj+27,jvj+40)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+40; pile[WZ2]=jvj+48; 
(*f[1230])( );if(v[102]) goto l19;     /*TRADMATCH0(jvj+14,jvj+40,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; 
(*f[255])( );     /*COPEXP0(jvj+48,jvj+49)*/
V34=V46;
pile[v[22]]=100; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(100,jvj+40,jvj+41)*/
if((x[jvj+41]==454)) goto l52;
pile[v[22]]=jvj+9; pile[WZ1]=576; pile[WZ2]=V34; 
(*f[1923])( );     /*AJTYPE0(jvj+9,576,V34)*/
l52:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+46; pile[WZ4]=jvj+95; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+46,jvj+95)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V34; pile[WZ4]=jvj+98; 
(*f[270])( );     /*QUADRI7(100,21,140,V34,jvj+98)*/
pile[v[22]]=jvj+95; pile[WZ1]=111; pile[WZ2]=jvj+96; 
(*f[54])( );     /*TRI1(jvj+95,111,jvj+96)*/
pile[v[22]]=jvj+96; pile[WZ1]=jvj+49; pile[WZ2]=103; pile[WZ3]=jvj+97; 
(*f[58])( );     /*TRI3(jvj+96,jvj+49,103,jvj+97)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+98; pile[WZ4]=jvj+97; pile[WZ5]=jvj+50; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+98,jvj+97,jvj+50)*/
pile[v[22]]=jvj+13; pile[WZ1]=107; pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+50)*/
l19:pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+27,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]==1604)) goto l22;
l18:pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+27,jvj+28)*/
if((x[jvj+28]!=22)) goto l23;
pile[v[22]]=111; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+27,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+29,jvj+30)*/
x[jvj+31]=x[jvj+30] ;z[jvj+31]=z[jvj+30];
pile[v[22]]=1045; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(1045,jvj+31,jvj+32)*/
if((x[jvj+32]!=68)) goto l23;
pile[v[22]]=102; pile[WZ1]=jvj+27; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,jvj+27,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+33,jvj+34)*/
if((x[jvj+34]==21)) goto l22;
l23:pile[v[22]]=jvj+27; pile[WZ1]=jvj+14; pile[WZ2]=278; 
(*f[1493])( );     /*NATFNA0(jvj+27,jvj+14,278)*/
pile[v[22]]=N; 
(*f[1239])( );if(v[102]) goto l22;     /*NOUVAR0(N,V)*/
V=pile[WZ1]; 
pile[v[22]]=jvj+14; pile[WZ1]=jvj+27; pile[WZ2]=jvj+37; 
(*f[1230])( );if(v[102]) goto l22;     /*TRADMATCH0(jvj+14,jvj+27,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[255])( );     /*COPEXP0(jvj+37,jvj+38)*/
pile[v[22]]=jvj+9; pile[WZ1]=576; pile[WZ2]=V; 
(*f[1923])( );     /*AJTYPE0(jvj+9,576,V)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+91; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+91)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+94; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+94)*/
pile[v[22]]=jvj+91; pile[WZ1]=111; pile[WZ2]=jvj+92; 
(*f[54])( );     /*TRI1(jvj+91,111,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=jvj+38; pile[WZ2]=103; pile[WZ3]=jvj+93; 
(*f[58])( );     /*TRI3(jvj+92,jvj+38,103,jvj+93)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+94; pile[WZ4]=jvj+93; pile[WZ5]=jvj+39; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+94,jvj+93,jvj+39)*/
pile[v[22]]=jvj+13; pile[WZ1]=107; pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+39)*/
l22:x[jvj+109]=t[x[jvj+109]];
goto l20;
l27:W=s[x[jvj+56]];
pile[v[22]]=jvj+14; pile[WZ1]=W; pile[WZ2]=jvj+57; 
(*f[1491])( );     /*VDSBA0(jvj+14,W,jvj+57)*/
pile[v[22]]=1261; pile[WZ1]=jvj+57; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(1261,jvj+57,jvj+60)*/
for(a=x[jvj+60];a>0;a=t[a]) if(s[a]==23) goto l28;
for(a=x[jvj+60];a>0;a=t[a]) if(s[a]==1050) goto l28;
x[jvj+61]=incon;
pile[v[22]]=129; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(129,jvj+57,jvj+58)*/
if((x[jvj+58]!=1917)) goto l53;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+61; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+61)*/
l29:pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; 
(*f[255])( );     /*COPEXP0(jvj+61,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+99; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+99)*/
pile[WZ3]=202; pile[WZ4]=jvj+105; 
(*f[181])( );     /*QUADRI2(100,20,101,202,jvj+105)*/
pile[v[22]]=jvj+62; pile[WZ1]=103; pile[WZ2]=jvj+104; 
(*f[54])( );     /*TRI1(jvj+62,103,jvj+104)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+105; pile[WZ4]=jvj+104; pile[WZ5]=jvj+103; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+105,jvj+104,jvj+103)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=68; pile[WZ4]=jvj+101; 
(*f[181])( );     /*QUADRI2(100,20,101,68,jvj+101)*/
pile[v[22]]=jvj+99; pile[WZ1]=111; pile[WZ2]=jvj+100; 
(*f[54])( );     /*TRI1(jvj+99,111,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=jvj+101; pile[WZ2]=103; pile[WZ3]=jvj+102; 
(*f[58])( );     /*TRI3(jvj+100,jvj+101,103,jvj+102)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+103; pile[WZ4]=jvj+102; pile[WZ5]=jvj+63; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+103,jvj+102,jvj+63)*/
pile[v[22]]=jvj+13; pile[WZ1]=107; pile[WZ2]=jvj+63; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+63)*/
l28:x[jvj+56]=t[x[jvj+56]];
l26:if((x[jvj+56]>0)) goto l27;
x[jvj+71]=0 ;z[jvj+71]=0;
pile[v[22]]=1260; pile[WZ1]=jvj+14; pile[WZ2]=jvj+65; 
(*f[33])( );     /*FNDE0(1260,jvj+14,jvj+65)*/
x[jvj+66]=d[215];z[jvj+66]=0;
l31:if((x[jvj+65]>0)) goto l32;
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,jvj+9,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(100,jvj+72,jvj+73)*/
if((x[jvj+73]!=69)) goto l48;
pile[v[22]]=108; pile[WZ2]=jvj+74; 
(*f[33])( );     /*FNDE0(108,jvj+72,jvj+74)*/
l35:if((x[jvj+74]<=0)) goto l48;
x[jvj+75]=s[x[jvj+74]] ;z[jvj+75]=(x[jvj+75]<=sepcte) ? x[jvj+75] : z[jvj+74];
pile[v[22]]=103; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(103,jvj+75,jvj+76)*/
pile[v[22]]=140; pile[WZ1]=jvj+76; 
(*f[44])( );if(v[102]) goto l36;     /*FNDC1(140,jvj+76,V121)*/
V121=pile[WZ2]; 
V105=V121;
pile[v[22]]=jvj+9; pile[WZ1]=762; pile[WZ2]=V105; 
(*f[735])( );     /*PLUSC4(jvj+9,762,V105)*/
l36:x[jvj+74]=t[x[jvj+74]];
goto l35;
l32:x[jvj+67]=s[x[jvj+65]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+65];
pile[v[22]]=129; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(129,jvj+67,jvj+68)*/
if((x[jvj+68]!=129)) goto l33;
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l33;     /*FNDC1(110,jvj+67,V116)*/
V116=pile[WZ2]; 
pile[v[22]]=1261; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(1261,jvj+67,jvj+69)*/
pile[v[22]]=159; pile[WZ1]=100; pile[WZ2]=jvj+64; 
(*f[33])( );     /*FNDE0(159,100,jvj+64)*/
x[jvj+110]=x[jvj+69] ;z[jvj+110]=z[jvj+69];
l30:if((x[jvj+110]<=0)) goto l33;
x[jvj+106]=s[x[jvj+110]] ;z[jvj+106]=(x[jvj+106]<=sepcte) ? x[jvj+106] : z[jvj+110];
for(a=x[jvj+64];a>0;a=t[a]) if(s[a]==x[jvj+106]) goto l34;
x[jvj+110]=t[x[jvj+110]];
goto l30;
l34:for(a=x[jvj+69];a>0;a=t[a]) if(s[a]==1881) goto l54;
l33:x[jvj+65]=t[x[jvj+65]];
goto l31;
l38:if((V125<4)) goto l39;
l41:pile[v[22]]=jvj+9; pile[WZ1]=1782; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+9,1782,68)*/
l42:pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(102,jvj+9,jvj+80)*/
pile[v[22]]=108; pile[WZ1]=jvj+80; pile[WZ2]=jvj+81; 
(*f[33])( );     /*FNDE0(108,jvj+80,jvj+81)*/
l43:if((x[jvj+81]<=0)) goto l46;
x[jvj+82]=s[x[jvj+81]] ;z[jvj+82]=(x[jvj+82]<=sepcte) ? x[jvj+82] : z[jvj+81];
pile[v[22]]=100; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+82,jvj+83)*/
if((x[jvj+83]!=108)) goto l44;
pile[v[22]]=102; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,jvj+82,jvj+84)*/
pile[v[22]]=101; pile[WZ1]=jvj+84; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+84,jvj+85)*/
if((x[jvj+85]!=576)) goto l44;
pile[v[22]]=509; pile[WZ1]=jvj+13; pile[WZ2]=jvj+86; 
(*f[492])( );     /*FIGURE0(509,jvj+13,jvj+86)*/
if((x[jvj+86]==135)) goto l45;
l46:pile[v[22]]=80; pile[WZ1]=jvj+14; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(80,jvj+14,jvj+87)*/
if((x[jvj+87]==616)) goto l49;
l47:pile[v[22]]=jvj+3; pile[WZ1]=1863; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+3,1863,jvj+9)*/
l49:pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V167)*/
V167=pile[WZ2]; 
pile[v[22]]=V167; 
(*f[40])( );     /*SLG0(V167)*/
l50:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l39:pile[v[22]]=970; pile[WZ1]=jvj+14; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(970,jvj+14,jvj+78)*/
V174=x[jvj+78];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V169)*/
V169=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V169; pile[WZ2]=11633; 
(*f[98])( );     /*SRA3(135,V169,11633,V170)*/
V170=pile[WZ3]; 
pile[v[22]]=V170; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V170,125,V171)*/
V171=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V171; pile[WZ2]=616; 
(*f[42])( );     /*SRA1(135,V171,616,V172)*/
V172=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V174; pile[WZ2]=V172; 
(*f[39])( );     /*SDX0(20,V174,V172,V173)*/
V173=pile[WZ3]; 
pile[v[22]]=V173; 
(*f[40])( );     /*SLG0(V173)*/
l40:if((V125!=2)) goto l41;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l41;
l44:x[jvj+81]=t[x[jvj+81]];
goto l43;
l45:pile[v[22]]=jvj+9; pile[WZ1]=1297; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+9,1297,68)*/
goto l46;
l48:pile[v[22]]=N; pile[WZ1]=jvj+14; pile[WZ2]=jvj+13; pile[WZ3]=jvj+6; pile[WZ4]=jvj+9; 
(*f[1925])( );     /*TRADATOMX0(N,jvj+14,jvj+13,jvj+6,jvj+9)*/
pile[v[22]]=jvj+9; 
(*f[1237])( );     /*TOUCHEFINALE0(jvj+9)*/
pile[WZ1]=N; 
(*f[1926])( );     /*CRENSORIG0(jvj+9,N)*/
(*f[172])( );     /*SORBL1(jvj+9)*/
pile[WZ1]=1232; pile[WZ2]=jvj+71; 
(*f[34])( );     /*CHGC0(jvj+9,1232,jvj+71)*/
pile[v[22]]=80; pile[WZ1]=jvj+14; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(80,jvj+14,jvj+79)*/
if((x[jvj+79]!=616)) goto l42;
V125=g[660];
if((V125<=0)) goto l41;
V126=vg[660];
if((V126!=0)) goto l37;
if((V125<3)) goto l39;
l37:pile[v[22]]=660; pile[WZ1]=11633; pile[WZ2]=0; pile[WZ3]=(-8708); pile[WZ4]=jvj+14; pile[WZ5]=jvj+77; 
(*f[232])( );     /*INTERP3(660,11633,0,(-8708),jvj+14,jvj+77)*/
if((x[jvj+77]==135)) goto l38;
goto l41;
l53:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=170; pile[WZ4]=jvj+88; 
(*f[181])( );     /*QUADRI2(100,20,101,170,jvj+88)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+90; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+90)*/
pile[v[22]]=jvj+88; pile[WZ1]=111; pile[WZ2]=jvj+89; 
(*f[54])( );     /*TRI1(jvj+88,111,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+90; pile[WZ4]=jvj+89; pile[WZ5]=jvj+61; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+90,jvj+89,jvj+61)*/
goto l29;
l54:pile[v[22]]=110; pile[WZ1]=V116; pile[WZ2]=218; pile[WZ3]=jvj+106; pile[WZ4]=jvj+70; 
(*f[692])( );     /*QUADRI13(110,V116,218,jvj+106,jvj+70)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[196])( );     /*PLUF0(jvj+66,jvj+70,jvj+71)*/
goto l33;
}
