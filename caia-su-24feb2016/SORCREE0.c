#include "dx.h"
void SORCREE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V20=0,V22=0,V2=0,V17=0,V18=0,V=0,V23=0,V24=0,V25=0,RES=0,V45=0,V46=0,V48=0,V50=0,V52=0,V28=0,C=0,V9=0,V10=0,V11=0,V12=0,V13=0,V14=0,V15=0,V26=0,V27=0,V29=0,V30=0,V32=0,V34=0,V36=0,V38=0,V40=0,V42=0;
int N;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=11205;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==404&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=983; pile[WZ1]=N; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(983,N,jvj+5)*/
x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=878; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(878,N,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
V28=x[N];
l12:if((x[jvj+4]<=0)) goto l14;
C=s[x[jvj+4]];
pile[v[22]]=C; pile[WZ1]=N; pile[WZ2]=jvj+13; 
(*f[764])( );     /*ETATCREF0(C,N,jvj+13)*/
pile[v[22]]=493; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(493,jvj+13,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(876,jvj+13,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+13,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=610; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(610,jvj+13,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=609; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(609,jvj+13,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(515,jvj+13,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(510,jvj+13,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(10,0,42,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V28; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(20,V28,V26,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=V27; pile[WZ1]=C; 
(*f[37])( );     /*SRA0(V27,C,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V15; pile[WZ2]=V29; 
(*f[39])( );     /*SDX0(41,V15,V29,V30)*/
V30=pile[WZ3]; 
pile[WZ1]=V14; pile[WZ2]=V30; 
(*f[39])( );     /*SDX0(41,V14,V30,V32)*/
V32=pile[WZ3]; 
pile[WZ1]=V13; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(41,V13,V32,V34)*/
V34=pile[WZ3]; 
pile[WZ1]=V12; pile[WZ2]=V34; 
(*f[39])( );     /*SDX0(41,V12,V34,V36)*/
V36=pile[WZ3]; 
pile[WZ1]=V11; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(41,V11,V36,V38)*/
V38=pile[WZ3]; 
pile[WZ1]=V10; pile[WZ2]=V38; 
(*f[39])( );     /*SDX0(41,V10,V38,V40)*/
V40=pile[WZ3]; 
pile[WZ1]=V9; pile[WZ2]=V40; 
(*f[39])( );     /*SDX0(41,V9,V40,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=V42; 
(*f[40])( );     /*SLG0(V42)*/
pile[v[22]]=878; pile[WZ1]=N; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(878,N,jvj+12)*/
x[jvj+17]=x[jvj+12] ;z[jvj+17]=z[jvj+12];
l9:if((x[jvj+17]<=0)) goto l13;
x[jvj+10]=s[x[jvj+17]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+17];
pile[v[22]]=897; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(897,jvj+10,V17)*/
V17=pile[WZ2]; 
if((V17!=C)) goto l10;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(163,jvj+10,V18)*/
V18=pile[WZ2]; 
V=V18;
pile[v[22]]=878; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(878,jvj+5,jvj+6)*/
x[jvj+15]=x[jvj+6] ;z[jvj+15]=z[jvj+6];
l4:if((x[jvj+15]<=0)) goto l10;
x[jvj+7]=s[x[jvj+15]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+15];
pile[v[22]]=163; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+7,V20)*/
V20=pile[WZ2]; 
if((V20!=V)) goto l5;
pile[v[22]]=944; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(944,jvj+7,jvj+8)*/
x[jvj+16]=x[jvj+8] ;z[jvj+16]=z[jvj+8];
l6:if((x[jvj+16]<=0)) goto l10;
x[jvj+9]=s[x[jvj+16]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+16];
pile[v[22]]=683; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(683,jvj+9,V22)*/
V22=pile[WZ2]; 
if((V22!=3)) goto l7;
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(936,jvj+9,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(876,jvj+9,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(493,jvj+9,V25)*/
V25=pile[WZ2]; 
V2=incon;
pile[v[22]]=397; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(397,jvj+10,jvj+11)*/
V2=0;
l11:pile[v[22]]=jvj+9; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[765])( );     /*EVALNOUVPB0(jvj+9,jvj+13,jvj+14)*/
pile[v[22]]=jvj+14; 
(*f[766])( );if(v[102]) goto l10;     /*VALGLO0(jvj+14,RES)*/
RES=pile[WZ1]; 
pile[v[22]]=V2; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V2,V,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=RES; pile[WZ2]=V45; 
(*f[39])( );     /*SDX0(41,RES,V45,V46)*/
V46=pile[WZ3]; 
pile[WZ1]=V25; pile[WZ2]=V46; 
(*f[39])( );     /*SDX0(41,V25,V46,V48)*/
V48=pile[WZ3]; 
pile[WZ1]=V24; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(41,V24,V48,V50)*/
V50=pile[WZ3]; 
pile[WZ1]=V23; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(41,V23,V50,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=V52; 
(*f[40])( );     /*SLG0(V52)*/
l10:x[jvj+17]=t[x[jvj+17]];
goto l9;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=897; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(897,jvj+3,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=V8; 
(*f[331])( );     /*PLUE3(jvj+4,V8)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:x[jvj+15]=t[x[jvj+15]];
goto l4;
l7:x[jvj+16]=t[x[jvj+16]];
goto l6;
l8:pile[v[22]]=0; pile[WZ1]=(-89); 
(*f[38])( );     /*SPC0(0,(-89),V2)*/
V2=pile[WZ2]; 
goto l11;
l13:x[jvj+4]=t[x[jvj+4]];
goto l12;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
