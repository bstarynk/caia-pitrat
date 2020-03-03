#include "dx.h"
void ATOME217T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V27=0,V14=0,L=0,V32=0,J=0,V19=0,V34=0,V20=0,I=0,V74=0,V89=0,V90=0,V87=0,V93=0,V94=0,V68=0,V109=0,V18=0,V111=0,V16=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=77;
x[jvj+1]=20217;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3567&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,R,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=770)) goto l16;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(870,R,V19)*/
V19=pile[WZ2]; 
if((V19!=1)) goto l16;
x[jvj+26]=vo[14];z[jvj+26]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(642,jvj+26,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(R,jvj+2)*/
if((x[jvj+2]<=0)) goto l16;
x[jvj+27]=s[x[jvj+2]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+2];
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[1969])( );     /*FNDEND0(509,jvj+3,jvj+4)*/
l1:if((x[jvj+4]>0)) goto l2;
for(i=x[jvj+10],V20=0;i>0;i=t[i],V20++)  ;
if((V20<=1)) goto l16;
pile[v[22]]=jvj+27; pile[WZ1]=jvj+14; 
(*f[1290])( );if(v[102]) goto l16;     /*DEPEXP0(jvj+27,jvj+14)*/
x[jvj+28]=d[168];z[jvj+28]=0;
l15:if((x[jvj+28]<=0)) goto l16;
I=s[x[jvj+28]];
x[jvj+22]=0 ;z[jvj+22]=0;
V32=I-1;
J=0;
l14:if((J<=V32)) goto l5;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+29; 
(*f[299])( );     /*COPEL0(jvj+22,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+29; pile[WZ2]=107; pile[WZ3]=jvj+38; 
(*f[301])( );     /*TRI11(jvj+37,jvj+29,107,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+38,22,100,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+55; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+55)*/
pile[v[22]]=V34; pile[WZ1]=858; pile[WZ2]=jvj+51; 
(*f[46])( );     /*TRI0(V34,858,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+52; 
(*f[189])( );     /*TRI4(jvj+51,v[13],642,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=3567; pile[WZ2]=246; pile[WZ3]=jvj+53; 
(*f[189])( );     /*TRI4(jvj+52,3567,246,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=20217; pile[WZ2]=218; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+53,20217,218,jvj+54)*/
pile[v[22]]=jvj+55; pile[WZ1]=(-20); pile[WZ2]=jvj+54; pile[WZ3]=159; pile[WZ4]=jvj+56; 
(*f[298])( );     /*TRIENS1(jvj+55,(-20),jvj+54,159,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+56,1,158,jvj+30)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+30; 
(*f[1296])( );     /*NOUVCONTR0(jvj+31,jvj+30)*/
x[jvj+28]=t[x[jvj+28]];
goto l15;
l2:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=770)) goto l3;
pile[v[22]]=870; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(870,jvj+5,V27)*/
V27=pile[WZ2]; 
if((V27!=1)) goto l3;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+8; 
(*f[887])( );     /*VARND0(jvj+5,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==x[jvj+27]) goto l4;
l3:x[jvj+4]=t[x[jvj+4]];
goto l1;
l4:pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+5,jvj+9)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+9)*/
goto l3;
l5:x[jvj+19]=0 ;z[jvj+19]=0;
x[jvj+76]=x[jvj+10] ;z[jvj+76]=z[jvj+10];
l9:if((x[jvj+76]>0)) goto l10;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+21; 
(*f[299])( );     /*COPEL0(jvj+19,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=111; pile[WZ2]=jvj+49; 
(*f[54])( );     /*TRI1(jvj+48,111,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+21; pile[WZ2]=107; pile[WZ3]=jvj+50; 
(*f[301])( );     /*TRI11(jvj+49,jvj+21,107,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+50,22,100,jvj+23)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[68])( );     /*PLUE0(jvj+22,jvj+23)*/
J++;
goto l14;
l8:pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+32)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=L; pile[WZ4]=jvj+34; 
(*f[192])( );     /*QUADRI4(100,41,130,L,jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=103; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+33,jvj+34,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+35; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+12,jvj+35,jvj+20)*/
l13:pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[68])( );     /*PLUE0(jvj+19,jvj+20)*/
l11:x[jvj+76]=t[x[jvj+76]];
goto l9;
l10:x[jvj+11]=s[x[jvj+76]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+76];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+39)*/
pile[WZ3]=486; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+42)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+43; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+43)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=1000; pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(100,21,140,1000,jvj+45)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+47; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+47)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+47; pile[WZ4]=jvj+46; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+47,jvj+46,jvj+44)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+42; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+42,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=107; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(jvj+40,107,jvj+43)*/
pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+40,107,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+41; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+41)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+39; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+39,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=107; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+15,107,jvj+40)*/
pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+15,107,jvj+41)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; pile[WZ3]=250; pile[WZ4]=jvj+13; pile[WZ5]=jvj+16; 
(*f[3568])( );     /*SUBSTIVAR0(jvj+13,jvj+14,jvj+15,250,jvj+13,jvj+16)*/
pile[v[22]]=129; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[1157])( );if(v[102]) goto l11;     /*NORME1(129,jvj+16,jvj+17)*/
x[jvj+57]=x[jvj+17] ;z[jvj+57]=z[jvj+17];
pile[v[22]]=111; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,jvj+57,jvj+58)*/
pile[v[22]]=101; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+58,jvj+59)*/
if((x[jvj+59]==485)) goto l28;
if((x[jvj+59]!=486)) goto l30;
pile[v[22]]=107; pile[WZ1]=jvj+57; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(107,jvj+57,jvj+60)*/
l19:if((x[jvj+60]<=0)) goto l30;
x[jvj+61]=s[x[jvj+60]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+60];
pile[v[22]]=130; pile[WZ1]=jvj+61; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(130,jvj+61,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V74; pile[WZ4]=jvj+62; 
(*f[192])( );     /*QUADRI4(100,41,130,V74,jvj+62)*/
pile[v[22]]=20; pile[WZ1]=jvj+62; pile[WZ2]=jvj+18; 
(*f[409])( );     /*TRI14(20,jvj+62,jvj+18)*/
l12:pile[v[22]]=jvj+18; 
(*f[622])( );if(v[102]) goto l11;     /*PGCDE0(jvj+18,V14)*/
V14=pile[WZ1]; 
L=V14;
x[jvj+20]=incon;
if((L<=1)) goto l33;
pile[v[22]]=L; pile[WZ1]=jvj+74; 
(*f[992])( );if(v[102]) goto l32;     /*FACTPREM0(L,jvj+74)*/
for(i=x[jvj+74],V109=0;i>0;i=t[i],V109++)  ;
if((V109!=1)) goto l32;
V18=135;
l6:if((V18==134)) goto l17;
l33:pile[v[22]]=L; pile[WZ1]=jvj+75; 
(*f[992])( );if(v[102]) goto l34;     /*FACTPREM0(L,jvj+75)*/
for(i=x[jvj+75],V111=0;i>0;i=t[i],V111++)  ;
if((V111!=1)) goto l34;
V16=135;
l7:if((V16==135)) goto l8;
if(x[jvj+20]==incon) goto l18;
goto l13;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l17:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+20)*/
goto l33;
l18:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+20)*/
goto l13;
l21:x[jvj+63]=s[x[jvj+71]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+71];
V87=incon;
pile[v[22]]=130; pile[WZ1]=jvj+63; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+63,V89)*/
V89=pile[WZ2]; 
V90=V89;
V87=V90;
l22:pile[v[22]]=111; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+63,jvj+64)*/
pile[v[22]]=101; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+64,jvj+65)*/
if((x[jvj+65]!=486)) goto l26;
pile[v[22]]=107; pile[WZ1]=jvj+63; pile[WZ2]=jvj+66; 
(*f[33])( );     /*FNDE0(107,jvj+63,jvj+66)*/
x[jvj+77]=x[jvj+66] ;z[jvj+77]=z[jvj+66];
l23:if((x[jvj+77]<=0)) goto l26;
x[jvj+67]=s[x[jvj+77]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+77];
pile[v[22]]=130; pile[WZ1]=jvj+67; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(130,jvj+67,V93)*/
V93=pile[WZ2]; 
V94=V93;
V87=V94;
l24:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V87; pile[WZ4]=jvj+68; 
(*f[192])( );     /*QUADRI4(100,41,130,V87,jvj+68)*/
pile[v[22]]=jvj+69; pile[WZ1]=jvj+68; pile[WZ2]=jvj+70; 
(*f[196])( );     /*PLUF0(jvj+69,jvj+68,jvj+70)*/
x[jvj+71]=t[x[jvj+71]];
l20:if((x[jvj+71]>0)) goto l21;
x[jvj+18]=x[jvj+70] ;z[jvj+18]=z[jvj+70];
goto l12;
l25:V87=1;
goto l24;
l26:if(V87==incon) goto l25;
goto l24;
l27:x[jvj+77]=t[x[jvj+77]];
goto l23;
l28:pile[v[22]]=107; pile[WZ1]=jvj+57; pile[WZ2]=jvj+71; 
(*f[33])( );     /*FNDE0(107,jvj+57,jvj+71)*/
x[jvj+70]=0 ;z[jvj+70]=0;
x[jvj+69]=d[29];z[jvj+69]=0;
goto l20;
l29:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+73; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+73)*/
pile[v[22]]=20; pile[WZ1]=jvj+73; pile[WZ2]=jvj+18; 
(*f[409])( );     /*TRI14(20,jvj+73,jvj+18)*/
goto l12;
l30:pile[v[22]]=130; pile[WZ1]=jvj+57; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(130,jvj+57,V68)*/
V68=pile[WZ2]; 
if((V68==0)) goto l29;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V68; pile[WZ4]=jvj+72; 
(*f[192])( );     /*QUADRI4(100,41,130,V68,jvj+72)*/
pile[v[22]]=20; pile[WZ1]=jvj+72; pile[WZ2]=jvj+18; 
(*f[409])( );     /*TRI14(20,jvj+72,jvj+18)*/
goto l12;
l31:x[jvj+60]=t[x[jvj+60]];
goto l19;
l32:V18=134;
goto l6;
l34:V16=134;
goto l7;
}
