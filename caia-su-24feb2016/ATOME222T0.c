#include "dx.h"
void ATOME222T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V38=0,J=0,V33=0,I=0,V5=0,V39=0,V40=0,V36=0,V15=0,V24=0,K=0,Q=0,V2=0,V49=0,V50=0,V4=0,V51=0,V53=0,V54=0,V59=0,V60=0,V78=0,V73=0,V62=0,V98=0,V97=0,V95=0,V96=0,V68=0,V64=0,V67=0,V66=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=48;
x[jvj+1]=20222;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3679&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=625)) goto l9;
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(160,R,jvj+5)*/
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+5,V33)*/
V33=pile[WZ2]; 
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(642,jvj+6,V40)*/
V40=pile[WZ2]; 
V36=V33-1;
x[jvj+7]=d[20];z[jvj+7]=0;
l5:if((x[jvj+7]<=0)) goto l9;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+8,R,jvj+9)*/
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=596)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+9,jvj+12)*/
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+12,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+9,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=484)) goto l6;
pile[v[22]]=268; pile[WZ1]=jvj+8; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+8,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+15,R,jvj+16)*/
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+16,V24)*/
V24=pile[WZ2]; 
I=V15;
K=V24;
Q=2;
l7:if((Q>V36)) goto l6;
pile[v[22]]=V33; pile[WZ1]=Q; pile[WZ2]=I; 
(*f[1041])( );if(v[102]) goto l8;     /*MODPUI0(V33,Q,I,V2)*/
V2=pile[WZ3]; 
if((V2!=1)) goto l8;
x[jvj+2]=0 ;z[jvj+2]=0;
V38=Q-1;
J=0;
l1:if((J<=V38)) goto l3;
x[jvj+48]=x[jvj+34]=x[jvj+18]=incon;
pile[v[22]]=Q; pile[WZ1]=jvj+24; 
(*f[991])( );if(v[102]) goto l24;     /*ENSFACT0(Q,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[3681])( );if(v[102]) goto l24;     /*CROISSANT0(jvj+24,jvj+25)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+26; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+26)*/
l12:x[jvj+27]=x[jvj+25] ;z[jvj+27]=z[jvj+25];
pile[v[22]]=117; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(117,jvj+27,V53)*/
V53=pile[WZ2]; 
V54=V53;
V59=V54-1;
V60=0;
l13:if((V60>V59)) goto l25;
x[jvj+48]=0 ;z[jvj+48]=0;
if(x[jvj+48]!=incon) goto l33;
l14:if(x[jvj+48]!=incon) goto l30;
l15:V60++;
goto l13;
l3:pile[v[22]]=V33; pile[WZ1]=J; pile[WZ2]=I; 
(*f[1041])( );if(v[102]) goto l2;     /*MODPUI0(V33,J,I,V5)*/
V5=pile[WZ3]; 
V39=V5-K;
V49=V39%V33;
V50=V49;
if((V50<0)) goto l11;
V4=V50;
l4:if((V4!=0)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=J; 
(*f[207])( );     /*PLUE2(jvj+2,J)*/
l2:J++;
goto l1;
l6:x[jvj+7]=t[x[jvj+7]];
goto l5;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l10:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+22)*/
pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+23)*/
pile[v[22]]=V40; pile[WZ1]=858; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(V40,858,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,v[13],642,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=3679; pile[WZ2]=246; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,3679,246,jvj+21)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20222; pile[WZ4]=jvj+21; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(158,1,218,20222,jvj+21,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=159; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+17,159,jvj+22)*/
pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+17,159,jvj+23)*/
pile[v[22]]=R; pile[WZ1]=jvj+18; pile[WZ2]=jvj+17; 
(*f[1558])( );     /*RESTAURE0(R,jvj+18,jvj+17)*/
l8:Q++;
goto l7;
l11:V51=V50+V33;
V4=V51;
goto l4;
l17:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+28)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V60; pile[WZ4]=jvj+29; 
(*f[192])( );     /*QUADRI4(100,41,130,V60,jvj+29)*/
pile[WZ3]=V54; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,V54,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=160; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,160,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+28; pile[WZ2]=111; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+31,jvj+28,111,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+29; pile[WZ2]=103; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+32,jvj+29,103,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+33; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+26,jvj+33,jvj+18)*/
l18:if(x[jvj+18]==incon) goto l24;
l19:if(x[jvj+18]!=incon) goto l10;
goto l8;
l21:pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; 
(*f[299])( );     /*COPEL0(jvj+34,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+35; pile[WZ2]=107; pile[WZ3]=jvj+38; 
(*f[301])( );     /*TRI11(jvj+37,jvj+35,107,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+38,22,100,jvj+18)*/
goto l19;
l22:pile[v[22]]=jvj+13; pile[WZ1]=jvj+39; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+39)*/
x[jvj+40]=d[119];z[jvj+40]=0;
V78=x[jvj+2];
l23:if((V78<=0)) goto l20;
V73=s[V78];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+41)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V73; pile[WZ4]=jvj+42; 
(*f[192])( );     /*QUADRI4(100,41,130,V73,jvj+42)*/
pile[WZ3]=Q; pile[WZ4]=jvj+43; 
(*f[192])( );     /*QUADRI4(100,41,130,Q,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=160; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,160,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+41; pile[WZ2]=111; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+44,jvj+41,111,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+42; pile[WZ2]=103; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+45,jvj+42,103,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+46; pile[WZ5]=jvj+47; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+39,jvj+46,jvj+47)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+47; pile[WZ2]=jvj+34; 
(*f[196])( );     /*PLUF0(jvj+40,jvj+47,jvj+34)*/
V78=t[V78];
goto l23;
l24:x[jvj+34]=0 ;z[jvj+34]=0;
if(x[jvj+34]!=incon) goto l22;
l20:if(x[jvj+34]!=incon) goto l21;
goto l19;
l25:pile[v[22]]=120; pile[WZ1]=jvj+27; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(120,jvj+27,jvj+25)*/
goto l12;
l28:V97=s[V98];
for(a=x[jvj+48];a>0;a=t[a]) if(s[a]==V97) goto l29;
l26:V62=134;
l16:if((V62==135)) goto l17;
goto l15;
l29:V98=t[V98];
l27:if((V98>0)) goto l28;
V62=135;
goto l16;
l30:for(i=x[jvj+2],V96=0;i>0;i=t[i],V96++)  ;
for(i=x[jvj+48],V95=0;i>0;i=t[i],V95++)  ;
if((V96!=V95)) goto l26;
V98=x[jvj+2];
goto l27;
l33:V66=Q/V54;
V67=0;
l31:if((V67>V66)) goto l14;
V68=V67*V54;
V64=V60+V68;
if((V64>=Q)) goto l32;
pile[v[22]]=jvj+48; pile[WZ1]=V64; 
(*f[207])( );     /*PLUE2(jvj+48,V64)*/
l32:V67++;
goto l31;
}
