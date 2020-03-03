#include "dx.h"
void Z145Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V16=0,V13=0,NA=0,V177=0,V28=0,V63=0,I=0,V49=0,V90=0,V72=0,V76=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=132;
x[jvj+1]=15646;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1858&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=NNNY; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,NNNY,jvj+13)*/
if((x[jvj+13]!=484)) goto l7;
pile[v[22]]=102; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,NNNY,jvj+14)*/
pile[v[22]]=162; pile[WZ1]=jvj+14; 
(*f[219])( );if(v[102]) goto l4;     /*FNDC2(162,jvj+14,V16)*/
V16=pile[WZ2]; 
if((V16!=42)) goto l4;
NNNT=32;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+15; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+15)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+15; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+15,NNNX)*/
l39:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l2:pile[v[22]]=NNNY; pile[WZ1]=jvj+9; 
(*f[200])( );if(v[102]) goto l26;     /*NDD0(NNNY,jvj+9)*/
pile[v[22]]=489; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(489,jvj+9,jvj+10)*/
if((x[jvj+10]<=0)) goto l26;
x[jvj+51]=s[x[jvj+10]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+10];
pile[v[22]]=101; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+51,jvj+52)*/
x[jvj+53]=d[20];z[jvj+53]=0;
l20:if((x[jvj+53]<=0)) goto l26;
x[jvj+54]=s[x[jvj+53]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+53];
pile[v[22]]=jvj+54; pile[WZ1]=jvj+36; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(jvj+54,jvj+36,jvj+55)*/
if((x[NNNY]!=x[jvj+55])) goto l21;
pile[v[22]]=100; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+55,jvj+56)*/
if((x[jvj+56]!=484)) goto l21;
pile[v[22]]=268; pile[WZ1]=jvj+54; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(268,jvj+54,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=jvj+36; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(jvj+57,jvj+36,jvj+58)*/
pile[v[22]]=111; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+58,jvj+59)*/
pile[v[22]]=101; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+59,jvj+60)*/
if((x[jvj+60]!=486)) goto l21;
pile[v[22]]=111; pile[WZ1]=jvj+55; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+55,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+61,jvj+62)*/
if((x[jvj+62]!=21)) goto l21;
pile[v[22]]=jvj+58; pile[WZ1]=jvj+63; 
(*f[887])( );     /*VARND0(jvj+58,jvj+63)*/
if((x[jvj+63]!=0)) goto l21;
pile[v[22]]=107; pile[WZ1]=jvj+58; pile[WZ2]=jvj+64; 
(*f[33])( );     /*FNDE0(107,jvj+58,jvj+64)*/
x[jvj+124]=x[jvj+64] ;z[jvj+124]=z[jvj+64];
l22:if((x[jvj+124]<=0)) goto l21;
x[jvj+65]=s[x[jvj+124]] ;z[jvj+65]=(x[jvj+65]<=sepcte) ? x[jvj+65] : z[jvj+124];
pile[v[22]]=100; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+65,jvj+66)*/
if((x[jvj+66]!=41)) goto l23;
x[jvj+125]=x[jvj+64] ;z[jvj+125]=z[jvj+64];
l24:if((x[jvj+125]<=0)) goto l23;
x[jvj+67]=s[x[jvj+125]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+125];
if((x[jvj+65]==x[jvj+67])) goto l25;
pile[v[22]]=100; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+67,jvj+68)*/
if((x[jvj+68]!=41)) goto l25;
NNNT=205;
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+108; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=111; pile[WZ2]=jvj+109; 
(*f[54])( );     /*TRI1(jvj+108,111,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=jvj+52; pile[WZ2]=103; pile[WZ3]=jvj+110; 
(*f[58])( );     /*TRI3(jvj+109,jvj+52,103,jvj+110)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+110; pile[WZ5]=jvj+69; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+58,jvj+110,jvj+69)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+69; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+36,jvj+69,NNNX)*/
goto l39;
l3:pile[v[22]]=NNNY; pile[WZ1]=jvj+11; 
(*f[200])( );if(v[102]) goto l38;     /*NDD0(NNNY,jvj+11)*/
pile[v[22]]=489; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(489,jvj+11,jvj+12)*/
if((x[jvj+12]<=0)) goto l38;
x[jvj+85]=s[x[jvj+12]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+12];
pile[v[22]]=101; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+85,jvj+86)*/
x[jvj+87]=d[20];z[jvj+87]=0;
l31:if((x[jvj+87]<=0)) goto l38;
x[jvj+88]=s[x[jvj+87]] ;z[jvj+88]=(x[jvj+88]<=sepcte) ? x[jvj+88] : z[jvj+87];
pile[v[22]]=jvj+88; pile[WZ1]=jvj+70; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(jvj+88,jvj+70,jvj+89)*/
if((x[NNNY]!=x[jvj+89])) goto l32;
pile[v[22]]=100; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,jvj+89,jvj+90)*/
if((x[jvj+90]!=484)) goto l32;
pile[v[22]]=268; pile[WZ1]=jvj+88; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(268,jvj+88,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=jvj+70; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(jvj+91,jvj+70,jvj+92)*/
pile[v[22]]=111; pile[WZ1]=jvj+92; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+92,jvj+93)*/
pile[v[22]]=101; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+93,jvj+94)*/
if((x[jvj+94]!=486)) goto l32;
pile[v[22]]=111; pile[WZ1]=jvj+89; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+89,jvj+95)*/
pile[v[22]]=100; pile[WZ1]=jvj+95; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,jvj+95,jvj+96)*/
if((x[jvj+96]!=21)) goto l32;
pile[v[22]]=jvj+92; pile[WZ1]=jvj+97; 
(*f[887])( );     /*VARND0(jvj+92,jvj+97)*/
if((x[jvj+97]!=0)) goto l32;
pile[v[22]]=107; pile[WZ1]=jvj+92; pile[WZ2]=jvj+98; 
(*f[33])( );     /*FNDE0(107,jvj+92,jvj+98)*/
x[jvj+127]=x[jvj+98] ;z[jvj+127]=z[jvj+98];
l33:if((x[jvj+127]<=0)) goto l32;
x[jvj+99]=s[x[jvj+127]] ;z[jvj+99]=(x[jvj+99]<=sepcte) ? x[jvj+99] : z[jvj+127];
pile[v[22]]=100; pile[WZ1]=jvj+99; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(100,jvj+99,jvj+100)*/
if((x[jvj+100]!=41)) goto l34;
x[jvj+128]=x[jvj+98] ;z[jvj+128]=z[jvj+98];
l35:if((x[jvj+128]<=0)) goto l34;
x[jvj+101]=s[x[jvj+128]] ;z[jvj+101]=(x[jvj+101]<=sepcte) ? x[jvj+101] : z[jvj+128];
if((x[jvj+99]==x[jvj+101])) goto l36;
pile[v[22]]=100; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(100,jvj+101,jvj+102)*/
if((x[jvj+102]!=41)) goto l36;
NNNT=205;
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+111; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+111)*/
pile[v[22]]=jvj+111; pile[WZ1]=111; pile[WZ2]=jvj+112; 
(*f[54])( );     /*TRI1(jvj+111,111,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=jvj+86; pile[WZ2]=103; pile[WZ3]=jvj+113; 
(*f[58])( );     /*TRI3(jvj+112,jvj+86,103,jvj+113)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+92; pile[WZ4]=jvj+113; pile[WZ5]=jvj+103; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+92,jvj+113,jvj+103)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+103; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+70,jvj+103,NNNX)*/
goto l39;
l4:pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,NNNY,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=21)) goto l7;
pile[v[22]]=543; pile[WZ1]=NNNY; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(543,NNNY,jvj+2)*/
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==1171)) goto l7;
l5:pile[v[22]]=NNNY; pile[WZ1]=jvj+5; 
(*f[200])( );if(v[102]) goto l7;     /*NDD0(NNNY,jvj+5)*/
pile[v[22]]=489; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(489,jvj+5,jvj+8)*/
if((x[jvj+8]<=0)) goto l7;
x[jvj+18]=s[x[jvj+8]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+8];
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+18,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(498,jvj+5,jvj+6)*/
pile[v[22]]=472; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(472,jvj+6,V7)*/
V7=pile[WZ2]; 
if((V7==1)) goto l6;
l1:pile[v[22]]=NNNY; pile[WZ1]=jvj+7; 
(*f[2023])( );     /*INVEQEQM0(NNNY,jvj+7)*/
if((x[jvj+7]==135)) goto l7;
l6:NNNT=31;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V13; pile[WZ4]=jvj+19; 
(*f[192])( );     /*QUADRI4(100,41,130,V13,jvj+19)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+19; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+19,NNNX)*/
goto l39;
l7:pile[v[22]]=543; pile[WZ1]=NNNY; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(543,NNNY,jvj+20)*/
pile[v[22]]=111; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+20,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=1171)) goto l15;
pile[v[22]]=NNNY; pile[WZ1]=jvj+23; 
(*f[200])( );if(v[102]) goto l15;     /*NDD0(NNNY,jvj+23)*/
pile[v[22]]=489; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(489,jvj+23,jvj+24)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+25; 
(*f[887])( );     /*VARND0(jvj+20,jvj+25)*/
V177=x[jvj+24];
l8:if((V177>0)) goto l9;
pile[v[22]]=107; pile[WZ1]=jvj+20; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(107,jvj+20,jvj+27)*/
pile[v[22]]=184; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(184,jvj+20,jvj+28)*/
x[jvj+129]=x[jvj+27] ;z[jvj+129]=z[jvj+27];
l40:if((x[jvj+129]>0)) goto l41;
l15:pile[v[22]]=538; pile[WZ1]=NNNY; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(538,NNNY,jvj+36)*/
pile[v[22]]=111; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+36,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+38]!=25)) goto l26;
pile[v[22]]=NNNY; pile[WZ1]=jvj+39; 
(*f[200])( );if(v[102]) goto l2;     /*NDD0(NNNY,jvj+39)*/
pile[v[22]]=489; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(489,jvj+39,jvj+40)*/
x[jvj+41]=d[20];z[jvj+41]=0;
l16:if((x[jvj+41]<=0)) goto l2;
x[jvj+42]=s[x[jvj+41]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+41];
pile[v[22]]=jvj+42; pile[WZ1]=jvj+36; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+42,jvj+36,jvj+43)*/
if((x[NNNY]!=x[jvj+43])) goto l17;
pile[v[22]]=100; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+43,jvj+44)*/
if((x[jvj+44]!=484)) goto l17;
pile[v[22]]=111; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+43,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+45,jvj+46)*/
if((x[jvj+46]!=21)) goto l17;
pile[v[22]]=268; pile[WZ1]=jvj+42; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(268,jvj+42,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+36; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+47,jvj+36,jvj+48)*/
pile[v[22]]=130; pile[WZ1]=jvj+48; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+48,V63)*/
V63=pile[WZ2]; 
I=V63;
x[jvj+123]=x[jvj+40] ;z[jvj+123]=z[jvj+40];
l18:if((x[jvj+123]<=0)) goto l17;
x[jvj+49]=s[x[jvj+123]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+123];
pile[v[22]]=130; pile[WZ1]=jvj+49; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+49,V49)*/
V49=pile[WZ2]; 
if((I!=V49)) goto l19;
NNNT=202;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+50)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+50; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+36,jvj+50,NNNX)*/
goto l39;
l9:NA=s[V177];
for(a=x[jvj+25];a>0;a=t[a]) if(s[a]==NA) goto l10;
NNNT=70;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+26)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+26; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+20,jvj+26,NNNX)*/
goto l39;
l10:V177=t[V177];
goto l8;
l12:x[jvj+27]=t[x[jvj+27]];
l11:if((x[jvj+27]<=0)) goto l15;
V28=s[x[jvj+27]];
if((x[NNNY]!=V28)) goto l12;
x[jvj+122]=x[jvj+28] ;z[jvj+122]=z[jvj+28];
l13:if((x[jvj+122]<=0)) goto l12;
x[jvj+31]=s[x[jvj+122]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+122];
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[200])( );if(v[102]) goto l14;     /*NDD0(jvj+31,jvj+32)*/
for(a=x[jvj+24];a>0;a=t[a]) if(s[a]==x[jvj+32]) goto l46;
l14:x[jvj+122]=t[x[jvj+122]];
goto l13;
l17:x[jvj+41]=t[x[jvj+41]];
goto l16;
l19:x[jvj+123]=t[x[jvj+123]];
goto l18;
l21:x[jvj+53]=t[x[jvj+53]];
goto l20;
l23:x[jvj+124]=t[x[jvj+124]];
goto l22;
l25:x[jvj+125]=t[x[jvj+125]];
goto l24;
l26:pile[v[22]]=539; pile[WZ1]=NNNY; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(539,NNNY,jvj+70)*/
pile[v[22]]=111; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+70,jvj+71)*/
pile[v[22]]=101; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+71,jvj+72)*/
if((x[jvj+72]!=25)) goto l38;
pile[v[22]]=NNNY; pile[WZ1]=jvj+73; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(NNNY,jvj+73)*/
pile[v[22]]=489; pile[WZ2]=jvj+74; 
(*f[33])( );     /*FNDE0(489,jvj+73,jvj+74)*/
x[jvj+75]=d[20];z[jvj+75]=0;
l27:if((x[jvj+75]<=0)) goto l3;
x[jvj+76]=s[x[jvj+75]] ;z[jvj+76]=(x[jvj+76]<=sepcte) ? x[jvj+76] : z[jvj+75];
pile[v[22]]=jvj+76; pile[WZ1]=jvj+70; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(jvj+76,jvj+70,jvj+77)*/
if((x[NNNY]!=x[jvj+77])) goto l28;
pile[v[22]]=100; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+77,jvj+78)*/
if((x[jvj+78]!=484)) goto l28;
pile[v[22]]=111; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+77,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+79,jvj+80)*/
if((x[jvj+80]!=21)) goto l28;
pile[v[22]]=268; pile[WZ1]=jvj+76; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(268,jvj+76,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+70; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(jvj+81,jvj+70,jvj+82)*/
pile[v[22]]=130; pile[WZ1]=jvj+82; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+82,V90)*/
V90=pile[WZ2]; 
V72=V90;
x[jvj+126]=x[jvj+74] ;z[jvj+126]=z[jvj+74];
l29:if((x[jvj+126]<=0)) goto l28;
x[jvj+83]=s[x[jvj+126]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+126];
pile[v[22]]=130; pile[WZ1]=jvj+83; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(130,jvj+83,V76)*/
V76=pile[WZ2]; 
if((V72!=V76)) goto l30;
NNNT=202;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+84; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+84)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+84; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+70,jvj+84,NNNX)*/
goto l39;
l28:x[jvj+75]=t[x[jvj+75]];
goto l27;
l30:x[jvj+126]=t[x[jvj+126]];
goto l29;
l32:x[jvj+87]=t[x[jvj+87]];
goto l31;
l34:x[jvj+127]=t[x[jvj+127]];
goto l33;
l36:x[jvj+128]=t[x[jvj+128]];
goto l35;
l38:x[NNNX]=NNNT=incon;
l37:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l41:x[jvj+114]=s[x[jvj+129]] ;z[jvj+114]=(x[jvj+114]<=sepcte) ? x[jvj+114] : z[jvj+129];
pile[v[22]]=jvj+114; pile[WZ1]=NNNY; pile[WZ2]=jvj+115; 
(*f[760])( );     /*MEMEX0(jvj+114,NNNY,jvj+115)*/
if((x[jvj+115]==135)) goto l42;
x[jvj+129]=t[x[jvj+129]];
goto l40;
l42:x[jvj+116]=0 ;z[jvj+116]=0;
x[jvj+130]=x[jvj+27] ;z[jvj+130]=z[jvj+27];
l43:if((x[jvj+130]>0)) goto l44;
x[jvj+29]=x[jvj+116] ;z[jvj+29]=z[jvj+116];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[299])( );     /*COPEL0(jvj+29,jvj+30)*/
goto l11;
l44:x[jvj+117]=s[x[jvj+130]] ;z[jvj+117]=(x[jvj+117]<=sepcte) ? x[jvj+117] : z[jvj+130];
if((x[jvj+117]==x[jvj+114])) goto l45;
pile[v[22]]=jvj+116; pile[WZ1]=jvj+117; 
(*f[68])( );     /*PLUE0(jvj+116,jvj+117)*/
l45:x[jvj+130]=t[x[jvj+130]];
goto l43;
l46:x[jvj+131]=x[jvj+28] ;z[jvj+131]=z[jvj+28];
l47:if((x[jvj+131]>0)) goto l48;
goto l14;
l48:x[jvj+118]=s[x[jvj+131]] ;z[jvj+118]=(x[jvj+118]<=sepcte) ? x[jvj+118] : z[jvj+131];
pile[v[22]]=jvj+118; pile[WZ1]=jvj+31; pile[WZ2]=jvj+119; 
(*f[760])( );     /*MEMEX0(jvj+118,jvj+31,jvj+119)*/
if((x[jvj+119]==135)) goto l49;
x[jvj+131]=t[x[jvj+131]];
goto l47;
l49:x[jvj+120]=0 ;z[jvj+120]=0;
x[jvj+132]=x[jvj+28] ;z[jvj+132]=z[jvj+28];
l50:if((x[jvj+132]>0)) goto l51;
x[jvj+33]=x[jvj+120] ;z[jvj+33]=z[jvj+120];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[299])( );     /*COPEL0(jvj+33,jvj+34)*/
NNNT=72;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1171; pile[WZ4]=jvj+105; 
(*f[181])( );     /*QUADRI2(100,20,101,1171,jvj+105)*/
pile[v[22]]=jvj+34; pile[WZ1]=184; pile[WZ2]=jvj+104; 
(*f[300])( );     /*TRI10(jvj+34,184,jvj+104)*/
pile[v[22]]=jvj+104; pile[WZ1]=jvj+105; pile[WZ2]=111; pile[WZ3]=jvj+106; 
(*f[58])( );     /*TRI3(jvj+104,jvj+105,111,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=jvj+30; pile[WZ2]=107; pile[WZ3]=jvj+107; 
(*f[301])( );     /*TRI11(jvj+106,jvj+30,107,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+107,22,100,jvj+35)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+35; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+20,jvj+35,NNNX)*/
goto l39;
l51:x[jvj+121]=s[x[jvj+132]] ;z[jvj+121]=(x[jvj+121]<=sepcte) ? x[jvj+121] : z[jvj+132];
if((x[jvj+121]==x[jvj+118])) goto l52;
pile[v[22]]=jvj+120; pile[WZ1]=jvj+121; 
(*f[68])( );     /*PLUE0(jvj+120,jvj+121)*/
l52:x[jvj+132]=t[x[jvj+132]];
goto l50;
}
