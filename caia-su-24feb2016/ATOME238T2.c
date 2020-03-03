#include "dx.h"
void ATOME238T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=34;
x[jvj+1]=20238;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3755&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+19]=0 ;z[jvj+19]=0;
pile[v[22]]=RR; pile[WZ1]=jvj+16; 
(*f[887])( );     /*VARND0(RR,jvj+16)*/
l6:if((x[jvj+16]<=0)) goto l11;
x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=509; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[1969])( );     /*FNDEND0(509,jvj+17,jvj+18)*/
x[jvj+34]=x[jvj+18] ;z[jvj+34]=z[jvj+18];
l7:if((x[jvj+34]>0)) goto l8;
x[jvj+16]=t[x[jvj+16]];
goto l6;
l2:x[jvj+7]=s[x[jvj+32]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+32];
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+7,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=195; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(195,jvj+7,jvj+8)*/
l16:pile[v[22]]=jvj+5; pile[WZ1]=218; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+5,218,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+8; pile[WZ2]=195; pile[WZ3]=jvj+11; 
(*f[301])( );     /*TRI11(jvj+26,jvj+8,195,jvj+11)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+11)*/
x[jvj+33]=t[x[jvj+33]];
l4:if((x[jvj+33]>0)) goto l5;
pile[v[22]]=jvj+10; pile[WZ1]=jvj+24; 
(*f[3671])( );if(v[102]) goto l13;     /*PRDPOS0(jvj+10,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(101,jvj+3,110,(-601),jvj+30)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+31)*/
pile[v[22]]=605; pile[WZ1]=715; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(605,715,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,v[13],642,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=3753; pile[WZ2]=246; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,3753,246,jvj+29)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20238; pile[WZ4]=jvj+29; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(158,289,218,20238,jvj+29,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=159; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+25,159,jvj+30)*/
pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+25,159,jvj+31)*/
(*f[481])( );     /*STOCKER0(jvj+25)*/
l13:x[jvj+19]=t[x[jvj+19]];
l11:if((x[jvj+19]>0)) goto l12;
l15:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l3:x[jvj+32]=t[x[jvj+32]];
l1:if((x[jvj+32]>0)) goto l2;
pile[v[22]]=195; pile[WZ1]=1280; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(195,1280,jvj+8)*/
goto l16;
l5:x[jvj+5]=s[x[jvj+33]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+33];
x[jvj+8]=incon;
pile[v[22]]=1310; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1310,jvj+5,jvj+6)*/
x[jvj+32]=x[jvj+6] ;z[jvj+32]=z[jvj+6];
goto l1;
l8:x[jvj+12]=s[x[jvj+34]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+34];
if((x[jvj+12]==x[RR])) goto l9;
pile[v[22]]=1417; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1417,jvj+12,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==714) goto l10;
x[jvj+14]=vo[14];z[jvj+14]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1545,jvj+14,jvj+15)*/
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==714) goto l10;
l9:x[jvj+34]=t[x[jvj+34]];
goto l7;
l10:pile[v[22]]=jvj+19; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+19,jvj+12)*/
goto l9;
l12:x[jvj+3]=s[x[jvj+19]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+19];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+3,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=25)) goto l13;
pile[v[22]]=1188; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1188,jvj+3,jvj+4)*/
if((x[jvj+4]==68)) goto l13;
l14:pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+3,jvj+22)*/
pile[v[22]]=103; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,jvj+3,jvj+23)*/
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+9; 
(*f[887])( );     /*VARND0(jvj+3,jvj+9)*/
x[jvj+33]=x[jvj+9] ;z[jvj+33]=z[jvj+9];
goto l4;
}
