#include "dx.h"
void RSNCSQA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,FF=0,V15=0,V13=0,V7=0,V43=0,V42=0,V45=0,V3=0,V44=0;
int R,E;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=41;
x[jvj+1]=10432;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2049&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; E=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+34]=x[E] ;z[jvj+34]=z[E];
if((x[jvj+34]<=0)) goto l16;
x[jvj+2]=s[x[jvj+34]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+34];
pile[v[22]]=1260; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1260,jvj+2,jvj+3)*/
pile[v[22]]=R; pile[WZ1]=jvj+23; 
(*f[887])( );     /*VARND0(R,jvj+23)*/
x[jvj+40]=x[jvj+3] ;z[jvj+40]=z[jvj+3];
l12:if((x[jvj+40]<=0)) goto l16;
x[jvj+24]=s[x[jvj+40]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+40];
pile[v[22]]=111; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+24,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+25,jvj+26)*/
if((x[jvj+26]!=25)) goto l13;
pile[v[22]]=1101; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(1101,jvj+24,V13)*/
V13=pile[WZ2]; 
if((V13!=1)) goto l13;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+27; 
(*f[887])( );     /*VARND0(jvj+24,jvj+27)*/
for(i=x[jvj+27],V7=0;i>0;i=t[i],V7++)  ;
if((V7!=1)) goto l13;
x[jvj+37]=x[jvj+27] ;z[jvj+37]=z[jvj+27];
if((x[jvj+37]<=0)) goto l13;
x[jvj+33]=s[x[jvj+37]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+37];
x[jvj+36]=x[E] ;z[jvj+36]=z[E];
l4:if((x[jvj+36]>0)) goto l5;
x[jvj+41]=x[jvj+23] ;z[jvj+41]=z[jvj+23];
l14:if((x[jvj+41]<=0)) goto l13;
x[jvj+32]=s[x[jvj+41]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+41];
if((x[jvj+32]==x[jvj+33])) goto l15;
x[jvj+39]=x[E] ;z[jvj+39]=z[E];
l9:if((x[jvj+39]>0)) goto l10;
pile[v[22]]=365; pile[WZ1]=1585; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(365,1585,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=634; pile[WZ2]=893; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+29,634,893,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=225; pile[WZ2]=860; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+30,225,860,jvj+31)*/
pile[v[22]]=319; pile[WZ1]=jvj+32; pile[WZ2]=497; pile[WZ3]=jvj+33; pile[WZ4]=jvj+31; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(319,jvj+32,497,jvj+33,jvj+31,jvj+28)*/
pile[v[22]]=R; pile[WZ1]=1584; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(R,1584,jvj+28)*/
l15:x[jvj+41]=t[x[jvj+41]];
goto l14;
l5:x[jvj+4]=s[x[jvj+36]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+36];
pile[v[22]]=1260; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1260,jvj+4,jvj+5)*/
x[jvj+35]=x[jvj+5] ;z[jvj+35]=z[jvj+5];
l1:if((x[jvj+35]<=0)) goto l13;
x[jvj+6]=s[x[jvj+35]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+35];
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+6,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=25)) goto l2;
pile[v[22]]=1101; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(1101,jvj+6,V9)*/
V9=pile[WZ2]; 
if((V9!=1)) goto l2;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+9; 
(*f[887])( );     /*VARND0(jvj+6,jvj+9)*/
for(i=x[jvj+9],V43=0;i>0;i=t[i],V43++)  ;
for(i=x[jvj+27],V42=0;i>0;i=t[i],V42++)  ;
if((V43!=V42)) goto l18;
V45=x[jvj+9];
l17:if((V45>0)) goto l20;
V3=135;
l3:if((V3==135)) goto l6;
l2:x[jvj+35]=t[x[jvj+35]];
goto l1;
l6:x[jvj+36]=t[x[jvj+36]];
goto l4;
l10:x[jvj+10]=s[x[jvj+39]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+39];
pile[v[22]]=1260; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1260,jvj+10,jvj+11)*/
x[jvj+38]=x[jvj+11] ;z[jvj+38]=z[jvj+11];
l7:if((x[jvj+38]<=0)) goto l15;
x[jvj+12]=s[x[jvj+38]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+38];
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=22)) goto l8;
pile[v[22]]=111; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+12,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+14,jvj+15)*/
FF=x[jvj+15];
if(FF!=625&&FF!=1280) goto l8;
pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+12,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=484)) goto l8;
pile[v[22]]=103; pile[WZ1]=jvj+12; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+12,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+18,jvj+19)*/
if((x[jvj+19]!=41)) goto l8;
pile[v[22]]=160; pile[WZ1]=jvj+12; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(160,jvj+12,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]!=41)) goto l8;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+22; 
(*f[887])( );     /*VARND0(jvj+12,jvj+22)*/
for(i=x[jvj+22],V15=0;i>0;i=t[i],V15++)  ;
if((V15!=1)) goto l8;
for(a=x[jvj+22];a>0;a=t[a]) if(s[a]==x[jvj+32]) goto l11;
l8:x[jvj+38]=t[x[jvj+38]];
goto l7;
l11:x[jvj+39]=t[x[jvj+39]];
goto l9;
l13:x[jvj+40]=t[x[jvj+40]];
goto l12;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l19:V45=t[V45];
goto l17;
l20:V44=s[V45];
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==V44) goto l19;
l18:V3=134;
goto l3;
}
