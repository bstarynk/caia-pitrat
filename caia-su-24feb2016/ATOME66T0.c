#include "dx.h"
void ATOME66T0(void )
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
v[0]+=45;
x[jvj+1]=20066;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3178&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[R]==x[RR])) goto l7;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,R,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=25)) goto l7;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,RR,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=25)) goto l7;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(870,R,V8)*/
V8=pile[WZ2]; 
pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(870,RR,V9)*/
V9=pile[WZ2]; 
if((V8>=V9)) goto l7;
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+9,V57)*/
V57=pile[WZ2]; 
x[jvj+10]=d[20];z[jvj+10]=0;
l3:if((x[jvj+10]<=0)) goto l7;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+11,R,jvj+12)*/
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=1273)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+12,jvj+15)*/
pile[v[22]]=130; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+15,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+11; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(268,jvj+11,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=R; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+16,R,jvj+17)*/
pile[v[22]]=130; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+17,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+18)*/
K=V20;
L=V26;
x[jvj+19]=d[20];z[jvj+19]=0;
l5:if((x[jvj+19]<=0)) goto l4;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=jvj+20; pile[WZ1]=RR; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+20,RR,jvj+21)*/
pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+21,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=1273)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+21,jvj+24)*/
pile[v[22]]=130; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+24,V43)*/
V43=pile[WZ2]; 
if((K!=V43)) goto l6;
pile[v[22]]=268; pile[WZ1]=jvj+20; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+20,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=RR; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+25,RR,jvj+26)*/
pile[v[22]]=130; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+26,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+21; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(107,jvj+21,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+18; pile[WZ2]=jvj+28; 
(*f[3179])( );if(v[102]) goto l6;     /*MOINSBAG0(jvj+27,jvj+18,jvj+28)*/
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+45]=x[jvj+28] ;z[jvj+45]=z[jvj+28];
l1:if((x[jvj+45]>0)) goto l2;
M=V49;
V59=M-L;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+34)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+35)*/
pile[v[22]]=V57; pile[WZ1]=858; pile[WZ2]=jvj+31; 
(*f[46])( );     /*TRI0(V57,858,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,v[13],642,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=3178; pile[WZ2]=246; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,3178,246,jvj+33)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20066; pile[WZ4]=jvj+33; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(158,1,218,20066,jvj+33,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=159; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+29,159,jvj+34)*/
pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+29,159,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+36)*/
pile[WZ3]=1273; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,1273,jvj+41)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+44; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+44)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+4; pile[WZ2]=107; pile[WZ3]=jvj+43; 
(*f[301])( );     /*TRI11(jvj+42,jvj+4,107,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+43; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+44,jvj+43,jvj+40)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V59; pile[WZ4]=jvj+38; 
(*f[192])( );     /*QUADRI4(100,41,130,V59,jvj+38)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; pile[WZ2]=103; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+37,jvj+38,103,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+40; pile[WZ4]=jvj+39; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+40,jvj+39,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+29; 
(*f[1296])( );     /*NOUVCONTR0(jvj+30,jvj+29)*/
l6:x[jvj+19]=t[x[jvj+19]];
goto l5;
l2:x[jvj+2]=s[x[jvj+45]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+45];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+3)*/
x[jvj+45]=t[x[jvj+45]];
goto l1;
l4:x[jvj+10]=t[x[jvj+10]];
goto l3;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
