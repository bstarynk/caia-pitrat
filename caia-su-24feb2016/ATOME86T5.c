#include "dx.h"
void ATOME86T5(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V6=0,MM=0,V77=0,V1=0,V69=0,V82=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=41;
x[jvj+1]=20086;z[jvj+1]=(-100);
x[jvj+2]=5;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3142&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=30)) goto l17;
pile[v[22]]=869; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(869,R,jvj+5)*/
if((x[jvj+5]!=769)) goto l17;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(870,R,V6)*/
V6=pile[WZ2]; 
if((V6<4)) goto l17;
x[jvj+12]=incon;
if((V6==2)) goto l7;
if((V6<3)) goto l17;
if((V6<=4)) goto l8;
if((V6<=6)) goto l9;
if((V6<=8)) goto l10;
if((V6<=12)) goto l11;
if((V6>15)) goto l17;
x[jvj+12]=606 ;z[jvj+12]=606;
l12:x[jvj+6]=vo[16];z[jvj+6]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[1948])( );if(v[102]) goto l17;     /*FNDOND0(498,jvj+6,jvj+7)*/
pile[v[22]]=1182; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1182,jvj+7,jvj+8)*/
if((68!=x[jvj+8])) goto l17;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,R,jvj+9)*/
pile[v[22]]=103; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,R,jvj+10)*/
pile[v[22]]=R; pile[WZ1]=jvj+11; 
(*f[887])( );     /*VARND0(R,jvj+11)*/
l13:if((x[jvj+11]<=0)) goto l17;
x[jvj+20]=s[x[jvj+11]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+11];
x[jvj+21]=d[20];z[jvj+21]=0;
l18:if((x[jvj+21]>0)) goto l19;
l14:x[jvj+11]=t[x[jvj+11]];
goto l13;
l1:if((MM<=4)) goto l2;
if((MM<=16)) goto l3;
if((MM<=61)) goto l4;
if((MM<=235)) goto l5;
if((MM<=934)) goto l6;
V4=5;
l16:pile[v[22]]=V4; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[1552])( );     /*PROG0(V4,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+18)*/
pile[WZ1]=jvj+20; pile[WZ3]=(-637); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(101,jvj+20,110,(-637),jvj+19)*/
pile[v[22]]=jvj+13; pile[WZ1]=715; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+13,715,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,v[13],642,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=3112; pile[WZ2]=246; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,3112,246,jvj+17)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20086; pile[WZ4]=jvj+17; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(158,289,218,20086,jvj+17,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=159; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+14,159,jvj+18)*/
pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+14,159,jvj+19)*/
(*f[481])( );     /*STOCKER0(jvj+14)*/
goto l14;
l2:V4=0;
goto l16;
l3:V4=1;
goto l16;
l4:V4=2;
goto l16;
l5:V4=3;
goto l16;
l6:V4=4;
goto l16;
l7:x[jvj+12]=602 ;z[jvj+12]=602;
goto l12;
l8:x[jvj+12]=603 ;z[jvj+12]=603;
goto l12;
l9:x[jvj+12]=206 ;z[jvj+12]=206;
goto l12;
l10:x[jvj+12]=604 ;z[jvj+12]=604;
goto l12;
l11:x[jvj+12]=605 ;z[jvj+12]=605;
goto l12;
l17:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l19:x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=jvj+22; pile[WZ1]=R; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(jvj+22,R,jvj+23)*/
x[jvj+24]=x[jvj+23] ;z[jvj+24]=z[jvj+23];
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[887])( );     /*VARND0(jvj+24,jvj+25)*/
for(a=x[jvj+25];a>0;a=t[a]) if(s[a]==x[jvj+20]) goto l21;
l20:x[jvj+21]=t[x[jvj+21]];
goto l18;
l21:x[jvj+26]=x[jvj+24] ;z[jvj+26]=z[jvj+24];
pile[v[22]]=111; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+26,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=485)) goto l32;
pile[v[22]]=107; pile[WZ1]=jvj+26; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(107,jvj+26,jvj+29)*/
l22:if((x[jvj+29]<=0)) goto l32;
x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[887])( );     /*VARND0(jvj+30,jvj+31)*/
for(a=x[jvj+31];a>0;a=t[a]) if(s[a]==x[jvj+20]) goto l23;
x[jvj+29]=t[x[jvj+29]];
goto l22;
l23:x[jvj+32]=x[jvj+30] ;z[jvj+32]=z[jvj+30];
l24:pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+32,V77)*/
V77=pile[WZ2]; 
V1=V77;
l15:MM=V1;
V4=incon;
if((MM>=1)) goto l1;
V4=(-99999998);
goto l14;
l25:x[jvj+41]=t[x[jvj+41]];
l26:if((x[jvj+41]<=0)) goto l27;
x[jvj+33]=s[x[jvj+41]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+41];
pile[v[22]]=130; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+33,V69)*/
V69=pile[WZ2]; 
V1=V69;
goto l15;
l27:V1=1;
goto l15;
l28:pile[v[22]]=111; pile[WZ1]=jvj+32; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,jvj+32,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]==486)) goto l31;
if((x[jvj+35]!=52)) goto l27;
pile[v[22]]=102; pile[WZ1]=jvj+32; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,jvj+32,jvj+36)*/
pile[v[22]]=111; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,jvj+36,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+38]!=486)) goto l27;
pile[v[22]]=107; pile[WZ1]=jvj+36; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(107,jvj+36,jvj+39)*/
l29:if((x[jvj+39]<=0)) goto l27;
x[jvj+40]=s[x[jvj+39]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+39];
pile[v[22]]=130; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(130,jvj+40,V82)*/
V82=pile[WZ2]; 
V1=V82;
goto l15;
l30:x[jvj+39]=t[x[jvj+39]];
goto l29;
l31:pile[v[22]]=107; pile[WZ1]=jvj+32; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(107,jvj+32,jvj+41)*/
goto l26;
l32:x[jvj+32]=x[jvj+26] ;z[jvj+32]=z[jvj+26];
goto l24;
}
