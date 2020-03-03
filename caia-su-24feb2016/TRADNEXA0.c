#include "dx.h"
void TRADNEXA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V42=0,V24=0,V39=0,V35=0,V36=0,V37=0,V38=0,V40=0,V23=0;
int N,EX;
int EA,EB;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=11844;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2046&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; EX=pile[v[22]+1]; EA=pile[v[22]+2]; EB=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+30]=0 ;z[jvj+30]=0;
x[EA]=x[jvj+30] ;z[EA]=z[jvj+30];
x[EB]=x[jvj+30] ;z[EB]=z[jvj+30];
pile[v[22]]=1688; pile[WZ1]=N; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1688,N,jvj+14)*/
l9:if((x[jvj+14]>0)) goto l10;
x[jvj+18]=d[76];z[jvj+18]=0;
x[jvj+32]=x[EX] ;z[jvj+32]=z[EX];
l12:if((x[jvj+32]>0)) goto l13;
pile[v[22]]=1689; pile[WZ1]=N; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(1689,N,jvj+21)*/
l16:if((x[jvj+21]>0)) goto l17;
pile[v[22]]=1688; pile[WZ1]=N; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(1688,N,jvj+25)*/
l20:if((x[jvj+25]>0)) goto l21;
l24:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l2:x[jvj+9]=s[x[jvj+31]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+31];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[938])( );     /*USE0(jvj+9,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==V) goto l5;
x[jvj+31]=t[x[jvj+31]];
l1:if((x[jvj+31]>0)) goto l2;
V23=g[642];
if((V23<=0)) goto l19;
V24=vg[642];
if((V24!=0)) goto l6;
if((V23<3)) goto l8;
l6:pile[v[22]]=642; pile[WZ1]=11844; pile[WZ2]=0; pile[WZ3]=(-625); pile[WZ4]=N; pile[WZ5]=(-611); pile[v[22]+6]=V; pile[v[22]+7]=jvj+13; 
(*f[218])( );     /*INTERP2(642,11844,0,(-625),N,(-611),V,jvj+13)*/
if((x[jvj+13]==135)) goto l7;
l19:pile[v[22]]=EB; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(EB,jvj+11)*/
l18:x[jvj+21]=t[x[jvj+21]];
goto l16;
l5:V42=t[V42];
l4:if((V42<=0)) goto l18;
V=s[V42];
pile[v[22]]=1688; pile[WZ1]=N; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1688,N,jvj+8)*/
x[jvj+31]=x[jvj+8] ;z[jvj+31]=z[jvj+8];
goto l1;
l7:if((V23<4)) goto l8;
goto l19;
l8:V39=x[N];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V35; pile[WZ2]=11844; 
(*f[98])( );     /*SRA3(135,V35,11844,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=V36; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V36,125,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V39; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(20,V39,V37,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=V38; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V38,V,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; 
(*f[40])( );     /*SLG0(V40)*/
if((V23!=2)) goto l19;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l19;
l10:x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+15,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=278)) goto l11;
pile[v[22]]=EA; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(EA,jvj+15)*/
l11:x[jvj+14]=t[x[jvj+14]];
goto l9;
l13:x[jvj+2]=s[x[jvj+32]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+32];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==278)) goto l14;
l15:pile[v[22]]=jvj+2; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+26)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+29; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+29)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+19; pile[WZ2]=103; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+27,jvj+19,103,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+29,jvj+28,jvj+20)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+20; pile[WZ2]=EA; 
(*f[196])( );     /*PLUF0(jvj+18,jvj+20,EA)*/
l14:x[jvj+32]=t[x[jvj+32]];
goto l12;
l17:x[jvj+11]=s[x[jvj+21]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+21];
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+11,jvj+22)*/
if((x[jvj+22]!=73)) goto l3;
pile[v[22]]=111; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+11,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=20)) goto l3;
pile[v[22]]=EB; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(EB,jvj+11)*/
l3:pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[938])( );     /*USE0(jvj+11,jvj+12)*/
V42=x[jvj+12];
goto l4;
l21:x[jvj+5]=s[x[jvj+25]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+25];
for(a=x[EX];a>0;a=t[a]) if(s[a]==x[jvj+5]) goto l22;
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]==278)) goto l22;
l23:pile[v[22]]=EB; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(EB,jvj+5)*/
l22:x[jvj+25]=t[x[jvj+25]];
goto l20;
}
