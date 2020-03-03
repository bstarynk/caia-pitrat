#include "dx.h"
void COMPRIMEJGT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V36=0,V37=0;
int H,N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=11008;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==451&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
H=pile[v[22]]; N=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1135; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1135,N,jvj+2)*/
if((x[jvj+2]!=0)) goto l1;
x[jvj+7]=547 ;z[jvj+7]=547;
pile[v[22]]=jvj+7; pile[WZ1]=158; pile[WZ2]=jvj+3; 
(*f[54])( );     /*TRI1(jvj+7,158,jvj+3)*/
x[jvj+8]=d[47];z[jvj+8]=0;
l5:if((x[jvj+8]>0)) goto l6;
pile[v[22]]=N; pile[WZ1]=1135; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(N,1135,jvj+3)*/
l1:pile[v[22]]=1135; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1135,N,jvj+4)*/
l2:if((x[jvj+4]<=0)) goto l4;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=158; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(158,jvj+5,jvj+6)*/
if((x[jvj+6]!=547)) goto l3;
pile[v[22]]=1001; pile[WZ1]=N; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1001,N,jvj+14)*/
x[jvj+15]=d[48];z[jvj+15]=0;
l11:if((x[jvj+15]>0)) goto l12;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l3:x[jvj+4]=t[x[jvj+4]];
goto l2;
l6:x[jvj+33]=s[x[jvj+8]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+8];
x[jvj+9]=incon;
if((x[jvj+33]!=44)) goto l10;
x[jvj+9]=289 ;z[jvj+9]=289;
l7:pile[v[22]]=jvj+9; pile[WZ1]=158; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(jvj+9,158,jvj+10)*/
pile[v[22]]=159; pile[WZ1]=337; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(159,337,jvj+11)*/
x[jvj+32]=x[jvj+11] ;z[jvj+32]=z[jvj+11];
l8:if((x[jvj+32]>0)) goto l9;
pile[v[22]]=jvj+3; pile[WZ1]=159; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+3,159,jvj+10)*/
x[jvj+8]=t[x[jvj+8]];
goto l5;
l9:x[jvj+12]=s[x[jvj+32]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+32];
pile[v[22]]=jvj+12; pile[WZ1]=715; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+12,715,jvj+13)*/
pile[v[22]]=jvj+10; pile[WZ1]=258; 
(*f[36])( );     /*PLUSC0(jvj+10,258,jvj+13)*/
x[jvj+32]=t[x[jvj+32]];
goto l8;
l10:x[jvj+9]=x[jvj+33] ;z[jvj+9]=z[jvj+33];
goto l7;
l12:V19=s[x[jvj+15]];
pile[v[22]]=159; pile[WZ1]=jvj+5; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(159,jvj+5,jvj+16)*/
x[jvj+34]=x[jvj+16] ;z[jvj+34]=z[jvj+16];
l13:if((x[jvj+34]<=0)) goto l26;
x[jvj+17]=s[x[jvj+34]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+34];
pile[v[22]]=158; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(158,jvj+17,jvj+18)*/
if((x[jvj+18]!=V19)) goto l27;
x[jvj+35]=x[jvj+14] ;z[jvj+35]=z[jvj+14];
l14:if((x[jvj+35]<=0)) goto l26;
x[jvj+19]=s[x[jvj+35]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+35];
if((x[H]==324)) goto l25;
pile[v[22]]=jvj+19; pile[WZ1]=H; pile[WZ2]=jvj+20; 
(*f[806])( );     /*EQVALSYM0(jvj+19,H,jvj+20)*/
if((x[jvj+20]==135)) goto l25;
l15:x[jvj+35]=t[x[jvj+35]];
goto l14;
l17:x[jvj+22]=s[x[jvj+36]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+36];
pile[v[22]]=715; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(715,jvj+22,jvj+23)*/
pile[v[22]]=258; pile[WZ1]=jvj+17; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(258,jvj+17,jvj+24)*/
x[jvj+37]=x[jvj+24] ;z[jvj+37]=z[jvj+24];
l18:if((x[jvj+37]<=0)) goto l21;
x[jvj+25]=s[x[jvj+37]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+37];
pile[v[22]]=715; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(715,jvj+25,jvj+26)*/
if((x[jvj+26]!=x[jvj+23])) goto l22;
x[jvj+27]=d[23];z[jvj+27]=0;
l19:if((x[jvj+27]<=0)) goto l21;
x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=jvj+28; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(jvj+28,jvj+22,V36)*/
V36=pile[WZ2]; 
V37=V36;
pile[v[22]]=jvj+25; pile[WZ1]=jvj+28; pile[WZ2]=V37; 
(*f[186])( );     /*BTC0(jvj+25,jvj+28,V37)*/
pile[v[22]]=jvj+17; 
(*f[186])( );     /*BTC0(jvj+17,jvj+28,V37)*/
pile[v[22]]=jvj+5; 
(*f[186])( );     /*BTC0(jvj+5,jvj+28,V37)*/
l20:x[jvj+27]=t[x[jvj+27]];
goto l19;
l21:x[jvj+36]=t[x[jvj+36]];
l16:if((x[jvj+36]>0)) goto l17;
pile[v[22]]=258; pile[WZ1]=jvj+21; 
(*f[71])( );     /*ENLV0(258,jvj+21)*/
goto l15;
l22:x[jvj+37]=t[x[jvj+37]];
goto l18;
l23:x[jvj+38]=t[x[jvj+38]];
l24:if((x[jvj+38]<=0)) goto l15;
x[jvj+21]=s[x[jvj+38]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+38];
pile[v[22]]=158; pile[WZ1]=jvj+21; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(158,jvj+21,jvj+30)*/
if((x[jvj+30]!=V19)) goto l23;
pile[v[22]]=258; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(258,jvj+21,jvj+29)*/
x[jvj+36]=x[jvj+29] ;z[jvj+36]=z[jvj+29];
goto l16;
l25:pile[v[22]]=159; pile[WZ1]=jvj+19; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(159,jvj+19,jvj+31)*/
x[jvj+38]=x[jvj+31] ;z[jvj+38]=z[jvj+31];
goto l24;
l26:x[jvj+15]=t[x[jvj+15]];
goto l11;
l27:x[jvj+34]=t[x[jvj+34]];
goto l13;
}
