#include "dx.h"
void DATE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V1=0,V3=0,V4=0,V5=0,V2=0,V7=0,V13=0,V11=0,V15=0,V10=0,V9=0,V8=0,A=0,V22=0,V20=0,V24=0,V19=0,V18=0,M=0,V29=0,V27=0,V31=0,V26=0,V25=0,J=0,V36=0,V34=0,V38=0,V33=0,V32=0,H=0,V43=0,V41=0,V45=0,V40=0,V39=0,MN=0,V50=0,V48=0,V52=0,V47=0,V46=0,S=0,V16=0,V55=0,V57=0,V58=0,V60=0,V61=0,V63=0,V64=0,V66=0,V67=0,V69=0,V70=0,V72=0,V74=0,V75=0,V76=0,V77=0,V78=0,V79=0,V80=0,V81=0,V82=0,V83=0;
int P;
int WZ1,WZ2,WZ3;

P=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V6=0;
v[2]=v[1];
V1=V6;
v[1]=4;
pile[v[22]]=(-4546); pile[WZ1]=V1; 
(*f[64])( );     /*SRA2((-4546),V1,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=(-4547); pile[WZ1]=V3; 
(*f[64])( );     /*SRA2((-4547),V3,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V4,62,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=(-4539); pile[WZ1]=V5; 
(*f[64])( );     /*SRA2((-4539),V5,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V2,0,V7)*/
V7=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V7; pile[WZ1]=406; pile[WZ2]=130; 
(*f[67])( );     /*SPA0(V7,406,130)*/
V74=0;
V75=v[17];
v[2]=v[1];
V76=V74;
v[1]=4;
pile[v[22]]=(-4539); pile[WZ1]=V76; 
(*f[64])( );     /*SRA2((-4539),V76,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=V77; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V77,0,V78)*/
V78=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V78; pile[WZ1]=1146; pile[WZ2]=2; 
(*f[67])( );     /*SPA0(V78,1146,2)*/
fscanf(fx[2],"%s",res);
fclose(fx[2]);
v[17]=V75;
V79=0;
v[2]=v[1];
V80=V79;
v[1]=4;
pile[v[22]]=(-4501); pile[WZ1]=V80; 
(*f[64])( );     /*SRA2((-4501),V80,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=(-4539); pile[WZ1]=V81; 
(*f[64])( );     /*SRA2((-4539),V81,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=V82; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V82,0,V83)*/
V83=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V83; pile[WZ1]=406; pile[WZ2]=130; 
(*f[67])( );     /*SPA0(V83,406,130)*/
V13=res[0];
V11=V13*10;
V15=res[1];
V10=V11+V15;
V9=V10-528;
V8=2000+V9;
A=V8;
V22=res[2];
V20=V22*10;
V24=res[3];
V19=V20+V24;
V18=V19-528;
M=V18;
V29=res[4];
V27=V29*10;
V31=res[5];
V26=V27+V31;
V25=V26-528;
J=V25;
V36=res[6];
V34=V36*10;
V38=res[7];
V33=V34+V38;
V32=V33-528;
H=V32;
V43=res[8];
V41=V43*10;
V45=res[9];
V40=V41+V45;
V39=V40-528;
MN=V39;
V50=res[10];
V48=V50*10;
V52=res[11];
V47=V48+V52;
V46=V47-528;
S=V46;
if((x[P]!=68)) goto l1;
V16=incon;
V16=0;
pile[v[22]]=41; pile[WZ1]=J; pile[WZ2]=V16; 
(*f[39])( );     /*SDX0(41,J,V16,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V55,45,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=M; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V57,M,41,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=V58; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V58,45,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=V60; pile[WZ1]=A; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V60,A,41,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=10; pile[WZ1]=V61; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(10,V61,32,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=H; pile[WZ2]=V63; 
(*f[39])( );     /*SDX0(41,H,V63,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=V64; pile[WZ1]=104; 
(*f[38])( );     /*SPC0(V64,104,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=V66; pile[WZ1]=MN; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V66,MN,41,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=V67; pile[WZ1]=109; 
(*f[38])( );     /*SPC0(V67,109,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=V69; pile[WZ1]=S; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V69,S,41,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=V70; pile[WZ1]=115; 
(*f[38])( );     /*SPC0(V70,115,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=V72; 
(*f[40])( );     /*SLG0(V72)*/
l1:v[22]-=1; return;
}
