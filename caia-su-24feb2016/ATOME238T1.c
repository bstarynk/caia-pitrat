#include "dx.h"
void ATOME238T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=33;
x[jvj+1]=20238;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3754&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,R,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=25)) goto l14;
pile[v[22]]=1188; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1188,R,jvj+3)*/
if((x[jvj+3]==68)) goto l14;
l12:pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,R,jvj+21)*/
pile[v[22]]=103; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,R,jvj+22)*/
x[jvj+18]=0 ;z[jvj+18]=0;
pile[v[22]]=R; pile[WZ1]=jvj+15; 
(*f[887])( );     /*VARND0(R,jvj+15)*/
l6:if((x[jvj+15]>0)) goto l7;
x[jvj+9]=0 ;z[jvj+9]=0;
pile[v[22]]=R; pile[WZ1]=jvj+8; 
(*f[887])( );     /*VARND0(R,jvj+8)*/
l4:if((x[jvj+8]>0)) goto l5;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+23; 
(*f[3671])( );if(v[102]) goto l14;     /*PRDPOS0(jvj+9,jvj+23)*/
l13:if((x[jvj+18]<=0)) goto l14;
x[jvj+31]=s[x[jvj+18]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+18];
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+29)*/
pile[WZ1]=jvj+31; pile[WZ3]=(-631); pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(101,jvj+31,110,(-631),jvj+30)*/
pile[v[22]]=605; pile[WZ1]=715; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(605,715,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,v[13],642,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=3753; pile[WZ2]=246; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,3753,246,jvj+28)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20238; pile[WZ4]=jvj+28; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(158,289,218,20238,jvj+28,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=159; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+24,159,jvj+29)*/
pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+24,159,jvj+30)*/
(*f[481])( );     /*STOCKER0(jvj+24)*/
x[jvj+18]=t[x[jvj+18]];
goto l13;
l2:x[jvj+6]=s[x[jvj+32]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+32];
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+6,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=195; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(195,jvj+6,jvj+7)*/
l15:pile[v[22]]=jvj+4; pile[WZ1]=218; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+4,218,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+7; pile[WZ2]=195; pile[WZ3]=jvj+10; 
(*f[301])( );     /*TRI11(jvj+25,jvj+7,195,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+10)*/
x[jvj+8]=t[x[jvj+8]];
goto l4;
l3:x[jvj+32]=t[x[jvj+32]];
l1:if((x[jvj+32]>0)) goto l2;
pile[v[22]]=195; pile[WZ1]=1280; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(195,1280,jvj+7)*/
goto l15;
l5:x[jvj+4]=s[x[jvj+8]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+8];
x[jvj+7]=incon;
pile[v[22]]=1310; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1310,jvj+4,jvj+5)*/
x[jvj+32]=x[jvj+5] ;z[jvj+32]=z[jvj+5];
goto l1;
l7:x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=509; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[1969])( );     /*FNDEND0(509,jvj+16,jvj+17)*/
x[jvj+33]=x[jvj+17] ;z[jvj+33]=z[jvj+17];
l8:if((x[jvj+33]>0)) goto l9;
x[jvj+15]=t[x[jvj+15]];
goto l6;
l9:x[jvj+11]=s[x[jvj+33]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+33];
if((x[jvj+11]==x[R])) goto l10;
pile[v[22]]=1417; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1417,jvj+11,jvj+12)*/
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==715) goto l11;
x[jvj+13]=vo[14];z[jvj+13]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1545,jvj+13,jvj+14)*/
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==715) goto l11;
l10:x[jvj+33]=t[x[jvj+33]];
goto l8;
l11:pile[v[22]]=jvj+18; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+18,jvj+11)*/
goto l10;
l14:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
