#include "dx.h"
void ATOME197T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V15=0,V10=0,V8=0,V54=0,V7=0,V17=0,V25=0,I=0,V39=0,J=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=50;
x[jvj+1]=20197;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3306&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+12; 
(*f[1969])( );     /*FNDEND0(365,D,jvj+12)*/
for(i=x[jvj+12],V10=0;i>0;i=t[i],V10++)  ;
if((V10!=2)) goto l18;
pile[v[22]]=498; pile[WZ2]=jvj+13; 
(*f[1948])( );if(v[102]) goto l18;     /*FNDOND0(498,D,jvj+13)*/
pile[v[22]]=472; pile[WZ1]=jvj+13; 
(*f[1975])( );if(v[102]) goto l18;     /*FNDCND0(472,jvj+13,V8)*/
V8=pile[WZ2]; 
if((V8!=2)) goto l18;
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(642,jvj+8,V54)*/
V54=pile[WZ2]; 
x[jvj+11]=0 ;z[jvj+11]=0;
pile[v[22]]=509; pile[WZ1]=D; pile[WZ2]=jvj+10; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+10)*/
l5:if((x[jvj+10]<=0)) goto l8;
x[jvj+6]=s[x[jvj+10]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+10];
pile[v[22]]=1417; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1417,jvj+6,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==591) goto l7;
pile[v[22]]=1545; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1545,jvj+8,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==591) goto l7;
l6:x[jvj+10]=t[x[jvj+10]];
goto l5;
l2:x[jvj+47]=t[x[jvj+47]];
l1:if((x[jvj+47]<=0)) goto l15;
x[jvj+4]=s[x[jvj+47]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+47];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+4,V13)*/
V13=pile[WZ2]; 
if((V13!=I)) goto l2;
x[jvj+50]=x[jvj+16] ;z[jvj+50]=z[jvj+16];
l16:if((x[jvj+50]<=0)) goto l15;
x[jvj+29]=s[x[jvj+50]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+50];
if((x[jvj+23]==x[jvj+29])) goto l17;
pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+29,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=26)) goto l17;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+29; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+22,jvj+29,jvj+32)*/
pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+32,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=jvj+21; pile[WZ1]=jvj+29; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+21,jvj+29,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+33,jvj+34)*/
if((x[jvj+34]!=484)) goto l17;
J=V39;
x[jvj+48]=x[jvj+12] ;z[jvj+48]=z[jvj+12];
l3:if((x[jvj+48]<=0)) goto l17;
x[jvj+5]=s[x[jvj+48]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+48];
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+5,V15)*/
V15=pile[WZ2]; 
if((V15!=J)) goto l4;
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+40; 
(*f[270])( );     /*QUADRI7(101,jvj+2,110,(-601),jvj+40)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+41; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+41)*/
pile[v[22]]=V54; pile[WZ1]=858; pile[WZ2]=jvj+37; 
(*f[46])( );     /*TRI0(V54,858,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+38; 
(*f[189])( );     /*TRI4(jvj+37,v[13],642,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=3306; pile[WZ2]=246; pile[WZ3]=jvj+39; 
(*f[189])( );     /*TRI4(jvj+38,3306,246,jvj+39)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20197; pile[WZ4]=jvj+39; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(158,1,218,20197,jvj+39,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=159; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+35,159,jvj+40)*/
pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+35,159,jvj+41)*/
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+4; pile[WZ3]=jvj+35; 
(*f[1569])( );     /*DELIER0(365,D,jvj+4,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(101,jvj+2,110,(-601),jvj+45)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+46; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+46)*/
pile[v[22]]=V54; pile[WZ1]=858; pile[WZ2]=jvj+42; 
(*f[46])( );     /*TRI0(V54,858,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+43; 
(*f[189])( );     /*TRI4(jvj+42,v[13],642,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=3306; pile[WZ2]=246; pile[WZ3]=jvj+44; 
(*f[189])( );     /*TRI4(jvj+43,3306,246,jvj+44)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20197; pile[WZ4]=jvj+44; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(158,1,218,20197,jvj+44,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=159; pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+36,159,jvj+45)*/
pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(jvj+36,159,jvj+46)*/
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+5; pile[WZ3]=jvj+36; 
(*f[1569])( );     /*DELIER0(365,D,jvj+5,jvj+36)*/
l17:x[jvj+50]=t[x[jvj+50]];
goto l16;
l4:x[jvj+48]=t[x[jvj+48]];
goto l3;
l7:pile[v[22]]=jvj+11; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+6)*/
goto l6;
l9:x[jvj+11]=t[x[jvj+11]];
l8:if((x[jvj+11]<=0)) goto l18;
x[jvj+2]=s[x[jvj+11]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+11];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+2,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=55)) goto l9;
pile[v[22]]=870; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(870,jvj+2,V7)*/
V7=pile[WZ2]; 
if((V7!=1)) goto l9;
pile[v[22]]=107; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+16)*/
for(i=x[jvj+16],V17=0;i>0;i=t[i],V17++)  ;
if((V17!=2)) goto l9;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(jvj+2,jvj+3)*/
if((x[jvj+3]<=0)) goto l9;
x[D]=s[x[jvj+3]] ;z[D]=(x[D]<=sepcte) ? x[D] : z[jvj+3];
x[jvj+17]=d[20];z[jvj+17]=0;
l10:if((x[jvj+17]<=0)) goto l9;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=268; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(268,jvj+18,jvj+19)*/
x[jvj+20]=d[20];z[jvj+20]=0;
l12:if((x[jvj+20]<=0)) goto l11;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=268; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(268,jvj+21,jvj+22)*/
x[jvj+49]=x[jvj+16] ;z[jvj+49]=z[jvj+16];
l14:if((x[jvj+49]<=0)) goto l13;
x[jvj+23]=s[x[jvj+49]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+49];
pile[v[22]]=111; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+23,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=26)) goto l15;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+23; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(jvj+19,jvj+23,jvj+26)*/
pile[v[22]]=130; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,jvj+26,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=jvj+18; pile[WZ1]=jvj+23; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(jvj+18,jvj+23,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+27,jvj+28)*/
if((x[jvj+28]!=484)) goto l15;
I=V25;
x[jvj+47]=x[jvj+12] ;z[jvj+47]=z[jvj+12];
goto l1;
l11:x[jvj+17]=t[x[jvj+17]];
goto l10;
l13:x[jvj+20]=t[x[jvj+20]];
goto l12;
l15:x[jvj+49]=t[x[jvj+49]];
goto l14;
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
