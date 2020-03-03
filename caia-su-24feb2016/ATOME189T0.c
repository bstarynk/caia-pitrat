#include "dx.h"
void ATOME189T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V13=0,I=0,V6=0,V7=0,V14=0,V15=0,V27=0,V8=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=20189;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3406&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,RR,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=25)) goto l12;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,R,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=25)) goto l12;
pile[v[22]]=869; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(869,R,jvj+12)*/
if((x[jvj+12]!=769)) goto l12;
pile[WZ1]=RR; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(869,RR,jvj+13)*/
if((x[jvj+13]!=769)) goto l12;
pile[v[22]]=1274; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1274,R,V12)*/
V12=pile[WZ2]; 
if((V12!=0)) goto l12;
l1:pile[v[22]]=1274; pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1274,RR,V13)*/
V13=pile[WZ2]; 
if((V13!=0)) goto l12;
l7:pile[v[22]]=929; pile[WZ1]=R; 
(*f[1975])( );if(v[102]) goto l12;     /*FNDCND0(929,R,V14)*/
V14=pile[WZ2]; 
pile[WZ1]=RR; 
(*f[1975])( );if(v[102]) goto l12;     /*FNDCND0(929,RR,V15)*/
V15=pile[WZ2]; 
if((V14>=V15)) goto l12;
x[jvj+14]=vo[14];z[jvj+14]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+14,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1006,R,jvj+3)*/
pile[WZ1]=RR; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,RR,jvj+4)*/
l2:if((x[jvj+3]>0)) goto l3;
pile[v[22]]=R; pile[WZ1]=jvj+15; 
(*f[887])( );     /*VARND0(R,jvj+15)*/
pile[v[22]]=RR; pile[WZ1]=jvj+16; 
(*f[887])( );     /*VARND0(RR,jvj+16)*/
x[jvj+6]=0 ;z[jvj+6]=0;
pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1006,R,jvj+5)*/
l4:if((x[jvj+5]>0)) goto l5;
pile[v[22]]=1006; pile[WZ1]=RR; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1006,RR,jvj+7)*/
l6:if((x[jvj+7]<=0)) goto l8;
V7=s[x[jvj+7]];
pile[v[22]]=jvj+6; pile[WZ1]=V7; 
(*f[207])( );     /*PLUE2(jvj+6,V7)*/
x[jvj+7]=t[x[jvj+7]];
goto l6;
l3:I=s[x[jvj+3]];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==I) goto l12;
x[jvj+3]=t[x[jvj+3]];
goto l2;
l5:V6=s[x[jvj+5]];
pile[v[22]]=jvj+6; pile[WZ1]=V6; 
(*f[207])( );     /*PLUE2(jvj+6,V6)*/
x[jvj+5]=t[x[jvj+5]];
goto l4;
l10:pile[v[22]]=498; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[1948])( );if(v[102]) goto l9;     /*FNDOND0(498,jvj+17,jvj+18)*/
pile[v[22]]=472; pile[WZ1]=jvj+18; 
(*f[1975])( );if(v[102]) goto l9;     /*FNDCND0(472,jvj+18,V8)*/
V8=pile[WZ2]; 
if((V8!=1)) goto l9;
pile[v[22]]=RR; pile[WZ1]=jvj+17; pile[WZ2]=68; pile[WZ3]=jvj+19; 
(*f[1931])( );if(v[102]) goto l9;     /*ISOLONS0(RR,jvj+17,68,jvj+19)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+20; 
(*f[1290])( );if(v[102]) goto l9;     /*DEPEXP0(jvj+17,jvj+20)*/
pile[v[22]]=R; pile[WZ2]=jvj+19; pile[WZ3]=jvj+21; pile[WZ4]=jvj+22; 
(*f[3130])( );if(v[102]) goto l9;     /*SUBSTITUVAR1(R,jvj+20,jvj+19,jvj+21,jvj+22)*/
if((x[jvj+22]==135)) goto l11;
l9:x[jvj+15]=t[x[jvj+15]];
l8:if((x[jvj+15]<=0)) goto l12;
x[jvj+17]=s[x[jvj+15]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+15];
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==x[jvj+17]) goto l10;
goto l9;
l11:pile[v[22]]=jvj+21; pile[WZ1]=1006; pile[WZ2]=jvj+6; 
(*f[34])( );     /*CHGC0(jvj+21,1006,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+27)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+28)*/
pile[v[22]]=V27; pile[WZ1]=858; pile[WZ2]=jvj+24; 
(*f[46])( );     /*TRI0(V27,858,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,v[13],642,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=3406; pile[WZ2]=246; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,3406,246,jvj+26)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20189; pile[WZ4]=jvj+26; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(158,1,218,20189,jvj+26,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=159; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+23,159,jvj+27)*/
pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+23,159,jvj+28)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+23; 
(*f[1296])( );     /*NOUVCONTR0(jvj+21,jvj+23)*/
goto l9;
l12:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
