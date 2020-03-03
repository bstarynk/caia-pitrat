#include "dx.h"
void ATOME66T6(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V17=0,K=0,V23=0,V40=0,V46=0,V6=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=41;
x[jvj+1]=20066;z[jvj+1]=(-100);
x[jvj+2]=6;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3389&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,R,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=25)) goto l13;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(870,R,V5)*/
V5=pile[WZ2]; 
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=R; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(R,jvj+7)*/
l1:if((x[jvj+7]>0)) goto l2;
x[jvj+13]=d[20];z[jvj+13]=0;
l7:if((x[jvj+13]<=0)) goto l13;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=jvj+14; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+14,R,jvj+15)*/
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+15,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=1273)) goto l8;
pile[v[22]]=102; pile[WZ1]=jvj+15; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+15,jvj+18)*/
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+18,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+14; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+14,jvj+19)*/
K=V17;
pile[v[22]]=jvj+19; pile[WZ1]=R; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+19,R,jvj+20)*/
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+20,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+15; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+15,jvj+21)*/
x[jvj+22]=d[20];z[jvj+22]=0;
l9:if((x[jvj+22]<=0)) goto l8;
x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=268; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(268,jvj+23,jvj+24)*/
x[jvj+41]=x[jvj+10] ;z[jvj+41]=z[jvj+10];
l11:if((x[jvj+41]<=0)) goto l10;
x[jvj+25]=s[x[jvj+41]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+41];
if((x[R]==x[jvj+25])) goto l12;
pile[v[22]]=111; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+25,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]!=25)) goto l12;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+23,jvj+25,jvj+28)*/
pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+28,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]!=1273)) goto l12;
pile[v[22]]=102; pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+28,jvj+31)*/
pile[v[22]]=130; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+31,V40)*/
V40=pile[WZ2]; 
if((K!=V40)) goto l12;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+24,jvj+25,jvj+32)*/
pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+32,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=870; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(870,jvj+25,V6)*/
V6=pile[WZ2]; 
if((V5>=V6)) goto l12;
pile[v[22]]=107; pile[WZ1]=jvj+28; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(107,jvj+28,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+38)*/
pile[WZ1]=jvj+25; pile[WZ3]=(-631); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(101,jvj+25,110,(-631),jvj+39)*/
pile[v[22]]=605; pile[WZ1]=715; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(605,715,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+36; 
(*f[189])( );     /*TRI4(jvj+35,v[13],642,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=3388; pile[WZ2]=246; pile[WZ3]=jvj+37; 
(*f[189])( );     /*TRI4(jvj+36,3388,246,jvj+37)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20066; pile[WZ4]=jvj+37; pile[WZ5]=jvj+34; 
(*f[269])( );     /*QUADRI6(158,289,218,20066,jvj+37,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=159; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+34,159,jvj+38)*/
pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+34,159,jvj+39)*/
(*f[481])( );     /*STOCKER0(jvj+34)*/
l12:x[jvj+41]=t[x[jvj+41]];
goto l11;
l2:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=509; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[1969])( );     /*FNDEND0(509,jvj+8,jvj+9)*/
x[jvj+40]=x[jvj+9] ;z[jvj+40]=z[jvj+9];
l3:if((x[jvj+40]>0)) goto l4;
x[jvj+7]=t[x[jvj+7]];
goto l1;
l4:x[jvj+3]=s[x[jvj+40]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+40];
if((x[jvj+3]==x[R])) goto l5;
pile[v[22]]=1417; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1417,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==199) goto l6;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1545,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==199) goto l6;
l5:x[jvj+40]=t[x[jvj+40]];
goto l3;
l6:pile[v[22]]=jvj+10; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+3)*/
goto l5;
l8:x[jvj+13]=t[x[jvj+13]];
goto l7;
l10:x[jvj+22]=t[x[jvj+22]];
goto l9;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
