#include "dx.h"
void TRADATOMX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int IW=0,V11=0,NN=0;
int N,BA,P,EX,T;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=44;
x[jvj+1]=11735;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1925&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; BA=pile[v[22]+1]; P=pile[v[22]+2]; EX=pile[v[22]+3]; T=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+12]=incon;
pile[v[22]]=498; pile[WZ1]=N; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(498,N,jvj+9)*/
x[jvj+12]=x[jvj+9] ;z[jvj+12]=z[jvj+9];
l10:pile[v[22]]=1689; pile[WZ1]=N; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(1689,N,jvj+27)*/
l11:if((x[jvj+27]>0)) goto l12;
pile[v[22]]=1688; pile[WZ1]=N; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(1688,N,jvj+31)*/
l16:if((x[jvj+31]>0)) goto l17;
l20:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l1:V11=68;
l2:pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+4,jvj+8)*/
if((134!=x[jvj+8])) goto l3;
V11=580;
l14:NN=V11;
if((NN==580)) goto l21;
if((NN==73)) goto l6;
if((NN!=68)) goto l7;
pile[v[22]]=jvj+4; pile[WZ1]=N; pile[WZ2]=P; pile[WZ3]=jvj+14; 
(*f[2048])( );     /*CRCNTR0(jvj+4,N,P,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=576; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,576,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+40; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+15,jvj+40,jvj+16)*/
pile[v[22]]=jvj+16; 
(*f[1237])( );     /*TOUCHEFINALE0(jvj+16)*/
pile[v[22]]=447; pile[WZ1]=jvj+4; pile[WZ2]=459; pile[WZ3]=jvj+16; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(447,jvj+4,459,jvj+16,jvj+17)*/
pile[v[22]]=jvj+12; pile[WZ1]=578; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+12,578,jvj+17)*/
pile[v[22]]=P; pile[WZ1]=105; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(P,105,jvj+16)*/
l7:pile[v[22]]=1860; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1860,jvj+18,jvj+19)*/
x[jvj+44]=x[jvj+19] ;z[jvj+44]=z[jvj+19];
l8:if((x[jvj+44]>0)) goto l9;
if((NN!=67)) goto l15;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=BA; pile[WZ2]=228; pile[WZ3]=jvj+22; 
(*f[1233])( );if(v[102]) goto l15;     /*MISENFORME0(jvj+21,BA,228,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=N; pile[WZ2]=P; pile[WZ3]=jvj+23; 
(*f[2048])( );     /*CRCNTR0(jvj+22,N,P,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=576; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,576,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+42; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+24,jvj+42,jvj+25)*/
pile[v[22]]=P; pile[WZ1]=105; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(P,105,jvj+25)*/
pile[v[22]]=447; pile[WZ1]=jvj+4; pile[WZ2]=459; pile[WZ3]=jvj+25; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(447,jvj+4,459,jvj+25,jvj+26)*/
pile[v[22]]=jvj+12; pile[WZ1]=578; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+12,578,jvj+26)*/
l15:pile[v[22]]=1860; pile[WZ1]=jvj+18; 
(*f[71])( );     /*ENLV0(1860,jvj+18)*/
l13:x[jvj+27]=t[x[jvj+27]];
goto l11;
l3:if(V11==incon) goto l4;
goto l14;
l4:V11=67;
goto l14;
l5:x[jvj+12]=x[N] ;z[jvj+12]=z[N];
goto l10;
l6:pile[v[22]]=jvj+4; pile[WZ1]=BA; pile[WZ2]=250; pile[WZ3]=jvj+11; 
(*f[1497])( );if(v[102]) goto l7;     /*AJUSTECAL0(jvj+4,BA,250,jvj+11)*/
pile[v[22]]=jvj+11; 
(*f[1237])( );     /*TOUCHEFINALE0(jvj+11)*/
pile[v[22]]=P; pile[WZ1]=105; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(P,105,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=447; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+11,447,jvj+13)*/
pile[v[22]]=jvj+12; pile[WZ1]=578; 
(*f[36])( );     /*PLUSC0(jvj+12,578,jvj+13)*/
goto l7;
l9:x[jvj+20]=s[x[jvj+44]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+44];
pile[v[22]]=P; pile[WZ1]=107; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(P,107,jvj+20)*/
x[jvj+44]=t[x[jvj+44]];
goto l8;
l12:x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=jvj+28; pile[WZ1]=jvj+23; 
(*f[2047])( );     /*CORRIGTHEN0(jvj+28,jvj+23)*/
pile[v[22]]=447; pile[WZ1]=68; pile[WZ2]=459; pile[WZ3]=228; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(447,68,459,228,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=BA; pile[WZ2]=jvj+23; pile[WZ3]=jvj+30; 
(*f[1234])( );if(v[102]) goto l13;     /*TRADCREE0(jvj+29,BA,jvj+23,jvj+30)*/
x[jvj+18]=x[jvj+30] ;z[jvj+18]=z[jvj+30];
pile[v[22]]=jvj+18; pile[WZ2]=129; pile[WZ3]=P; pile[WZ4]=jvj+4; 
(*f[1232])( );     /*CORRECTIF0(jvj+18,BA,129,P,jvj+4)*/
V11=incon;
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]==21)) goto l1;
if((x[jvj+5]!=73)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+4,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=20)) goto l2;
V11=73;
goto l2;
l17:x[jvj+2]=s[x[jvj+31]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+31];
for(a=x[EX];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l18;
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+2,jvj+3)*/
IW=x[jvj+3];
if(IW==1814||IW==1050) goto l18;
l22:pile[v[22]]=447; pile[WZ1]=68; pile[WZ2]=459; pile[WZ3]=865; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(447,68,459,865,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=BA; pile[WZ2]=jvj+2; pile[WZ3]=jvj+33; 
(*f[1503])( );if(v[102]) goto l18;     /*BOOTRADA0(jvj+32,BA,jvj+2,jvj+33)*/
x[jvj+34]=x[jvj+33] ;z[jvj+34]=z[jvj+33];
pile[v[22]]=jvj+34; pile[WZ2]=129; pile[WZ3]=P; pile[WZ4]=jvj+35; 
(*f[1232])( );     /*CORRECTIF0(jvj+34,BA,129,P,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ2]=1881; pile[WZ3]=jvj+36; 
(*f[1233])( );if(v[102]) goto l18;     /*MISENFORME0(jvj+35,BA,1881,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=250; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,250,jvj+37)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[760])( );     /*MEMEX0(jvj+34,jvj+37,jvj+38)*/
if((x[jvj+38]==134)) goto l19;
l18:x[jvj+31]=t[x[jvj+31]];
goto l16;
l19:pile[v[22]]=P; pile[WZ1]=107; pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(P,107,jvj+36)*/
goto l18;
l21:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=580; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,580,jvj+43)*/
pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+43; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,73,111,jvj+43,jvj+10)*/
pile[v[22]]=P; pile[WZ1]=105; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(P,105,jvj+10)*/
goto l7;
}
