#include "dx.h"
void CREGRILLE3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int S=0,V2=0,SS=0,V3=0,V7=0,MM=0,V8=0,PP=0,V5=0,TT=0,V6=0,QQ=0,V4=0,V9=0,YY=0,V15=0,V13=0,V10=0,V14=0,I=0,Q=0,R=0;
int NT,NH,NV,A;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=26127;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2515&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NT=pile[v[22]]; NH=pile[v[22]+1]; NV=pile[v[22]+2]; A=pile[v[22]+3]; NNNE=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=0 ;z[jvj+3]=0;
I=1;
l16:if((I<=NT)) goto l18;
x[NNNE]=x[jvj+3] ;z[NNNE]=z[jvj+3];
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l2:S++;
l1:if((S>NV)) goto l17;
pile[v[22]]=S; pile[WZ1]=(-7732); 
(*f[3979])( );if(v[102]) goto l2;     /*LONGUEUR0(S,(-7732),V2)*/
V2=pile[WZ2]; 
SS=1;
l3:if((SS>V2)) goto l2;
pile[v[22]]=SS; pile[WZ1]=S; pile[WZ2]=(-7732); 
(*f[203])( );if(v[102]) goto l4;     /*FTAB0(SS,S,(-7732),V3)*/
V3=pile[WZ3]; 
if((V3!=I)) goto l4;
V4=incon;
pile[v[22]]=S; pile[WZ1]=(-7732); 
(*f[3979])( );if(v[102]) goto l11;     /*LONGUEUR0(S,(-7732),V5)*/
V5=pile[WZ2]; 
TT=1;
l8:if((TT>V5)) goto l11;
pile[v[22]]=TT; pile[WZ1]=S; pile[WZ2]=(-7732); 
(*f[203])( );if(v[102]) goto l9;     /*FTAB0(TT,S,(-7732),V6)*/
V6=pile[WZ3]; 
QQ=V6;
if((QQ>=I)) goto l9;
for(a=x[A];a>0;a=t[a]) if(s[a]==QQ) goto l5;
l9:TT++;
goto l8;
l4:SS++;
goto l3;
l5:pile[v[22]]=S; pile[WZ1]=(-7732); 
(*f[3979])( );if(v[102]) goto l10;     /*LONGUEUR0(S,(-7732),V7)*/
V7=pile[WZ2]; 
MM=1;
l6:if((MM>V7)) goto l10;
pile[v[22]]=MM; pile[WZ1]=S; pile[WZ2]=(-7732); 
(*f[203])( );if(v[102]) goto l7;     /*FTAB0(MM,S,(-7732),V8)*/
V8=pile[WZ3]; 
PP=V8;
if((PP>=I)) goto l7;
if((PP<=QQ)) goto l7;
for(a=x[A];a>0;a=t[a]) if(s[a]==PP) goto l9;
l7:MM++;
goto l6;
l10:V4=QQ;
l19:Q=V4;
V9=incon;
if((Q==0)) goto l12;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(0,117,jvj+2)*/
V15=x[A];
l13:if((V15>0)) goto l14;
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(117,jvj+2,V13)*/
V13=pile[WZ2]; 
V10=V13;
V14=NH+V10;
V9=V14;
l20:R=V9;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+5)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-622); pile[WZ4]=jvj+10; 
(*f[270])( );     /*QUADRI7(100,21,140,(-622),jvj+10)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=111; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+10,111,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+11; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+12,jvj+11,jvj+9)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=R; pile[WZ4]=jvj+7; 
(*f[192])( );     /*QUADRI4(100,41,130,R,jvj+7)*/
pile[v[22]]=jvj+5; pile[WZ1]=111; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(jvj+5,111,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; pile[WZ2]=103; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+6,jvj+7,103,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+8; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+9,jvj+8,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[522])( );     /*PLUB2(jvj+3,jvj+4)*/
l17:I++;
goto l16;
l11:V4=0;
goto l19;
l12:V9=S;
goto l20;
l14:YY=s[V15];
if((YY>Q)) goto l15;
pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,117,1)*/
l15:V15=t[V15];
goto l13;
l18:for(a=x[A];a>0;a=t[a]) if(s[a]==I) goto l17;
S=1;
goto l1;
}
