#include "dx.h"
void REGCONTR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V17=0,V18=0,V21=0,P=0,V42=0,V40=0,V41=0,V44=0,V63=0,V61=0,V62=0,V65=0,V70=0,V68=0,V69=0,V72=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=48;
if(v[0]>99700) (*f[6])( );


WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
(*f[453])( );     /*CRACTIF0()*/
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(1484,854,V70)*/
V70=pile[WZ2]; 
V68=sepfacts+1;
V69=sepfacts+V70;
l24:if((V68>V69)) goto l17;
V72=r[V68];
if((V72!=1)) goto l25;
x[jvj+41]=V68 ;z[jvj+41]=(V68<=sepcte) ? V68 : 0;
pile[v[22]]=jvj+41; 
(*f[454])( );     /*CRESPOSA0(jvj+41)*/
l25:V68++;
goto l24;
l2:x[jvj+1]=s[x[jvj+42]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+42];
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+1,jvj+2)*/
if((x[jvj+2]!=73)) goto l3;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+1,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==634)) goto l7;
l3:x[jvj+42]=t[x[jvj+42]];
l1:if((x[jvj+42]>0)) goto l2;
x[jvj+44]=x[jvj+9] ;z[jvj+44]=z[jvj+9];
l8:if((x[jvj+44]<=0)) goto l7;
x[jvj+10]=s[x[jvj+44]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+44];
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=73)) goto l9;
pile[v[22]]=111; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+10,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=576)) goto l9;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+14,jvj+5)*/
l9:x[jvj+44]=t[x[jvj+44]];
goto l8;
l5:V17++;
l4:if((V17>V18)) goto l27;
V21=r[V17];
if((V21!=1)) goto l5;
x[jvj+5]=V17 ;z[jvj+5]=(V17<=sepcte) ? V17 : 0;
if((x[jvj+5]==20003)) goto l5;
pile[v[22]]=184; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(184,jvj+5,jvj+6)*/
x[jvj+43]=x[jvj+6] ;z[jvj+43]=z[jvj+6];
l6:if((x[jvj+43]<=0)) goto l5;
x[jvj+7]=s[x[jvj+43]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+43];
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=42)) goto l7;
pile[v[22]]=105; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(105,jvj+7,jvj+9)*/
x[jvj+42]=x[jvj+9] ;z[jvj+42]=z[jvj+9];
goto l1;
l7:x[jvj+43]=t[x[jvj+43]];
goto l6;
l11:x[jvj+17]=s[x[jvj+45]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+45];
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=42)) goto l12;
pile[v[22]]=105; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(105,jvj+17,jvj+19)*/
x[jvj+46]=x[jvj+19] ;z[jvj+46]=z[jvj+19];
l13:if((x[jvj+46]<=0)) goto l12;
x[jvj+20]=s[x[jvj+46]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+46];
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]!=73)) goto l14;
pile[v[22]]=102; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+20,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+22,jvj+23)*/
P=x[jvj+23];
if(P!=280&&P!=164) goto l14;
pile[v[22]]=111; pile[WZ1]=jvj+20; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+20,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]==262)) goto l16;
l14:x[jvj+46]=t[x[jvj+46]];
goto l13;
l12:x[jvj+45]=t[x[jvj+45]];
l10:if((x[jvj+45]>0)) goto l11;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+15; pile[WZ2]=jvj+15; pile[WZ3]=104; pile[WZ4]=jvj+26; pile[WZ5]=68; pile[v[22]+6]=jvj+27; 
(*f[452])( );     /*EAFA1(jvj+15,jvj+15,jvj+15,104,jvj+26,68,jvj+27)*/
pile[v[22]]=218; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(218,jvj+27,jvj+28)*/
if((x[jvj+28]!=68)) goto l16;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+29,jvj+15)*/
l16:V40++;
l15:if((V40>V41)) goto l28;
V44=r[V40];
if((V44!=1)) goto l16;
x[jvj+15]=V40 ;z[jvj+15]=(V40<=sepcte) ? V40 : 0;
pile[v[22]]=184; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(184,jvj+15,jvj+16)*/
x[jvj+45]=x[jvj+16] ;z[jvj+45]=z[jvj+16];
goto l10;
l17:x[jvj+40]=0 ;z[jvj+40]=0;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(1484,854,V63)*/
V63=pile[WZ2]; 
V61=sepfacts+1;
V62=sepfacts+V63;
l18:if((V61>V62)) goto l26;
V65=r[V61];
if((V65!=1)) goto l19;
x[jvj+30]=V61 ;z[jvj+30]=(V61<=sepcte) ? V61 : 0;
pile[v[22]]=102; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+30,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+31,jvj+32)*/
if((x[jvj+32]!=69)) goto l19;
pile[v[22]]=108; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(108,jvj+31,jvj+33)*/
x[jvj+47]=x[jvj+33] ;z[jvj+47]=z[jvj+33];
l20:if((x[jvj+47]<=0)) goto l19;
x[jvj+34]=s[x[jvj+47]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+47];
pile[v[22]]=102; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+34,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]!=576)) goto l21;
x[jvj+48]=x[jvj+33] ;z[jvj+48]=z[jvj+33];
l22:if((x[jvj+48]<=0)) goto l21;
x[jvj+37]=s[x[jvj+48]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+48];
if((x[jvj+34]==x[jvj+37])) goto l23;
pile[v[22]]=102; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,jvj+37,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+39]!=576)) goto l23;
pile[v[22]]=jvj+40; pile[WZ1]=jvj+30; 
(*f[68])( );     /*PLUE0(jvj+40,jvj+30)*/
l23:x[jvj+48]=t[x[jvj+48]];
goto l22;
l19:V61++;
goto l18;
l21:x[jvj+47]=t[x[jvj+47]];
goto l20;
l26:pile[v[22]]=854; pile[WZ1]=1028; pile[WZ2]=jvj+40; 
(*f[34])( );     /*CHGC0(854,1028,jvj+40)*/
x[jvj+14]=0 ;z[jvj+14]=0;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(1484,854,V19)*/
V19=pile[WZ2]; 
V17=sepfacts+1;
V18=sepfacts+V19;
goto l4;
l27:pile[v[22]]=854; pile[WZ1]=972; pile[WZ2]=jvj+14; 
(*f[34])( );     /*CHGC0(854,972,jvj+14)*/
x[jvj+29]=0 ;z[jvj+29]=0;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(1484,854,V42)*/
V42=pile[WZ2]; 
V40=sepfacts+1;
V41=sepfacts+V42;
pile[v[22]]=111; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,854,jvj+26)*/
goto l15;
l28:pile[v[22]]=854; pile[WZ1]=1140; pile[WZ2]=jvj+29; 
(*f[34])( );     /*CHGC0(854,1140,jvj+29)*/
v[0]=jvj; return;
}
