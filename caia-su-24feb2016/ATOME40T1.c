#include "dx.h"
void ATOME40T1(void )
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
v[0]+=34;
x[jvj+1]=20040;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3460&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=N; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,N,jvj+11)*/
if((x[jvj+11]!=454)) goto l10;
pile[v[22]]=160; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(160,N,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=128)) goto l10;
pile[v[22]]=128; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(128,jvj+12,jvj+14)*/
x[jvj+15]=vo[14];z[jvj+15]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+15,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=480; pile[WZ1]=N; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(480,N,jvj+16)*/
pile[v[22]]=464; pile[WZ2]=jvj+17; 
(*f[3042])( );if(v[102]) goto l10;     /*DIFFERE0(464,N,jvj+17)*/
l6:if((x[jvj+14]<=0)) goto l10;
x[jvj+18]=s[x[jvj+14]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+14];
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=464)) goto l7;
x[jvj+34]=x[jvj+16] ;z[jvj+34]=z[jvj+16];
l8:if((x[jvj+34]<=0)) goto l7;
x[jvj+9]=s[x[jvj+34]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+34];
pile[v[22]]=158; pile[WZ1]=jvj+9; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(158,jvj+9,jvj+20)*/
if((x[jvj+21]=w[x[jvj+20]][3])==incon) goto l9;
pile[v[22]]=jvj+21; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(jvj+21,jvj+9,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=jvj+17; pile[WZ2]=jvj+22; 
(*f[3029])( );if(v[102]) goto l9;     /*EXECUTE1(V13,jvj+17,jvj+22)*/
E=x[jvj+22];
l3:if((E>0)) goto l4;
pile[v[22]]=V22; pile[WZ1]=858; pile[WZ2]=jvj+30; 
(*f[46])( );     /*TRI0(V22,858,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,v[13],642,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=3460; pile[WZ2]=246; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,3460,246,jvj+32)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20040; pile[WZ4]=jvj+32; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(158,1,218,20040,jvj+32,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=202; pile[WZ2]=jvj+9; pile[WZ3]=68; 
(*f[3040])( );     /*VOBJ0(jvj+23,202,jvj+9,68)*/
l9:x[jvj+34]=t[x[jvj+34]];
goto l8;
l2:x[jvj+33]=t[x[jvj+33]];
l1:if((x[jvj+33]<=0)) goto l5;
x[jvj+4]=s[x[jvj+33]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+33];
pile[v[22]]=158; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(158,jvj+4,jvj+5)*/
if((x[jvj+6]=w[x[jvj+5]][3])==incon) goto l2;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+6; pile[WZ3]=jvj+7; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(jvj+4,jvj+6,V24,jvj+7)*/
V24=pile[WZ2]; 
if((V24!=LL)) goto l2;
pile[v[22]]=V22; pile[WZ1]=858; pile[WZ2]=jvj+24; 
(*f[46])( );     /*TRI0(V22,858,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,v[13],642,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=3460; pile[WZ2]=246; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,3460,246,jvj+26)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20040; pile[WZ4]=jvj+26; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(158,1,218,20040,jvj+26,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=365; pile[WZ2]=jvj+9; pile[WZ3]=jvj+4; 
(*f[1753])( );     /*LIER1(jvj+8,365,jvj+9,jvj+4)*/
pile[v[22]]=V22; pile[WZ1]=858; pile[WZ2]=jvj+27; 
(*f[46])( );     /*TRI0(V22,858,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,v[13],642,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=3460; pile[WZ2]=246; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,3460,246,jvj+29)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20040; pile[WZ4]=jvj+29; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(158,1,218,20040,jvj+29,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=202; pile[WZ2]=jvj+4; pile[WZ3]=68; 
(*f[3040])( );     /*VOBJ0(jvj+10,202,jvj+4,68)*/
l5:E=t[E];
goto l3;
l4:LL=s[E];
pile[v[22]]=481; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(481,N,jvj+3)*/
x[jvj+33]=x[jvj+3] ;z[jvj+33]=z[jvj+3];
goto l1;
l7:x[jvj+14]=t[x[jvj+14]];
goto l6;
l10:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
