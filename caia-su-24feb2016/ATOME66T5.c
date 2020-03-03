#include "dx.h"
void ATOME66T5(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V9=0,V57=0,V20=0,V26=0,K=0,L=0,V43=0,V49=0,M=0,V59=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=46;
x[jvj+1]=20066;z[jvj+1]=(-100);
x[jvj+2]=5;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3388&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[R]==x[RR])) goto l7;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,R,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=25)) goto l7;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,RR,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=25)) goto l7;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(870,R,V8)*/
V8=pile[WZ2]; 
pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(870,RR,V9)*/
V9=pile[WZ2]; 
if((V8>=V9)) goto l7;
x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+10,V57)*/
V57=pile[WZ2]; 
x[jvj+11]=d[20];z[jvj+11]=0;
l3:if((x[jvj+11]<=0)) goto l7;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+12,R,jvj+13)*/
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=1273)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+13,jvj+16)*/
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+16,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(268,jvj+12,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=R; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+17,R,jvj+18)*/
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+18,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+19)*/
K=V20;
L=V26;
x[jvj+20]=d[20];z[jvj+20]=0;
l5:if((x[jvj+20]<=0)) goto l4;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=jvj+21; pile[WZ1]=RR; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+21,RR,jvj+22)*/
pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=1273)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+22,jvj+25)*/
pile[v[22]]=130; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+25,V43)*/
V43=pile[WZ2]; 
if((K!=V43)) goto l6;
pile[v[22]]=268; pile[WZ1]=jvj+21; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+21,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=RR; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+26,RR,jvj+27)*/
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+27,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+22; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(107,jvj+22,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+19; pile[WZ2]=jvj+29; 
(*f[3179])( );if(v[102]) goto l6;     /*MOINSBAG0(jvj+28,jvj+19,jvj+29)*/
x[jvj+5]=0 ;z[jvj+5]=0;
x[jvj+46]=x[jvj+29] ;z[jvj+46]=z[jvj+29];
l1:if((x[jvj+46]>0)) goto l2;
M=V49;
V59=M-L;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+35)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+36)*/
pile[v[22]]=V57; pile[WZ1]=858; pile[WZ2]=jvj+32; 
(*f[46])( );     /*TRI0(V57,858,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,v[13],642,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=3388; pile[WZ2]=246; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,3388,246,jvj+34)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20066; pile[WZ4]=jvj+34; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(158,1,218,20066,jvj+34,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=159; pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+30,159,jvj+35)*/
pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+30,159,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+37)*/
pile[WZ3]=1273; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,1273,jvj+42)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+45; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+45)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+5; pile[WZ2]=107; pile[WZ3]=jvj+44; 
(*f[301])( );     /*TRI11(jvj+43,jvj+5,107,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+44; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+45,jvj+44,jvj+41)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V59; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,V59,jvj+39)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; pile[WZ2]=103; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+38,jvj+39,103,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+40; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+41,jvj+40,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+30; 
(*f[1296])( );     /*NOUVCONTR0(jvj+31,jvj+30)*/
l6:x[jvj+20]=t[x[jvj+20]];
goto l5;
l2:x[jvj+3]=s[x[jvj+46]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+46];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
pile[v[22]]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+4)*/
x[jvj+46]=t[x[jvj+46]];
goto l1;
l4:x[jvj+11]=t[x[jvj+11]];
goto l3;
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
