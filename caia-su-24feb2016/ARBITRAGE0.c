#include "dx.h"
void ARBITRAGE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V9=0,V11=0,V13=0,V22=0,V23=0,V25=0,V18=0,V19=0,V12=0,V33=0;
int E;
int A;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=10928;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1260&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; A=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V2=vv[8];
if((V2<=0)) goto l2;
x[jvj+3]=V2 ;z[jvj+3]=(V2<=sepcte) ? V2 : 0;
pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(120,jvj+3,jvj+4)*/
x[A]=x[jvj+3] ;z[A]=z[jvj+3];
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l1:
(*f[1531])( );     /*CRENOUVPB0()*/
goto l22;
l2:V9=vv[5];
if((V9>0)) goto l3;
pile[v[22]]=1051; pile[WZ1]=1243; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1051,1243,jvj+5)*/
if((x[jvj+5]!=0)) goto l4;
pile[v[22]]=1109; pile[WZ1]=924; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1109,924,jvj+6)*/
l5:if((x[jvj+6]>0)) goto l6;
V11=vv[23];
if((V11<=0)) goto l9;
for(a=x[E];a>0;a=t[a]) if(s[a]==978) goto l9;
l8:x[A]=978 ;z[A]=978;
goto l22;
l3:x[A]=1097 ;z[A]=1097;
pile[v[22]]=120; pile[WZ1]=1097; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(120,1097,jvj+2)*/
goto l22;
l4:x[A]=1243 ;z[A]=1243;
goto l22;
l6:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=1104; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1104,jvj+7,jvj+8)*/
if((x[jvj+8]==0)) goto l7;
x[jvj+6]=t[x[jvj+6]];
goto l5;
l7:x[A]=966 ;z[A]=966;
goto l22;
l9:pile[v[22]]=1136; pile[WZ1]=924; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1136,924,jvj+9)*/
if((x[jvj+9]!=0)) goto l10;
for(a=x[E];a>0;a=t[a]) if(s[a]==978) goto l13;
pile[v[22]]=120; pile[WZ1]=978; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(120,978,jvj+10)*/
pile[v[22]]=698; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(698,jvj+10,jvj+11)*/
pile[v[22]]=860; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(860,jvj+11,jvj+12)*/
if((x[jvj+12]==1085)) goto l8;
l11:pile[v[22]]=945; pile[WZ1]=978; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(945,978,V13)*/
V13=pile[WZ2]; 
x[jvj+21]=978 ;z[jvj+21]=978;
x[jvj+18]=V33=V12=incon;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(0,117,jvj+18)*/
x[jvj+19]=x[jvj+21] ;z[jvj+19]=z[jvj+21];
l24:pile[v[22]]=120; pile[WZ1]=jvj+19; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(120,jvj+19,jvj+19)*/
pile[v[22]]=jvj+18; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+18,117,1)*/
goto l24;
l10:x[A]=1136 ;z[A]=1136;
goto l22;
l12:if((V12>V13)) goto l8;
l13:V22=vv[2];
if((V22<=0)) goto l14;
pile[v[22]]=993; pile[WZ1]=994; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(993,994,V23)*/
V23=pile[WZ2]; 
if((V23<5)) goto l21;
l14:x[jvj+16]=0 ;z[jvj+16]=0;
V19=incon;
x[jvj+15]=d[14];z[jvj+15]=0;
l15:if((x[jvj+15]>0)) goto l16;
if((x[jvj+16]<=0)) goto l21;
x[jvj+20]=s[x[jvj+16]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+16];
x[A]=x[jvj+20] ;z[A]=z[jvj+20];
if((x[jvj+20]!=1097)) goto l22;
pile[v[22]]=120; pile[WZ1]=1097; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(120,1097,jvj+17)*/
goto l22;
l16:x[jvj+13]=s[x[jvj+15]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+15];
if((x[jvj+13]!=1097)) goto l18;
V25=vv[17];
if((V25>0)) goto l17;
l18:for(a=x[E];a>0;a=t[a]) if(s[a]==x[jvj+13]) goto l17;
if(x[jvj+13]==924||x[jvj+13]==1097) goto l19;
pile[v[22]]=120; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(120,jvj+13,jvj+14)*/
l19:pile[v[22]]=1242; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(1242,jvj+13,V18)*/
V18=pile[WZ2]; 
if(V19==incon) goto l23;
if((V18==V19)) goto l20;
if((V18<=V19)) goto l23;
l17:x[jvj+15]=t[x[jvj+15]];
goto l15;
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l23:V19=V18;
x[jvj+16]=0 ;z[jvj+16]=0;
l20:pile[v[22]]=jvj+16; pile[WZ1]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+13)*/
goto l17;
l25:if(x[jvj+18]!=incon) goto l29;
l26:if(V33!=incon) goto l28;
l27:if(V12!=incon) goto l12;
goto l13;
l28:V12=V33;
goto l27;
l29:pile[v[22]]=117; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(117,jvj+18,V33)*/
V33=pile[WZ2]; 
goto l26;
}
