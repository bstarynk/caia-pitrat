#include "dx.h"
void SEGD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,W=0,V30=0,V=0,V5=0,V18=0,V6=0,V19=0,V22=0,WW=0,V23=0,V26=0;
int Q,BK,LV,BL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=45;
x[jvj+1]=11881;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1816&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Q=pile[v[22]]; BK=pile[v[22]+1]; LV=pile[v[22]+2]; BL=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+2; 
(*f[54])( );     /*TRI1(250,158,jvj+2)*/
pile[v[22]]=223; pile[WZ1]=Q; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(223,Q,jvj+7)*/
l5:if((x[jvj+7]>0)) goto l6;
if((x[LV]!=68)) goto l8;
pile[v[22]]=184; pile[WZ1]=Q; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(184,Q,jvj+23)*/
l21:if((x[jvj+23]<=0)) goto l8;
x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
V26=x[jvj+24];
pile[v[22]]=565; pile[WZ1]=BL; pile[WZ2]=V26; 
(*f[134])( );     /*OTA0(565,BL,V26)*/
pile[v[22]]=BK; pile[WZ1]=184; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(BK,184,jvj+24)*/
x[jvj+23]=t[x[jvj+23]];
goto l21;
l2:x[jvj+4]=s[x[jvj+43]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+43];
pile[v[22]]=391; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(391,jvj+4,V4)*/
V4=pile[WZ2]; 
if((W!=V4)) goto l3;
V30=t[V30];
l4:if((V30<=0)) goto l7;
W=s[V30];
pile[v[22]]=1260; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1260,jvj+2,jvj+3)*/
x[jvj+43]=x[jvj+3] ;z[jvj+43]=z[jvj+3];
l1:if((x[jvj+43]>0)) goto l2;
pile[v[22]]=391; pile[WZ1]=W; pile[WZ2]=747; pile[WZ3]=V; pile[WZ4]=jvj+6; 
(*f[1385])( );     /*QUADRI16(391,W,747,V,jvj+6)*/
pile[v[22]]=jvj+2; pile[WZ1]=1260; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+2,1260,jvj+6)*/
l7:x[jvj+7]=t[x[jvj+7]];
goto l5;
l3:x[jvj+43]=t[x[jvj+43]];
goto l1;
l6:V=s[x[jvj+7]];
pile[v[22]]=214; pile[WZ1]=21; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(214,21,jvj+5)*/
V30=x[jvj+5];
goto l4;
l8:x[jvj+11]=0 ;z[jvj+11]=0;
pile[v[22]]=222; pile[WZ1]=Q; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(222,Q,jvj+8)*/
x[jvj+9]=d[7];z[jvj+9]=0;
l9:if((x[jvj+8]>0)) goto l10;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+25; 
(*f[299])( );     /*COPEL0(jvj+11,jvj+25)*/
x[jvj+17]=0 ;z[jvj+17]=0;
pile[v[22]]=223; pile[WZ1]=Q; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(223,Q,jvj+14)*/
x[jvj+15]=d[7];z[jvj+15]=0;
l13:if((x[jvj+14]>0)) goto l14;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+26; 
(*f[299])( );     /*COPEL0(jvj+17,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=BK; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,BK,jvj+42)*/
pile[v[22]]=jvj+25; pile[WZ1]=114; pile[WZ2]=jvj+40; 
(*f[300])( );     /*TRI10(jvj+25,114,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+26; pile[WZ2]=113; pile[WZ3]=jvj+41; 
(*f[301])( );     /*TRI11(jvj+40,jvj+26,113,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+42; pile[WZ4]=jvj+41; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+42,jvj+41,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+28; 
(*f[180])( );     /*TRIENS0(jvj+27,(-20),105,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+28,42,100,jvj+21)*/
pile[v[22]]=223; pile[WZ1]=Q; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(223,Q,jvj+20)*/
l18:if((x[jvj+20]>0)) goto l19;
pile[v[22]]=BL; pile[WZ1]=565; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(BL,565,jvj+21)*/
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l10:V5=s[x[jvj+8]];
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V5; pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(100,21,140,V5,jvj+31)*/
pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(100,21,140,V5,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=103; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,103,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+30; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+31,jvj+30,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[196])( );     /*PLUF0(jvj+9,jvj+10,jvj+11)*/
x[jvj+8]=t[x[jvj+8]];
goto l9;
l12:x[jvj+44]=t[x[jvj+44]];
l11:if((x[jvj+44]<=0)) goto l15;
x[jvj+13]=s[x[jvj+44]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+44];
pile[v[22]]=747; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(747,jvj+13,V18)*/
V18=pile[WZ2]; 
if((V18!=V6)) goto l12;
pile[v[22]]=391; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(391,jvj+13,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V19; pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,21,140,V19,jvj+34)*/
pile[WZ3]=V6; pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(100,21,140,V6,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=103; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,103,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+33; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+34,jvj+33,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[196])( );     /*PLUF0(jvj+15,jvj+16,jvj+17)*/
l15:x[jvj+14]=t[x[jvj+14]];
goto l13;
l14:V6=s[x[jvj+14]];
pile[v[22]]=1260; pile[WZ1]=jvj+2; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1260,jvj+2,jvj+12)*/
x[jvj+44]=x[jvj+12] ;z[jvj+44]=z[jvj+12];
goto l11;
l17:x[jvj+45]=t[x[jvj+45]];
l16:if((x[jvj+45]<=0)) goto l20;
x[jvj+19]=s[x[jvj+45]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+45];
pile[v[22]]=747; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(747,jvj+19,V22)*/
V22=pile[WZ2]; 
if((V22!=WW)) goto l17;
pile[v[22]]=391; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(391,jvj+19,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V23; pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(100,21,140,V23,jvj+39)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+37)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=WW; pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(100,21,140,WW,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=436; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,436,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; pile[WZ2]=111; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+36,jvj+37,111,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+38; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+39,jvj+38,jvj+22)*/
pile[v[22]]=jvj+21; pile[WZ1]=105; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+21,105,jvj+22)*/
l20:x[jvj+20]=t[x[jvj+20]];
goto l18;
l19:WW=s[x[jvj+20]];
pile[v[22]]=1260; pile[WZ1]=jvj+2; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1260,jvj+2,jvj+18)*/
x[jvj+45]=x[jvj+18] ;z[jvj+45]=z[jvj+18];
goto l16;
}
