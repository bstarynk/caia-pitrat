#include "dx.h"
void ATOME111T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V25=0,V26=0,V40=0,V41=0,V56=0,V29=0,V28=0,V27=0,V18=0,V19=0,V16=0,V17=0,V30=0,V14=0,V15=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=55;
x[jvj+1]=20111;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3718&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[R]==x[RR])) goto l21;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,RR,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=25)) goto l21;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,R,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=25)) goto l21;
x[jvj+23]=vo[16];z[jvj+23]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[1948])( );if(v[102]) goto l21;     /*FNDOND0(498,jvj+23,jvj+24)*/
pile[v[22]]=1182; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(1182,jvj+24,jvj+25)*/
if((68!=x[jvj+25])) goto l21;
pile[v[22]]=869; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(869,R,jvj+5)*/
if((x[jvj+5]==769)) goto l21;
l3:pile[v[22]]=869; pile[WZ1]=RR; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(869,RR,jvj+6)*/
if((x[jvj+6]==769)) goto l21;
l16:pile[v[22]]=929; pile[WZ1]=R; 
(*f[1975])( );if(v[102]) goto l21;     /*FNDCND0(929,R,V40)*/
V40=pile[WZ2]; 
pile[WZ1]=RR; 
(*f[1975])( );if(v[102]) goto l21;     /*FNDCND0(929,RR,V41)*/
V41=pile[WZ2]; 
if((V40>=V41)) goto l21;
x[jvj+26]=vo[14];z[jvj+26]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(642,jvj+26,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1006,R,jvj+3)*/
pile[WZ1]=RR; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,RR,jvj+4)*/
l1:if((x[jvj+3]>0)) goto l2;
x[jvj+14]=0 ;z[jvj+14]=0;
pile[v[22]]=R; pile[WZ1]=jvj+12; 
(*f[887])( );     /*VARND0(R,jvj+12)*/
pile[v[22]]=RR; pile[WZ1]=jvj+13; 
(*f[887])( );     /*VARND0(RR,jvj+13)*/
l8:if((x[jvj+12]>0)) goto l9;
for(i=x[jvj+14],V29=0;i>0;i=t[i],V29++)  ;
V28=V29+2;
x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=R; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(R,jvj+7)*/
l4:if((x[jvj+7]>0)) goto l5;
pile[v[22]]=RR; pile[WZ1]=jvj+10; 
(*f[887])( );     /*VARND0(RR,jvj+10)*/
l6:if((x[jvj+10]>0)) goto l7;
for(i=x[jvj+8],V27=0;i>0;i=t[i],V27++)  ;
if((V27>V28)) goto l21;
x[jvj+17]=0 ;z[jvj+17]=0;
pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1006,R,jvj+16)*/
l12:if((x[jvj+16]>0)) goto l13;
pile[v[22]]=1006; pile[WZ1]=RR; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1006,RR,jvj+18)*/
l14:if((x[jvj+18]>0)) goto l15;
pile[v[22]]=R; 
(*f[981])( );if(v[102]) goto l21;     /*CPTVAR0(R,V18)*/
V18=pile[WZ1]; 
if((V18>6)) goto l21;
pile[v[22]]=RR; 
(*f[981])( );if(v[102]) goto l21;     /*CPTVAR0(RR,V19)*/
V19=pile[WZ1]; 
if((V19<=6)) goto l17;
l21:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l2:I=s[x[jvj+3]];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==I) goto l21;
x[jvj+3]=t[x[jvj+3]];
goto l1;
l5:x[jvj+9]=s[x[jvj+7]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+9)*/
x[jvj+7]=t[x[jvj+7]];
goto l4;
l7:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+11)*/
x[jvj+10]=t[x[jvj+10]];
goto l6;
l9:x[jvj+15]=s[x[jvj+12]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+12];
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==x[jvj+15]) goto l11;
l10:x[jvj+12]=t[x[jvj+12]];
goto l8;
l11:pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+14,jvj+15)*/
goto l10;
l13:V25=s[x[jvj+16]];
pile[v[22]]=jvj+17; pile[WZ1]=V25; 
(*f[207])( );     /*PLUE2(jvj+17,V25)*/
x[jvj+16]=t[x[jvj+16]];
goto l12;
l15:V26=s[x[jvj+18]];
pile[v[22]]=jvj+17; pile[WZ1]=V26; 
(*f[207])( );     /*PLUE2(jvj+17,V26)*/
x[jvj+18]=t[x[jvj+18]];
goto l14;
l19:pile[v[22]]=RR; pile[WZ1]=V30; pile[WZ2]=jvj+27; 
(*f[3719])( );if(v[102]) goto l18;     /*CPTOCCURVAR0(RR,V30,jvj+27,V15)*/
V15=pile[WZ3]; 
if((V15==1)) goto l20;
l18:x[jvj+14]=t[x[jvj+14]];
l17:if((x[jvj+14]<=0)) goto l21;
x[jvj+27]=s[x[jvj+14]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+14];
pile[v[22]]=R; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; pile[WZ3]=jvj+29; 
(*f[3720])( );if(v[102]) goto l18;     /*ISOLARITH0(R,jvj+27,jvj+28,jvj+29)*/
pile[v[22]]=RR; pile[WZ2]=jvj+30; pile[WZ3]=jvj+31; 
(*f[3720])( );if(v[102]) goto l18;     /*ISOLARITH0(RR,jvj+27,jvj+30,jvj+31)*/
pile[v[22]]=jvj+29; 
(*f[1161])( );if(v[102]) goto l18;     /*INF0(jvj+29,V16)*/
V16=pile[WZ1]; 
if((V16<=0)) goto l18;
pile[v[22]]=jvj+31; 
(*f[1161])( );if(v[102]) goto l18;     /*INF0(jvj+31,V17)*/
V17=pile[WZ1]; 
if((V17<=0)) goto l18;
pile[v[22]]=jvj+28; pile[WZ1]=jvj+32; 
(*f[255])( );     /*COPEXP0(jvj+28,jvj+32)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+33; 
(*f[255])( );     /*COPEXP0(jvj+31,jvj+33)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+34; 
(*f[255])( );     /*COPEXP0(jvj+30,jvj+34)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+35; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+35)*/
pile[v[22]]=498; pile[WZ1]=jvj+27; pile[WZ2]=jvj+36; 
(*f[1948])( );if(v[102]) goto l18;     /*FNDOND0(498,jvj+27,jvj+36)*/
pile[v[22]]=436; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(436,jvj+36,jvj+37)*/
pile[v[22]]=140; pile[WZ1]=jvj+37; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(140,jvj+37,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V30; pile[WZ2]=jvj+27; 
(*f[3719])( );if(v[102]) goto l18;     /*CPTOCCURVAR0(R,V30,jvj+27,V14)*/
V14=pile[WZ3]; 
if((V14==1)) goto l19;
goto l18;
l20:x[jvj+46]=x[jvj+32] ;z[jvj+46]=z[jvj+32];
x[jvj+47]=x[jvj+33] ;z[jvj+47]=z[jvj+33];
x[jvj+49]=x[jvj+34] ;z[jvj+49]=z[jvj+34];
x[jvj+50]=x[jvj+35] ;z[jvj+50]=z[jvj+35];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+40)*/
pile[WZ3]=486; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+45)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+45; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+45,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=107; pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(jvj+44,107,jvj+46)*/
pile[WZ2]=jvj+47; 
(*f[36])( );     /*PLUSC0(jvj+44,107,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+48)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+48; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+48,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=107; pile[WZ2]=jvj+49; 
(*f[36])( );     /*PLUSC0(jvj+42,107,jvj+49)*/
pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(jvj+42,107,jvj+50)*/
pile[v[22]]=jvj+40; pile[WZ1]=111; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,111,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; pile[WZ2]=103; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+41,jvj+42,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+43; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+44,jvj+43,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=1006; pile[WZ2]=jvj+17; 
(*f[34])( );     /*CHGC0(jvj+38,1006,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+54; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+54)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+55; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+55)*/
pile[v[22]]=V56; pile[WZ1]=858; pile[WZ2]=jvj+51; 
(*f[46])( );     /*TRI0(V56,858,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+52; 
(*f[189])( );     /*TRI4(jvj+51,v[13],642,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=3718; pile[WZ2]=246; pile[WZ3]=jvj+53; 
(*f[189])( );     /*TRI4(jvj+52,3718,246,jvj+53)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20111; pile[WZ4]=jvj+53; pile[WZ5]=jvj+39; 
(*f[269])( );     /*QUADRI6(158,1,218,20111,jvj+53,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=159; pile[WZ2]=jvj+54; 
(*f[36])( );     /*PLUSC0(jvj+39,159,jvj+54)*/
pile[WZ2]=jvj+55; 
(*f[36])( );     /*PLUSC0(jvj+39,159,jvj+55)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[1296])( );     /*NOUVCONTR0(jvj+38,jvj+39)*/
goto l18;
}
