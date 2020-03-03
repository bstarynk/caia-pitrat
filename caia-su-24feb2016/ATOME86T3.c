#include "dx.h"
void ATOME86T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V6=0,Q=0,MM=0,V77=0,V1=0,V69=0,V82=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=45;
x[jvj+1]=20086;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3123&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[1948])( );if(v[102]) goto l15;     /*FNDOND0(498,jvj+3,jvj+4)*/
pile[v[22]]=1182; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1182,jvj+4,jvj+5)*/
if((68!=x[jvj+5])) goto l15;
pile[v[22]]=509; pile[WZ1]=D; pile[WZ2]=jvj+6; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+6)*/
l9:if((x[jvj+6]<=0)) goto l15;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=30)) goto l10;
pile[v[22]]=868; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(868,jvj+7,jvj+10)*/
if((x[jvj+10]!=28)) goto l10;
pile[v[22]]=869; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(869,jvj+7,jvj+11)*/
if((x[jvj+11]!=769)) goto l10;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(870,jvj+7,V6)*/
V6=pile[WZ2]; 
if((V6<4)) goto l10;
Q=V6;
x[jvj+15]=incon;
if((Q<2)) goto l8;
if((Q<=3)) goto l5;
if((Q<=6)) goto l6;
if((Q<=12)) goto l7;
if((Q>15)) goto l8;
x[jvj+15]=606 ;z[jvj+15]=606;
l11:pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+7,jvj+12)*/
pile[v[22]]=103; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+7,jvj+13)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+14; 
(*f[887])( );     /*VARND0(jvj+7,jvj+14)*/
x[jvj+24]=d[20];z[jvj+24]=0;
l16:if((x[jvj+24]>0)) goto l17;
l10:x[jvj+6]=t[x[jvj+6]];
goto l9;
l1:if((MM<=21)) goto l2;
if((MM<=403)) goto l3;
if((MM<=8610)) goto l4;
V4=3;
l13:pile[v[22]]=V4; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[1552])( );     /*PROG0(V4,jvj+15,jvj+16)*/
x[jvj+45]=x[jvj+14] ;z[jvj+45]=z[jvj+14];
l14:if((x[jvj+45]<=0)) goto l10;
x[jvj+23]=s[x[jvj+45]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+45];
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,jvj+7,110,(-601),jvj+21)*/
pile[WZ1]=jvj+23; pile[WZ3]=(-637); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,jvj+23,110,(-637),jvj+22)*/
pile[v[22]]=jvj+16; pile[WZ1]=715; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+16,715,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,v[13],642,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=3112; pile[WZ2]=246; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,3112,246,jvj+20)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20086; pile[WZ4]=jvj+20; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(158,289,218,20086,jvj+20,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=159; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+17,159,jvj+21)*/
pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+17,159,jvj+22)*/
(*f[481])( );     /*STOCKER0(jvj+17)*/
x[jvj+45]=t[x[jvj+45]];
goto l14;
l2:V4=0;
goto l13;
l3:V4=1;
goto l13;
l4:V4=2;
goto l13;
l5:x[jvj+15]=206 ;z[jvj+15]=206;
goto l11;
l6:x[jvj+15]=604 ;z[jvj+15]=604;
goto l11;
l7:x[jvj+15]=605 ;z[jvj+15]=605;
goto l11;
l8:x[jvj+15]=(-99999998);
goto l10;
l15:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l17:x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=jvj+25; pile[WZ1]=jvj+7; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+25,jvj+7,jvj+26)*/
x[jvj+27]=x[jvj+26] ;z[jvj+27]=z[jvj+26];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[887])( );     /*VARND0(jvj+27,jvj+28)*/
for(a=x[jvj+28];a>0;a=t[a]) if(s[a]==x[D]) goto l19;
l18:x[jvj+24]=t[x[jvj+24]];
goto l16;
l19:x[jvj+29]=x[jvj+27] ;z[jvj+29]=z[jvj+27];
pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,jvj+29,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=485)) goto l30;
pile[v[22]]=107; pile[WZ1]=jvj+29; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(107,jvj+29,jvj+32)*/
l20:if((x[jvj+32]<=0)) goto l30;
x[jvj+33]=s[x[jvj+32]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+32];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[887])( );     /*VARND0(jvj+33,jvj+34)*/
for(a=x[jvj+34];a>0;a=t[a]) if(s[a]==x[D]) goto l21;
x[jvj+32]=t[x[jvj+32]];
goto l20;
l21:x[jvj+35]=x[jvj+33] ;z[jvj+35]=z[jvj+33];
l22:pile[v[22]]=130; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+35,V77)*/
V77=pile[WZ2]; 
V1=V77;
l12:MM=V1;
V4=incon;
if((MM>=1)) goto l1;
V4=(-99999998);
goto l10;
l23:x[jvj+44]=t[x[jvj+44]];
l24:if((x[jvj+44]<=0)) goto l25;
x[jvj+36]=s[x[jvj+44]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+44];
pile[v[22]]=130; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(130,jvj+36,V69)*/
V69=pile[WZ2]; 
V1=V69;
goto l12;
l25:V1=1;
goto l12;
l26:pile[v[22]]=111; pile[WZ1]=jvj+35; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+35,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+38]==486)) goto l29;
if((x[jvj+38]!=52)) goto l25;
pile[v[22]]=102; pile[WZ1]=jvj+35; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,jvj+35,jvj+39)*/
pile[v[22]]=111; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+39,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+40,jvj+41)*/
if((x[jvj+41]!=486)) goto l25;
pile[v[22]]=107; pile[WZ1]=jvj+39; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(107,jvj+39,jvj+42)*/
l27:if((x[jvj+42]<=0)) goto l25;
x[jvj+43]=s[x[jvj+42]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+42];
pile[v[22]]=130; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+43,V82)*/
V82=pile[WZ2]; 
V1=V82;
goto l12;
l28:x[jvj+42]=t[x[jvj+42]];
goto l27;
l29:pile[v[22]]=107; pile[WZ1]=jvj+35; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(107,jvj+35,jvj+44)*/
goto l24;
l30:x[jvj+35]=x[jvj+29] ;z[jvj+35]=z[jvj+29];
goto l22;
}
