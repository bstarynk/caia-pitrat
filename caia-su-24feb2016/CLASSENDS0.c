#include "dx.h"
void CLASSENDS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V43=0,V46=0,V53=0;
int N;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=44;
x[jvj+1]=10753;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3044&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=d[60];z[jvj+2]=0;
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(250,158,R)*/
pile[v[22]]=480; pile[WZ1]=N; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(480,N,jvj+7)*/
l6:if((x[jvj+7]>0)) goto l7;
x[jvj+8]=d[60];z[jvj+8]=0;
l8:if((x[jvj+8]>0)) goto l9;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(jvj+3,N,jvj+4)*/
x[jvj+38]=x[jvj+4] ;z[jvj+38]=z[jvj+4];
l3:if((x[jvj+38]>0)) goto l4;
x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:x[jvj+5]=s[x[jvj+38]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+38];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[1576])( );if(v[102]) goto l5;     /*SYMET0(jvj+5,jvj+6)*/
pile[WZ1]=844; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(jvj+5,844,jvj+6)*/
l5:x[jvj+38]=t[x[jvj+38]];
goto l3;
l7:x[jvj+13]=s[x[jvj+7]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+7];
pile[v[22]]=159; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(159,R,jvj+12)*/
l13:if((x[jvj+12]>0)) goto l32;
pile[v[22]]=jvj+13; pile[WZ1]=(-20); pile[WZ2]=258; pile[WZ3]=jvj+14; 
(*f[180])( );     /*TRIENS0(jvj+13,(-20),258,jvj+14)*/
pile[v[22]]=R; pile[WZ1]=159; pile[WZ2]=jvj+14; 
(*f[774])( );     /*TJPLUS0(R,159,jvj+14)*/
l14:pile[v[22]]=365; pile[WZ1]=jvj+13; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(365,jvj+13,jvj+15)*/
l15:if((x[jvj+15]>0)) goto l28;
pile[v[22]]=365; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(365,jvj+13,jvj+16)*/
l16:if((x[jvj+16]>0)) goto l17;
x[jvj+7]=t[x[jvj+7]];
goto l6;
l9:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=N; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(jvj+9,N,jvj+10)*/
x[jvj+39]=x[jvj+10] ;z[jvj+39]=z[jvj+10];
l10:if((x[jvj+39]>0)) goto l11;
x[jvj+8]=t[x[jvj+8]];
goto l8;
l11:x[jvj+11]=s[x[jvj+39]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+39];
pile[v[22]]=844; pile[WZ1]=jvj+11; 
(*f[71])( );     /*ENLV0(844,jvj+11)*/
x[jvj+39]=t[x[jvj+39]];
goto l10;
l17:x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=844; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(844,jvj+17,jvj+18)*/
V43=x[jvj+18];
pile[v[22]]=159; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(159,R,jvj+19)*/
x[jvj+40]=x[jvj+19] ;z[jvj+40]=z[jvj+19];
l18:if((x[jvj+40]<=0)) goto l27;
x[jvj+20]=s[x[jvj+40]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+40];
pile[v[22]]=258; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(258,jvj+20,jvj+21)*/
for(a=x[jvj+21];a>0;a=t[a]) if(s[a]==V43) goto l19;
x[jvj+40]=t[x[jvj+40]];
goto l18;
l19:x[jvj+41]=t[x[jvj+16]];
l20:if((x[jvj+41]<=0)) goto l27;
x[jvj+22]=s[x[jvj+41]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+41];
pile[v[22]]=844; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(844,jvj+22,jvj+23)*/
V46=x[jvj+23];
pile[v[22]]=159; pile[WZ1]=R; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(159,R,jvj+24)*/
x[jvj+42]=x[jvj+24] ;z[jvj+42]=z[jvj+24];
l21:if((x[jvj+42]<=0)) goto l25;
x[jvj+25]=s[x[jvj+42]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+42];
if((x[jvj+25]==x[jvj+20])) goto l22;
pile[v[22]]=258; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(258,jvj+25,jvj+26)*/
for(a=x[jvj+26];a>0;a=t[a]) if(s[a]==V46) goto l23;
l22:x[jvj+42]=t[x[jvj+42]];
goto l21;
l23:V53=x[jvj+25];
pile[v[22]]=258; pile[WZ1]=jvj+25; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(258,jvj+25,jvj+27)*/
x[jvj+43]=x[jvj+27] ;z[jvj+43]=z[jvj+27];
l24:if((x[jvj+43]>0)) goto l26;
pile[v[22]]=159; pile[WZ1]=R; pile[WZ2]=V53; 
(*f[134])( );     /*OTA0(159,R,V53)*/
l25:x[jvj+41]=t[x[jvj+41]];
goto l20;
l26:x[jvj+28]=s[x[jvj+43]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+43];
pile[v[22]]=jvj+20; pile[WZ1]=258; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+20,258,jvj+28)*/
x[jvj+43]=t[x[jvj+43]];
goto l24;
l27:x[jvj+16]=t[x[jvj+16]];
goto l16;
l28:x[jvj+29]=s[x[jvj+15]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+15];
pile[v[22]]=844; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(844,jvj+29,jvj+30)*/
x[jvj+32]=x[jvj+30] ;z[jvj+32]=z[jvj+30];
pile[v[22]]=159; pile[WZ1]=R; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(159,R,jvj+31)*/
x[jvj+44]=x[jvj+31] ;z[jvj+44]=z[jvj+31];
l29:if((x[jvj+44]>0)) goto l31;
pile[v[22]]=jvj+32; pile[WZ1]=(-20); pile[WZ2]=258; pile[WZ3]=jvj+33; 
(*f[180])( );     /*TRIENS0(jvj+32,(-20),258,jvj+33)*/
pile[v[22]]=R; pile[WZ1]=159; pile[WZ2]=jvj+33; 
(*f[774])( );     /*TJPLUS0(R,159,jvj+33)*/
l30:x[jvj+15]=t[x[jvj+15]];
goto l15;
l31:x[jvj+34]=s[x[jvj+44]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+44];
pile[v[22]]=258; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(258,jvj+34,jvj+35)*/
for(a=x[jvj+35];a>0;a=t[a]) if(s[a]==x[jvj+32]) goto l30;
x[jvj+44]=t[x[jvj+44]];
goto l29;
l32:x[jvj+36]=s[x[jvj+12]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+12];
pile[v[22]]=258; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(258,jvj+36,jvj+37)*/
for(a=x[jvj+37];a>0;a=t[a]) if(s[a]==x[jvj+13]) goto l14;
x[jvj+12]=t[x[jvj+12]];
goto l13;
}
