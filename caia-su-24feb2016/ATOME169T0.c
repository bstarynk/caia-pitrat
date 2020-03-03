#include "dx.h"
void ATOME169T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,V42=0,V51=0,V61=0,V33=0,I=0,V58=0,K=0,V12=0,V13=0,L=0,V20=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=68;
x[jvj+1]=20169;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3741&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,R,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=625)) goto l12;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,RR,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=625)) goto l12;
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(160,R,jvj+13)*/
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+13,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=RR; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(160,RR,jvj+14)*/
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+14,V51)*/
V51=pile[WZ2]; 
x[jvj+15]=vo[16];z[jvj+15]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[1948])( );if(v[102]) goto l12;     /*FNDOND0(498,jvj+15,jvj+16)*/
pile[v[22]]=1182; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1182,jvj+16,jvj+17)*/
if((68!=x[jvj+17])) goto l12;
x[jvj+18]=vo[14];z[jvj+18]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+18,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=1294; pile[WZ1]=RR; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1294,RR,jvj+19)*/
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==1483) goto l4;
l12:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l4:x[jvj+20]=d[20];z[jvj+20]=0;
l3:if((x[jvj+20]<=0)) goto l12;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=jvj+21; pile[WZ1]=R; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+21,R,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]!=484)) goto l5;
pile[v[22]]=268; pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+21,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=R; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+24,R,jvj+25)*/
pile[v[22]]=130; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+25,V33)*/
V33=pile[WZ2]; 
x[jvj+26]=x[jvj+22] ;z[jvj+26]=z[jvj+22];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[200])( );if(v[102]) goto l5;     /*NDD0(jvj+26,jvj+27)*/
x[jvj+6]=x[jvj+27] ;z[jvj+6]=z[jvj+27];
pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+26,jvj+28)*/
I=V33;
x[jvj+29]=d[20];z[jvj+29]=0;
l6:if((x[jvj+29]<=0)) goto l5;
x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=jvj+30; pile[WZ1]=RR; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+30,RR,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[887])( );     /*VARND0(jvj+31,jvj+32)*/
for(a=x[jvj+32];a>0;a=t[a]) if(s[a]==x[jvj+6]) goto l8;
l7:x[jvj+29]=t[x[jvj+29]];
goto l6;
l5:x[jvj+20]=t[x[jvj+20]];
goto l3;
l8:pile[v[22]]=jvj+31; pile[WZ1]=jvj+33; 
(*f[3517])( );     /*DECSOM2(jvj+31,jvj+33)*/
x[jvj+68]=x[jvj+33] ;z[jvj+68]=z[jvj+33];
l1:if((x[jvj+68]<=0)) goto l7;
x[jvj+3]=s[x[jvj+68]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+68];
pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+3,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(jvj+4,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==x[jvj+6]) goto l9;
l2:x[jvj+68]=t[x[jvj+68]];
goto l1;
l9:pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(218,jvj+3,jvj+34)*/
pile[v[22]]=111; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+34,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]!=596)) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+34; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+34,jvj+37)*/
pile[v[22]]=130; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+37,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+34; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+34,jvj+38)*/
pile[v[22]]=268; pile[WZ1]=jvj+30; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(268,jvj+30,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=RR; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+39,RR,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(jvj+40,jvj+41)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+38; pile[WZ2]=jvj+42; 
(*f[760])( );     /*MEMEX0(jvj+22,jvj+38,jvj+42)*/
if((x[jvj+42]==135)) goto l10;
goto l7;
l10:K=V58;
pile[v[22]]=V51; pile[WZ1]=I; pile[WZ2]=K; 
(*f[1043])( );if(v[102]) goto l7;     /*MODPUIPOS0(V51,I,K,V12)*/
V12=pile[WZ3]; 
pile[WZ1]=V42; 
(*f[1041])( );if(v[102]) goto l7;     /*MODPUI0(V51,V42,K,V13)*/
V13=pile[WZ3]; 
L=V13;
if((L==1)) goto l11;
if((L!=0)) goto l7;
pile[v[22]]=280; pile[WZ1]=jvj+6; 
(*f[1975])( );if(v[102]) goto l7;     /*FNDCND0(280,jvj+6,V21)*/
V21=pile[WZ2]; 
if((V21>0)) goto l11;
goto l7;
l11:V20=L*V12;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V20; pile[WZ4]=jvj+43; 
(*f[192])( );     /*QUADRI4(100,41,130,V20,jvj+43)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+43; pile[WZ2]=jvj+31; pile[WZ3]=jvj+44; 
(*f[1589])( );     /*SUBSTITUTION0(jvj+34,jvj+43,jvj+31,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; 
(*f[255])( );     /*COPEXP0(jvj+44,jvj+45)*/
x[jvj+56]=x[jvj+41] ;z[jvj+56]=z[jvj+41];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+49)*/
pile[WZ3]=625; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+54)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V51; pile[WZ4]=jvj+52; 
(*f[192])( );     /*QUADRI4(100,41,130,V51,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=160; pile[WZ2]=jvj+53; 
(*f[54])( );     /*TRI1(jvj+52,160,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; pile[WZ2]=111; pile[WZ3]=jvj+55; 
(*f[58])( );     /*TRI3(jvj+53,jvj+54,111,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; pile[WZ2]=103; pile[WZ3]=jvj+57; 
(*f[58])( );     /*TRI3(jvj+55,jvj+56,103,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+57; pile[WZ5]=jvj+50; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+45,jvj+57,jvj+50)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+58)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+60; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+60)*/
pile[v[22]]=jvj+58; pile[WZ1]=111; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+58,111,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; pile[WZ2]=103; pile[WZ3]=jvj+61; 
(*f[58])( );     /*TRI3(jvj+59,jvj+60,103,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+61; pile[WZ5]=jvj+51; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+61,jvj+51)*/
pile[WZ2]=111; pile[WZ3]=jvj+49; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+49,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=107; pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(jvj+46,107,jvj+50)*/
pile[WZ2]=jvj+51; 
(*f[36])( );     /*PLUSC0(jvj+46,107,jvj+51)*/
pile[WZ1]=jvj+47; 
(*f[799])( );if(v[102]) goto l7;     /*NORME0(jvj+46,jvj+47)*/
x[jvj+7]=x[jvj+47] ;z[jvj+7]=z[jvj+47];
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]==135)) goto l7;
l13:pile[v[22]]=101; pile[WZ1]=RR; pile[WZ2]=110; pile[WZ3]=(-631); pile[WZ4]=jvj+65; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+65)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+66; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+66)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+67; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+67)*/
pile[v[22]]=V61; pile[WZ1]=858; pile[WZ2]=jvj+62; 
(*f[46])( );     /*TRI0(V61,858,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+63; 
(*f[189])( );     /*TRI4(jvj+62,v[13],642,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=3741; pile[WZ2]=246; pile[WZ3]=jvj+64; 
(*f[189])( );     /*TRI4(jvj+63,3741,246,jvj+64)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20169; pile[WZ4]=jvj+64; pile[WZ5]=jvj+48; 
(*f[269])( );     /*QUADRI6(158,1,218,20169,jvj+64,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=159; pile[WZ2]=jvj+65; 
(*f[36])( );     /*PLUSC0(jvj+48,159,jvj+65)*/
pile[WZ2]=jvj+66; 
(*f[36])( );     /*PLUSC0(jvj+48,159,jvj+66)*/
pile[WZ2]=jvj+67; 
(*f[36])( );     /*PLUSC0(jvj+48,159,jvj+67)*/
pile[v[22]]=RR; pile[WZ1]=jvj+7; pile[WZ2]=jvj+48; 
(*f[1558])( );     /*RESTAURE0(RR,jvj+7,jvj+48)*/
goto l7;
}
