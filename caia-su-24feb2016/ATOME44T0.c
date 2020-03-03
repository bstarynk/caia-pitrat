#include "dx.h"
void ATOME44T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V61=0,V41=0,V49=0,I=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=68;
x[jvj+1]=20044;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3533&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,R,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=25)) goto l25;
x[jvj+26]=vo[14];z[jvj+26]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(642,jvj+26,V61)*/
V61=pile[WZ2]; 
x[jvj+27]=d[20];z[jvj+27]=0;
l13:if((x[jvj+27]<=0)) goto l25;
x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=268; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(268,jvj+28,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=R; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+29,R,jvj+30)*/
pile[v[22]]=111; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+30,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]!=485)) goto l14;
pile[v[22]]=107; pile[WZ1]=jvj+30; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(107,jvj+30,jvj+33)*/
for(i=x[jvj+33],V41=0;i>0;i=t[i],V41++)  ;
if((V41!=2)) goto l14;
pile[v[22]]=jvj+28; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+28,R,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+2,jvj+34)*/
if((x[jvj+34]==484)) goto l15;
if((x[jvj+34]==22)) goto l1;
if((x[jvj+34]==22)) goto l4;
l14:x[jvj+27]=t[x[jvj+27]];
goto l13;
l1:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=486)) goto l4;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+5)*/
x[jvj+60]=x[jvj+5] ;z[jvj+60]=z[jvj+5];
l2:if((x[jvj+60]<=0)) goto l4;
x[jvj+6]=s[x[jvj+60]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+60];
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]==484)) goto l15;
l3:x[jvj+60]=t[x[jvj+60]];
goto l2;
l4:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+2,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=486)) goto l14;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+10)*/
x[jvj+61]=x[jvj+10] ;z[jvj+61]=z[jvj+10];
l5:if((x[jvj+61]<=0)) goto l14;
x[jvj+11]=s[x[jvj+61]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+61];
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]==41)) goto l15;
l6:x[jvj+61]=t[x[jvj+61]];
goto l5;
l7:pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=486)) goto l10;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+16)*/
x[jvj+62]=x[jvj+16] ;z[jvj+62]=z[jvj+16];
l8:if((x[jvj+62]<=0)) goto l10;
x[jvj+17]=s[x[jvj+62]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+62];
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]==484)) goto l19;
l9:x[jvj+62]=t[x[jvj+62]];
goto l8;
l10:pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+13,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=486)) goto l18;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+21)*/
x[jvj+63]=x[jvj+21] ;z[jvj+63]=z[jvj+21];
l11:if((x[jvj+63]<=0)) goto l18;
x[jvj+22]=s[x[jvj+63]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+63];
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]==41)) goto l19;
l12:x[jvj+63]=t[x[jvj+63]];
goto l11;
l15:pile[v[22]]=jvj+2; pile[WZ1]=jvj+35; 
(*f[3534])( );if(v[102]) goto l14;     /*ENSFCT0(jvj+2,jvj+35)*/
pile[WZ1]=jvj+36; 
(*f[1446])( );     /*NONUL0(jvj+2,jvj+36)*/
if((x[jvj+36]==135)) goto l17;
goto l14;
l17:x[jvj+68]=x[jvj+33] ;z[jvj+68]=z[jvj+33];
l16:if((x[jvj+68]<=0)) goto l14;
x[jvj+64]=s[x[jvj+68]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+68];
x[jvj+13]=x[jvj+64] ;z[jvj+13]=z[jvj+64];
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+13,jvj+37)*/
if((x[jvj+37]==484)) goto l19;
if((x[jvj+37]==22)) goto l7;
if((x[jvj+37]==22)) goto l10;
l18:x[jvj+68]=t[x[jvj+68]];
goto l16;
l19:pile[v[22]]=jvj+13; pile[WZ1]=jvj+38; 
(*f[3534])( );if(v[102]) goto l18;     /*ENSFCT0(jvj+13,jvj+38)*/
x[jvj+65]=x[jvj+33] ;z[jvj+65]=z[jvj+33];
l20:if((x[jvj+65]<=0)) goto l18;
x[jvj+39]=s[x[jvj+65]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+65];
if((x[jvj+64]==x[jvj+39])) goto l21;
pile[v[22]]=130; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+39,V49)*/
V49=pile[WZ2]; 
I=V49;
if(I!=1&&I!=(-1)) goto l21;
x[jvj+66]=x[jvj+35] ;z[jvj+66]=z[jvj+35];
l22:if((x[jvj+66]<=0)) goto l21;
x[jvj+40]=s[x[jvj+66]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+66];
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(jvj+40,jvj+41)*/
x[jvj+67]=x[jvj+38] ;z[jvj+67]=z[jvj+38];
l23:if((x[jvj+67]>0)) goto l24;
x[jvj+66]=t[x[jvj+66]];
goto l22;
l21:x[jvj+65]=t[x[jvj+65]];
goto l20;
l24:x[jvj+42]=s[x[jvj+67]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+67];
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; 
(*f[255])( );     /*COPEXP0(jvj+42,jvj+43)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+50; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+50)*/
pile[v[22]]=V61; pile[WZ1]=858; pile[WZ2]=jvj+46; 
(*f[46])( );     /*TRI0(V61,858,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+47; 
(*f[189])( );     /*TRI4(jvj+46,v[13],642,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=3533; pile[WZ2]=246; pile[WZ3]=jvj+48; 
(*f[189])( );     /*TRI4(jvj+47,3533,246,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=20044; pile[WZ2]=218; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+48,20044,218,jvj+49)*/
pile[v[22]]=jvj+50; pile[WZ1]=(-20); pile[WZ2]=jvj+49; pile[WZ3]=159; pile[WZ4]=jvj+51; 
(*f[298])( );     /*TRIENS1(jvj+50,(-20),jvj+49,159,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+51,1,158,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+52)*/
pile[WZ3]=636; pile[WZ4]=jvj+57; 
(*f[181])( );     /*QUADRI2(100,20,101,636,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=111; pile[WZ2]=jvj+58; 
(*f[54])( );     /*TRI1(jvj+57,111,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=jvj+43; pile[WZ2]=103; pile[WZ3]=jvj+59; 
(*f[58])( );     /*TRI3(jvj+58,jvj+43,103,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+59; pile[WZ5]=jvj+56; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+41,jvj+59,jvj+56)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+54; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+54)*/
pile[v[22]]=jvj+52; pile[WZ1]=111; pile[WZ2]=jvj+53; 
(*f[54])( );     /*TRI1(jvj+52,111,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; pile[WZ2]=103; pile[WZ3]=jvj+55; 
(*f[58])( );     /*TRI3(jvj+53,jvj+54,103,jvj+55)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+56; pile[WZ4]=jvj+55; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+56,jvj+55,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+44; 
(*f[1296])( );     /*NOUVCONTR0(jvj+45,jvj+44)*/
x[jvj+67]=t[x[jvj+67]];
goto l23;
l25:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
