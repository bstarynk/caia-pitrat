#include "dx.h"
void EDIREG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V3=0,F=0,KR=0,UR=0,V13=0,V4=0,V5=0,V6=0,V7=0,V24=0,V28=0,V38=0,V19=0,V46=0,V40=0,V41=0,V42=0,V43=0;
int N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=34;
x[jvj+1]=10148;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==132&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=124; 
(*f[346])( );     /*LK1(124)*/
V1=bh[v[1]][0];
V2=bh[v[1]][1];
V3=bh[v[1]][2];
F=V1;
KR=V2;
UR=V3;
if((F==78)) goto l5;
if((F!=73)) goto l22;
pile[v[22]]=218; pile[WZ1]=N; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(218,N,jvj+28)*/
pile[v[22]]=122; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(122,jvj+28,jvj+29)*/
if((V19=w[x[jvj+29]][1])==incon) goto l22;
if((V19!=23)) goto l22;
pile[v[22]]=N; 
(*f[413])( );     /*LREEC0(N)*/
pile[v[22]]=565; pile[WZ1]=N; pile[WZ2]=160; 
(*f[412])( );     /*ORGENS0(565,N,160)*/
l22:if(F!=84&&F!=65) goto l23;
pile[v[22]]=218; pile[WZ1]=N; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(218,N,jvj+30)*/
if((x[jvj+30]!=537)) goto l23;
pile[v[22]]=159; pile[WZ1]=537; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(159,537,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=565; pile[WZ1]=N; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(565,N,jvj+6)*/
l4:if((x[jvj+6]<=0)) goto l23;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=N; 
(*f[411])( );     /*TRSIMP0(jvj+7,N)*/
x[jvj+6]=t[x[jvj+6]];
goto l4;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=109; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,jvj+4,jvj+5)*/
V13=x[jvj+5];
pile[v[22]]=jvj+5; pile[WZ1]=10146; 
(*f[294])( );     /*PLUK2(jvj+5,10146)*/
pile[WZ1]=0; pile[WZ2]=V13; pile[WZ3]=184; 
(*f[285])( );     /*ENLY0(jvj+5,0,V13,184,V4,V5)*/
V4=pile[WZ4]; V5=pile[WZ5]; 
pile[WZ1]=V5; pile[WZ2]=V4; pile[WZ3]=565; 
(*f[285])( );     /*ENLY0(jvj+5,V5,V4,565,V6,V7)*/
V6=pile[WZ4]; V7=pile[WZ5]; 
pile[WZ1]=397; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+5,397,68)*/
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l5:x[jvj+27]=incon;
pile[v[22]]=218; pile[WZ1]=N; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(218,N,jvj+8)*/
if((x[jvj+8]!=537)) goto l6;
x[jvj+27]=102 ;z[jvj+27]=102;
l21:pile[v[22]]=565; pile[WZ1]=N; pile[WZ2]=jvj+27; 
(*f[412])( );     /*ORGENS0(565,N,jvj+27)*/
goto l22;
l6:x[jvj+27]=160 ;z[jvj+27]=160;
goto l21;
l8:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=218; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(218,jvj+10,jvj+11)*/
pile[v[22]]=122; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(122,jvj+11,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+12)*/
l9:x[jvj+9]=t[x[jvj+9]];
l7:if((x[jvj+9]>0)) goto l8;
V24=1;
l10:if((V24<=sepbase)) goto l12;
pile[v[22]]=252; pile[WZ1]=537; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(252,537,jvj+16)*/
l14:if((x[jvj+16]<=0)) goto l24;
x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=565; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(565,jvj+17,jvj+18)*/
pile[v[22]]=218; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(218,jvj+17,jvj+19)*/
pile[v[22]]=122; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(122,jvj+19,jvj+20)*/
x[jvj+33]=x[jvj+18] ;z[jvj+33]=z[jvj+18];
l16:if((x[jvj+33]<=0)) goto l15;
x[jvj+21]=s[x[jvj+33]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+33];
pile[v[22]]=160; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(160,jvj+21,jvj+22)*/
pile[v[22]]=130; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+22,V38)*/
V38=pile[WZ2]; 
x[jvj+23]=d[20];z[jvj+23]=0;
l18:if((x[jvj+23]<=0)) goto l17;
x[jvj+14]=s[x[jvj+23]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+23];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+14,jvj+21,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[414])( );     /*FNDFONC0(jvj+24,jvj+25)*/
x[jvj+34]=x[jvj+25] ;z[jvj+34]=z[jvj+25];
l20:if((x[jvj+34]<=0)) goto l19;
x[jvj+26]=s[x[jvj+34]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+34];
pile[v[22]]=V38; pile[WZ1]=jvj+20; pile[WZ2]=jvj+26; 
(*f[235])( );     /*PLUSC2(V38,jvj+20,jvj+26)*/
x[jvj+34]=t[x[jvj+34]];
goto l20;
l11:V24++;
goto l10;
l12:V28=r[V24];
if((V28!=1)) goto l11;
x[jvj+15]=V24 ;z[jvj+15]=(V24<=sepcte) ? V24 : 0;
x[jvj+32]=x[jvj+13] ;z[jvj+32]=z[jvj+13];
l13:if((x[jvj+32]<=0)) goto l11;
x[jvj+14]=s[x[jvj+32]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+32];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[71])( );     /*ENLV0(jvj+14,jvj+15)*/
x[jvj+32]=t[x[jvj+32]];
goto l13;
l15:x[jvj+16]=t[x[jvj+16]];
goto l14;
l17:x[jvj+33]=t[x[jvj+33]];
goto l16;
l19:x[jvj+23]=t[x[jvj+23]];
goto l18;
l23:if((F!=70)) goto l24;
x[jvj+13]=0 ;z[jvj+13]=0;
pile[v[22]]=252; pile[WZ1]=537; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(252,537,jvj+9)*/
goto l7;
l24:if(F!=75&&F!=65) goto l25;
pile[v[22]]=449; pile[WZ1]=N; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(449,N,jvj+31)*/
V46=x[jvj+31];
pile[v[22]]=jvj+31; pile[WZ1]=10141; 
(*f[294])( );     /*PLUK2(jvj+31,10141)*/
pile[WZ1]=0; pile[WZ2]=V46; pile[WZ3]=184; 
(*f[285])( );     /*ENLY0(jvj+31,0,V46,184,V40,V41)*/
V40=pile[WZ4]; V41=pile[WZ5]; 
pile[WZ1]=V41; pile[WZ2]=V40; pile[WZ3]=565; 
(*f[285])( );     /*ENLY0(jvj+31,V41,V40,565,V42,V43)*/
V42=pile[WZ4]; V43=pile[WZ5]; 
pile[v[22]]=UR; pile[WZ1]=KR; pile[WZ2]=N; 
(*f[415])( );     /*CRESIMP0(UR,KR,N)*/
l25:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
