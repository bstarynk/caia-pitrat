#include "dx.h"
void ATOME8T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V11=0,I=0,V6=0,V7=0,V25=0;
int R,RR,D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=27;
x[jvj+1]=20008;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3161&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; D=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[R]==x[RR])) goto l14;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,RR,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=25)) goto l14;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,R,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=25)) goto l14;
pile[v[22]]=869; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(869,R,jvj+11)*/
if((x[jvj+11]!=769)) goto l14;
pile[WZ1]=RR; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(869,RR,jvj+12)*/
if((x[jvj+12]!=769)) goto l14;
pile[v[22]]=1274; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1274,R,V10)*/
V10=pile[WZ2]; 
if((V10!=0)) goto l14;
l1:pile[v[22]]=1274; pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(1274,RR,V11)*/
V11=pile[WZ2]; 
if((V11!=0)) goto l14;
l8:pile[v[22]]=509; pile[WZ1]=D; pile[WZ2]=jvj+13; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==x[R]) goto l9;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:I=s[x[jvj+2]];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==I) goto l14;
x[jvj+2]=t[x[jvj+2]];
l2:if((x[jvj+2]>0)) goto l3;
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,R,jvj+4)*/
l4:if((x[jvj+4]>0)) goto l5;
pile[v[22]]=1006; pile[WZ1]=RR; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1006,RR,jvj+6)*/
l6:if((x[jvj+6]>0)) goto l7;
pile[v[22]]=RR; pile[WZ1]=D; pile[WZ2]=67; pile[WZ3]=jvj+17; 
(*f[1931])( );if(v[102]) goto l14;     /*ISOLONS0(RR,D,67,jvj+17)*/
pile[v[22]]=D; pile[WZ1]=jvj+18; 
(*f[1290])( );if(v[102]) goto l14;     /*DEPEXP0(D,jvj+18)*/
pile[v[22]]=R; pile[WZ2]=jvj+17; pile[WZ3]=jvj+19; pile[WZ4]=jvj+20; 
(*f[3130])( );if(v[102]) goto l14;     /*SUBSTITUVAR1(R,jvj+18,jvj+17,jvj+19,jvj+20)*/
if((x[jvj+20]==135)) goto l13;
goto l14;
l5:V6=s[x[jvj+4]];
pile[v[22]]=jvj+5; pile[WZ1]=V6; 
(*f[207])( );     /*PLUE2(jvj+5,V6)*/
x[jvj+4]=t[x[jvj+4]];
goto l4;
l7:V7=s[x[jvj+6]];
pile[v[22]]=jvj+5; pile[WZ1]=V7; 
(*f[207])( );     /*PLUE2(jvj+5,V7)*/
x[jvj+6]=t[x[jvj+6]];
goto l6;
l9:for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==x[RR]) goto l10;
goto l14;
l10:pile[v[22]]=R; pile[WZ1]=jvj+14; 
(*f[887])( );     /*VARND0(R,jvj+14)*/
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==x[D]) goto l11;
goto l14;
l11:pile[v[22]]=RR; pile[WZ1]=jvj+15; 
(*f[887])( );     /*VARND0(RR,jvj+15)*/
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==x[D]) goto l12;
goto l14;
l12:x[jvj+16]=vo[14];z[jvj+16]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(642,jvj+16,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1006,R,jvj+2)*/
pile[WZ1]=RR; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1006,RR,jvj+3)*/
goto l2;
l13:pile[v[22]]=jvj+19; pile[WZ1]=1006; pile[WZ2]=jvj+5; 
(*f[34])( );     /*CHGC0(jvj+19,1006,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+25)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+26)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+27)*/
pile[v[22]]=V25; pile[WZ1]=858; pile[WZ2]=jvj+22; 
(*f[46])( );     /*TRI0(V25,858,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,v[13],642,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=3161; pile[WZ2]=246; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,3161,246,jvj+24)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20008; pile[WZ4]=jvj+24; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(158,1,218,20008,jvj+24,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=159; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+21,159,jvj+25)*/
pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+21,159,jvj+26)*/
pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+21,159,jvj+27)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+21; 
(*f[1296])( );     /*NOUVCONTR0(jvj+19,jvj+21)*/
goto l14;
}
