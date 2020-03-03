#include "dx.h"
void ATOME563T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V32=0,V28=0,V31=0,V23=0,V26=0,V25=0,V22=0;
int W;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=42;
x[jvj+1]=20563;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3944&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
W=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=202; pile[WZ1]=W; pile[WZ2]=jvj+20; 
(*f[1948])( );if(v[102]) goto l16;     /*FNDOND0(202,W,jvj+20)*/
if((x[jvj+20]!=68)) goto l16;
x[jvj+21]=vo[14];z[jvj+21]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(642,jvj+21,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=365; pile[WZ1]=W; pile[WZ2]=jvj+22; 
(*f[1969])( );     /*FNDEND0(365,W,jvj+22)*/
for(i=x[jvj+22],V28=0;i>0;i=t[i],V28++)  ;
pile[v[22]]=509; pile[WZ2]=jvj+23; 
(*f[1969])( );     /*FNDEND0(509,W,jvj+23)*/
l7:if((x[jvj+23]<=0)) goto l16;
x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[1361])( );     /*VAROBJ0(jvj+24,jvj+25)*/
for(i=x[jvj+25],V31=0;i>0;i=t[i],V31++)  ;
if((V31!=3)) goto l8;
for(a=x[jvj+25];a>0;a=t[a]) if(s[a]==x[W]) goto l10;
l8:x[jvj+23]=t[x[jvj+23]];
goto l7;
l3:pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+18)*/
l2:x[jvj+38]=t[x[jvj+38]];
l1:if((x[jvj+38]<=0)) goto l5;
x[jvj+18]=s[x[jvj+38]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+38];
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==x[jvj+18]) goto l3;
goto l2;
l6:x[jvj+2]=s[x[jvj+17]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+17];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[1972])( );if(v[102]) goto l15;     /*INVEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+5; pile[WZ2]=jvj+4; pile[WZ3]=jvj+6; 
(*f[1719])( );     /*SUBSTITUTES0(jvj+5,jvj+3,jvj+4,jvj+6)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1972])( );if(v[102]) goto l15;     /*INVEXP0(jvj+7,jvj+8)*/
pile[v[22]]=W; pile[WZ2]=jvj+6; pile[WZ3]=jvj+9; 
(*f[1719])( );     /*SUBSTITUTES0(W,jvj+8,jvj+6,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[965])( );if(v[102]) goto l15;     /*NORM0(jvj+9,jvj+10)*/
x[jvj+11]=x[jvj+10] ;z[jvj+11]=z[jvj+10];
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=134)) goto l15;
x[jvj+17]=t[x[jvj+17]];
l5:if((x[jvj+17]>0)) goto l6;
x[jvj+39]=t[x[jvj+39]];
l4:if((x[jvj+39]<=0)) goto l17;
x[jvj+7]=s[x[jvj+39]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+39];
x[jvj+17]=0 ;z[jvj+17]=0;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; pile[WZ2]=jvj+5; pile[WZ3]=jvj+15; 
(*f[3850])( );if(v[102]) goto l5;     /*COMPAT0(jvj+13,jvj+14,jvj+5,jvj+15)*/
pile[v[22]]=W; pile[WZ1]=jvj+7; pile[WZ3]=jvj+16; 
(*f[3850])( );if(v[102]) goto l5;     /*COMPAT0(W,jvj+7,jvj+5,jvj+16)*/
x[jvj+38]=x[jvj+15] ;z[jvj+38]=z[jvj+15];
goto l1;
l10:x[jvj+40]=x[jvj+25] ;z[jvj+40]=z[jvj+25];
l9:if((x[jvj+40]<=0)) goto l8;
x[jvj+13]=s[x[jvj+40]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+40];
if((x[W]==x[jvj+13])) goto l11;
pile[v[22]]=202; pile[WZ1]=jvj+13; pile[WZ2]=jvj+26; 
(*f[1948])( );if(v[102]) goto l11;     /*FNDOND0(202,jvj+13,jvj+26)*/
if((x[jvj+26]!=68)) goto l11;
pile[v[22]]=365; pile[WZ2]=jvj+27; 
(*f[1969])( );     /*FNDEND0(365,jvj+13,jvj+27)*/
for(i=x[jvj+27],V23=0;i>0;i=t[i],V23++)  ;
x[jvj+41]=x[jvj+25] ;z[jvj+41]=z[jvj+25];
l12:if((x[jvj+41]<=0)) goto l11;
x[jvj+5]=s[x[jvj+41]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+41];
if((x[jvj+5]==x[jvj+13])) goto l13;
if((x[jvj+5]==x[W])) goto l13;
pile[v[22]]=202; pile[WZ1]=jvj+5; pile[WZ2]=jvj+28; 
(*f[1948])( );if(v[102]) goto l13;     /*FNDOND0(202,jvj+5,jvj+28)*/
if((x[jvj+28]!=68)) goto l13;
pile[v[22]]=365; pile[WZ2]=jvj+29; 
(*f[1969])( );     /*FNDEND0(365,jvj+5,jvj+29)*/
for(i=x[jvj+29],V26=0;i>0;i=t[i],V26++)  ;
V25=V26*V28;
V22=V23*V25;
if((V22>=500)) goto l13;
x[jvj+42]=x[jvj+27] ;z[jvj+42]=z[jvj+27];
l14:if((x[jvj+42]<=0)) goto l13;
x[jvj+14]=s[x[jvj+42]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+42];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+30; 
(*f[1972])( );if(v[102]) goto l15;     /*INVEXP0(jvj+14,jvj+30)*/
pile[v[22]]=jvj+13; pile[WZ2]=jvj+24; pile[WZ3]=jvj+4; 
(*f[1719])( );     /*SUBSTITUTES0(jvj+13,jvj+30,jvj+24,jvj+4)*/
pile[WZ1]=jvj+14; pile[WZ2]=W; pile[WZ3]=jvj+19; 
(*f[3850])( );if(v[102]) goto l17;     /*COMPAT0(jvj+13,jvj+14,W,jvj+19)*/
x[jvj+39]=x[jvj+19] ;z[jvj+39]=z[jvj+19];
goto l4;
l11:x[jvj+40]=t[x[jvj+40]];
goto l9;
l13:x[jvj+41]=t[x[jvj+41]];
goto l12;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l17:pile[v[22]]=101; pile[WZ1]=W; pile[WZ2]=110; pile[WZ3]=(-622); pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(101,W,110,(-622),jvj+36)*/
pile[v[22]]=V32; pile[WZ1]=858; pile[WZ2]=jvj+32; 
(*f[46])( );     /*TRI0(V32,858,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,v[13],642,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=3944; pile[WZ2]=246; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,3944,246,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=20563; pile[WZ2]=218; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+34,20563,218,jvj+35)*/
pile[v[22]]=jvj+36; pile[WZ1]=(-20); pile[WZ2]=jvj+35; pile[WZ3]=159; pile[WZ4]=jvj+37; 
(*f[298])( );     /*TRIENS1(jvj+36,(-20),jvj+35,159,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+37,1,158,jvj+31)*/
pile[v[22]]=365; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[1569])( );     /*DELIER0(365,jvj+13,jvj+14,jvj+31)*/
l15:x[jvj+42]=t[x[jvj+42]];
goto l14;
}
