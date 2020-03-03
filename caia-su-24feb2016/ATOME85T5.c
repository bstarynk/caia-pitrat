#include "dx.h"
void ATOME85T5(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V7=0,V18=0,MM=0,V77=0,V2=0,V69=0,V82=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=45;
x[jvj+1]=20085;z[jvj+1]=(-100);
x[jvj+2]=5;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3155&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=25)) goto l19;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(870,R,V7)*/
V7=pile[WZ2]; 
if((V7<=2)) goto l19;
x[jvj+14]=incon;
if((V7==2)) goto l7;
if((V7<3)) goto l19;
if((V7<=4)) goto l8;
if((V7<=6)) goto l9;
if((V7<=8)) goto l10;
if((V7<=12)) goto l11;
x[jvj+14]=606 ;z[jvj+14]=606;
l12:x[jvj+5]=vo[16];z[jvj+5]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[1948])( );if(v[102]) goto l19;     /*FNDOND0(498,jvj+5,jvj+6)*/
pile[v[22]]=1182; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(1182,jvj+6,jvj+7)*/
if((68!=x[jvj+7])) goto l19;
pile[v[22]]=R; pile[WZ1]=jvj+8; 
(*f[887])( );     /*VARND0(R,jvj+8)*/
x[jvj+9]=d[20];z[jvj+9]=0;
l13:if((x[jvj+9]<=0)) goto l19;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=268; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(268,jvj+10,jvj+11)*/
pile[v[22]]=R; pile[WZ1]=jvj+11; pile[WZ3]=jvj+12; 
(*f[45])( );if(v[102]) goto l14;     /*FNDZ0(R,jvj+11,V18,jvj+12)*/
V18=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+10,R,jvj+13)*/
x[jvj+45]=x[jvj+8] ;z[jvj+45]=z[jvj+8];
l15:if((x[jvj+45]<=0)) goto l14;
x[jvj+23]=s[x[jvj+45]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+45];
x[jvj+24]=d[20];z[jvj+24]=0;
l20:if((x[jvj+24]>0)) goto l21;
l16:x[jvj+45]=t[x[jvj+45]];
goto l15;
l1:if((MM<=4)) goto l2;
if((MM<=16)) goto l3;
if((MM<=61)) goto l4;
if((MM<=235)) goto l5;
if((MM<=934)) goto l6;
V5=5;
l18:pile[v[22]]=V5; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[1552])( );     /*PROG0(V5,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+20)*/
pile[WZ1]=jvj+13; pile[WZ3]=(-596); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,jvj+13,110,(-596),jvj+21)*/
pile[WZ1]=jvj+23; pile[WZ3]=(-637); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,jvj+23,110,(-637),jvj+22)*/
pile[v[22]]=jvj+15; pile[WZ1]=715; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+15,715,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,v[13],642,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=3107; pile[WZ2]=246; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,3107,246,jvj+19)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20085; pile[WZ4]=jvj+19; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(158,289,218,20085,jvj+19,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=159; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+20)*/
pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+21)*/
pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+22)*/
(*f[481])( );     /*STOCKER0(jvj+16)*/
goto l16;
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
l7:x[jvj+14]=602 ;z[jvj+14]=602;
goto l12;
l8:x[jvj+14]=603 ;z[jvj+14]=603;
goto l12;
l9:x[jvj+14]=206 ;z[jvj+14]=206;
goto l12;
l10:x[jvj+14]=604 ;z[jvj+14]=604;
goto l12;
l11:x[jvj+14]=605 ;z[jvj+14]=605;
goto l12;
l14:x[jvj+9]=t[x[jvj+9]];
goto l13;
l19:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l21:x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=jvj+25; pile[WZ1]=R; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(jvj+25,R,jvj+26)*/
x[jvj+27]=x[jvj+26] ;z[jvj+27]=z[jvj+26];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[887])( );     /*VARND0(jvj+27,jvj+28)*/
for(a=x[jvj+28];a>0;a=t[a]) if(s[a]==x[jvj+23]) goto l23;
l22:x[jvj+24]=t[x[jvj+24]];
goto l20;
l23:x[jvj+29]=x[jvj+27] ;z[jvj+29]=z[jvj+27];
pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+29,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=485)) goto l34;
pile[v[22]]=107; pile[WZ1]=jvj+29; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(107,jvj+29,jvj+32)*/
l24:if((x[jvj+32]<=0)) goto l34;
x[jvj+33]=s[x[jvj+32]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+32];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[887])( );     /*VARND0(jvj+33,jvj+34)*/
for(a=x[jvj+34];a>0;a=t[a]) if(s[a]==x[jvj+23]) goto l25;
x[jvj+32]=t[x[jvj+32]];
goto l24;
l25:x[jvj+35]=x[jvj+33] ;z[jvj+35]=z[jvj+33];
l26:pile[v[22]]=130; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(130,jvj+35,V77)*/
V77=pile[WZ2]; 
V2=V77;
l17:MM=V2;
V5=incon;
if((MM>=1)) goto l1;
V5=(-99999998);
goto l16;
l27:x[jvj+44]=t[x[jvj+44]];
l28:if((x[jvj+44]<=0)) goto l29;
x[jvj+36]=s[x[jvj+44]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+44];
pile[v[22]]=130; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(130,jvj+36,V69)*/
V69=pile[WZ2]; 
V2=V69;
goto l17;
l29:V2=1;
goto l17;
l30:pile[v[22]]=111; pile[WZ1]=jvj+35; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,jvj+35,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+38]==486)) goto l33;
if((x[jvj+38]!=52)) goto l29;
pile[v[22]]=102; pile[WZ1]=jvj+35; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,jvj+35,jvj+39)*/
pile[v[22]]=111; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,jvj+39,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+40,jvj+41)*/
if((x[jvj+41]!=486)) goto l29;
pile[v[22]]=107; pile[WZ1]=jvj+39; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(107,jvj+39,jvj+42)*/
l31:if((x[jvj+42]<=0)) goto l29;
x[jvj+43]=s[x[jvj+42]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+42];
pile[v[22]]=130; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(130,jvj+43,V82)*/
V82=pile[WZ2]; 
V2=V82;
goto l17;
l32:x[jvj+42]=t[x[jvj+42]];
goto l31;
l33:pile[v[22]]=107; pile[WZ1]=jvj+35; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(107,jvj+35,jvj+44)*/
goto l28;
l34:x[jvj+35]=x[jvj+29] ;z[jvj+35]=z[jvj+29];
goto l26;
}
