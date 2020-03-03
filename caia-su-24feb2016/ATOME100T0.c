#include "dx.h"
void ATOME100T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V26=0,V38=0,V53=0,V12=0,V11=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=47;
x[jvj+1]=20100;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3715&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,R,jvj+3)*/
if((x[jvj+3]!=22)) goto l12;
pile[WZ1]=RR; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,RR,jvj+4)*/
if((x[jvj+4]!=22)) goto l12;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,R,jvj+5)*/
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=486)) goto l12;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,R,jvj+8)*/
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=486)) goto l12;
pile[v[22]]=107; pile[WZ1]=jvj+5; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,jvj+5,jvj+11)*/
for(i=x[jvj+11],V26=0;i>0;i=t[i],V26++)  ;
if((V26!=2)) goto l12;
pile[WZ1]=jvj+8; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+8,jvj+12)*/
for(i=x[jvj+12],V38=0;i>0;i=t[i],V38++)  ;
if((V38!=2)) goto l12;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,R,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+13,jvj+14)*/
if(x[jvj+14]!=29&&x[jvj+14]!=30&&x[jvj+14]!=25) goto l12;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,RR,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+15,jvj+16)*/
if(x[jvj+16]!=29&&x[jvj+16]!=30) goto l12;
x[jvj+17]=vo[16];z[jvj+17]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[1948])( );if(v[102]) goto l12;     /*FNDOND0(498,jvj+17,jvj+18)*/
pile[v[22]]=1182; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1182,jvj+18,jvj+19)*/
if((68!=x[jvj+19])) goto l12;
x[jvj+41]=incon;
if((x[jvj+16]!=30)) goto l1;
if(x[jvj+14]!=25&&x[jvj+14]!=30) goto l1;
x[jvj+41]=30 ;z[jvj+41]=30;
l2:x[jvj+20]=vo[14];z[jvj+20]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+20,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=RR; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,RR,jvj+21)*/
pile[v[22]]=102; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,RR,jvj+22)*/
pile[v[22]]=jvj+21; 
(*f[1161])( );if(v[102]) goto l12;     /*INF0(jvj+21,V12)*/
V12=pile[WZ1]; 
if((V12<=0)) goto l12;
x[jvj+46]=x[jvj+11] ;z[jvj+46]=z[jvj+11];
l3:if((x[jvj+46]<=0)) goto l12;
x[jvj+42]=s[x[jvj+46]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+46];
x[jvj+23]=x[jvj+42] ;z[jvj+23]=z[jvj+42];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+24)*/
x[jvj+43]=x[jvj+11] ;z[jvj+43]=z[jvj+11];
l4:if((x[jvj+43]>0)) goto l5;
x[jvj+46]=t[x[jvj+46]];
goto l3;
l1:x[jvj+41]=29 ;z[jvj+41]=29;
goto l2;
l5:x[jvj+25]=s[x[jvj+43]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+43];
if((x[jvj+42]==x[jvj+25])) goto l6;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[760])( );     /*MEMEX0(jvj+21,jvj+25,jvj+26)*/
if((x[jvj+26]==135)) goto l8;
l6:x[jvj+43]=t[x[jvj+43]];
goto l4;
l8:x[jvj+47]=x[jvj+12] ;z[jvj+47]=z[jvj+12];
l7:if((x[jvj+47]<=0)) goto l6;
x[jvj+44]=s[x[jvj+47]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+47];
x[jvj+27]=x[jvj+44] ;z[jvj+27]=z[jvj+44];
pile[v[22]]=jvj+27; 
(*f[1161])( );if(v[102]) goto l9;     /*INF0(jvj+27,V11)*/
V11=pile[WZ1]; 
if((V11<0)) goto l9;
pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+28)*/
x[jvj+45]=x[jvj+12] ;z[jvj+45]=z[jvj+12];
l10:if((x[jvj+45]<=0)) goto l9;
x[jvj+29]=s[x[jvj+45]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+45];
if((x[jvj+44]==x[jvj+29])) goto l11;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[760])( );     /*MEMEX0(jvj+22,jvj+29,jvj+30)*/
if((x[jvj+30]==135)) goto l13;
l11:x[jvj+45]=t[x[jvj+45]];
goto l10;
l9:x[jvj+47]=t[x[jvj+47]];
goto l7;
l12:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l13:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+36)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+37)*/
pile[v[22]]=V53; pile[WZ1]=858; pile[WZ2]=jvj+33; 
(*f[46])( );     /*TRI0(V53,858,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,v[13],642,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=3715; pile[WZ2]=246; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,3715,246,jvj+35)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20100; pile[WZ4]=jvj+35; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(158,1,218,20100,jvj+35,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=159; pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+31,159,jvj+36)*/
pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+31,159,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+41; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+41,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+28; pile[WZ2]=103; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+39,jvj+28,103,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+40; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+40,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+31; 
(*f[1296])( );     /*NOUVCONTR0(jvj+32,jvj+31)*/
goto l11;
}
