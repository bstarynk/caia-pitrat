#include "dx.h"
void LOCALISE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V20=0,V21=0,V33=0,V34=0;
int A,QQ;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=43;
x[jvj+1]=11342;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1484&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; QQ=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,A,jvj+7)*/
l2:if((x[jvj+7]>0)) goto l3;
x[jvj+11]=d[6];z[jvj+11]=0;
l5:if((x[jvj+11]>0)) goto l6;
pile[v[22]]=176; pile[WZ1]=QQ; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(176,QQ,jvj+26)*/
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,A,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=x[jvj+26])) goto l12;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-664); pile[WZ4]=R; 
(*f[270])( );     /*QUADRI7(100,21,140,(-664),R)*/
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l1:pile[v[22]]=514; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(514,jvj+5,jvj+6)*/
x[jvj+42]=x[jvj+6] ;z[jvj+42]=z[jvj+6];
l8:pile[v[22]]=jvj+5; pile[WZ1]=A; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+5,A,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=QQ; pile[WZ2]=jvj+13; 
(*f[1484])( );if(v[102]) goto l7;     /*LOCALISE0(jvj+12,QQ,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+42; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+42,jvj+35)*/
pile[v[22]]=jvj+14; pile[WZ1]=103; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+14,103,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+35; pile[WZ4]=jvj+34; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+35,jvj+34,R)*/
goto l21;
l3:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=QQ; pile[WZ2]=jvj+9; 
(*f[1484])( );if(v[102]) goto l4;     /*LOCALISE0(jvj+8,QQ,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=543; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,543,jvj+33)*/
pile[v[22]]=jvj+10; pile[WZ1]=103; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+10,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+32; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+33,jvj+32,R)*/
goto l21;
l4:x[jvj+7]=t[x[jvj+7]];
goto l2;
l6:x[jvj+5]=s[x[jvj+11]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+11];
x[jvj+42]=incon;
if(x[jvj+5]!=102&&x[jvj+5]!=103) goto l1;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,A,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+2,jvj+3)*/
pile[v[22]]=418; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(418,jvj+3,jvj+4)*/
if((x[jvj+4]!=68)) goto l1;
x[jvj+42]=894 ;z[jvj+42]=894;
goto l8;
l7:x[jvj+11]=t[x[jvj+11]];
goto l5;
l10:pile[v[22]]=514; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(514,jvj+21,jvj+22)*/
x[jvj+43]=x[jvj+22] ;z[jvj+43]=z[jvj+22];
l19:x[jvj+15]=x[jvj+31] ;z[jvj+15]=z[jvj+31];
pile[v[22]]=130; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+15,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=117; pile[WZ1]=QQ; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,QQ,V21)*/
V21=pile[WZ2]; 
if((V20==V21)) goto l23;
l9:pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+15,jvj+16)*/
pile[v[22]]=176; pile[WZ1]=QQ; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(176,QQ,jvj+17)*/
if((x[jvj+16]==x[jvj+17])) goto l23;
l18:x[jvj+30]=t[x[jvj+30]];
l16:if((x[jvj+30]>0)) goto l17;
l20:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l12:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(107,A,jvj+29)*/
l13:if((x[jvj+29]>0)) goto l14;
x[jvj+30]=d[6];z[jvj+30]=0;
goto l16;
l14:x[jvj+23]=s[x[jvj+29]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+29];
pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+23,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=117; pile[WZ1]=QQ; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,QQ,V34)*/
V34=pile[WZ2]; 
if((V33==V34)) goto l22;
l11:pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+23,jvj+24)*/
pile[v[22]]=176; pile[WZ1]=QQ; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(176,QQ,jvj+25)*/
if((x[jvj+24]==x[jvj+25])) goto l22;
l15:x[jvj+29]=t[x[jvj+29]];
goto l13;
l17:x[jvj+21]=s[x[jvj+30]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+30];
pile[v[22]]=jvj+21; pile[WZ1]=A; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+21,A,jvj+31)*/
x[jvj+43]=incon;
if(x[jvj+21]!=102&&x[jvj+21]!=103) goto l10;
pile[v[22]]=111; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,A,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+18,jvj+19)*/
pile[v[22]]=418; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(418,jvj+19,jvj+20)*/
if((x[jvj+20]!=68)) goto l10;
x[jvj+43]=894 ;z[jvj+43]=894;
goto l19;
l22:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=543; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,543,jvj+38)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-664); pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(100,21,140,(-664),jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=103; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,103,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+37; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+38,jvj+37,R)*/
goto l21;
l23:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+43; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+43,jvj+41)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-664); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(100,21,140,(-664),jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=103; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,103,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+40; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+41,jvj+40,R)*/
goto l21;
}
