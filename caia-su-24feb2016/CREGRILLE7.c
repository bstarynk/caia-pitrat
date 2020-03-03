#include "dx.h"
void CREGRILLE7(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X=0,V6=0,Z=0,V7=0,ZZ=0,V8=0,S=0,V9=0,SS=0,I=0,V2=0,XX=0,V3=0,YY=0,V5=0,J=0;
int NT,NV,A;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=26127;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2519&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NT=pile[v[22]]; NV=pile[v[22]+1]; A=pile[v[22]+2]; NNNE=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
I=1;
l6:if((I<=NT)) goto l8;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l5:if((J<=I)) goto l14;
pile[v[22]]=X; pile[WZ1]=(-7732); 
(*f[3979])( );if(v[102]) goto l16;     /*LONGUEUR0(X,(-7732),V8)*/
V8=pile[WZ2]; 
S=1;
l3:if((S>V8)) goto l16;
pile[v[22]]=S; pile[WZ1]=X; pile[WZ2]=(-7732); 
(*f[203])( );if(v[102]) goto l4;     /*FTAB0(S,X,(-7732),V9)*/
V9=pile[WZ3]; 
SS=V9;
if((SS<=I)) goto l4;
if((SS<J)) goto l14;
l4:S++;
goto l3;
l7:I++;
goto l6;
l8:for(a=x[A];a>0;a=t[a]) if(s[a]==I) goto l7;
X=1;
l9:if((X>NV)) goto l7;
pile[v[22]]=X; pile[WZ1]=(-7732); 
(*f[3979])( );if(v[102]) goto l10;     /*LONGUEUR0(X,(-7732),V2)*/
V2=pile[WZ2]; 
XX=1;
l11:if((XX>V2)) goto l10;
pile[v[22]]=XX; pile[WZ1]=X; pile[WZ2]=(-7732); 
(*f[203])( );if(v[102]) goto l12;     /*FTAB0(XX,X,(-7732),V3)*/
V3=pile[WZ3]; 
if((V3!=I)) goto l12;
YY=1;
l13:if((YY>V2)) goto l12;
if((YY==XX)) goto l14;
pile[v[22]]=YY; pile[WZ1]=X; pile[WZ2]=(-7732); 
(*f[203])( );if(v[102]) goto l14;     /*FTAB0(YY,X,(-7732),V5)*/
V5=pile[WZ3]; 
J=V5;
for(a=x[A];a>0;a=t[a]) if(s[a]==J) goto l14;
if((J>=I)) goto l5;
pile[v[22]]=X; pile[WZ1]=(-7732); 
(*f[3979])( );if(v[102]) goto l16;     /*LONGUEUR0(X,(-7732),V6)*/
V6=pile[WZ2]; 
Z=1;
l1:if((Z>V6)) goto l16;
pile[v[22]]=Z; pile[WZ1]=X; pile[WZ2]=(-7732); 
(*f[203])( );if(v[102]) goto l2;     /*FTAB0(Z,X,(-7732),V7)*/
V7=pile[WZ3]; 
ZZ=V7;
if((ZZ>=I)) goto l2;
if((ZZ>J)) goto l5;
l2:Z++;
goto l1;
l10:X++;
goto l9;
l12:XX++;
goto l11;
l16:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=962; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,962,jvj+4)*/
pile[WZ3]=25; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+9)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-600); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(100,21,140,(-600),jvj+14)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+16; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+16)*/
pile[v[22]]=jvj+14; pile[WZ1]=111; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+14,111,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+15; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+16,jvj+15,jvj+13)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+11)*/
pile[v[22]]=jvj+9; pile[WZ1]=111; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(jvj+9,111,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; pile[WZ2]=103; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+10,jvj+11,103,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+12; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+12,jvj+8)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+17)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-600); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(100,21,140,(-600),jvj+22)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+24; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+24)*/
pile[v[22]]=jvj+22; pile[WZ1]=111; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,111,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+24,jvj+23,jvj+21)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+19; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+19)*/
pile[v[22]]=jvj+17; pile[WZ1]=111; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,111,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; pile[WZ2]=103; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+18,jvj+19,103,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+20; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+21,jvj+20,jvj+6)*/
pile[v[22]]=jvj+4; pile[WZ1]=111; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(jvj+4,111,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=103; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+5,jvj+6,103,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+7; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+7,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l14:YY++;
goto l13;
}
