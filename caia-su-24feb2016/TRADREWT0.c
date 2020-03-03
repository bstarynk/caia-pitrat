#include "dx.h"
void TRADREWT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,I=0,V4=0,V144=0,V88=0,V118=0,V137=0;
int R,BL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=67;
x[jvj+1]=11815;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==574&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; BL=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=273; pile[WZ1]=R; 
(*f[71])( );     /*ENLV0(273,R)*/
pile[v[22]]=1689; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(1689,R,jvj+21)*/
pile[v[22]]=1688; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1688,R,jvj+2)*/
l1:if((x[jvj+2]<=0)) goto l8;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=1604)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+3,jvj+6)*/
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+6,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+3,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=1704)) goto l2;
I=V15;
pile[v[22]]=1689; pile[WZ1]=R; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(1689,R,jvj+31)*/
x[jvj+67]=x[jvj+31] ;z[jvj+67]=z[jvj+31];
l12:if((x[jvj+67]<=0)) goto l34;
x[jvj+32]=s[x[jvj+67]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+67];
pile[v[22]]=111; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+32,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]!=1749)) goto l13;
pile[v[22]]=102; pile[WZ1]=jvj+32; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+32,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[938])( );     /*USE0(jvj+35,jvj+36)*/
for(a=x[jvj+36];a>0;a=t[a]) if(s[a]==I) goto l14;
l13:x[jvj+67]=t[x[jvj+67]];
goto l12;
l4:x[jvj+20]=incon;
if((x[jvj+30]==1905)) goto l5;
x[jvj+20]=x[BL] ;z[jvj+20]=z[BL];
l11:pile[v[22]]=1732; pile[WZ1]=100; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(1732,100,jvj+12)*/
pile[v[22]]=1688; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1688,R,jvj+9)*/
x[jvj+66]=x[jvj+9] ;z[jvj+66]=z[jvj+9];
l6:if((x[jvj+66]>0)) goto l7;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[935])( );     /*COPREW0(jvj+13,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[935])( );     /*COPREW0(jvj+16,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+30; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+30,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=111; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,111,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+18; pile[WZ2]=103; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+28,jvj+18,103,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+29; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+15,jvj+29,jvj+19)*/
pile[v[22]]=jvj+12; pile[WZ1]=1689; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+12,1689,jvj+19)*/
pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; pile[WZ3]=R; pile[WZ4]=jvj+20; 
(*f[936])( );     /*TRADREW0(jvj+12,jvj+14,jvj+17,R,jvj+20)*/
l9:x[jvj+21]=t[x[jvj+21]];
l8:if((x[jvj+21]<=0)) goto l10;
x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]!=22)) goto l9;
pile[v[22]]=111; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+22,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+24,jvj+25)*/
x[jvj+30]=x[jvj+25] ;z[jvj+30]=z[jvj+25];
if(x[jvj+30]!=1749&&x[jvj+30]!=1905) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+22; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+22,jvj+13)*/
pile[v[22]]=103; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,jvj+22,jvj+16)*/
pile[v[22]]=R; pile[WZ1]=jvj+16; pile[WZ2]=jvj+26; 
(*f[933])( );     /*TRADTEST0(R,jvj+16,jvj+26)*/
if((x[jvj+26]==68)) goto l4;
goto l9;
l5:x[jvj+20]=11849 ;z[jvj+20]=11849;
goto l11;
l7:x[jvj+10]=s[x[jvj+66]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+66];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[935])( );     /*COPREW0(jvj+10,jvj+11)*/
pile[v[22]]=jvj+12; pile[WZ1]=1688; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+12,1688,jvj+11)*/
x[jvj+66]=t[x[jvj+66]];
goto l6;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l14:V4=135;
l3:if((V4==134)) goto l10;
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
l15:x[jvj+41]=t[x[jvj+41]];
l16:if((x[jvj+41]<=0)) goto l14;
x[jvj+37]=s[x[jvj+41]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+41];
pile[v[22]]=111; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+37,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+39]==1604)) goto l15;
l17:pile[v[22]]=jvj+37; pile[WZ1]=jvj+40; 
(*f[938])( );     /*USE0(jvj+37,jvj+40)*/
for(a=x[jvj+40];a>0;a=t[a]) if(s[a]==I) goto l15;
V4=134;
goto l3;
l19:x[jvj+42]=s[x[jvj+60]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+60];
pile[v[22]]=111; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+42,jvj+43)*/
pile[v[22]]=101; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+43,jvj+44)*/
if((x[jvj+44]==1604)) goto l25;
l20:pile[v[22]]=111; pile[WZ1]=jvj+42; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+42,jvj+45)*/
pile[v[22]]=101; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+45,jvj+46)*/
if((x[jvj+46]==25)) goto l33;
if((x[jvj+46]!=625)) goto l30;
x[jvj+47]=d[20];z[jvj+47]=0;
l21:if((x[jvj+47]<=0)) goto l30;
x[jvj+48]=s[x[jvj+47]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+47];
pile[v[22]]=jvj+48; pile[WZ1]=jvj+42; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(jvj+48,jvj+42,jvj+49)*/
pile[v[22]]=140; pile[WZ1]=jvj+49; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+49,V144)*/
V144=pile[WZ2]; 
if((I==V144)) goto l23;
l22:x[jvj+47]=t[x[jvj+47]];
goto l21;
l28:pile[v[22]]=1821; pile[WZ1]=145; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(1821,145,jvj+52)*/
for(a=x[jvj+52];a>0;a=t[a]) if(s[a]==x[jvj+46]) goto l27;
l23:V88=135;
l24:if((V88==135)) goto l14;
l25:x[jvj+60]=t[x[jvj+60]];
l18:if((x[jvj+60]>0)) goto l19;
pile[v[22]]=1688; pile[WZ1]=R; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(1688,R,jvj+41)*/
goto l16;
l30:if(x[jvj+46]!=44&&x[jvj+46]!=1725&&x[jvj+46]!=1741&&x[jvj+46]!=1715&&x[jvj+46]!=1698) goto l29;
pile[v[22]]=100; pile[WZ1]=jvj+42; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,jvj+42,jvj+56)*/
if((x[jvj+56]!=22)) goto l29;
pile[v[22]]=102; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,jvj+42,jvj+55)*/
pile[v[22]]=140; pile[WZ1]=jvj+55; 
(*f[44])( );if(v[102]) goto l29;     /*FNDC1(140,jvj+55,V118)*/
V118=pile[WZ2]; 
if((I==V118)) goto l23;
l29:if((x[jvj+46]==1604)) goto l27;
pile[v[22]]=100; pile[WZ1]=jvj+42; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+42,jvj+54)*/
if((x[jvj+54]!=22)) goto l27;
pile[v[22]]=jvj+42; pile[WZ1]=jvj+53; 
(*f[938])( );     /*USE0(jvj+42,jvj+53)*/
for(a=x[jvj+53];a>0;a=t[a]) if(s[a]==I) goto l28;
l27:if((x[jvj+46]!=278)) goto l26;
pile[v[22]]=103; pile[WZ1]=jvj+42; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(103,jvj+42,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; 
(*f[938])( );     /*USE0(jvj+50,jvj+51)*/
for(a=x[jvj+51];a>0;a=t[a]) if(s[a]==I) goto l23;
l26:V88=134;
goto l24;
l33:x[jvj+59]=d[20];z[jvj+59]=0;
l31:if((x[jvj+59]<=0)) goto l30;
x[jvj+57]=s[x[jvj+59]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+59];
pile[v[22]]=jvj+57; pile[WZ1]=jvj+42; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(jvj+57,jvj+42,jvj+58)*/
pile[v[22]]=140; pile[WZ1]=jvj+58; 
(*f[44])( );if(v[102]) goto l32;     /*FNDC1(140,jvj+58,V137)*/
V137=pile[WZ2]; 
if((I==V137)) goto l23;
l32:x[jvj+59]=t[x[jvj+59]];
goto l31;
l35:x[jvj+61]=s[x[jvj+31]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+31];
pile[v[22]]=111; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,jvj+61,jvj+62)*/
pile[v[22]]=101; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+62,jvj+63)*/
if((x[jvj+63]!=1905)) goto l36;
pile[v[22]]=102; pile[WZ1]=jvj+61; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(102,jvj+61,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+65; 
(*f[938])( );     /*USE0(jvj+64,jvj+65)*/
for(a=x[jvj+65];a>0;a=t[a]) if(s[a]==I) goto l14;
l36:x[jvj+31]=t[x[jvj+31]];
l34:if((x[jvj+31]>0)) goto l35;
pile[v[22]]=1688; pile[WZ1]=R; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(1688,R,jvj+60)*/
goto l18;
}
