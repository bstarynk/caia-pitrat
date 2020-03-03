#include "dx.h"
void AJOUREGORD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int P=0,V86=0,V77=0,V78=0,V79=0,V80=0,V81=0,V82=0,V83=0,V84=0;
int X,E;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=33;
x[jvj+1]=11046;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==701&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; E=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=696; pile[WZ1]=158; pile[WZ2]=jvj+2; 
(*f[54])( );     /*TRI1(696,158,jvj+2)*/
pile[v[22]]=X; pile[WZ1]=265; 
(*f[36])( );     /*PLUSC0(X,265,jvj+2)*/
x[jvj+30]=x[E] ;z[jvj+30]=z[E];
l1:if((x[jvj+30]>0)) goto l2;
x[jvj+29]=0 ;z[jvj+29]=0;
pile[v[22]]=E; 
(*f[1091])( );     /*PREORDRE0(E)*/
pile[WZ1]=jvj+2; pile[WZ2]=jvj+29; 
(*f[1092])( );     /*METDANSORD0(E,jvj+2,jvj+29)*/
x[jvj+33]=x[E] ;z[jvj+33]=z[E];
l18:if((x[jvj+33]>0)) goto l19;
l20:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+5]=s[x[jvj+30]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+30];
x[jvj+3]=d[236];z[jvj+3]=0;
l3:if((x[jvj+3]>0)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+5,jvj+7)*/
pile[v[22]]=108; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(108,jvj+7,jvj+8)*/
if((x[jvj+8]!=0)) goto l7;
pile[v[22]]=jvj+5; pile[WZ1]=258; pile[WZ2]=229; 
(*f[36])( );     /*PLUSC0(jvj+5,258,229)*/
l7:pile[v[22]]=184; pile[WZ1]=jvj+5; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(184,jvj+5,jvj+9)*/
x[jvj+31]=x[jvj+9] ;z[jvj+31]=z[jvj+9];
l8:if((x[jvj+31]>0)) goto l9;
x[jvj+30]=t[x[jvj+30]];
goto l1;
l4:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[491])( );     /*FIGURETOTAL0(jvj+4,jvj+5,jvj+6)*/
if((x[jvj+6]==135)) goto l6;
l5:x[jvj+3]=t[x[jvj+3]];
goto l3;
l6:pile[v[22]]=jvj+5; pile[WZ1]=159; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(jvj+5,159,jvj+4)*/
goto l5;
l9:x[jvj+10]=s[x[jvj+31]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+31];
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=42)) goto l10;
pile[v[22]]=105; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(105,jvj+10,jvj+12)*/
x[jvj+32]=x[jvj+12] ;z[jvj+32]=z[jvj+12];
l11:if((x[jvj+32]<=0)) goto l10;
x[jvj+13]=s[x[jvj+32]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+32];
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=73)) goto l12;
pile[v[22]]=111; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+13,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]==576)) goto l13;
if((x[jvj+16]!=902)) goto l14;
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+13,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=365)) goto l14;
pile[v[22]]=jvj+5; pile[WZ1]=258; pile[WZ2]=365; 
(*f[36])( );     /*PLUSC0(jvj+5,258,365)*/
l14:x[jvj+19]=x[jvj+16] ;z[jvj+19]=z[jvj+16];
if(x[jvj+19]!=859&&x[jvj+19]!=875) goto l15;
pile[v[22]]=jvj+5; pile[WZ1]=258; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+5,258,jvj+19)*/
l15:if((x[jvj+16]==262)) goto l16;
if((x[jvj+16]==1341)) goto l17;
if((x[jvj+16]!=906)) goto l12;
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+13,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+25,jvj+26)*/
x[jvj+27]=x[jvj+26] ;z[jvj+27]=z[jvj+26];
if(x[jvj+27]!=480&&x[jvj+27]!=481) goto l12;
pile[v[22]]=jvj+5; pile[WZ1]=258; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+5,258,jvj+27)*/
pile[WZ2]=170; 
(*f[36])( );     /*PLUSC0(jvj+5,258,170)*/
l12:x[jvj+32]=t[x[jvj+32]];
goto l11;
l10:x[jvj+31]=t[x[jvj+31]];
goto l8;
l13:pile[v[22]]=jvj+5; pile[WZ1]=159; pile[WZ2]=576; 
(*f[36])( );     /*PLUSC0(jvj+5,159,576)*/
goto l14;
l16:pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+13,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+20,jvj+21)*/
x[jvj+22]=x[jvj+21] ;z[jvj+22]=z[jvj+21];
if(x[jvj+22]!=280&&x[jvj+22]!=164) goto l12;
pile[v[22]]=jvj+5; pile[WZ1]=258; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+5,258,jvj+22)*/
goto l12;
l17:pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+13,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+23,jvj+24)*/
P=x[jvj+24];
if(P!=365&&P!=202) goto l12;
pile[v[22]]=jvj+5; pile[WZ1]=258; pile[WZ2]=365; 
(*f[36])( );     /*PLUSC0(jvj+5,258,365)*/
goto l12;
l19:x[jvj+28]=s[x[jvj+33]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+33];
V86=x[jvj+28];
pile[v[22]]=jvj+28; pile[WZ1]=0; pile[WZ2]=V86; pile[WZ3]=159; 
(*f[285])( );     /*ENLY0(jvj+28,0,V86,159,V77,V78)*/
V77=pile[WZ4]; V78=pile[WZ5]; 
pile[WZ1]=V78; pile[WZ2]=V77; pile[WZ3]=226; 
(*f[285])( );     /*ENLY0(jvj+28,V78,V77,226,V79,V80)*/
V79=pile[WZ4]; V80=pile[WZ5]; 
pile[WZ1]=V80; pile[WZ2]=V79; pile[WZ3]=248; 
(*f[285])( );     /*ENLY0(jvj+28,V80,V79,248,V81,V82)*/
V81=pile[WZ4]; V82=pile[WZ5]; 
pile[WZ1]=V82; pile[WZ2]=V81; pile[WZ3]=258; 
(*f[285])( );     /*ENLY0(jvj+28,V82,V81,258,V83,V84)*/
V83=pile[WZ4]; V84=pile[WZ5]; 
x[jvj+33]=t[x[jvj+33]];
goto l18;
}
