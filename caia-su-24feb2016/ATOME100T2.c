#include "dx.h"
void ATOME100T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,V33=0,F=0,V1=0,V58=0,V3=0,V60=0;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=43;
x[jvj+1]=20100;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3717&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=RR; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,RR,jvj+11)*/
if((x[jvj+11]!=22)) goto l17;
pile[v[22]]=111; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,RR,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+12,jvj+13)*/
if(x[jvj+13]!=29&&x[jvj+13]!=30) goto l17;
x[jvj+14]=vo[16];z[jvj+14]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[1948])( );if(v[102]) goto l17;     /*FNDOND0(498,jvj+14,jvj+15)*/
pile[v[22]]=1182; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1182,jvj+15,jvj+16)*/
if((68!=x[jvj+16])) goto l17;
pile[v[22]]=103; pile[WZ1]=RR; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,RR,jvj+17)*/
pile[v[22]]=102; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,RR,jvj+18)*/
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=RR; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(RR,jvj+7)*/
l1:if((x[jvj+7]<=0)) goto l6;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=509; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[1969])( );     /*FNDEND0(509,jvj+8,jvj+9)*/
x[jvj+41]=x[jvj+9] ;z[jvj+41]=z[jvj+9];
l2:if((x[jvj+41]>0)) goto l3;
x[jvj+7]=t[x[jvj+7]];
goto l1;
l3:x[jvj+3]=s[x[jvj+41]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+41];
if((x[jvj+3]==x[RR])) goto l4;
pile[v[22]]=1417; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1417,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==300) goto l5;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1545,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==300) goto l5;
l4:x[jvj+41]=t[x[jvj+41]];
goto l2;
l5:pile[v[22]]=jvj+10; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+3)*/
goto l4;
l7:x[jvj+10]=t[x[jvj+10]];
l6:if((x[jvj+10]<=0)) goto l17;
x[jvj+19]=s[x[jvj+10]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+10];
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=22)) goto l7;
pile[v[22]]=102; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+19,jvj+21)*/
pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+21,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=486)) goto l7;
pile[v[22]]=103; pile[WZ1]=jvj+19; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+19,jvj+24)*/
pile[v[22]]=111; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+24,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+25,jvj+26)*/
if((x[jvj+26]!=486)) goto l7;
pile[v[22]]=107; pile[WZ1]=jvj+21; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(107,jvj+21,jvj+27)*/
for(i=x[jvj+27],V21=0;i>0;i=t[i],V21++)  ;
if((V21!=2)) goto l7;
pile[WZ1]=jvj+24; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(107,jvj+24,jvj+28)*/
for(i=x[jvj+28],V33=0;i>0;i=t[i],V33++)  ;
if((V33!=2)) goto l7;
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+19,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+29,jvj+30)*/
F=x[jvj+30];
if(F!=29&&F!=30&&F!=25) goto l7;
V58=x[jvj+27];
l8:if((V58<=0)) goto l7;
V1=s[V58];
x[jvj+42]=x[jvj+27] ;z[jvj+42]=z[jvj+27];
l9:if((x[jvj+42]>0)) goto l10;
V58=t[V58];
goto l8;
l10:x[jvj+31]=s[x[jvj+42]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+42];
if((V1==x[jvj+31])) goto l11;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[760])( );     /*MEMEX0(jvj+17,jvj+31,jvj+32)*/
if((x[jvj+32]==135)) goto l13;
l11:x[jvj+42]=t[x[jvj+42]];
goto l9;
l13:V60=x[jvj+28];
l12:if((V60<=0)) goto l11;
V3=s[V60];
x[jvj+43]=x[jvj+28] ;z[jvj+43]=z[jvj+28];
l14:if((x[jvj+43]>0)) goto l15;
V60=t[V60];
goto l12;
l15:x[jvj+33]=s[x[jvj+43]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+43];
if((V3==x[jvj+33])) goto l16;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[760])( );     /*MEMEX0(jvj+18,jvj+33,jvj+34)*/
if((x[jvj+34]==135)) goto l18;
l16:x[jvj+43]=t[x[jvj+43]];
goto l14;
l17:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l18:pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(101,jvj+19,110,(-601),jvj+39)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+40; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+40)*/
pile[v[22]]=605; pile[WZ1]=715; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(605,715,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+37; 
(*f[189])( );     /*TRI4(jvj+36,v[13],642,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=3715; pile[WZ2]=246; pile[WZ3]=jvj+38; 
(*f[189])( );     /*TRI4(jvj+37,3715,246,jvj+38)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20100; pile[WZ4]=jvj+38; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(158,289,218,20100,jvj+38,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=159; pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+35,159,jvj+39)*/
pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+35,159,jvj+40)*/
(*f[481])( );     /*STOCKER0(jvj+35)*/
goto l16;
}
