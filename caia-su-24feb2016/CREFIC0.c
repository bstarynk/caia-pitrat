#include "dx.h"
void CREFIC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V3=0,V4=0,V26=0,V34=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=53;
x[jvj+1]=10160;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==95&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=10120; pile[WZ1]=0; pile[WZ2]=10120; pile[WZ3]=184; 
(*f[285])( );     /*ENLY0(10120,0,10120,184,V1,V2)*/
V1=pile[WZ4]; V2=pile[WZ5]; 
pile[WZ1]=V2; pile[WZ2]=V1; pile[WZ3]=565; 
(*f[285])( );     /*ENLY0(10120,V2,V1,565,V3,V4)*/
V3=pile[WZ4]; V4=pile[WZ5]; 
pile[v[22]]=42; pile[WZ1]=100; pile[WZ2]=jvj+2; 
(*f[54])( );     /*TRI1(42,100,jvj+2)*/
pile[v[22]]=10120; pile[WZ1]=184; 
(*f[36])( );     /*PLUSC0(10120,184,jvj+2)*/
pile[WZ1]=10160; 
(*f[294])( );     /*PLUK2(10120,10160)*/
pile[v[22]]=309; pile[WZ1]=317; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(309,317,jvj+25)*/
l13:if((x[jvj+25]>0)) goto l14;
l16:x[jvj+1]=incon; v[0]=jvj; return;
l3:x[jvj+3]=s[x[jvj+51]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+51];
pile[v[22]]=122; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(122,jvj+3,jvj+8)*/
if((x[jvj+8]!=114)) goto l4;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+3,V26)*/
V26=pile[WZ2]; 
x[jvj+31]=incon;
pile[v[22]]=158; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(158,jvj+3,jvj+4)*/
if((x[jvj+4]==20)) goto l17;
if((x[jvj+4]==41)) goto l18;
if((x[jvj+4]==89)) goto l19;
if((x[jvj+4]!=23)) goto l20;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+32)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+36; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+36)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=23; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,23,jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=103; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+33,jvj+34,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+35; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+36,jvj+35,jvj+31)*/
l5:x[jvj+9]=x[jvj+31] ;z[jvj+9]=z[jvj+31];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V26; pile[WZ4]=jvj+43; 
(*f[270])( );     /*QUADRI7(100,21,140,V26,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=103; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,103,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+44; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+10,jvj+44,jvj+11)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[196])( );     /*PLUF0(jvj+7,jvj+11,jvj+12)*/
l4:x[jvj+51]=t[x[jvj+51]];
l2:if((x[jvj+51]>0)) goto l3;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+27; 
(*f[299])( );     /*COPEL0(jvj+12,jvj+27)*/
x[jvj+21]=0 ;z[jvj+21]=0;
pile[v[22]]=159; pile[WZ1]=jvj+5; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(159,jvj+5,jvj+15)*/
x[jvj+16]=d[7];z[jvj+16]=0;
x[jvj+52]=x[jvj+15] ;z[jvj+52]=z[jvj+15];
l6:if((x[jvj+52]>0)) goto l7;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+28; 
(*f[299])( );     /*COPEL0(jvj+21,jvj+28)*/
x[jvj+47]=x[jvj+27] ;z[jvj+47]=z[jvj+27];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+26; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+26,jvj+50)*/
pile[v[22]]=jvj+47; pile[WZ1]=114; pile[WZ2]=jvj+48; 
(*f[300])( );     /*TRI10(jvj+47,114,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+28; pile[WZ2]=113; pile[WZ3]=jvj+49; 
(*f[301])( );     /*TRI11(jvj+48,jvj+28,113,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+50; pile[WZ4]=jvj+49; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+50,jvj+49,jvj+30)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+2,jvj+29,jvj+30)*/
l15:x[jvj+25]=t[x[jvj+25]];
goto l13;
l7:x[jvj+13]=s[x[jvj+52]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+52];
pile[v[22]]=122; pile[WZ1]=jvj+13; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(122,jvj+13,jvj+17)*/
if((x[jvj+17]!=113)) goto l8;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+13,V34)*/
V34=pile[WZ2]; 
x[jvj+37]=incon;
pile[v[22]]=158; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(158,jvj+13,jvj+14)*/
if((x[jvj+14]==20)) goto l21;
if((x[jvj+14]==41)) goto l22;
if((x[jvj+14]==89)) goto l23;
if((x[jvj+14]!=23)) goto l24;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+38)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+42; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+42)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=23; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,23,jvj+40)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; pile[WZ2]=103; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+39,jvj+40,103,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+42; pile[WZ4]=jvj+41; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+42,jvj+41,jvj+37)*/
l9:x[jvj+18]=x[jvj+37] ;z[jvj+18]=z[jvj+37];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V34; pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(100,21,140,V34,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=103; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,103,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+46; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+19,jvj+46,jvj+20)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[196])( );     /*PLUF0(jvj+16,jvj+20,jvj+21)*/
l8:x[jvj+52]=t[x[jvj+52]];
goto l6;
l11:x[jvj+23]=s[x[jvj+53]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+53];
pile[v[22]]=122; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(122,jvj+23,jvj+24)*/
if((x[jvj+24]!=113)) goto l12;
x[jvj+29]=107 ;z[jvj+29]=107;
l1:x[jvj+12]=0 ;z[jvj+12]=0;
pile[v[22]]=159; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(159,jvj+5,jvj+6)*/
x[jvj+7]=d[7];z[jvj+7]=0;
x[jvj+51]=x[jvj+6] ;z[jvj+51]=z[jvj+6];
goto l2;
l12:x[jvj+53]=t[x[jvj+53]];
l10:if((x[jvj+53]>0)) goto l11;
x[jvj+29]=105 ;z[jvj+29]=105;
goto l1;
l14:x[jvj+5]=s[x[jvj+25]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+25];
pile[v[22]]=109; pile[WZ1]=jvj+5; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(109,jvj+5,jvj+26)*/
x[jvj+29]=incon;
pile[v[22]]=159; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(159,jvj+5,jvj+22)*/
x[jvj+53]=x[jvj+22] ;z[jvj+53]=z[jvj+22];
goto l10;
l17:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=250; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,250,jvj+31)*/
goto l5;
l18:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+31)*/
goto l5;
l19:pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=65; pile[WZ4]=jvj+31; 
(*f[272])( );     /*QUADRI9(100,89,162,65,jvj+31)*/
goto l5;
l20:pile[v[22]]=100; pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=(-598); pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(100,96,163,(-598),jvj+31)*/
goto l5;
l21:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=250; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,250,jvj+37)*/
goto l9;
l22:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+37; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+37)*/
goto l9;
l23:pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=65; pile[WZ4]=jvj+37; 
(*f[272])( );     /*QUADRI9(100,89,162,65,jvj+37)*/
goto l9;
l24:pile[v[22]]=100; pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=(-598); pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(100,96,163,(-598),jvj+37)*/
goto l9;
}
