#include "dx.h"
void ATOME72T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V31=0,V30=0,V14=0,V15=0,V44=0,V21=0,V52=0,V63=0,V60=0,V61=0,V62=0,V56=0,V66=0,V64=0,V65=0,V57=0,V38=0,V53=0;
int P;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=78;
x[jvj+1]=20072;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3449&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=208; pile[WZ1]=P; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(208,P,jvj+3)*/
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+3,jvj+50)*/
pile[v[22]]=101; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+50,jvj+51)*/
if((x[jvj+51]!=25)) goto l26;
pile[v[22]]=1081; pile[WZ1]=P; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(1081,P,jvj+52)*/
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+3,jvj+5)*/
pile[v[22]]=103; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(103,jvj+3,jvj+7)*/
pile[v[22]]=971; pile[WZ1]=P; pile[WZ2]=jvj+53; 
(*f[33])( );     /*FNDE0(971,P,jvj+53)*/
for(a=x[jvj+53];a>0;a=t[a]) if(s[a]==301) goto l1;
l26:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l1:x[jvj+25]=0 ;z[jvj+25]=0;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(jvj+3,jvj+4)*/
for(i=x[jvj+4],V31=0;i>0;i=t[i],V31++)  ;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
x[jvj+9]=d[123];z[jvj+9]=0;
x[jvj+75]=x[jvj+52] ;z[jvj+75]=z[jvj+52];
l2:if((x[jvj+75]>0)) goto l3;
if((x[jvj+25]!=0)) goto l22;
pile[v[22]]=1070; pile[WZ1]=jvj+3; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(1070,jvj+3,jvj+39)*/
if((x[jvj+39]==68)) goto l22;
l21:x[jvj+40]=vo[14];z[jvj+40]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(642,jvj+40,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+3,1070,68)*/
pile[WZ1]=1236; 
(*f[35])( );     /*CHGC1(jvj+3,1236,68)*/
V56=vv[33];
if((V56!=0)) goto l27;
V66=x[jvj+3];
pile[v[22]]=20; pile[WZ1]=20072; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,20072,0,V64)*/
V64=pile[WZ3]; 
pile[WZ1]=V66; pile[WZ2]=V64; 
(*f[39])( );     /*SDX0(20,V66,V64,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=V65; 
(*f[40])( );     /*SLG0(V65)*/
l27:pile[v[22]]=101; pile[WZ1]=P; pile[WZ2]=110; pile[WZ3]=(-624); pile[WZ4]=jvj+66; 
(*f[270])( );     /*QUADRI7(101,P,110,(-624),jvj+66)*/
pile[v[22]]=V57; pile[WZ1]=858; pile[WZ2]=jvj+62; 
(*f[46])( );     /*TRI0(V57,858,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+63; 
(*f[189])( );     /*TRI4(jvj+62,v[13],642,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=3449; pile[WZ2]=246; pile[WZ3]=jvj+64; 
(*f[189])( );     /*TRI4(jvj+63,3449,246,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=20072; pile[WZ2]=218; pile[WZ3]=jvj+65; 
(*f[58])( );     /*TRI3(jvj+64,20072,218,jvj+65)*/
pile[v[22]]=jvj+66; pile[WZ1]=(-20); pile[WZ2]=jvj+65; pile[WZ3]=159; pile[WZ4]=jvj+67; 
(*f[298])( );     /*TRIENS1(jvj+66,(-20),jvj+65,159,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+67,1,158,jvj+41)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+41; 
(*f[1296])( );     /*NOUVCONTR0(jvj+3,jvj+41)*/
l22:x[jvj+42]=vo[16];z[jvj+42]=vz[16];
pile[v[22]]=1234; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(1234,jvj+42,jvj+43)*/
for(i=x[jvj+43],V38=0;i>0;i=t[i],V38++)  ;
x[jvj+44]=vo[14];z[jvj+44]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(642,jvj+44,V53)*/
V53=pile[WZ2]; 
V21=incon;
if((V38<=1)) goto l16;
if((V38==2)) goto l17;
if((V38<3)) goto l18;
if((V38>=6)) goto l18;
V21=2;
l7:V14=999999;
x[jvj+76]=x[jvj+25] ;z[jvj+76]=z[jvj+25];
l8:if((x[jvj+76]>0)) goto l9;
if((V14==999999)) goto l26;
x[jvj+34]=0 ;z[jvj+34]=0;
l13:if((x[jvj+25]>0)) goto l14;
pile[v[22]]=jvj+34; pile[WZ1]=V21; pile[WZ2]=jvj+45; 
(*f[3202])( );     /*EXTRAIRE0(jvj+34,V21,jvj+45)*/
l23:if((x[jvj+45]<=0)) goto l26;
x[jvj+35]=s[x[jvj+45]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+45];
pile[v[22]]=208; pile[WZ1]=jvj+35; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(208,jvj+35,jvj+46)*/
x[jvj+37]=0 ;z[jvj+37]=0;
pile[v[22]]=218; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(218,jvj+35,jvj+36)*/
x[jvj+78]=x[jvj+52] ;z[jvj+78]=z[jvj+52];
l19:if((x[jvj+78]<=0)) goto l25;
x[jvj+38]=s[x[jvj+78]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+78];
if((x[jvj+38]==x[jvj+36])) goto l20;
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[68])( );     /*PLUE0(jvj+37,jvj+38)*/
l20:x[jvj+78]=t[x[jvj+78]];
goto l19;
l3:x[jvj+10]=s[x[jvj+75]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+75];
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=25)) goto l4;
x[jvj+13]=d[20];z[jvj+13]=0;
l5:if((x[jvj+13]<=0)) goto l4;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+10; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+14,jvj+10,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+15,jvj+16)*/
pile[v[22]]=268; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+14,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+10; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+17,jvj+10,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
x[jvj+61]=x[jvj+16] ;z[jvj+61]=z[jvj+16];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+54)*/
pile[WZ3]=485; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+59)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+59; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+59,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=107; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+58,107,jvj+6)*/
pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+58,107,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+60; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+60)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+60; pile[WZ4]=jvj+56; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+60,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=107; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+56,107,jvj+8)*/
pile[WZ2]=jvj+61; 
(*f[36])( );     /*PLUSC0(jvj+56,107,jvj+61)*/
pile[v[22]]=jvj+54; pile[WZ1]=111; pile[WZ2]=jvj+55; 
(*f[54])( );     /*TRI1(jvj+54,111,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; pile[WZ2]=103; pile[WZ3]=jvj+57; 
(*f[58])( );     /*TRI3(jvj+55,jvj+56,103,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+57; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+58,jvj+57,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[799])( );if(v[102]) goto l6;     /*NORME0(jvj+20,jvj+21)*/
x[jvj+22]=x[jvj+21] ;z[jvj+22]=z[jvj+21];
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[887])( );     /*VARND0(jvj+22,jvj+23)*/
for(i=x[jvj+23],V30=0;i>0;i=t[i],V30++)  ;
if((V30>=V31)) goto l6;
pile[v[22]]=208; pile[WZ1]=jvj+22; pile[WZ2]=218; pile[WZ3]=jvj+10; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(208,jvj+22,218,jvj+10,jvj+24)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[196])( );     /*PLUF0(jvj+9,jvj+24,jvj+25)*/
l6:x[jvj+13]=t[x[jvj+13]];
goto l5;
l4:x[jvj+75]=t[x[jvj+75]];
goto l2;
l9:x[jvj+26]=s[x[jvj+76]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+76];
pile[v[22]]=208; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(208,jvj+26,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[887])( );     /*VARND0(jvj+27,jvj+28)*/
for(i=x[jvj+28],V15=0;i>0;i=t[i],V15++)  ;
if(V15<V14) V14=V15;
l10:x[jvj+76]=t[x[jvj+76]];
goto l8;
l12:x[jvj+30]=s[x[jvj+77]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+77];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[760])( );     /*MEMEX0(jvj+29,jvj+30,jvj+31)*/
if((x[jvj+31]==135)) goto l15;
x[jvj+77]=t[x[jvj+77]];
l11:if((x[jvj+77]>0)) goto l12;
pile[v[22]]=jvj+34; pile[WZ1]=jvj+32; 
(*f[68])( );     /*PLUE0(jvj+34,jvj+32)*/
l15:x[jvj+25]=t[x[jvj+25]];
goto l13;
l14:x[jvj+32]=s[x[jvj+25]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+25];
pile[v[22]]=208; pile[WZ1]=jvj+32; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(208,jvj+32,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+33; 
(*f[887])( );     /*VARND0(jvj+29,jvj+33)*/
for(i=x[jvj+33],V44=0;i>0;i=t[i],V44++)  ;
if((V44!=V14)) goto l15;
x[jvj+77]=x[jvj+43] ;z[jvj+77]=z[jvj+43];
goto l11;
l16:V21=5;
goto l7;
l17:V21=3;
goto l7;
l18:V21=1;
goto l7;
l25:x[jvj+49]=x[jvj+46] ;z[jvj+49]=z[jvj+46];
V52=vv[33];
if((V52!=0)) goto l28;
V63=x[jvj+49];
pile[v[22]]=20; pile[WZ1]=20072; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,20072,0,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V60; pile[WZ2]=1086; 
(*f[42])( );     /*SRA1(135,V60,1086,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V63; pile[WZ2]=V61; 
(*f[39])( );     /*SDX0(20,V63,V61,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; 
(*f[40])( );     /*SLG0(V62)*/
l28:pile[v[22]]=101; pile[WZ1]=P; pile[WZ2]=110; pile[WZ3]=(-624); pile[WZ4]=jvj+72; 
(*f[270])( );     /*QUADRI7(101,P,110,(-624),jvj+72)*/
pile[v[22]]=V53; pile[WZ1]=858; pile[WZ2]=jvj+68; 
(*f[46])( );     /*TRI0(V53,858,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+69; 
(*f[189])( );     /*TRI4(jvj+68,v[13],642,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=3449; pile[WZ2]=246; pile[WZ3]=jvj+70; 
(*f[189])( );     /*TRI4(jvj+69,3449,246,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=20072; pile[WZ2]=218; pile[WZ3]=jvj+71; 
(*f[58])( );     /*TRI3(jvj+70,20072,218,jvj+71)*/
pile[v[22]]=jvj+72; pile[WZ1]=(-20); pile[WZ2]=jvj+71; pile[WZ3]=159; pile[WZ4]=jvj+73; 
(*f[298])( );     /*TRIENS1(jvj+72,(-20),jvj+71,159,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+73,1,158,jvj+47)*/
pile[v[22]]=jvj+37; pile[WZ1]=1081; pile[WZ2]=jvj+74; 
(*f[300])( );     /*TRI10(jvj+37,1081,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+49; pile[WZ2]=208; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+74,jvj+49,208,jvj+48)*/
pile[v[22]]=jvj+47; pile[WZ1]=301; pile[WZ2]=jvj+48; 
(*f[1047])( );     /*EVENEMENT0(jvj+47,301,jvj+48)*/
pile[v[22]]=jvj+42; pile[WZ1]=1234; pile[WZ2]=jvj+49; 
(*f[36])( );     /*PLUSC0(jvj+42,1234,jvj+49)*/
l24:x[jvj+45]=t[x[jvj+45]];
goto l23;
}
