#include "dx.h"
void ATOME619T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V58=0,V17=0,V64=0,V18=0,V65=0,V29=0,V41=0,V62=0,FF=0;
int NNNM;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=56;
x[jvj+1]=20619;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3927&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNM=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=NNNM; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,NNNM,jvj+7)*/
if((x[jvj+7]!=22)) goto l22;
pile[v[22]]=102; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,NNNM,jvj+8)*/
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=486)) goto l22;
pile[v[22]]=103; pile[WZ1]=NNNM; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,NNNM,jvj+11)*/
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=486)) goto l22;
pile[v[22]]=107; pile[WZ1]=jvj+8; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(107,jvj+8,jvj+14)*/
for(i=x[jvj+14],V29=0;i>0;i=t[i],V29++)  ;
if((V29!=2)) goto l22;
pile[WZ1]=jvj+11; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+11,jvj+15)*/
for(i=x[jvj+15],V41=0;i>0;i=t[i],V41++)  ;
if((V41!=2)) goto l22;
pile[v[22]]=111; pile[WZ1]=NNNM; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,NNNM,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+16,jvj+17)*/
pile[v[22]]=1940; pile[WZ1]=145; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1940,145,jvj+18)*/
for(a=x[jvj+18];a>0;a=t[a]) if(s[a]==x[jvj+17]) goto l6;
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:V17=s[V64];
pile[v[22]]=jvj+3; pile[WZ1]=V17; 
(*f[207])( );     /*PLUE2(jvj+3,V17)*/
V64=t[V64];
l2:if((V64>0)) goto l3;
pile[v[22]]=1006; pile[WZ1]=NNNM; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1006,NNNM,jvj+6)*/
V65=x[jvj+6];
l4:if((V65>0)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+4,jvj+31)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+31; pile[WZ2]=jvj+33; 
(*f[760])( );     /*MEMEX0(jvj+32,jvj+31,jvj+33)*/
if((x[jvj+33]==135)) goto l16;
l13:x[jvj+52]=t[x[jvj+52]];
l11:if((x[jvj+52]<=0)) goto l10;
x[jvj+4]=s[x[jvj+52]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+52];
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+4,jvj+27)*/
if((x[jvj+27]!=22)) goto l13;
pile[v[22]]=111; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+4,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+28,jvj+29)*/
FF=x[jvj+29];
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==FF) goto l14;
goto l13;
l5:V18=s[V65];
pile[v[22]]=jvj+3; pile[WZ1]=V18; 
(*f[207])( );     /*PLUE2(jvj+3,V18)*/
V65=t[V65];
goto l4;
l6:x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(642,jvj+2,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=1939; pile[WZ1]=145; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1939,145,jvj+19)*/
x[jvj+55]=x[jvj+14] ;z[jvj+55]=z[jvj+14];
l7:if((x[jvj+55]<=0)) goto l22;
x[jvj+50]=s[x[jvj+55]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+55];
x[jvj+20]=x[jvj+50] ;z[jvj+20]=z[jvj+50];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+21)*/
x[jvj+51]=x[jvj+14] ;z[jvj+51]=z[jvj+14];
l8:if((x[jvj+51]>0)) goto l9;
x[jvj+55]=t[x[jvj+55]];
goto l7;
l9:x[jvj+32]=s[x[jvj+51]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+51];
if((x[jvj+50]==x[jvj+32])) goto l10;
x[jvj+22]=x[jvj+32] ;z[jvj+22]=z[jvj+32];
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]!=484)) goto l10;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+24; 
(*f[200])( );if(v[102]) goto l10;     /*NDD0(jvj+22,jvj+24)*/
pile[v[22]]=509; pile[WZ2]=jvj+25; 
(*f[1969])( );     /*FNDEND0(509,jvj+24,jvj+25)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+26; 
(*f[1352])( );     /*POSITIF0(jvj+22,jvj+26)*/
if((x[jvj+26]==135)) goto l12;
l10:x[jvj+51]=t[x[jvj+51]];
goto l8;
l12:x[jvj+52]=x[jvj+25] ;z[jvj+52]=z[jvj+25];
goto l11;
l14:pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,jvj+4,jvj+30)*/
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V58; 
(*f[207])( );     /*PLUE2(jvj+3,V58)*/
l1:pile[v[22]]=1006; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1006,jvj+4,jvj+5)*/
V64=x[jvj+5];
goto l2;
l16:x[jvj+56]=x[jvj+15] ;z[jvj+56]=z[jvj+15];
l15:if((x[jvj+56]<=0)) goto l13;
x[jvj+53]=s[x[jvj+56]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+56];
x[jvj+34]=x[jvj+53] ;z[jvj+34]=z[jvj+53];
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; 
(*f[1352])( );     /*POSITIF0(jvj+34,jvj+35)*/
if((x[jvj+35]==135)) goto l18;
l17:x[jvj+56]=t[x[jvj+56]];
goto l15;
l18:pile[v[22]]=jvj+34; pile[WZ1]=jvj+36; 
(*f[255])( );     /*COPEXP0(jvj+34,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+36; pile[WZ2]=103; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+42,jvj+36,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+43; pile[WZ5]=jvj+39; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+21,jvj+43,jvj+39)*/
x[jvj+54]=x[jvj+15] ;z[jvj+54]=z[jvj+15];
l19:if((x[jvj+54]<=0)) goto l17;
x[jvj+37]=s[x[jvj+54]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+54];
if((x[jvj+53]==x[jvj+37])) goto l20;
pile[v[22]]=jvj+30; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[760])( );     /*MEMEX0(jvj+30,jvj+37,jvj+38)*/
if((x[jvj+38]==135)) goto l21;
l20:x[jvj+54]=t[x[jvj+54]];
goto l19;
l21:pile[v[22]]=jvj+39; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+39,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=NNNM; pile[WZ2]=110; pile[WZ3]=(-11752); pile[WZ4]=jvj+48; 
(*f[270])( );     /*QUADRI7(101,NNNM,110,(-11752),jvj+48)*/
pile[v[22]]=V62; pile[WZ1]=858; pile[WZ2]=jvj+44; 
(*f[46])( );     /*TRI0(V62,858,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+45; 
(*f[189])( );     /*TRI4(jvj+44,v[13],642,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=3927; pile[WZ2]=246; pile[WZ3]=jvj+46; 
(*f[189])( );     /*TRI4(jvj+45,3927,246,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=20619; pile[WZ2]=218; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+46,20619,218,jvj+47)*/
pile[v[22]]=jvj+48; pile[WZ1]=(-20); pile[WZ2]=jvj+47; pile[WZ3]=159; pile[WZ4]=jvj+49; 
(*f[298])( );     /*TRIENS1(jvj+48,(-20),jvj+47,159,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+49,1,158,jvj+40)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; 
(*f[1296])( );     /*NOUVCONTR0(jvj+39,jvj+40)*/
goto l20;
}
