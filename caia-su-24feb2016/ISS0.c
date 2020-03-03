#include "dx.h"
void ISS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V18=0,V36=0,V33=0,V32=0,V25=0,V=0,V9=0;
int TL;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=10314;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1851&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=TL; 
(*f[2015])( );     /*ISSA0(TL)*/
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(302,TL,jvj+19)*/
l17:if((x[jvj+19]>0)) goto l18;
V32=incon;
pile[v[22]]=583; pile[WZ1]=TL; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(583,TL,jvj+17)*/
pile[v[22]]=708; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(708,jvj+17,jvj+18)*/
if(x[jvj+18]!=68&&x[jvj+18]!=729) goto l16;
V33=incon;
pile[v[22]]=297; pile[WZ1]=TL; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(297,TL,jvj+15)*/
pile[v[22]]=365; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(365,jvj+15,jvj+16)*/
for(i=x[jvj+16],V36=0;i>0;i=t[i],V36++)  ;
if((V36!=1)) goto l14;
V33=1;
l15:V32=V33;
l21:pile[v[22]]=TL; pile[WZ1]=117; pile[WZ2]=V32; 
(*f[43])( );     /*CHGC2(TL,117,V32)*/
pile[v[22]]=246; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(246,TL,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=297; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(297,TL,jvj+27)*/
x[jvj+28]=incon;
pile[v[22]]=302; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(302,TL,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
x[jvj+28]=68 ;z[jvj+28]=68;
l4:V2=incon;
if((x[jvj+28]==68)) goto l5;
V2=1;
l6:pile[v[22]]=371; pile[WZ1]=TL; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(371,TL,jvj+6)*/
if((x[jvj+28]==x[jvj+6])) goto l22;
pile[v[22]]=313; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(313,TL,jvj+7)*/
l7:if((x[jvj+7]<=0)) goto l22;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=10314; 
(*f[294])( );     /*PLUK2(jvj+8,10314)*/
x[jvj+7]=t[x[jvj+7]];
goto l7;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+3,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=86)) goto l3;
x[jvj+28]=67 ;z[jvj+28]=67;
goto l4;
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:V2=0;
goto l6;
l9:x[jvj+29]=t[x[jvj+29]];
l8:if((x[jvj+29]<=0)) goto l19;
x[jvj+10]=s[x[jvj+29]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+29];
pile[v[22]]=140; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+10,V18)*/
V18=pile[WZ2]; 
if((V18!=V)) goto l9;
pile[v[22]]=158; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(158,jvj+10,jvj+26)*/
pile[v[22]]=jvj+24; pile[WZ1]=146; 
(*f[35])( );     /*CHGC1(jvj+24,146,jvj+26)*/
l19:x[jvj+19]=t[x[jvj+19]];
goto l17;
l12:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+12,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]==85)) goto l23;
l13:x[jvj+11]=t[x[jvj+11]];
l11:if((x[jvj+11]>0)) goto l12;
pile[v[22]]=10314; pile[WZ1]=(-4380); pile[WZ2]=85; 
(*f[2016])( );     /*FAUTE10(10314,(-4380),85)*/
l23:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l14:V33=2;
goto l15;
l16:V32=0;
goto l21;
l18:x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=102; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+20,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]==22)) goto l20;
if((x[jvj+22]!=435)) goto l19;
pile[v[22]]=436; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(436,jvj+21,jvj+23)*/
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+23,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+21,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=22)) goto l19;
V=V25;
pile[v[22]]=283; pile[WZ1]=TL; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(283,TL,jvj+9)*/
x[jvj+29]=x[jvj+9] ;z[jvj+29]=z[jvj+9];
goto l8;
l20:pile[v[22]]=jvj+21; pile[WZ1]=146; pile[WZ2]=20; 
(*f[35])( );     /*CHGC1(jvj+21,146,20)*/
goto l19;
l22:sansechec[V9]=V2;
pile[v[22]]=jvj+27; pile[WZ1]=371; pile[WZ2]=jvj+28; 
(*f[35])( );     /*CHGC1(jvj+27,371,jvj+28)*/
pile[v[22]]=TL; 
(*f[35])( );     /*CHGC1(TL,371,jvj+28)*/
l10:pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(302,TL,jvj+11)*/
goto l11;
}
