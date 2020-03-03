#include "dx.h"
void ATOME77T6(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V28=0,F=0,V9=0;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=37;
x[jvj+1]=20077;z[jvj+1]=(-100);
x[jvj+2]=6;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3399&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=RR; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,RR,jvj+18)*/
if((x[jvj+18]!=22)) goto l15;
pile[v[22]]=111; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,RR,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+19,jvj+20)*/
if(x[jvj+20]!=25&&x[jvj+20]!=30) goto l15;
pile[v[22]]=102; pile[WZ1]=RR; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,RR,jvj+21)*/
pile[v[22]]=103; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,RR,jvj+22)*/
x[jvj+17]=0 ;z[jvj+17]=0;
pile[v[22]]=RR; pile[WZ1]=jvj+14; 
(*f[887])( );     /*VARND0(RR,jvj+14)*/
l7:if((x[jvj+14]>0)) goto l8;
pile[v[22]]=1294; pile[WZ1]=RR; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1294,RR,jvj+23)*/
for(a=x[jvj+23];a>0;a=t[a]) if(s[a]==1492) goto l13;
l15:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:I=s[V28];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==I) goto l14;
V28=t[V28];
l1:if((V28>0)) goto l2;
x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+6; 
(*f[887])( );     /*VARND0(jvj+3,jvj+6)*/
pile[v[22]]=RR; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(RR,jvj+7)*/
x[jvj+36]=x[jvj+6] ;z[jvj+36]=z[jvj+6];
l3:if((x[jvj+36]>0)) goto l4;
for(i=x[jvj+8],V9=0;i>0;i=t[i],V9++)  ;
if((V9<4)) goto l14;
pile[v[22]]=1294; pile[WZ1]=jvj+3; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(1294,jvj+3,jvj+29)*/
for(a=x[jvj+29];a>0;a=t[a]) if(s[a]==1492) goto l16;
l14:x[jvj+17]=t[x[jvj+17]];
l13:if((x[jvj+17]<=0)) goto l15;
x[jvj+3]=s[x[jvj+17]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+17];
if((x[jvj+3]==x[RR])) goto l14;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+3,jvj+24)*/
if((x[jvj+24]!=22)) goto l14;
pile[v[22]]=111; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+3,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+25,jvj+26)*/
F=x[jvj+26];
if(F!=25&&F!=30) goto l14;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+3,jvj+27)*/
pile[v[22]]=103; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,jvj+3,jvj+28)*/
pile[v[22]]=1006; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,jvj+3,jvj+4)*/
pile[WZ1]=RR; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1006,RR,jvj+5)*/
V28=x[jvj+4];
goto l1;
l4:x[jvj+9]=s[x[jvj+36]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+36];
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l6;
l5:x[jvj+36]=t[x[jvj+36]];
goto l3;
l6:pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+9)*/
goto l5;
l8:x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=509; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[1969])( );     /*FNDEND0(509,jvj+15,jvj+16)*/
x[jvj+37]=x[jvj+16] ;z[jvj+37]=z[jvj+16];
l9:if((x[jvj+37]>0)) goto l10;
x[jvj+14]=t[x[jvj+14]];
goto l7;
l10:x[jvj+10]=s[x[jvj+37]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+37];
if((x[jvj+10]==x[RR])) goto l11;
pile[v[22]]=1417; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1417,jvj+10,jvj+11)*/
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==231) goto l12;
x[jvj+12]=vo[14];z[jvj+12]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1545,jvj+12,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==231) goto l12;
l11:x[jvj+37]=t[x[jvj+37]];
goto l9;
l12:pile[v[22]]=jvj+17; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+10)*/
goto l11;
l16:pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(101,jvj+3,110,(-601),jvj+34)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+35)*/
pile[v[22]]=605; pile[WZ1]=715; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(605,715,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,v[13],642,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=3397; pile[WZ2]=246; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,3397,246,jvj+33)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20077; pile[WZ4]=jvj+33; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(158,289,218,20077,jvj+33,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=159; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+30,159,jvj+34)*/
pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+30,159,jvj+35)*/
(*f[481])( );     /*STOCKER0(jvj+30)*/
goto l14;
}
