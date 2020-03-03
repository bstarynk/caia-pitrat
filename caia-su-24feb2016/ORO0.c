#include "dx.h"
void ORO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V26=0,V68=0;
int R,VA,VB;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=49;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; VA=pile[v[22]+1]; VB=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=d[107];z[jvj+1]=0;
l1:if((x[jvj+1]>0)) goto l2;
x[jvj+6]=d[10];z[jvj+6]=0;
l6:if((x[jvj+6]>0)) goto l7;
pile[v[22]]=R; pile[WZ1]=VA; pile[WZ2]=VB; 
(*f[2212])( );     /*OROK0(R,VA,VB)*/
x[jvj+41]=x[R] ;z[jvj+41]=z[R];
l28:pile[v[22]]=253; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(253,jvj+41,jvj+42)*/
for(a=x[jvj+42];a>0;a=t[a]) if(s[a]==VB) goto l30;
l29:pile[v[22]]=498; pile[WZ1]=jvj+41; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(498,jvj+41,jvj+43)*/
x[jvj+41]=x[jvj+43] ;z[jvj+41]=z[jvj+43];
goto l28;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=jvj+2; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(jvj+2,R,jvj+3)*/
x[jvj+44]=x[jvj+3] ;z[jvj+44]=z[jvj+3];
l3:if((x[jvj+44]>0)) goto l4;
x[jvj+1]=t[x[jvj+1]];
goto l1;
l4:x[jvj+4]=s[x[jvj+44]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+44];
pile[v[22]]=253; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(253,jvj+4,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==VB) goto l21;
l5:x[jvj+44]=t[x[jvj+44]];
goto l3;
l7:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+7,R,jvj+8)*/
x[jvj+45]=x[jvj+8] ;z[jvj+45]=z[jvj+8];
l8:if((x[jvj+45]>0)) goto l9;
pile[v[22]]=184; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(184,R,jvj+16)*/
x[jvj+47]=x[jvj+16] ;z[jvj+47]=z[jvj+16];
l13:if((x[jvj+47]>0)) goto l14;
x[jvj+6]=t[x[jvj+6]];
goto l6;
l9:x[jvj+9]=s[x[jvj+45]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+45];
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=435)) goto l10;
pile[v[22]]=102; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+9,jvj+11)*/
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=734)) goto l10;
pile[v[22]]=107; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(107,jvj+11,jvj+14)*/
x[jvj+46]=x[jvj+14] ;z[jvj+46]=z[jvj+14];
l11:if((x[jvj+46]<=0)) goto l10;
x[jvj+15]=s[x[jvj+46]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+46];
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+15,V11)*/
V11=pile[WZ2]; 
if((VB!=V11)) goto l12;
pile[v[22]]=428; pile[WZ1]=jvj+9; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(428,jvj+9,jvj+31)*/
pile[v[22]]=287; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(287,jvj+31,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+9,jvj+33)*/
if((x[jvj+33]==47)) goto l25;
if((x[jvj+33]!=22)) goto l24;
pile[v[22]]=111; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,jvj+9,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+34,jvj+35)*/
if(x[jvj+35]==55||x[jvj+35]==48||x[jvj+35]==54||x[jvj+35]==50) goto l25;
l24:pile[v[22]]=VA; pile[WZ1]=VB; pile[WZ2]=jvj+9; 
(*f[2101])( );     /*SUBVT0(VA,VB,jvj+9)*/
l12:x[jvj+46]=t[x[jvj+46]];
goto l11;
l10:x[jvj+45]=t[x[jvj+45]];
goto l8;
l14:x[jvj+17]=s[x[jvj+47]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+47];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(jvj+7,jvj+17,jvj+18)*/
x[jvj+48]=x[jvj+18] ;z[jvj+48]=z[jvj+18];
l15:if((x[jvj+48]>0)) goto l16;
x[jvj+47]=t[x[jvj+47]];
goto l13;
l16:x[jvj+19]=s[x[jvj+48]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+48];
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=435)) goto l17;
pile[v[22]]=102; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+19,jvj+21)*/
pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+21,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=734)) goto l17;
pile[v[22]]=107; pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(107,jvj+21,jvj+24)*/
x[jvj+49]=x[jvj+24] ;z[jvj+49]=z[jvj+24];
l18:if((x[jvj+49]<=0)) goto l17;
x[jvj+25]=s[x[jvj+49]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+49];
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+25,V26)*/
V26=pile[WZ2]; 
if((VB!=V26)) goto l19;
pile[v[22]]=428; pile[WZ1]=jvj+19; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(428,jvj+19,jvj+36)*/
pile[v[22]]=287; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(287,jvj+36,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+19,jvj+38)*/
if((x[jvj+38]==47)) goto l27;
if((x[jvj+38]!=22)) goto l26;
pile[v[22]]=111; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+19,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+39,jvj+40)*/
if(x[jvj+40]==55||x[jvj+40]==48||x[jvj+40]==54||x[jvj+40]==50) goto l27;
l26:pile[v[22]]=VA; pile[WZ1]=VB; pile[WZ2]=jvj+19; 
(*f[2101])( );     /*SUBVT0(VA,VB,jvj+19)*/
l19:x[jvj+49]=t[x[jvj+49]];
goto l18;
l17:x[jvj+48]=t[x[jvj+48]];
goto l15;
l20:v[0]=jvj; v[22]-=3; return;
l21:pile[v[22]]=428; pile[WZ1]=jvj+4; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(428,jvj+4,jvj+26)*/
pile[v[22]]=287; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(287,jvj+26,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+4,jvj+28)*/
if((x[jvj+28]==47)) goto l23;
if((x[jvj+28]!=22)) goto l22;
pile[v[22]]=111; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+4,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+29,jvj+30)*/
if(x[jvj+30]==55||x[jvj+30]==48||x[jvj+30]==54||x[jvj+30]==50) goto l23;
l22:pile[v[22]]=VA; pile[WZ1]=VB; pile[WZ2]=jvj+4; 
(*f[2101])( );     /*SUBVT0(VA,VB,jvj+4)*/
goto l5;
l23:pile[v[22]]=jvj+27; pile[WZ1]=VA; pile[WZ2]=VB; 
(*f[2214])( );     /*SUBTOU0(jvj+27,VA,VB)*/
(*f[2215])( );     /*ENLEVEFAIT0(jvj+27)*/
goto l5;
l25:pile[v[22]]=jvj+32; pile[WZ1]=VA; pile[WZ2]=VB; 
(*f[2214])( );     /*SUBTOU0(jvj+32,VA,VB)*/
(*f[2215])( );     /*ENLEVEFAIT0(jvj+32)*/
goto l12;
l27:pile[v[22]]=jvj+37; pile[WZ1]=VA; pile[WZ2]=VB; 
(*f[2214])( );     /*SUBTOU0(jvj+37,VA,VB)*/
(*f[2215])( );     /*ENLEVEFAIT0(jvj+37)*/
goto l19;
l30:V68=VB;
pile[v[22]]=253; pile[WZ1]=jvj+41; pile[WZ2]=V68; 
(*f[134])( );     /*OTA0(253,jvj+41,V68)*/
pile[v[22]]=jvj+41; pile[WZ1]=253; pile[WZ2]=VA; 
(*f[735])( );     /*PLUSC4(jvj+41,253,VA)*/
goto l29;
}
