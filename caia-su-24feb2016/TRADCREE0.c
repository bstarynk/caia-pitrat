#include "dx.h"
void TRADCREE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,ZZ=0,V61=0,V19=0,W=0,V39=0,V57=0,V54=0,V59=0;
int C,B,A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=46;
x[jvj+1]=11722;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1234&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
C=pile[v[22]]; B=pile[v[22]+1]; A=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+30]=incon;
pile[v[22]]=447; pile[WZ1]=C; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(447,C,jvj+19)*/
if((x[jvj+19]!=68)) goto l12;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,A,jvj+20)*/
if((x[jvj+20]!=22)) goto l11;
pile[v[22]]=102; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,A,jvj+21)*/
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+21,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,A,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+22,jvj+23)*/
pile[v[22]]=1841; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1841,jvj+23,jvj+24)*/
if((x[jvj+24]!=826)) goto l11;
pile[v[22]]=459; pile[WZ1]=C; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(459,C,jvj+25)*/
pile[v[22]]=V39; pile[WZ1]=1841; pile[WZ2]=B; 
(*f[1501])( );     /*NATFNDA0(V39,1841,B)*/
pile[v[22]]=447; pile[WZ1]=67; pile[WZ2]=459; pile[WZ3]=jvj+25; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(447,67,459,jvj+25,jvj+27)*/
l13:pile[v[22]]=jvj+27; pile[WZ1]=B; pile[WZ2]=A; pile[WZ3]=jvj+28; 
(*f[1503])( );if(v[102]) goto l14;     /*BOOTRADA0(jvj+27,B,A,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ2]=jvj+27; pile[WZ3]=jvj+29; pile[WZ4]=jvj+30; 
(*f[1502])( );if(v[102]) goto l14;     /*TRADCREA0(jvj+28,B,jvj+27,jvj+29,jvj+30)*/
l23:x[R]=x[jvj+29] ;z[R]=z[jvj+29];
if(x[jvj+30]!=incon) goto l28;
l26:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l1:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,A,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+5,jvj+6)*/
if((V11=w[x[jvj+6]][1])==incon) goto l12;
pile[v[22]]=159; pile[WZ1]=100; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(159,100,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==V11) goto l2;
l12:x[jvj+27]=x[C] ;z[jvj+27]=z[C];
goto l13;
l2:pile[v[22]]=A; pile[WZ1]=jvj+10; 
(*f[414])( );     /*FNDFONC0(A,jvj+10)*/
l3:if((x[jvj+10]>0)) goto l4;
if((x[jvj+20]!=22)) goto l8;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,A,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+16,jvj+17)*/
pile[v[22]]=729; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(729,jvj+17,jvj+18)*/
if((x[jvj+18]==68)) goto l27;
l8:pile[v[22]]=A; pile[WZ1]=jvj+15; 
(*f[938])( );     /*USE0(A,jvj+15)*/
l9:if((x[jvj+15]<=0)) goto l27;
W=s[x[jvj+15]];
pile[v[22]]=1260; pile[WZ1]=B; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1260,B,jvj+14)*/
x[jvj+43]=x[jvj+14] ;z[jvj+43]=z[jvj+14];
l6:if((x[jvj+43]<=0)) goto l12;
x[jvj+11]=s[x[jvj+43]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+43];
pile[v[22]]=110; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(110,jvj+11,V19)*/
V19=pile[WZ2]; 
if((V19!=W)) goto l7;
pile[v[22]]=1261; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1261,jvj+11,jvj+12)*/
pile[v[22]]=256; pile[WZ1]=100; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(256,100,jvj+13)*/
V61=x[jvj+12];
l5:if((V61<=0)) goto l7;
ZZ=s[V61];
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==ZZ) goto l10;
V61=t[V61];
goto l5;
l4:x[jvj+8]=s[x[jvj+10]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+10];
pile[v[22]]=1841; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1841,jvj+8,jvj+9)*/
if((x[jvj+9]!=68)) goto l12;
x[jvj+10]=t[x[jvj+10]];
goto l3;
l7:x[jvj+43]=t[x[jvj+43]];
goto l6;
l10:x[jvj+15]=t[x[jvj+15]];
goto l9;
l11:pile[v[22]]=459; pile[WZ1]=C; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(459,C,jvj+26)*/
if((x[jvj+20]==43)) goto l1;
if((x[jvj+20]!=22)) goto l12;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,A,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+2,jvj+3)*/
pile[v[22]]=1841; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1841,jvj+3,jvj+4)*/
if((x[jvj+4]==68)) goto l2;
goto l12;
l14:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,A,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=100; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+31,100,jvj+29)*/
if((x[jvj+32]=w[x[jvj+31]][3])==incon) goto l15;
pile[v[22]]=A; pile[WZ1]=jvj+32; pile[WZ3]=jvj+33; 
(*f[45])( );if(v[102]) goto l15;     /*FNDZ0(A,jvj+32,V57,jvj+33)*/
V57=pile[WZ2]; 
V54=V57;
V59=V54;
pile[v[22]]=jvj+29; pile[WZ2]=V59; 
(*f[43])( );     /*CHGC2(jvj+29,jvj+32,V59)*/
l15:x[jvj+44]=w[x[jvj+31]][9];
l16:if((x[jvj+44]>0)) goto l17;
x[jvj+45]=w[x[jvj+31]][8];
l19:if((x[jvj+45]<=0)) goto l23;
x[jvj+37]=s[x[jvj+45]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+45];
pile[v[22]]=jvj+37; pile[WZ1]=A; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(jvj+37,A,jvj+38)*/
x[jvj+46]=x[jvj+38] ;z[jvj+46]=z[jvj+38];
l20:if((x[jvj+46]>0)) goto l21;
x[jvj+45]=t[x[jvj+45]];
goto l19;
l17:x[jvj+34]=s[x[jvj+44]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+44];
pile[v[22]]=jvj+34; pile[WZ1]=A; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+34,A,jvj+35)*/
pile[v[22]]=jvj+27; pile[WZ1]=B; pile[WZ3]=jvj+36; 
(*f[1234])( );if(v[102]) goto l18;     /*TRADCREE0(jvj+27,B,jvj+35,jvj+36)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+34; pile[WZ2]=jvj+36; 
(*f[35])( );     /*CHGC1(jvj+29,jvj+34,jvj+36)*/
l18:x[jvj+44]=t[x[jvj+44]];
goto l16;
l21:x[jvj+39]=s[x[jvj+46]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+46];
pile[v[22]]=jvj+27; pile[WZ1]=B; pile[WZ2]=jvj+39; pile[WZ3]=jvj+40; 
(*f[1234])( );if(v[102]) goto l22;     /*TRADCREE0(jvj+27,B,jvj+39,jvj+40)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+37; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+29,jvj+37,jvj+40)*/
l22:x[jvj+46]=t[x[jvj+46]];
goto l20;
l24:pile[v[22]]=R; pile[WZ1]=1860; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(R,1860,jvj+30)*/
goto l26;
l25:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l27:pile[v[22]]=447; pile[WZ1]=67; pile[WZ2]=459; pile[WZ3]=jvj+26; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(447,67,459,jvj+26,jvj+27)*/
goto l13;
l28:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=250; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,250,jvj+41)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[760])( );     /*MEMEX0(jvj+30,jvj+41,jvj+42)*/
if((x[jvj+42]==134)) goto l24;
goto l26;
}
