#include "dx.h"
void ATOME223T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V47=0,P=0,V18=0,V48=0,V21=0,V42=0,I=0,V8=0,V20=0,V19=0;
int D,R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=58;
x[jvj+1]=20223;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3528&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,R,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=625)) goto l8;
x[jvj+18]=vo[16];z[jvj+18]=vz[16];
pile[v[22]]=1353; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1353,jvj+18,jvj+19)*/
if((x[jvj+19]!=68)) goto l8;
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(160,R,jvj+20)*/
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+20,P)*/
P=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[1948])( );if(v[102]) goto l8;     /*FNDOND0(498,jvj+18,jvj+21)*/
pile[v[22]]=1182; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1182,jvj+21,jvj+22)*/
if((68!=x[jvj+22])) goto l8;
pile[v[22]]=280; pile[WZ1]=D; 
(*f[1975])( );if(v[102]) goto l8;     /*FNDCND0(280,D,V18)*/
V18=pile[WZ2]; 
if((V18<0)) goto l8;
x[jvj+23]=vo[14];z[jvj+23]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+23,V48)*/
V48=pile[WZ2]; 
x[jvj+24]=d[20];z[jvj+24]=0;
l6:if((x[jvj+24]<=0)) goto l8;
x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=jvj+25; pile[WZ1]=R; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+25,R,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[3517])( );     /*DECSOM2(jvj+26,jvj+27)*/
x[jvj+57]=x[jvj+27] ;z[jvj+57]=z[jvj+27];
l1:if((x[jvj+57]<=0)) goto l7;
x[jvj+3]=s[x[jvj+57]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+57];
pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+3,jvj+4)*/
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=596)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+4,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=41)) goto l2;
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+4,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[200])( );if(v[102]) goto l2;     /*NDD0(jvj+9,jvj+10)*/
if((x[jvj+10]!=x[D])) goto l2;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+3,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(218,jvj+3,jvj+28)*/
pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+28,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]!=596)) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+28,jvj+31)*/
pile[v[22]]=130; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+31,V42)*/
V42=pile[WZ2]; 
x[jvj+14]=0 ;z[jvj+14]=0;
x[jvj+58]=x[jvj+27] ;z[jvj+58]=z[jvj+27];
l3:if((x[jvj+58]>0)) goto l4;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+32; 
(*f[299])( );     /*COPEL0(jvj+14,jvj+32)*/
pile[v[22]]=268; pile[WZ1]=jvj+25; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(268,jvj+25,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=R; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+33,R,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; 
(*f[255])( );     /*COPEXP0(jvj+34,jvj+35)*/
I=V42;
pile[v[22]]=P; pile[WZ1]=V18; pile[WZ2]=I; 
(*f[1041])( );if(v[102]) goto l7;     /*MODPUI0(P,V18,I,V8)*/
V8=pile[WZ3]; 
V20=V21*V8;
V19=V20%P;
if((V19!=0)) goto l7;
x[jvj+55]=x[jvj+32] ;z[jvj+55]=z[jvj+32];
x[jvj+50]=x[jvj+35] ;z[jvj+50]=z[jvj+35];
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+43; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+43)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+44)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+45)*/
pile[v[22]]=V48; pile[WZ1]=858; pile[WZ2]=jvj+40; 
(*f[46])( );     /*TRI0(V48,858,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+41; 
(*f[189])( );     /*TRI4(jvj+40,v[13],642,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=3528; pile[WZ2]=246; pile[WZ3]=jvj+42; 
(*f[189])( );     /*TRI4(jvj+41,3528,246,jvj+42)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20223; pile[WZ4]=jvj+42; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(158,1,218,20223,jvj+42,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=159; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(jvj+36,159,jvj+43)*/
pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+36,159,jvj+44)*/
pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+36,159,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+48)*/
pile[WZ3]=485; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=111; pile[WZ2]=jvj+54; 
(*f[54])( );     /*TRI1(jvj+53,111,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; pile[WZ2]=107; pile[WZ3]=jvj+56; 
(*f[301])( );     /*TRI11(jvj+54,jvj+55,107,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+52; 
(*f[58])( );     /*TRI3(jvj+56,22,100,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=P; pile[WZ4]=jvj+46; 
(*f[192])( );     /*QUADRI4(100,41,130,P,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=160; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,160,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; pile[WZ2]=111; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+47,jvj+48,111,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+50; pile[WZ2]=103; pile[WZ3]=jvj+51; 
(*f[58])( );     /*TRI3(jvj+49,jvj+50,103,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+52; pile[WZ4]=jvj+51; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+52,jvj+51,jvj+37)*/
pile[v[22]]=R; pile[WZ1]=jvj+37; pile[WZ2]=jvj+36; 
(*f[1558])( );     /*RESTAURE0(R,jvj+37,jvj+36)*/
l7:x[jvj+24]=t[x[jvj+24]];
goto l6;
l2:x[jvj+57]=t[x[jvj+57]];
goto l1;
l4:x[jvj+11]=s[x[jvj+58]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+58];
if((x[jvj+11]==x[jvj+3])) goto l5;
pile[v[22]]=117; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+11,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(218,jvj+11,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+38)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V47; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,V47,jvj+39)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+38; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+38,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=107; pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+15,107,jvj+39)*/
pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+15,107,jvj+13)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+14,jvj+15)*/
l5:x[jvj+58]=t[x[jvj+58]];
goto l3;
l8:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
