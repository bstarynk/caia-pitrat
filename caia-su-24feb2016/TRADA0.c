#include "dx.h"
void TRADA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V44=0,V43=0,V55=0,V54=0;
int XX,BT,X,EA;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=10130;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1391&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
XX=pile[v[22]]; BT=pile[v[22]+1]; X=pile[v[22]+2]; EA=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=incon;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,X,jvj+2)*/
if((x[jvj+2]!=22)) goto l1;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,X,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+3,jvj+4)*/
if(x[jvj+4]==295||x[jvj+4]==585||x[jvj+4]==138||x[jvj+4]==139||x[jvj+4]==149) goto l4;
l1:x[jvj+5]=x[X] ;z[jvj+5]=z[X];
l4:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,X,jvj+9)*/
if((x[jvj+9]!=22)) goto l5;
pile[v[22]]=111; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,X,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+10,jvj+11)*/
if(x[jvj+11]!=295&&x[jvj+11]!=585) goto l5;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,X,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=EA; 
(*f[1610])( );     /*TRADX0(jvj+12,EA)*/
l5:if(x[jvj+5]!=incon) goto l2;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l2:pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+5,jvj+6)*/
if(x[jvj+6]==96||x[jvj+6]==89||x[jvj+6]==41||x[jvj+6]==20||x[jvj+6]==128||x[jvj+6]==570||x[jvj+6]==1317) goto l14;
l3:if((x[BT]!=111)) goto l6;
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+5,jvj+7)*/
if((x[jvj+7]!=21)) goto l6;
pile[WZ1]=XX; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,XX,jvj+8)*/
if(x[jvj+8]==484||x[jvj+8]==531||x[jvj+8]==453||x[jvj+8]==979||x[jvj+8]==1027||x[jvj+8]==1050) goto l14;
l6:pile[v[22]]=jvj+5; pile[WZ1]=jvj+13; 
(*f[1608])( );     /*SANSVECT0(jvj+5,jvj+13)*/
if((x[jvj+13]==135)) goto l21;
l14:pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+5,jvj+25)*/
x[jvj+37]=w[x[jvj+25]][9];
l15:if((x[jvj+37]>0)) goto l16;
x[jvj+38]=w[x[jvj+25]][8];
if((x[jvj+25]!=22)) goto l18;
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+5,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+17,jvj+18)*/
if(x[jvj+18]==267||x[jvj+18]==156) goto l19;
l18:if((x[jvj+38]<=0)) goto l19;
x[jvj+19]=s[x[jvj+38]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+38];
x[jvj+21]=0 ;z[jvj+21]=0;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+5; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(jvj+19,jvj+5,jvj+20)*/
x[jvj+36]=x[jvj+20] ;z[jvj+36]=z[jvj+20];
l8:if((x[jvj+36]>0)) goto l9;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+5; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(jvj+19,jvj+5,jvj+23)*/
l10:if((x[jvj+21]>0)) goto l11;
x[jvj+38]=t[x[jvj+38]];
goto l18;
l9:x[jvj+22]=s[x[jvj+36]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+36];
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[68])( );     /*PLUE0(jvj+21,jvj+22)*/
x[jvj+36]=t[x[jvj+36]];
goto l8;
l11:x[jvj+24]=s[x[jvj+21]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+21];
for(a=x[jvj+23];a>0;a=t[a]) if(s[a]==x[jvj+24]) goto l13;
l12:x[jvj+21]=t[x[jvj+21]];
goto l10;
l13:pile[v[22]]=jvj+5; pile[WZ1]=jvj+19; pile[WZ2]=jvj+24; pile[WZ3]=EA; 
(*f[1391])( );     /*TRADA0(jvj+5,jvj+19,jvj+24,EA)*/
goto l12;
l16:x[jvj+26]=s[x[jvj+37]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+37];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+5; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+26,jvj+5,jvj+27)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+26; pile[WZ3]=EA; 
(*f[1391])( );     /*TRADA0(jvj+5,jvj+26,jvj+27,EA)*/
l17:x[jvj+37]=t[x[jvj+37]];
goto l15;
l20:pile[v[22]]=XX; pile[WZ1]=BT; pile[WZ2]=jvj+30; 
(*f[35])( );     /*CHGC1(XX,BT,jvj+30)*/
goto l14;
l21:pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+5,jvj+31)*/
if((x[jvj+31]==453)) goto l22;
if((x[jvj+31]==1027)) goto l22;
if((x[jvj+31]!=22)) goto l26;
pile[v[22]]=111; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+5,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+32,jvj+33)*/
pile[v[22]]=146; pile[WZ1]=jvj+33; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(146,jvj+33,jvj+14)*/
l7:pile[v[22]]=530; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(530,jvj+14,jvj+15)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+15; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+15,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+29; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+16,jvj+29,jvj+30)*/
if((V44=w[x[BT]][1])==incon) goto l14;
if((V44!=23)) goto l20;
V43=x[jvj+5];
pile[v[22]]=BT; pile[WZ1]=XX; pile[WZ2]=V43; 
(*f[134])( );     /*OTA0(BT,XX,V43)*/
pile[v[22]]=XX; pile[WZ1]=BT; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(XX,BT,jvj+30)*/
goto l14;
l22:x[jvj+14]=89 ;z[jvj+14]=89;
goto l7;
l23:x[jvj+39]=t[x[jvj+39]];
l24:if((x[jvj+39]<=0)) goto l25;
x[jvj+34]=s[x[jvj+39]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+39];
pile[v[22]]=140; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(140,jvj+34,V55)*/
V55=pile[WZ2]; 
if((V55!=V54)) goto l23;
pile[v[22]]=158; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(158,jvj+34,jvj+35)*/
x[jvj+14]=x[jvj+35] ;z[jvj+14]=z[jvj+35];
goto l7;
l25:x[jvj+14]=41 ;z[jvj+14]=41;
goto l7;
l26:pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(140,jvj+5,V54)*/
V54=pile[WZ2]; 
x[jvj+39]=x[EA] ;z[jvj+39]=z[EA];
goto l24;
}
