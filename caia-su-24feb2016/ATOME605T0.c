#include "dx.h"
void ATOME605T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V60=0,V52=0,V15=0,V62=0,V16=0,V63=0,V56=0,V37=0,V58=0;
int NNNJ;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=56;
x[jvj+1]=20605;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3912&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNJ=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNJ; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,NNNJ,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=408)) goto l21;
pile[v[22]]=103; pile[WZ1]=NNNJ; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,NNNJ,jvj+14)*/
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=486)) goto l21;
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(642,jvj+8,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,jvj+14,jvj+17)*/
pile[v[22]]=102; pile[WZ1]=NNNJ; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,NNNJ,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+18,jvj+19)*/
if((x[jvj+19]!=484)) goto l21;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+20; 
(*f[200])( );if(v[102]) goto l21;     /*NDD0(jvj+18,jvj+20)*/
pile[v[22]]=509; pile[WZ2]=jvj+21; 
(*f[1969])( );     /*FNDEND0(509,jvj+20,jvj+21)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+22)*/
l14:if((x[jvj+21]<=0)) goto l21;
x[jvj+2]=s[x[jvj+21]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+21];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+2,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=25)) goto l15;
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=1006; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1006,jvj+2,jvj+3)*/
pile[WZ1]=NNNJ; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,NNNJ,jvj+4)*/
V60=x[jvj+3];
l1:if((V60>0)) goto l2;
if((x[jvj+5]!=0)) goto l15;
x[jvj+9]=0 ;z[jvj+9]=0;
pile[v[22]]=929; pile[WZ1]=jvj+8; 
(*f[1975])( );if(v[102]) goto l9;     /*FNDCND0(929,jvj+8,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=jvj+9; pile[WZ1]=V52; 
(*f[207])( );     /*PLUE2(jvj+9,V52)*/
l9:pile[v[22]]=1006; pile[WZ1]=jvj+2; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1006,jvj+2,jvj+10)*/
V62=x[jvj+10];
l10:if((V62>0)) goto l11;
pile[v[22]]=1006; pile[WZ1]=NNNJ; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1006,NNNJ,jvj+11)*/
V63=x[jvj+11];
l12:if((V63>0)) goto l13;
x[jvj+25]=d[20];z[jvj+25]=0;
l16:if((x[jvj+25]<=0)) goto l15;
x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+2; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+26,jvj+2,jvj+27)*/
pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+27,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=636)) goto l17;
pile[v[22]]=268; pile[WZ1]=jvj+26; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(268,jvj+26,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+2; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+30,jvj+2,jvj+31)*/
pile[v[22]]=130; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+31,V37)*/
V37=pile[WZ2]; 
if((V37!=1)) goto l17;
x[jvj+32]=d[20];z[jvj+32]=0;
l18:if((x[jvj+32]<=0)) goto l17;
x[jvj+33]=s[x[jvj+32]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+32];
pile[v[22]]=268; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(268,jvj+33,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+27; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+34,jvj+27,jvj+35)*/
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==x[jvj+35]) goto l5;
l19:x[jvj+32]=t[x[jvj+32]];
goto l18;
l2:V8=s[V60];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==V8) goto l4;
l3:V60=t[V60];
goto l1;
l4:pile[v[22]]=jvj+5; pile[WZ1]=V8; 
(*f[207])( );     /*PLUE2(jvj+5,V8)*/
goto l3;
l5:x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+56]=x[jvj+17] ;z[jvj+56]=z[jvj+17];
l6:if((x[jvj+56]>0)) goto l7;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+36; 
(*f[299])( );     /*COPEL0(jvj+6,jvj+36)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+33; pile[WZ3]=jvj+37; 
(*f[45])( );if(v[102]) goto l19;     /*FNDZ0(jvj+27,jvj+33,V58,jvj+37)*/
V58=pile[WZ2]; 
x[jvj+38]=V58 ;z[jvj+38]=(x[jvj+37]==20&&V58<=sepcte) ? V58 : (x[jvj+37]==41) ? (-1000) : 0;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[760])( );     /*MEMEX0(jvj+18,jvj+38,jvj+39)*/
if((x[jvj+39]==135)) goto l20;
goto l19;
l7:x[jvj+7]=s[x[jvj+56]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+56];
if((x[jvj+7]==x[jvj+35])) goto l8;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+7)*/
l8:x[jvj+56]=t[x[jvj+56]];
goto l6;
l11:V15=s[V62];
pile[v[22]]=jvj+9; pile[WZ1]=V15; 
(*f[207])( );     /*PLUE2(jvj+9,V15)*/
V62=t[V62];
goto l10;
l13:V16=s[V63];
pile[v[22]]=jvj+9; pile[WZ1]=V16; 
(*f[207])( );     /*PLUE2(jvj+9,V16)*/
V63=t[V63];
goto l12;
l15:x[jvj+21]=t[x[jvj+21]];
goto l14;
l17:x[jvj+25]=t[x[jvj+25]];
goto l16;
l20:x[jvj+48]=x[jvj+36] ;z[jvj+48]=z[jvj+36];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+42)*/
pile[WZ3]=486; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=111; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,111,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; pile[WZ2]=107; pile[WZ3]=jvj+49; 
(*f[301])( );     /*TRI11(jvj+47,jvj+48,107,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+49,22,100,jvj+44)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; pile[WZ2]=103; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+43,jvj+44,103,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+45; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+45,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=1006; pile[WZ2]=jvj+9; 
(*f[34])( );     /*CHGC0(jvj+40,1006,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=NNNJ; pile[WZ2]=110; pile[WZ3]=(-11739); pile[WZ4]=jvj+54; 
(*f[270])( );     /*QUADRI7(101,NNNJ,110,(-11739),jvj+54)*/
pile[v[22]]=V56; pile[WZ1]=858; pile[WZ2]=jvj+50; 
(*f[46])( );     /*TRI0(V56,858,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+51; 
(*f[189])( );     /*TRI4(jvj+50,v[13],642,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=3912; pile[WZ2]=246; pile[WZ3]=jvj+52; 
(*f[189])( );     /*TRI4(jvj+51,3912,246,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=20605; pile[WZ2]=218; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+52,20605,218,jvj+53)*/
pile[v[22]]=jvj+54; pile[WZ1]=(-20); pile[WZ2]=jvj+53; pile[WZ3]=159; pile[WZ4]=jvj+55; 
(*f[298])( );     /*TRIENS1(jvj+54,(-20),jvj+53,159,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+55,1,158,jvj+41)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[1296])( );     /*NOUVCONTR0(jvj+40,jvj+41)*/
goto l19;
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
