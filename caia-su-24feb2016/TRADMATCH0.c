#include "dx.h"
void TRADMATCH0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RT=0,V5=0,I=0,V=0,V35=0,V28=0,V37=0;
int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=56;
x[jvj+1]=11711;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1230&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=x[jvj+23]=RT=incon;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,A,jvj+5)*/
if((x[jvj+5]!=22)) goto l4;
pile[v[22]]=111; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,A,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+6,jvj+2)*/
pile[v[22]]=729; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(729,jvj+2,jvj+7)*/
if((x[jvj+7]!=278)) goto l2;
pile[v[22]]=A; pile[WZ1]=R; 
(*f[255])( );     /*COPEXP0(A,R)*/
RT=68;
l4:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,A,jvj+11)*/
if((x[jvj+11]==21)) goto l5;
x[jvj+23]=x[jvj+11] ;z[jvj+23]=z[jvj+11];
l5:if(x[R]==incon) goto l6;
l8:if(RT==incon) goto l9;
if(x[R]!=incon) goto l21;
l20:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l2:pile[v[22]]=118; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(118,jvj+2,V5)*/
V5=pile[WZ2]; 
if((V5!=1)) goto l4;
pile[v[22]]=729; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(729,jvj+2,jvj+3)*/
if((x[jvj+3]==278)) goto l4;
l1:pile[v[22]]=155; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(155,jvj+2,jvj+4)*/
if((x[jvj+4]==68)) goto l4;
l3:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,A,jvj+8)*/
pile[v[22]]=B; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[1230])( );if(v[102]) goto l4;     /*TRADMATCH0(B,jvj+8,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
RT=68;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+22; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+10,jvj+22,R)*/
goto l4;
l6:if(x[jvj+23]!=incon) goto l22;
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,A,I)*/
I=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=654; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,654,jvj+24)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+28; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+28)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=41; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+26)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+25,jvj+26,103,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+27,R)*/
goto l8;
l7:pile[v[22]]=140; pile[WZ1]=A; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,A,V)*/
V=pile[WZ2]; 
pile[v[22]]=B; pile[WZ1]=V; pile[WZ2]=jvj+29; 
(*f[1491])( );     /*VDSBA0(B,V,jvj+29)*/
pile[v[22]]=1261; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(1261,jvj+29,jvj+30)*/
for(a=x[jvj+30];a>0;a=t[a]) if(s[a]==23) goto l25;
for(a=x[jvj+30];a>0;a=t[a]) if(s[a]==23) goto l23;
for(a=x[jvj+30];a>0;a=t[a]) if(s[a]==1814) goto l30;
for(a=x[jvj+30];a>0;a=t[a]) if(s[a]==1050) goto l30;
l23:pile[v[22]]=129; pile[WZ1]=jvj+29; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(129,jvj+29,jvj+31)*/
if(x[jvj+31]!=129&&x[jvj+31]!=1917) goto l29;
pile[v[22]]=1261; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(1261,jvj+29,jvj+32)*/
for(a=x[jvj+32];a>0;a=t[a]) if(s[a]==23) goto l29;
l24:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=651; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,651,jvj+33)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+34)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+35; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+34,jvj+35,R)*/
goto l8;
l9:if(x[R]!=incon) goto l10;
goto l20;
l10:if(x[jvj+23]!=incon) goto l11;
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l11:if((x[jvj+12]=w[x[jvj+23]][3])==incon) goto l12;
pile[v[22]]=A; pile[WZ1]=jvj+12; pile[WZ3]=jvj+13; 
(*f[45])( );if(v[102]) goto l12;     /*FNDZ0(A,jvj+12,V35,jvj+13)*/
V35=pile[WZ2]; 
V28=V35;
V37=V28;
pile[v[22]]=R; pile[WZ2]=V37; 
(*f[43])( );     /*CHGC2(R,jvj+12,V37)*/
l12:x[jvj+54]=w[x[jvj+23]][9];
l13:if((x[jvj+54]>0)) goto l14;
x[jvj+55]=w[x[jvj+23]][8];
l16:if((x[jvj+55]<=0)) goto l21;
x[jvj+17]=s[x[jvj+55]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+55];
pile[v[22]]=jvj+17; pile[WZ1]=A; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(jvj+17,A,jvj+18)*/
x[jvj+56]=x[jvj+18] ;z[jvj+56]=z[jvj+18];
l17:if((x[jvj+56]>0)) goto l18;
x[jvj+55]=t[x[jvj+55]];
goto l16;
l14:x[jvj+14]=s[x[jvj+54]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+54];
pile[v[22]]=jvj+14; pile[WZ1]=A; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(jvj+14,A,jvj+15)*/
pile[v[22]]=B; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[1230])( );if(v[102]) goto l15;     /*TRADMATCH0(B,jvj+15,jvj+16)*/
pile[v[22]]=R; pile[WZ1]=jvj+14; 
(*f[35])( );     /*CHGC1(R,jvj+14,jvj+16)*/
l15:x[jvj+54]=t[x[jvj+54]];
goto l13;
l18:x[jvj+19]=s[x[jvj+56]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+56];
pile[v[22]]=B; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[1230])( );if(v[102]) goto l19;     /*TRADMATCH0(B,jvj+19,jvj+20)*/
pile[v[22]]=R; pile[WZ1]=jvj+17; 
(*f[36])( );     /*PLUSC0(R,jvj+17,jvj+20)*/
l19:x[jvj+56]=t[x[jvj+56]];
goto l17;
l22:pile[v[22]]=jvj+23; pile[WZ1]=100; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(jvj+23,100,R)*/
goto l8;
l25:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=649; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,649,jvj+40)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+36)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+41)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+41; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+41,jvj+38)*/
pile[v[22]]=jvj+40; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+40,111,jvj+39)*/
pile[v[22]]=jvj+38; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+37; 
(*f[298])( );     /*TRIENS1(jvj+38,(-20),jvj+39,107,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+36,jvj+37,R)*/
goto l8;
l26:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=654; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,654,jvj+46)*/
pile[WZ3]=651; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,651,jvj+50)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+48; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+48)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+49; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+49; pile[WZ5]=jvj+42; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+48,jvj+49,jvj+42)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+47; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+47,jvj+45)*/
pile[v[22]]=jvj+46; pile[WZ1]=111; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+46,111,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; pile[WZ2]=103; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+44,jvj+45,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+42; pile[WZ4]=jvj+43; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+42,jvj+43,R)*/
goto l8;
l28:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l29:if((x[jvj+31]!=1881)) goto l28;
pile[v[22]]=1261; pile[WZ1]=jvj+29; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(1261,jvj+29,jvj+51)*/
for(a=x[jvj+51];a>0;a=t[a]) if(s[a]==23) goto l28;
pile[v[22]]=256; pile[WZ1]=100; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(256,100,jvj+52)*/
l27:if((x[jvj+51]<=0)) goto l28;
x[jvj+47]=s[x[jvj+51]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+51];
for(a=x[jvj+52];a>0;a=t[a]) if(s[a]==x[jvj+47]) goto l26;
x[jvj+51]=t[x[jvj+51]];
goto l27;
l30:pile[v[22]]=129; pile[WZ1]=jvj+29; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(129,jvj+29,jvj+53)*/
if((x[jvj+53]==1917)) goto l24;
goto l23;
}
