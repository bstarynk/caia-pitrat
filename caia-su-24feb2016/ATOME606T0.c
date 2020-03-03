#include "dx.h"
void ATOME606T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V60=0,V52=0,V15=0,V62=0,V16=0,V63=0,V56=0,V27=0,V58=0;
int NNNN;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=58;
x[jvj+1]=20606;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3914&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNN=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNN; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,NNNN,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=25)) goto l21;
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(642,jvj+8,V56)*/
V56=pile[WZ2]; 
x[jvj+14]=d[20];z[jvj+14]=0;
l14:if((x[jvj+14]<=0)) goto l21;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=jvj+15; pile[WZ1]=NNNN; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(jvj+15,NNNN,jvj+16)*/
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+16,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=636)) goto l15;
pile[v[22]]=268; pile[WZ1]=jvj+15; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(268,jvj+15,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=NNNN; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(jvj+19,NNNN,jvj+20)*/
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,jvj+20,V27)*/
V27=pile[WZ2]; 
if((V27!=1)) goto l15;
x[jvj+21]=d[20];z[jvj+21]=0;
l16:if((x[jvj+21]<=0)) goto l15;
x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=268; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(268,jvj+22,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+16; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+23,jvj+16,jvj+24)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+22; pile[WZ3]=jvj+25; 
(*f[45])( );if(v[102]) goto l17;     /*FNDZ0(jvj+16,jvj+22,V58,jvj+25)*/
V58=pile[WZ2]; 
x[jvj+39]=V58 ;z[jvj+39]=(x[jvj+25]==20&&V58<=sepcte) ? V58 : (x[jvj+25]==41) ? (-1000) : 0;
x[jvj+26]=x[jvj+39] ;z[jvj+26]=z[jvj+39];
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=484)) goto l17;
pile[v[22]]=jvj+26; pile[WZ1]=jvj+28; 
(*f[200])( );if(v[102]) goto l17;     /*NDD0(jvj+26,jvj+28)*/
pile[v[22]]=509; pile[WZ2]=jvj+29; 
(*f[1969])( );     /*FNDEND0(509,jvj+28,jvj+29)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+30; 
(*f[255])( );     /*COPEXP0(jvj+26,jvj+30)*/
x[jvj+58]=x[jvj+29] ;z[jvj+58]=z[jvj+29];
l18:if((x[jvj+58]<=0)) goto l17;
x[jvj+2]=s[x[jvj+58]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+58];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+2,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]!=408)) goto l19;
pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,jvj+2,jvj+33)*/
pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+33,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=486)) goto l19;
pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(107,jvj+33,jvj+36)*/
for(a=x[jvj+36];a>0;a=t[a]) if(s[a]==x[jvj+24]) goto l1;
l19:x[jvj+58]=t[x[jvj+58]];
goto l18;
l1:x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=1006; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1006,jvj+2,jvj+3)*/
pile[WZ1]=NNNN; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,NNNN,jvj+4)*/
V60=x[jvj+3];
l2:if((V60>0)) goto l3;
if((x[jvj+5]!=0)) goto l19;
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
pile[v[22]]=1006; pile[WZ1]=NNNN; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1006,NNNN,jvj+11)*/
V63=x[jvj+11];
l12:if((V63>0)) goto l13;
x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+57]=x[jvj+36] ;z[jvj+57]=z[jvj+36];
l6:if((x[jvj+57]>0)) goto l7;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+37; 
(*f[299])( );     /*COPEL0(jvj+6,jvj+37)*/
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+2,jvj+38)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+38; pile[WZ2]=jvj+40; 
(*f[760])( );     /*MEMEX0(jvj+39,jvj+38,jvj+40)*/
if((x[jvj+40]==135)) goto l20;
goto l19;
l3:V8=s[V60];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==V8) goto l5;
l4:V60=t[V60];
goto l2;
l5:pile[v[22]]=jvj+5; pile[WZ1]=V8; 
(*f[207])( );     /*PLUE2(jvj+5,V8)*/
goto l4;
l7:x[jvj+7]=s[x[jvj+57]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+57];
if((x[jvj+7]==x[jvj+24])) goto l8;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+7)*/
l8:x[jvj+57]=t[x[jvj+57]];
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
l15:x[jvj+14]=t[x[jvj+14]];
goto l14;
l17:x[jvj+21]=t[x[jvj+21]];
goto l16;
l20:x[jvj+49]=x[jvj+37] ;z[jvj+49]=z[jvj+37];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+43)*/
pile[WZ3]=486; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; pile[WZ2]=107; pile[WZ3]=jvj+50; 
(*f[301])( );     /*TRI11(jvj+48,jvj+49,107,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+50,22,100,jvj+45)*/
pile[v[22]]=jvj+43; pile[WZ1]=111; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,111,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; pile[WZ2]=103; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+44,jvj+45,103,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+30; pile[WZ4]=jvj+46; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+30,jvj+46,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=1006; pile[WZ2]=jvj+9; 
(*f[34])( );     /*CHGC0(jvj+41,1006,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=NNNN; pile[WZ2]=110; pile[WZ3]=(-11756); pile[WZ4]=jvj+55; 
(*f[270])( );     /*QUADRI7(101,NNNN,110,(-11756),jvj+55)*/
pile[v[22]]=V56; pile[WZ1]=858; pile[WZ2]=jvj+51; 
(*f[46])( );     /*TRI0(V56,858,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+52; 
(*f[189])( );     /*TRI4(jvj+51,v[13],642,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=3914; pile[WZ2]=246; pile[WZ3]=jvj+53; 
(*f[189])( );     /*TRI4(jvj+52,3914,246,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=20606; pile[WZ2]=218; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+53,20606,218,jvj+54)*/
pile[v[22]]=jvj+55; pile[WZ1]=(-20); pile[WZ2]=jvj+54; pile[WZ3]=159; pile[WZ4]=jvj+56; 
(*f[298])( );     /*TRIENS1(jvj+55,(-20),jvj+54,159,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+56,1,158,jvj+42)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; 
(*f[1296])( );     /*NOUVCONTR0(jvj+41,jvj+42)*/
goto l19;
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
