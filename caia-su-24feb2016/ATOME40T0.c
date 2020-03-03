#include "dx.h"
void ATOME40T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,LL=0,E=0,V22=0,V13=0;
int N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=33;
x[jvj+1]=20040;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3041&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=N; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,N,jvj+10)*/
if((x[jvj+10]!=454)) goto l10;
pile[v[22]]=160; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(160,N,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=128)) goto l10;
pile[v[22]]=128; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(128,jvj+11,jvj+13)*/
x[jvj+14]=vo[14];z[jvj+14]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+14,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=480; pile[WZ1]=N; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(480,N,jvj+15)*/
pile[v[22]]=464; pile[WZ2]=jvj+16; 
(*f[3042])( );if(v[102]) goto l10;     /*DIFFERE0(464,N,jvj+16)*/
l6:if((x[jvj+13]<=0)) goto l10;
x[jvj+17]=s[x[jvj+13]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+13];
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=464)) goto l7;
x[jvj+33]=x[jvj+15] ;z[jvj+33]=z[jvj+15];
l8:if((x[jvj+33]<=0)) goto l7;
x[jvj+8]=s[x[jvj+33]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+33];
pile[v[22]]=158; pile[WZ1]=jvj+8; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(158,jvj+8,jvj+19)*/
if((x[jvj+20]=w[x[jvj+19]][3])==incon) goto l9;
pile[v[22]]=jvj+20; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(jvj+20,jvj+8,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=jvj+16; pile[WZ2]=jvj+21; 
(*f[3029])( );if(v[102]) goto l9;     /*EXECUTE1(V13,jvj+16,jvj+21)*/
E=x[jvj+21];
l3:if((E>0)) goto l4;
pile[v[22]]=V22; pile[WZ1]=858; pile[WZ2]=jvj+29; 
(*f[46])( );     /*TRI0(V22,858,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+30; 
(*f[189])( );     /*TRI4(jvj+29,v[13],642,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=3041; pile[WZ2]=246; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,3041,246,jvj+31)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20040; pile[WZ4]=jvj+31; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(158,1,218,20040,jvj+31,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=202; pile[WZ2]=jvj+8; pile[WZ3]=68; 
(*f[3040])( );     /*VOBJ0(jvj+22,202,jvj+8,68)*/
l9:x[jvj+33]=t[x[jvj+33]];
goto l8;
l2:x[jvj+32]=t[x[jvj+32]];
l1:if((x[jvj+32]<=0)) goto l5;
x[jvj+3]=s[x[jvj+32]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+32];
pile[v[22]]=158; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(158,jvj+3,jvj+4)*/
if((x[jvj+5]=w[x[jvj+4]][3])==incon) goto l2;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+5; pile[WZ3]=jvj+6; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(jvj+3,jvj+5,V24,jvj+6)*/
V24=pile[WZ2]; 
if((V24!=LL)) goto l2;
pile[v[22]]=V22; pile[WZ1]=858; pile[WZ2]=jvj+23; 
(*f[46])( );     /*TRI0(V22,858,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,v[13],642,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=3041; pile[WZ2]=246; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,3041,246,jvj+25)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20040; pile[WZ4]=jvj+25; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(158,1,218,20040,jvj+25,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=365; pile[WZ2]=jvj+8; pile[WZ3]=jvj+3; 
(*f[1753])( );     /*LIER1(jvj+7,365,jvj+8,jvj+3)*/
pile[v[22]]=V22; pile[WZ1]=858; pile[WZ2]=jvj+26; 
(*f[46])( );     /*TRI0(V22,858,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,v[13],642,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=3041; pile[WZ2]=246; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,3041,246,jvj+28)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20040; pile[WZ4]=jvj+28; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(158,1,218,20040,jvj+28,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=202; pile[WZ2]=jvj+3; pile[WZ3]=68; 
(*f[3040])( );     /*VOBJ0(jvj+9,202,jvj+3,68)*/
l5:E=t[E];
goto l3;
l4:LL=s[E];
pile[v[22]]=481; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(481,N,jvj+2)*/
x[jvj+32]=x[jvj+2] ;z[jvj+32]=z[jvj+2];
goto l1;
l7:x[jvj+13]=t[x[jvj+13]];
goto l6;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
