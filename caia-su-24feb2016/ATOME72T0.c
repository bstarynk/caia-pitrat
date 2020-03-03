#include "dx.h"
void ATOME72T0(void )
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
v[0]+=77;
x[jvj+1]=20072;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3201&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=208; pile[WZ1]=P; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(208,P,jvj+2)*/
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+2,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+49,jvj+50)*/
if((x[jvj+50]!=25)) goto l26;
pile[v[22]]=1081; pile[WZ1]=P; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(1081,P,jvj+51)*/
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+2,jvj+4)*/
pile[v[22]]=103; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(103,jvj+2,jvj+6)*/
pile[v[22]]=971; pile[WZ1]=P; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(971,P,jvj+52)*/
for(a=x[jvj+52];a>0;a=t[a]) if(s[a]==301) goto l1;
l26:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:x[jvj+24]=0 ;z[jvj+24]=0;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(jvj+2,jvj+3)*/
for(i=x[jvj+3],V31=0;i>0;i=t[i],V31++)  ;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
x[jvj+8]=d[123];z[jvj+8]=0;
x[jvj+74]=x[jvj+51] ;z[jvj+74]=z[jvj+51];
l2:if((x[jvj+74]>0)) goto l3;
if((x[jvj+24]!=0)) goto l22;
pile[v[22]]=1070; pile[WZ1]=jvj+2; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(1070,jvj+2,jvj+38)*/
if((x[jvj+38]==68)) goto l22;
l21:x[jvj+39]=vo[14];z[jvj+39]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(642,jvj+39,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+2,1070,68)*/
pile[WZ1]=1236; 
(*f[35])( );     /*CHGC1(jvj+2,1236,68)*/
V56=vv[33];
if((V56!=0)) goto l27;
V66=x[jvj+2];
pile[v[22]]=20; pile[WZ1]=20072; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,20072,0,V64)*/
V64=pile[WZ3]; 
pile[WZ1]=V66; pile[WZ2]=V64; 
(*f[39])( );     /*SDX0(20,V66,V64,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=V65; 
(*f[40])( );     /*SLG0(V65)*/
l27:pile[v[22]]=101; pile[WZ1]=P; pile[WZ2]=110; pile[WZ3]=(-624); pile[WZ4]=jvj+65; 
(*f[270])( );     /*QUADRI7(101,P,110,(-624),jvj+65)*/
pile[v[22]]=V57; pile[WZ1]=858; pile[WZ2]=jvj+61; 
(*f[46])( );     /*TRI0(V57,858,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+62; 
(*f[189])( );     /*TRI4(jvj+61,v[13],642,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=3201; pile[WZ2]=246; pile[WZ3]=jvj+63; 
(*f[189])( );     /*TRI4(jvj+62,3201,246,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=20072; pile[WZ2]=218; pile[WZ3]=jvj+64; 
(*f[58])( );     /*TRI3(jvj+63,20072,218,jvj+64)*/
pile[v[22]]=jvj+65; pile[WZ1]=(-20); pile[WZ2]=jvj+64; pile[WZ3]=159; pile[WZ4]=jvj+66; 
(*f[298])( );     /*TRIENS1(jvj+65,(-20),jvj+64,159,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+66,1,158,jvj+40)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+40; 
(*f[1296])( );     /*NOUVCONTR0(jvj+2,jvj+40)*/
l22:x[jvj+41]=vo[16];z[jvj+41]=vz[16];
pile[v[22]]=1234; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(1234,jvj+41,jvj+42)*/
for(i=x[jvj+42],V38=0;i>0;i=t[i],V38++)  ;
x[jvj+43]=vo[14];z[jvj+43]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(642,jvj+43,V53)*/
V53=pile[WZ2]; 
V21=incon;
if((V38<=1)) goto l16;
if((V38==2)) goto l17;
if((V38<3)) goto l18;
if((V38>=6)) goto l18;
V21=2;
l7:V14=999999;
x[jvj+75]=x[jvj+24] ;z[jvj+75]=z[jvj+24];
l8:if((x[jvj+75]>0)) goto l9;
if((V14==999999)) goto l26;
x[jvj+33]=0 ;z[jvj+33]=0;
l13:if((x[jvj+24]>0)) goto l14;
pile[v[22]]=jvj+33; pile[WZ1]=V21; pile[WZ2]=jvj+44; 
(*f[3202])( );     /*EXTRAIRE0(jvj+33,V21,jvj+44)*/
l23:if((x[jvj+44]<=0)) goto l26;
x[jvj+34]=s[x[jvj+44]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+44];
pile[v[22]]=208; pile[WZ1]=jvj+34; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(208,jvj+34,jvj+45)*/
x[jvj+36]=0 ;z[jvj+36]=0;
pile[v[22]]=218; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(218,jvj+34,jvj+35)*/
x[jvj+77]=x[jvj+51] ;z[jvj+77]=z[jvj+51];
l19:if((x[jvj+77]<=0)) goto l25;
x[jvj+37]=s[x[jvj+77]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+77];
if((x[jvj+37]==x[jvj+35])) goto l20;
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[68])( );     /*PLUE0(jvj+36,jvj+37)*/
l20:x[jvj+77]=t[x[jvj+77]];
goto l19;
l3:x[jvj+9]=s[x[jvj+74]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+74];
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=25)) goto l4;
x[jvj+12]=d[20];z[jvj+12]=0;
l5:if((x[jvj+12]<=0)) goto l4;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+9; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+13,jvj+9,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=268; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+13,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+9; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+16,jvj+9,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
x[jvj+60]=x[jvj+15] ;z[jvj+60]=z[jvj+15];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+53)*/
pile[WZ3]=485; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+58)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+58; pile[WZ4]=jvj+57; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+58,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=107; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+57,107,jvj+5)*/
pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+57,107,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+59)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+59; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+59,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=107; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+55,107,jvj+7)*/
pile[WZ2]=jvj+60; 
(*f[36])( );     /*PLUSC0(jvj+55,107,jvj+60)*/
pile[v[22]]=jvj+53; pile[WZ1]=111; pile[WZ2]=jvj+54; 
(*f[54])( );     /*TRI1(jvj+53,111,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; pile[WZ2]=103; pile[WZ3]=jvj+56; 
(*f[58])( );     /*TRI3(jvj+54,jvj+55,103,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+57; pile[WZ4]=jvj+56; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+57,jvj+56,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[799])( );if(v[102]) goto l6;     /*NORME0(jvj+19,jvj+20)*/
x[jvj+21]=x[jvj+20] ;z[jvj+21]=z[jvj+20];
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[887])( );     /*VARND0(jvj+21,jvj+22)*/
for(i=x[jvj+22],V30=0;i>0;i=t[i],V30++)  ;
if((V30>=V31)) goto l6;
pile[v[22]]=208; pile[WZ1]=jvj+21; pile[WZ2]=218; pile[WZ3]=jvj+9; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(208,jvj+21,218,jvj+9,jvj+23)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[196])( );     /*PLUF0(jvj+8,jvj+23,jvj+24)*/
l6:x[jvj+12]=t[x[jvj+12]];
goto l5;
l4:x[jvj+74]=t[x[jvj+74]];
goto l2;
l9:x[jvj+25]=s[x[jvj+75]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+75];
pile[v[22]]=208; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(208,jvj+25,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[887])( );     /*VARND0(jvj+26,jvj+27)*/
for(i=x[jvj+27],V15=0;i>0;i=t[i],V15++)  ;
if(V15<V14) V14=V15;
l10:x[jvj+75]=t[x[jvj+75]];
goto l8;
l12:x[jvj+29]=s[x[jvj+76]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+76];
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[760])( );     /*MEMEX0(jvj+28,jvj+29,jvj+30)*/
if((x[jvj+30]==135)) goto l15;
x[jvj+76]=t[x[jvj+76]];
l11:if((x[jvj+76]>0)) goto l12;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+31; 
(*f[68])( );     /*PLUE0(jvj+33,jvj+31)*/
l15:x[jvj+24]=t[x[jvj+24]];
goto l13;
l14:x[jvj+31]=s[x[jvj+24]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+24];
pile[v[22]]=208; pile[WZ1]=jvj+31; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(208,jvj+31,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+32; 
(*f[887])( );     /*VARND0(jvj+28,jvj+32)*/
for(i=x[jvj+32],V44=0;i>0;i=t[i],V44++)  ;
if((V44!=V14)) goto l15;
x[jvj+76]=x[jvj+42] ;z[jvj+76]=z[jvj+42];
goto l11;
l16:V21=5;
goto l7;
l17:V21=3;
goto l7;
l18:V21=1;
goto l7;
l25:x[jvj+48]=x[jvj+45] ;z[jvj+48]=z[jvj+45];
V52=vv[33];
if((V52!=0)) goto l28;
V63=x[jvj+48];
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
l28:pile[v[22]]=101; pile[WZ1]=P; pile[WZ2]=110; pile[WZ3]=(-624); pile[WZ4]=jvj+71; 
(*f[270])( );     /*QUADRI7(101,P,110,(-624),jvj+71)*/
pile[v[22]]=V53; pile[WZ1]=858; pile[WZ2]=jvj+67; 
(*f[46])( );     /*TRI0(V53,858,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+68; 
(*f[189])( );     /*TRI4(jvj+67,v[13],642,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=3201; pile[WZ2]=246; pile[WZ3]=jvj+69; 
(*f[189])( );     /*TRI4(jvj+68,3201,246,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=20072; pile[WZ2]=218; pile[WZ3]=jvj+70; 
(*f[58])( );     /*TRI3(jvj+69,20072,218,jvj+70)*/
pile[v[22]]=jvj+71; pile[WZ1]=(-20); pile[WZ2]=jvj+70; pile[WZ3]=159; pile[WZ4]=jvj+72; 
(*f[298])( );     /*TRIENS1(jvj+71,(-20),jvj+70,159,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+72,1,158,jvj+46)*/
pile[v[22]]=jvj+36; pile[WZ1]=1081; pile[WZ2]=jvj+73; 
(*f[300])( );     /*TRI10(jvj+36,1081,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=jvj+48; pile[WZ2]=208; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+73,jvj+48,208,jvj+47)*/
pile[v[22]]=jvj+46; pile[WZ1]=301; pile[WZ2]=jvj+47; 
(*f[1047])( );     /*EVENEMENT0(jvj+46,301,jvj+47)*/
pile[v[22]]=jvj+41; pile[WZ1]=1234; pile[WZ2]=jvj+48; 
(*f[36])( );     /*PLUSC0(jvj+41,1234,jvj+48)*/
l24:x[jvj+44]=t[x[jvj+44]];
goto l23;
}
