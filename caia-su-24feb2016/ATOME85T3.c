#include "dx.h"
void ATOME85T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V7=0,Q=0,MM=0,V19=0,V77=0,V2=0,V69=0,V82=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=47;
x[jvj+1]=20085;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3119&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[1948])( );if(v[102]) goto l23;     /*FNDOND0(498,jvj+3,jvj+4)*/
pile[v[22]]=1182; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(1182,jvj+4,jvj+5)*/
if((68!=x[jvj+5])) goto l23;
pile[v[22]]=509; pile[WZ1]=D; pile[WZ2]=jvj+6; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+6)*/
l14:if((x[jvj+6]<=0)) goto l23;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=25)) goto l15;
pile[v[22]]=870; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(870,jvj+7,V7)*/
V7=pile[WZ2]; 
if((V7<=2)) goto l15;
Q=V7;
x[jvj+11]=incon;
if((Q==2)) goto l8;
if((Q>=3)) goto l9;
x[jvj+11]=(-99999998);
l15:x[jvj+6]=t[x[jvj+6]];
goto l14;
l1:if((MM<=4)) goto l2;
if((MM<=20)) goto l3;
if((MM<=86)) goto l4;
if((MM<=389)) goto l5;
if((MM<=1866)) goto l6;
if((MM<=8074)) goto l7;
V5=6;
l18:pile[v[22]]=V5; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[1552])( );     /*PROG0(V5,jvj+11,jvj+12)*/
x[jvj+47]=x[jvj+10] ;z[jvj+47]=z[jvj+10];
l19:if((x[jvj+47]<=0)) goto l15;
x[jvj+25]=s[x[jvj+47]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+47];
if((x[jvj+25]==x[D])) goto l20;
x[jvj+13]=d[20];z[jvj+13]=0;
l21:if((x[jvj+13]<=0)) goto l20;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=268; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(268,jvj+14,jvj+15)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+15; pile[WZ3]=jvj+16; 
(*f[45])( );if(v[102]) goto l22;     /*FNDZ0(jvj+7,jvj+15,V19,jvj+16)*/
V19=pile[WZ2]; 
pile[v[22]]=jvj+14; pile[WZ1]=jvj+7; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(jvj+14,jvj+7,jvj+17)*/
pile[v[22]]=101; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,jvj+7,110,(-601),jvj+22)*/
pile[WZ1]=jvj+17; pile[WZ3]=(-596); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,jvj+17,110,(-596),jvj+23)*/
pile[WZ1]=jvj+25; pile[WZ3]=(-637); pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(101,jvj+25,110,(-637),jvj+24)*/
pile[v[22]]=jvj+12; pile[WZ1]=715; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+12,715,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,v[13],642,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=3107; pile[WZ2]=246; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,3107,246,jvj+21)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20085; pile[WZ4]=jvj+21; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(158,289,218,20085,jvj+21,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=159; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+18,159,jvj+22)*/
pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+18,159,jvj+23)*/
pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+18,159,jvj+24)*/
(*f[481])( );     /*STOCKER0(jvj+18)*/
l22:x[jvj+13]=t[x[jvj+13]];
goto l21;
l2:V5=0;
goto l18;
l3:V5=1;
goto l18;
l4:V5=2;
goto l18;
l5:V5=3;
goto l18;
l6:V5=4;
goto l18;
l7:V5=5;
goto l18;
l8:x[jvj+11]=602 ;z[jvj+11]=602;
l16:pile[v[22]]=jvj+7; pile[WZ1]=jvj+10; 
(*f[887])( );     /*VARND0(jvj+7,jvj+10)*/
x[jvj+26]=d[20];z[jvj+26]=0;
l24:if((x[jvj+26]>0)) goto l25;
goto l15;
l9:if((Q<=4)) goto l10;
if((Q<=6)) goto l11;
if((Q<=8)) goto l12;
if((Q<=12)) goto l13;
x[jvj+11]=606 ;z[jvj+11]=606;
goto l16;
l10:x[jvj+11]=603 ;z[jvj+11]=603;
goto l16;
l11:x[jvj+11]=206 ;z[jvj+11]=206;
goto l16;
l12:x[jvj+11]=604 ;z[jvj+11]=604;
goto l16;
l13:x[jvj+11]=605 ;z[jvj+11]=605;
goto l16;
l20:x[jvj+47]=t[x[jvj+47]];
goto l19;
l23:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l25:x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+7; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(jvj+27,jvj+7,jvj+28)*/
x[jvj+29]=x[jvj+28] ;z[jvj+29]=z[jvj+28];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[887])( );     /*VARND0(jvj+29,jvj+30)*/
for(a=x[jvj+30];a>0;a=t[a]) if(s[a]==x[D]) goto l27;
l26:x[jvj+26]=t[x[jvj+26]];
goto l24;
l27:x[jvj+31]=x[jvj+29] ;z[jvj+31]=z[jvj+29];
pile[v[22]]=111; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+31,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=485)) goto l38;
pile[v[22]]=107; pile[WZ1]=jvj+31; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(107,jvj+31,jvj+34)*/
l28:if((x[jvj+34]<=0)) goto l38;
x[jvj+35]=s[x[jvj+34]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+34];
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[887])( );     /*VARND0(jvj+35,jvj+36)*/
for(a=x[jvj+36];a>0;a=t[a]) if(s[a]==x[D]) goto l29;
x[jvj+34]=t[x[jvj+34]];
goto l28;
l29:x[jvj+37]=x[jvj+35] ;z[jvj+37]=z[jvj+35];
l30:pile[v[22]]=130; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(130,jvj+37,V77)*/
V77=pile[WZ2]; 
V2=V77;
l17:MM=V2;
V5=incon;
if((MM>=1)) goto l1;
V5=(-99999998);
goto l15;
l31:x[jvj+46]=t[x[jvj+46]];
l32:if((x[jvj+46]<=0)) goto l33;
x[jvj+38]=s[x[jvj+46]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+46];
pile[v[22]]=130; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(130,jvj+38,V69)*/
V69=pile[WZ2]; 
V2=V69;
goto l17;
l33:V2=1;
goto l17;
l34:pile[v[22]]=111; pile[WZ1]=jvj+37; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,jvj+37,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+39,jvj+40)*/
if((x[jvj+40]==486)) goto l37;
if((x[jvj+40]!=52)) goto l33;
pile[v[22]]=102; pile[WZ1]=jvj+37; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+37,jvj+41)*/
pile[v[22]]=111; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,jvj+41,jvj+42)*/
pile[v[22]]=101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+42,jvj+43)*/
if((x[jvj+43]!=486)) goto l33;
pile[v[22]]=107; pile[WZ1]=jvj+41; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(107,jvj+41,jvj+44)*/
l35:if((x[jvj+44]<=0)) goto l33;
x[jvj+45]=s[x[jvj+44]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+44];
pile[v[22]]=130; pile[WZ1]=jvj+45; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(130,jvj+45,V82)*/
V82=pile[WZ2]; 
V2=V82;
goto l17;
l36:x[jvj+44]=t[x[jvj+44]];
goto l35;
l37:pile[v[22]]=107; pile[WZ1]=jvj+37; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(107,jvj+37,jvj+46)*/
goto l32;
l38:x[jvj+37]=x[jvj+31] ;z[jvj+37]=z[jvj+31];
goto l30;
}
