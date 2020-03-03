#include "dx.h"
void ATOME65T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V48=0,V21=0,V32=0,V10=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=43;
x[jvj+1]=20065;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3147&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,R,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=25)) goto l14;
x[jvj+12]=vo[16];z[jvj+12]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[1948])( );if(v[102]) goto l14;     /*FNDOND0(498,jvj+12,jvj+13)*/
pile[v[22]]=1182; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1182,jvj+13,jvj+14)*/
if((68!=x[jvj+14])) goto l14;
pile[v[22]]=242; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(242,jvj+12,jvj+15)*/
x[jvj+9]=0 ;z[jvj+9]=0;
pile[v[22]]=678; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(678,R,jvj+3)*/
pile[v[22]]=R; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(R,jvj+4)*/
l1:if((x[jvj+3]>0)) goto l2;
x[jvj+16]=d[20];z[jvj+16]=0;
l6:if((x[jvj+16]<=0)) goto l14;
x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=268; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(268,jvj+17,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+18,R,jvj+19)*/
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=485)) goto l7;
pile[v[22]]=107; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,jvj+19,jvj+22)*/
for(i=x[jvj+22],V21=0;i>0;i=t[i],V21++)  ;
if((V21!=2)) goto l7;
pile[v[22]]=jvj+17; pile[WZ1]=R; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+17,R,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=484)) goto l7;
pile[v[22]]=102; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+23,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+25,jvj+26)*/
if(x[jvj+26]!=96&&x[jvj+26]!=89&&x[jvj+26]!=41&&x[jvj+26]!=20&&x[jvj+26]!=128&&x[jvj+26]!=570&&x[jvj+26]!=1317) goto l7;
x[jvj+41]=x[jvj+22] ;z[jvj+41]=z[jvj+22];
l8:if((x[jvj+41]<=0)) goto l7;
x[jvj+27]=s[x[jvj+41]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+41];
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+27,jvj+28)*/
if((x[jvj+28]!=484)) goto l9;
pile[v[22]]=102; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+27,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+29,jvj+30)*/
if(x[jvj+30]!=96&&x[jvj+30]!=89&&x[jvj+30]!=41&&x[jvj+30]!=20&&x[jvj+30]!=128&&x[jvj+30]!=570&&x[jvj+30]!=1317) goto l9;
x[jvj+42]=x[jvj+22] ;z[jvj+42]=z[jvj+22];
l10:if((x[jvj+42]<=0)) goto l9;
x[jvj+31]=s[x[jvj+42]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+42];
if((x[jvj+27]==x[jvj+31])) goto l11;
pile[v[22]]=130; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+31,V32)*/
V32=pile[WZ2]; 
x[jvj+43]=x[jvj+9] ;z[jvj+43]=z[jvj+9];
l12:if((x[jvj+43]<=0)) goto l11;
x[jvj+32]=s[x[jvj+43]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+43];
pile[v[22]]=365; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[1969])( );     /*FNDEND0(365,jvj+32,jvj+33)*/
for(i=x[jvj+33],V10=0;i>0;i=t[i],V10++)  ;
if((V10!=2)) goto l13;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+38)*/
pile[WZ1]=jvj+32; pile[WZ3]=(-656); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(101,jvj+32,110,(-656),jvj+39)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(206,715,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+36; 
(*f[189])( );     /*TRI4(jvj+35,v[13],642,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=3085; pile[WZ2]=246; pile[WZ3]=jvj+37; 
(*f[189])( );     /*TRI4(jvj+36,3085,246,jvj+37)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20065; pile[WZ4]=jvj+37; pile[WZ5]=jvj+34; 
(*f[269])( );     /*QUADRI6(158,289,218,20065,jvj+37,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=159; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+34,159,jvj+38)*/
pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+34,159,jvj+39)*/
(*f[481])( );     /*STOCKER0(jvj+34)*/
l13:x[jvj+43]=t[x[jvj+43]];
goto l12;
l2:x[jvj+5]=s[x[jvj+3]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+3];
pile[v[22]]=480; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(480,jvj+5,jvj+6)*/
x[jvj+40]=x[jvj+6] ;z[jvj+40]=z[jvj+6];
l3:if((x[jvj+40]>0)) goto l4;
x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+7]=s[x[jvj+40]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+40];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+7]) goto l5;
pile[v[22]]=365; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[1969])( );     /*FNDEND0(365,jvj+7,jvj+8)*/
for(i=x[jvj+8],V48=0;i>0;i=t[i],V48++)  ;
if((V48!=2)) goto l5;
pile[v[22]]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+7)*/
l5:x[jvj+40]=t[x[jvj+40]];
goto l3;
l7:x[jvj+16]=t[x[jvj+16]];
goto l6;
l9:x[jvj+41]=t[x[jvj+41]];
goto l8;
l11:x[jvj+42]=t[x[jvj+42]];
goto l10;
l14:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
