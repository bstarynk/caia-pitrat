#include "dx.h"
void ALCAD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NN=0,V14=0,V11=0,V49=0,V=0,V47=0,V48=0,V50=0,V51=0,NR=0,DX=0,V45=0,V33=0,V52=0,V53=0,V54=0,V55=0,V34=0,V35=0,V60=0,V61=0,V63=0,V62=0,V64=0,V65=0,V67=0,V66=0;
int S,H;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=16;
if(v[0]>99700) (*f[6])( );

S=pile[v[22]]; H=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=H; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,H,jvj+2)*/
if((x[jvj+2]!=454)) goto l8;
pile[v[22]]=160; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(160,H,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=128)) goto l8;
pile[v[22]]=128; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(128,jvj+3,jvj+5)*/
l2:if((x[jvj+5]>0)) goto l3;
pile[v[22]]=111; pile[WZ1]=H; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,H,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+13,jvj+1)*/
pile[v[22]]=917; pile[WZ1]=jvj+1; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(917,jvj+1,jvj+14)*/
V14=incon;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(117,jvj+1,NN)*/
NN=pile[WZ2]; 
V14=NN;
l7:if((x[jvj+14]<=0)) goto l8;
x[jvj+16]=s[x[jvj+14]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+14];
pile[v[22]]=117; pile[WZ1]=V14; pile[WZ2]=218; pile[WZ3]=jvj+16; pile[WZ4]=jvj+15; 
(*f[567])( );     /*QUADRI11(117,V14,218,jvj+16,jvj+15)*/
pile[v[22]]=H; pile[WZ1]=925; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(H,925,jvj+15)*/
x[jvj+14]=t[x[jvj+14]];
goto l7;
l1:V14=1;
goto l7;
l3:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+6,jvj+7)*/
x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
if(x[jvj+8]!=231&&x[jvj+8]!=462) goto l5;
pile[v[22]]=1018; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1018,jvj+8,jvj+9)*/
pile[v[22]]=H; pile[WZ1]=jvj+9; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(H,jvj+9,68)*/
l5:if(x[jvj+8]!=688&&x[jvj+8]!=750&&x[jvj+8]!=472&&x[jvj+8]!=473) goto l6;
pile[v[22]]=436; pile[WZ1]=H; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(436,H,jvj+10)*/
pile[v[22]]=140; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+10,V11)*/
V11=pile[WZ2]; 
V49=x[jvj+8];
V=V11;
pile[v[22]]=0; pile[WZ1]=(-3093); 
(*f[37])( );     /*SRA0(0,(-3093),V47)*/
V47=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V49; pile[WZ2]=257; pile[WZ3]=V47; 
(*f[390])( );     /*SDX3(20,V49,257,V47,V48)*/
V48=pile[WZ4]; 
pile[v[22]]=V48; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V48,(-9543),V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V50; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V50,V,V51)*/
V51=pile[WZ2]; 
V60=V51-1;
V61=0;
l9:if((V61<=V60)) goto l10;
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
pile[v[22]]=0; 
(*f[126])( );     /*LND2(0,NR,DX)*/
NR=pile[WZ1]; DX=pile[WZ2]; 
pile[v[22]]=117; pile[WZ1]=NR; pile[WZ2]=218; pile[WZ3]=jvj+8; pile[WZ4]=jvj+11; 
(*f[567])( );     /*QUADRI11(117,NR,218,jvj+8,jvj+11)*/
pile[v[22]]=H; pile[WZ1]=925; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(H,925,jvj+11)*/
l6:if((x[jvj+7]!=1096)) goto l4;
pile[v[22]]=436; pile[WZ1]=H; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(436,H,jvj+12)*/
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+12,V45)*/
V45=pile[WZ2]; 
V33=V45;
pile[v[22]]=0; pile[WZ1]=(-3093); 
(*f[37])( );     /*SRA0(0,(-3093),V52)*/
V52=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V52; pile[WZ2]=1096; 
(*f[42])( );     /*SRA1(135,V52,1096,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V53,(-9543),V54)*/
V54=pile[WZ2]; 
pile[v[22]]=V54; pile[WZ1]=V33; 
(*f[37])( );     /*SRA0(V54,V33,V55)*/
V55=pile[WZ2]; 
V64=V55-1;
V65=0;
l11:if((V65<=V64)) goto l12;
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
pile[v[22]]=0; 
(*f[126])( );     /*LND2(0,V34,V35)*/
V34=pile[WZ1]; V35=pile[WZ2]; 
pile[v[22]]=H; pile[WZ1]=1096; pile[WZ2]=V34; 
(*f[43])( );     /*CHGC2(H,1096,V34)*/
l4:x[jvj+5]=t[x[jvj+5]];
goto l2;
l8:v[0]=jvj; v[22]-=2; return;
l10:V63=c[0][V61];
V62=V63;
putchar(V62);
V61++;
goto l9;
l12:V67=c[0][V65];
V66=V67;
putchar(V66);
V65++;
goto l11;
}
