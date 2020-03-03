#include "dx.h"
void COMPTEST0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V83=0,V=0;
int X,E;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=45;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; E=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,X,jvj+17)*/
if((x[jvj+17]==128)) goto l8;
if(x[jvj+17]==96||x[jvj+17]==89||x[jvj+17]==41||x[jvj+17]==20||x[jvj+17]==128||x[jvj+17]==570||x[jvj+17]==1317) goto l8;
if((x[jvj+17]==22)) goto l9;
if((x[jvj+17]!=43)) goto l18;
pile[v[22]]=103; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,X,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=E; pile[WZ2]=jvj+36; 
(*f[1415])( );     /*COMPTEST0(jvj+35,E,jvj+36)*/
if((x[jvj+36]==135)) goto l8;
l18:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,X,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+38]==650)) goto l19;
if((x[jvj+38]==8)) goto l20;
if((x[jvj+38]==50)) goto l21;
if((x[jvj+38]!=433)) goto l22;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(107,X,jvj+44)*/
l2:if((x[jvj+44]<=0)) goto l8;
x[jvj+5]=s[x[jvj+44]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+44];
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=452)) goto l3;
pile[v[22]]=107; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,jvj+5,jvj+7)*/
pile[v[22]]=102; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+5,jvj+1)*/
pile[v[22]]=jvj+1; pile[WZ1]=E; pile[WZ2]=jvj+2; 
(*f[1415])( );     /*COMPTEST0(jvj+1,E,jvj+2)*/
if((x[jvj+2]==134)) goto l22;
x[jvj+45]=x[jvj+7] ;z[jvj+45]=z[jvj+7];
l1:if((x[jvj+45]<=0)) goto l3;
x[jvj+3]=s[x[jvj+45]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+45];
pile[v[22]]=jvj+3; pile[WZ1]=E; pile[WZ2]=jvj+4; 
(*f[1415])( );     /*COMPTEST0(jvj+3,E,jvj+4)*/
if((x[jvj+4]==134)) goto l22;
x[jvj+45]=t[x[jvj+45]];
goto l1;
l3:x[jvj+44]=t[x[jvj+44]];
goto l2;
l6:x[jvj+10]=s[x[jvj+32]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+32];
pile[v[22]]=jvj+10; pile[WZ1]=E; pile[WZ2]=jvj+11; 
(*f[1415])( );     /*COMPTEST0(jvj+10,E,jvj+11)*/
if((x[jvj+11]==134)) goto l18;
x[jvj+32]=t[x[jvj+32]];
l5:if((x[jvj+32]>0)) goto l6;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,X,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=E; pile[WZ2]=jvj+34; 
(*f[1415])( );     /*COMPTEST0(jvj+33,E,jvj+34)*/
if((x[jvj+34]==135)) goto l8;
goto l18;
l8:x[RES]=135 ;z[RES]=135;
l24:v[0]=jvj; v[22]-=3; return;
l9:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,X,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+18,jvj+12)*/
if(x[jvj+12]==654||x[jvj+12]==651||x[jvj+12]==653||x[jvj+12]==649) goto l8;
if(x[jvj+12]!=74&&x[jvj+12]!=67&&x[jvj+12]!=680&&x[jvj+12]!=681) goto l10;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,X,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=E; pile[WZ2]=jvj+20; 
(*f[1415])( );     /*COMPTEST0(jvj+19,E,jvj+20)*/
if((x[jvj+20]==135)) goto l8;
l10:if(x[jvj+12]!=278&&x[jvj+12]!=910) goto l12;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=E; pile[WZ2]=jvj+22; 
(*f[1415])( );     /*COMPTEST0(jvj+21,E,jvj+22)*/
if((x[jvj+22]==135)) goto l11;
l12:if(x[jvj+12]!=25&&x[jvj+12]!=27&&x[jvj+12]!=28&&x[jvj+12]!=29&&x[jvj+12]!=30&&x[jvj+12]!=26&&x[jvj+12]!=44&&x[jvj+12]!=45&&x[jvj+12]!=641&&x[jvj+12]!=739&&x[jvj+12]!=684) goto l14;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,X,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=E; pile[WZ2]=jvj+26; 
(*f[1415])( );     /*COMPTEST0(jvj+25,E,jvj+26)*/
if((x[jvj+26]==135)) goto l13;
l14:pile[v[22]]=118; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(118,jvj+12,V83)*/
V83=pile[WZ2]; 
if((V83==0)) goto l15;
if((V83!=1)) goto l18;
pile[v[22]]=155; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(155,jvj+12,jvj+31)*/
if((x[jvj+31]!=68)) goto l18;
pile[v[22]]=146; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(146,jvj+12,jvj+13)*/
if((x[jvj+13]==23)) goto l18;
l17:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(107,X,jvj+32)*/
goto l5;
l11:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,X,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=E; pile[WZ2]=jvj+24; 
(*f[1628])( );     /*COMPTESTA0(jvj+23,E,jvj+24)*/
if((x[jvj+24]==135)) goto l8;
goto l12;
l13:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,X,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=E; pile[WZ2]=jvj+28; 
(*f[1415])( );     /*COMPTEST0(jvj+27,E,jvj+28)*/
if((x[jvj+28]==135)) goto l8;
goto l14;
l15:pile[v[22]]=155; pile[WZ1]=jvj+12; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(155,jvj+12,jvj+29)*/
if((x[jvj+29]!=68)) goto l18;
pile[v[22]]=146; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(146,jvj+12,jvj+16)*/
if((x[jvj+16]==23)) goto l18;
l16:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(107,X,jvj+30)*/
l7:if((x[jvj+30]<=0)) goto l8;
x[jvj+14]=s[x[jvj+30]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+30];
pile[v[22]]=jvj+14; pile[WZ1]=E; pile[WZ2]=jvj+15; 
(*f[1415])( );     /*COMPTEST0(jvj+14,E,jvj+15)*/
if((x[jvj+15]==134)) goto l18;
x[jvj+30]=t[x[jvj+30]];
goto l7;
l19:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,X,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=E; pile[WZ2]=jvj+40; 
(*f[1628])( );     /*COMPTESTA0(jvj+39,E,jvj+40)*/
if((x[jvj+40]==135)) goto l8;
l22:pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(140,X,V)*/
V=pile[WZ2]; 
if((V==(-3629))) goto l8;
for(a=x[E];a>0;a=t[a]) if(s[a]==V) goto l8;
if((V==(-6470))) goto l8;
l23:x[RES]=134 ;z[RES]=134;
goto l24;
l20:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,X,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=E; pile[WZ2]=jvj+42; 
(*f[1415])( );     /*COMPTEST0(jvj+41,E,jvj+42)*/
if((x[jvj+42]==135)) goto l8;
goto l22;
l21:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(107,X,jvj+43)*/
l4:if((x[jvj+43]<=0)) goto l8;
x[jvj+8]=s[x[jvj+43]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+43];
pile[v[22]]=jvj+8; pile[WZ1]=E; pile[WZ2]=jvj+9; 
(*f[1415])( );     /*COMPTEST0(jvj+8,E,jvj+9)*/
if((x[jvj+9]==134)) goto l22;
x[jvj+43]=t[x[jvj+43]];
goto l4;
}
