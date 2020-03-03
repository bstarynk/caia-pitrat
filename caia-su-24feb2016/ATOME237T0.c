#include "dx.h"
void ATOME237T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V9=0,V8=0,V15=0,V54=0,V51=0,V52=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=53;
x[jvj+1]=20237;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3574&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,R,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=25)) goto l2;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(870,R,V9)*/
V9=pile[WZ2]; 
if((V9!=1)) goto l2;
pile[v[22]]=1101; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(1101,R,V8)*/
V8=pile[WZ2]; 
if((V8<=2)) goto l2;
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(642,jvj+8,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(R,jvj+2)*/
if((x[jvj+2]<=0)) goto l2;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
I=(-10);
l3:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+4; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+4)*/
pile[v[22]]=R; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; pile[WZ3]=jvj+5; 
(*f[3575])( );if(v[102]) goto l1;     /*EVLM3(R,jvj+3,jvj+4,jvj+5)*/
if((x[jvj+5]==135)) goto l5;
l1:I++;
if((I<=10)) goto l3;
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+20)*/
pile[v[22]]=V15; pile[WZ1]=858; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(V15,858,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,v[13],642,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=3574; pile[WZ2]=246; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,3574,246,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=20237; pile[WZ2]=218; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+18,20237,218,jvj+19)*/
pile[v[22]]=jvj+20; pile[WZ1]=(-20); pile[WZ2]=jvj+19; pile[WZ3]=159; pile[WZ4]=jvj+21; 
(*f[298])( );     /*TRIENS1(jvj+20,(-20),jvj+19,159,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+21,1,158,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+22)*/
pile[WZ3]=25; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+24)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+26; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+26)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+25,jvj+26,103,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+27; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+10,jvj+27,jvj+23)*/
pile[WZ2]=111; pile[WZ3]=jvj+22; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+22,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=107; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+15,107,jvj+23)*/
pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+15,107,jvj+12)*/
pile[WZ1]=jvj+14; 
(*f[1296])( );     /*NOUVCONTR0(jvj+15,jvj+14)*/
goto l2;
l5:x[jvj+51]=0 ;z[jvj+51]=0;
x[jvj+32]=x[jvj+51] ;z[jvj+32]=z[jvj+51];
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,R,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=25)) goto l6;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,R,jvj+30)*/
pile[v[22]]=103; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,R,jvj+31)*/
pile[v[22]]=jvj+30; pile[WZ1]=1; pile[WZ2]=jvj+32; 
(*f[3577])( );     /*POLYDEC0(jvj+30,1,jvj+32)*/
pile[v[22]]=jvj+31; pile[WZ1]=(-1); 
(*f[3577])( );     /*POLYDEC0(jvj+31,(-1),jvj+32)*/
l6:x[jvj+52]=0 ;z[jvj+52]=0;
x[jvj+33]=x[jvj+52] ;z[jvj+33]=z[jvj+52];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+32; pile[WZ2]=V8; pile[WZ3]=I; 
(*f[3578])( );     /*POLYSEQ0(jvj+33,jvj+32,V8,I)*/
x[jvj+34]=0 ;z[jvj+34]=0;
x[jvj+53]=x[jvj+33] ;z[jvj+53]=z[jvj+33];
l7:if((x[jvj+53]>0)) goto l8;
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; 
(*f[299])( );     /*COPEL0(jvj+34,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+36)*/
pile[WZ3]=485; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+35; pile[WZ2]=107; pile[WZ3]=jvj+39; 
(*f[301])( );     /*TRI11(jvj+38,jvj+35,107,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+39,22,100,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+41; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+41)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+41; pile[WZ2]=103; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+42,jvj+41,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+40; pile[WZ4]=jvj+43; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+40,jvj+43,jvj+11)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+9; 
(*f[1290])( );if(v[102]) goto l2;     /*DEPEXP0(jvj+3,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1294,R,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==1327) goto l4;
goto l2;
l8:x[jvj+44]=s[x[jvj+53]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+53];
pile[v[22]]=510; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(510,jvj+44,V54)*/
V54=pile[WZ2]; 
x[jvj+46]=0 ;z[jvj+46]=0;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+44,V51)*/
V51=pile[WZ2]; 
if((V51<=0)) goto l10;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+45; 
(*f[1290])( );if(v[102]) goto l10;     /*DEPEXP0(jvj+3,jvj+45)*/
V52=1;
l9:if((V52>V51)) goto l10;
pile[v[22]]=jvj+46; pile[WZ1]=jvj+45; 
(*f[522])( );     /*PLUB2(jvj+46,jvj+45)*/
V52++;
goto l9;
l10:pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; 
(*f[299])( );     /*COPEL0(jvj+46,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+48)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V54; pile[WZ4]=jvj+49; 
(*f[192])( );     /*QUADRI4(100,41,130,V54,jvj+49)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+48; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+48,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=107; pile[WZ2]=jvj+49; 
(*f[36])( );     /*PLUSC0(jvj+50,107,jvj+49)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+50; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+47,jvj+50,107)*/
pile[v[22]]=jvj+34; 
(*f[68])( );     /*PLUE0(jvj+34,jvj+50)*/
l11:x[jvj+53]=t[x[jvj+53]];
goto l7;
}
