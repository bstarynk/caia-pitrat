#include "dx.h"
void ALCAC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V9=0,V8=0,F=0,V33=0,V35=0,V38=0,V43=0,V44=0,V51=0,V53=0,V56=0,V61=0,V62=0;
int AL,I;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=44;
x[jvj+1]=10796;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==396&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
AL=pile[v[22]]; I=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V8=incon;
V10=I+1;
V9=bh[v[1]][V10];
if((V9!=32)) goto l1;
V8=((-3412));
l2:pile[v[22]]=AL; pile[WZ1]=V8; pile[WZ2]=jvj+2; 
(*f[755])( );if(v[102]) goto l11;     /*ALCAE0(AL,V8,jvj+2)*/
pile[v[22]]=448; pile[WZ1]=AL; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(448,AL,jvj+3)*/
x[jvj+24]=0 ;z[jvj+24]=0;
pile[v[22]]=128; pile[WZ1]=jvj+2; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(128,jvj+2,jvj+23)*/
l12:if((x[jvj+23]>0)) goto l13;
pile[v[22]]=jvj+24; pile[WZ1]=128; pile[WZ2]=jvj+25; 
(*f[300])( );     /*TRI10(jvj+24,128,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=10547; pile[WZ2]=109; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+25,10547,109,jvj+10)*/
x[jvj+4]=vo[20];z[jvj+4]=vz[20];
l3:if((x[jvj+3]>0)) goto l4;
pile[v[22]]=454; pile[WZ1]=jvj+2; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(454,jvj+2,jvj+12)*/
l6:if((x[jvj+12]>0)) goto l7;
pile[v[22]]=448; pile[WZ1]=AL; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(448,AL,jvj+14)*/
x[jvj+35]=0 ;z[jvj+35]=0;
pile[v[22]]=128; pile[WZ1]=jvj+2; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(128,jvj+2,jvj+34)*/
l15:if((x[jvj+34]>0)) goto l16;
pile[v[22]]=jvj+35; pile[WZ1]=128; pile[WZ2]=jvj+36; 
(*f[300])( );     /*TRI10(jvj+35,128,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=10547; pile[WZ2]=109; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+36,10547,109,jvj+21)*/
x[jvj+15]=vo[20];z[jvj+15]=vz[20];
l8:if((x[jvj+14]>0)) goto l9;
pile[v[22]]=448; pile[WZ1]=jvj+2; 
(*f[71])( );     /*ENLV0(448,jvj+2)*/
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:pile[v[22]]=I; 
(*f[258])( );     /*SMV1(I,V8)*/
V8=pile[WZ1]; 
goto l2;
l4:x[jvj+5]=s[x[jvj+3]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+3];
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=448)) goto l5;
pile[v[22]]=111; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+5,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=451)) goto l5;
pile[v[22]]=135; pile[WZ1]=jvj+5; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(135,jvj+5,jvj+9)*/
pile[v[22]]=jvj+4; pile[WZ1]=558; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(jvj+4,558,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+11; 
(*f[359])( );     /*EVLQ1(jvj+9,jvj+11)*/
l5:x[jvj+3]=t[x[jvj+3]];
goto l3;
l7:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+13; 
(*f[406])( );     /*ALCAD0(jvj+2,jvj+13)*/
x[jvj+12]=t[x[jvj+12]];
goto l6;
l9:x[jvj+16]=s[x[jvj+14]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+14];
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=448)) goto l10;
pile[v[22]]=111; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+16,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+18,jvj+19)*/
F=x[jvj+19];
if(F!=531&&F!=453&&F!=979&&F!=1027) goto l10;
pile[v[22]]=135; pile[WZ1]=jvj+16; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(135,jvj+16,jvj+20)*/
pile[v[22]]=jvj+15; pile[WZ1]=558; pile[WZ2]=jvj+21; 
(*f[35])( );     /*CHGC1(jvj+15,558,jvj+21)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+22; 
(*f[359])( );     /*EVLQ1(jvj+20,jvj+22)*/
l10:x[jvj+14]=t[x[jvj+14]];
goto l8;
l13:x[jvj+26]=s[x[jvj+23]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+23];
pile[v[22]]=158; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(158,jvj+26,jvj+27)*/
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+26,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=416; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(416,jvj+26,V35)*/
V35=pile[WZ2]; 
x[jvj+31]=x[jvj+27] ;z[jvj+31]=z[jvj+27];
if((x[jvj+28]=w[x[jvj+31]][3])==incon) goto l14;
pile[v[22]]=jvj+26; pile[WZ1]=jvj+28; pile[WZ3]=jvj+29; 
(*f[45])( );if(v[102]) goto l14;     /*FNDZ0(jvj+26,jvj+28,V38,jvj+29)*/
V38=pile[WZ2]; 
x[jvj+33]=V38 ;z[jvj+33]=(x[jvj+29]==20&&V38<=sepcte) ? V38 : (x[jvj+29]==41) ? (-1000) : 0;
pile[v[22]]=V35; pile[WZ1]=416; pile[WZ2]=jvj+30; 
(*f[46])( );     /*TRI0(V35,416,jvj+30)*/
pile[v[22]]=140; pile[WZ1]=V33; pile[WZ2]=158; pile[WZ3]=jvj+31; pile[WZ4]=jvj+30; pile[WZ5]=jvj+32; 
(*f[48])( );     /*QUADRI1(140,V33,158,jvj+31,jvj+30,jvj+32)*/
V43=x[jvj+33];
V44=z[jvj+33];
pile[v[22]]=jvj+32; pile[WZ1]=V43; pile[WZ2]=jvj+28; pile[WZ3]=V44; 
(*f[49])( );     /*CHP0(jvj+32,V43,jvj+28,V44)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+32; 
(*f[68])( );     /*PLUE0(jvj+24,jvj+32)*/
l14:x[jvj+23]=t[x[jvj+23]];
goto l12;
l16:x[jvj+37]=s[x[jvj+34]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+34];
pile[v[22]]=158; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(158,jvj+37,jvj+38)*/
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,jvj+37,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=416; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(416,jvj+37,V53)*/
V53=pile[WZ2]; 
x[jvj+42]=x[jvj+38] ;z[jvj+42]=z[jvj+38];
if((x[jvj+39]=w[x[jvj+42]][3])==incon) goto l17;
pile[v[22]]=jvj+37; pile[WZ1]=jvj+39; pile[WZ3]=jvj+40; 
(*f[45])( );if(v[102]) goto l17;     /*FNDZ0(jvj+37,jvj+39,V56,jvj+40)*/
V56=pile[WZ2]; 
x[jvj+44]=V56 ;z[jvj+44]=(x[jvj+40]==20&&V56<=sepcte) ? V56 : (x[jvj+40]==41) ? (-1000) : 0;
pile[v[22]]=V53; pile[WZ1]=416; pile[WZ2]=jvj+41; 
(*f[46])( );     /*TRI0(V53,416,jvj+41)*/
pile[v[22]]=140; pile[WZ1]=V51; pile[WZ2]=158; pile[WZ3]=jvj+42; pile[WZ4]=jvj+41; pile[WZ5]=jvj+43; 
(*f[48])( );     /*QUADRI1(140,V51,158,jvj+42,jvj+41,jvj+43)*/
V61=x[jvj+44];
V62=z[jvj+44];
pile[v[22]]=jvj+43; pile[WZ1]=V61; pile[WZ2]=jvj+39; pile[WZ3]=V62; 
(*f[49])( );     /*CHP0(jvj+43,V61,jvj+39,V62)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+43; 
(*f[68])( );     /*PLUE0(jvj+35,jvj+43)*/
l17:x[jvj+34]=t[x[jvj+34]];
goto l15;
}
