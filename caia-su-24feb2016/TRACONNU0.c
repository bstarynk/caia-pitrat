#include "dx.h"
void TRACONNU0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V9=0,V=0,V13=0,V17=0,V11=0;
int A;
int R,F;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=11457;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==908&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; R=pile[v[22]+1]; F=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=incon;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,A,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=100; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(jvj+2,100,R)*/
if((x[jvj+2]!=22)) goto l14;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,A,jvj+4)*/
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+4,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=149; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,149,jvj+24)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V2; pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(100,21,140,V2,jvj+26)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+25; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+26,jvj+25,jvj+5)*/
pile[v[22]]=R; pile[WZ1]=111; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(R,111,jvj+5)*/
l3:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,A,jvj+12)*/
for(i=x[jvj+12],V13=0;i>0;i=t[i],V13++)  ;
if((V13!=1)) goto l7;
pile[v[22]]=525; pile[WZ1]=23; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(525,23,jvj+13)*/
l4:if((x[jvj+12]<=0)) goto l7;
x[jvj+14]=s[x[jvj+12]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+12];
pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+14,V17)*/
V17=pile[WZ2]; 
V11=V17;
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==V11) goto l6;
l5:x[jvj+12]=t[x[jvj+12]];
goto l4;
l2:pile[v[22]]=jvj+6; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+11)*/
pile[v[22]]=R; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(R,jvj+8,jvj+11)*/
l11:x[jvj+16]=t[x[jvj+16]];
l8:if((x[jvj+16]>0)) goto l9;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l6:x[F]=543 ;z[F]=543;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=649; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,649,jvj+33)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V11; pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(100,21,140,V11,jvj+37)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+38)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+38; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+38,jvj+35)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=jvj+35; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+36; 
(*f[298])( );     /*TRIENS1(jvj+35,(-20),jvj+34,107,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+37,jvj+36,jvj+15)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(R,107,jvj+15)*/
l10:x[jvj+16]=d[6];z[jvj+16]=0;
goto l8;
l7:x[F]=538 ;z[F]=538;
if(x[R]!=incon) goto l10;
x[R]=x[F]=incon;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l9:x[jvj+8]=s[x[jvj+16]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+16];
pile[v[22]]=jvj+8; pile[WZ1]=A; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+8,A,jvj+17)*/
x[jvj+6]=x[jvj+17] ;z[jvj+6]=z[jvj+17];
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,jvj+6,V9)*/
V9=pile[WZ2]; 
V=V9;
pile[v[22]]=525; pile[WZ1]=773; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(525,773,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==V) goto l15;
l1:pile[v[22]]=jvj+8; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+8,R,jvj+10)*/
goto l11;
l14:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=654; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,654,jvj+18)*/
pile[WZ3]=653; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+23)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+23; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+23,jvj+22)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=21; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,21,jvj+20)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=103; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+19,jvj+20,103,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+21,jvj+3)*/
pile[v[22]]=R; pile[WZ1]=111; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(R,111,jvj+3)*/
goto l3;
l15:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=654; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,654,jvj+27)*/
pile[WZ3]=653; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+32)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+32,jvj+31)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=324; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,324,jvj+29)*/
pile[v[22]]=jvj+27; pile[WZ1]=111; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,111,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; pile[WZ2]=103; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+28,jvj+29,103,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+30; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+31,jvj+30,jvj+9)*/
pile[v[22]]=R; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(R,jvj+8,jvj+9)*/
goto l1;
}
