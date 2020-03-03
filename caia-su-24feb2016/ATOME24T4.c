#include "dx.h"
void ATOME24T4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V59=0,V16=0,V36=0,V22=0,F=0,V10=0,V27=0,K=0,V43=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=47;
x[jvj+1]=20024;z[jvj+1]=(-100);
x[jvj+2]=4;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3325&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=25)) goto l12;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(870,R,V12)*/
V12=pile[WZ2]; 
if((V12!=3)) goto l12;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+5,V59)*/
V59=pile[WZ2]; 
x[jvj+6]=d[20];z[jvj+6]=0;
l1:if((x[jvj+6]<=0)) goto l12;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+7,R,jvj+8)*/
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=485)) goto l2;
pile[v[22]]=107; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,jvj+8,jvj+11)*/
for(i=x[jvj+11],V16=0;i>0;i=t[i],V16++)  ;
if((V16!=2)) goto l2;
pile[v[22]]=268; pile[WZ1]=jvj+7; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+7,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+12,R,jvj+13)*/
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=485)) goto l2;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+16)*/
for(i=x[jvj+16],V36=0;i>0;i=t[i],V36++)  ;
if((V36!=2)) goto l2;
x[jvj+44]=x[jvj+11] ;z[jvj+44]=z[jvj+11];
l3:if((x[jvj+44]<=0)) goto l2;
x[jvj+17]=s[x[jvj+44]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+44];
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=484)) goto l4;
pile[v[22]]=111; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+17,jvj+19)*/
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+19,V22)*/
V22=pile[WZ2]; 
x[jvj+20]=x[jvj+17] ;z[jvj+20]=z[jvj+17];
F=V22;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[200])( );if(v[102]) goto l4;     /*NDD0(jvj+20,jvj+21)*/
pile[v[22]]=498; pile[WZ2]=jvj+22; 
(*f[1948])( );if(v[102]) goto l4;     /*FNDOND0(498,jvj+21,jvj+22)*/
pile[v[22]]=688; pile[WZ1]=jvj+22; 
(*f[1975])( );if(v[102]) goto l4;     /*FNDCND0(688,jvj+22,V10)*/
V10=pile[WZ2]; 
if((V10!=1)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+17; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+17,jvj+23)*/
x[jvj+45]=x[jvj+11] ;z[jvj+45]=z[jvj+11];
l5:if((x[jvj+45]<=0)) goto l4;
x[jvj+24]=s[x[jvj+45]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+45];
if((x[jvj+17]==x[jvj+24])) goto l6;
pile[v[22]]=130; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+24,V27)*/
V27=pile[WZ2]; 
K=V27;
x[jvj+46]=x[jvj+16] ;z[jvj+46]=z[jvj+16];
l7:if((x[jvj+46]<=0)) goto l6;
x[jvj+25]=s[x[jvj+46]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+46];
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+25,jvj+26)*/
if((x[jvj+26]!=484)) goto l8;
pile[v[22]]=111; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+25,jvj+27)*/
pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+27,V43)*/
V43=pile[WZ2]; 
if((F!=V43)) goto l8;
pile[v[22]]=102; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+25,jvj+28)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[760])( );     /*MEMEX0(jvj+23,jvj+28,jvj+29)*/
if((x[jvj+29]==134)) goto l10;
l8:x[jvj+46]=t[x[jvj+46]];
goto l7;
l2:x[jvj+6]=t[x[jvj+6]];
goto l1;
l4:x[jvj+44]=t[x[jvj+44]];
goto l3;
l6:x[jvj+45]=t[x[jvj+45]];
goto l5;
l10:x[jvj+47]=x[jvj+16] ;z[jvj+47]=z[jvj+16];
l9:if((x[jvj+47]<=0)) goto l8;
x[jvj+30]=s[x[jvj+47]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+47];
if((x[jvj+25]==x[jvj+30])) goto l11;
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[255])( );     /*COPEXP0(jvj+30,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+38)*/
pile[v[22]]=V59; pile[WZ1]=858; pile[WZ2]=jvj+34; 
(*f[46])( );     /*TRI0(V59,858,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,v[13],642,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=3325; pile[WZ2]=246; pile[WZ3]=jvj+36; 
(*f[189])( );     /*TRI4(jvj+35,3325,246,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=20024; pile[WZ2]=218; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+36,20024,218,jvj+37)*/
pile[v[22]]=jvj+38; pile[WZ1]=(-20); pile[WZ2]=jvj+37; pile[WZ3]=159; pile[WZ4]=jvj+39; 
(*f[298])( );     /*TRIENS1(jvj+38,(-20),jvj+37,159,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+39,1,158,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+40)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+42; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+42)*/
pile[v[22]]=jvj+40; pile[WZ1]=111; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,111,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; pile[WZ2]=103; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+41,jvj+42,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+43; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+31,jvj+43,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+32; 
(*f[1296])( );     /*NOUVCONTR0(jvj+33,jvj+32)*/
l11:x[jvj+47]=t[x[jvj+47]];
goto l9;
l12:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
