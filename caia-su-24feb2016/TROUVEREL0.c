#include "dx.h"
void TROUVEREL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int F=0,V15=0,FF=0,V31=0,V36=0,V53=0,V38=0,V69=0;
int VV,BL;
int E;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=45;
x[jvj+1]=11484;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1117&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
VV=pile[v[22]]; BL=pile[v[22]+1]; E=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+44]=0 ;z[jvj+44]=0;
x[E]=x[jvj+44] ;z[E]=z[jvj+44];
pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(184,BL,jvj+2)*/
if((x[jvj+2]<=0)) goto l6;
x[jvj+45]=s[x[jvj+2]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+2];
x[jvj+24]=x[jvj+45] ;z[jvj+24]=z[jvj+45];
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=42)) goto l6;
pile[v[22]]=107; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(107,jvj+24,jvj+26)*/
x[jvj+27]=d[76];z[jvj+27]=0;
l4:if((x[jvj+26]<=0)) goto l6;
x[jvj+3]=s[x[jvj+26]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+26];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+3,jvj+28)*/
pile[v[22]]=100; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+3,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+28,jvj+30)*/
pile[v[22]]=100; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+28,jvj+31)*/
if((x[jvj+29]!=22)) goto l5;
if((x[jvj+31]!=20)) goto l5;
F=x[jvj+30];
if(F!=25&&F!=26&&F!=29&&F!=30&&F!=27&&F!=28) goto l1;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+3,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=43)) goto l1;
pile[v[22]]=103; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,jvj+4,jvj+6)*/
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,jvj+6,V15)*/
V15=pile[WZ2]; 
if((VV!=V15)) goto l1;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+4,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]==280)) goto l7;
l1:FF=x[jvj+30];
if(FF!=25&&FF!=26&&FF!=29&&FF!=30&&FF!=27&&FF!=28) goto l2;
pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+3,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=43)) goto l2;
pile[v[22]]=103; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+9,jvj+11)*/
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+11,V31)*/
V31=pile[WZ2]; 
if((VV!=V31)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+9,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]==280)) goto l7;
l2:V36=x[jvj+30];
if(V36!=25&&V36!=26&&V36!=29&&V36!=30&&V36!=27&&V36!=28) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+3,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=43)) goto l3;
pile[v[22]]=103; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+14,jvj+16)*/
pile[v[22]]=140; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+16,V53)*/
V53=pile[WZ2]; 
if((VV!=V53)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+14,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]==164)) goto l8;
l3:V38=x[jvj+30];
if(V38!=25&&V38!=26&&V38!=29&&V38!=30&&V38!=27&&V38!=28) goto l5;
pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+3,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=43)) goto l5;
pile[v[22]]=103; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+19,jvj+21)*/
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+21,V69)*/
V69=pile[WZ2]; 
if((VV!=V69)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+19,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]==164)) goto l8;
l5:x[jvj+26]=t[x[jvj+26]];
goto l4;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l7:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=8; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,8,jvj+34)*/
pile[WZ3]=280; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,280,jvj+38)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-9980); pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9980),jvj+36)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; pile[WZ2]=103; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+35,jvj+36,103,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+37; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+38,jvj+37,jvj+32)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+32; pile[WZ2]=E; 
(*f[196])( );     /*PLUF0(jvj+27,jvj+32,E)*/
goto l2;
l8:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=8; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,8,jvj+39)*/
pile[WZ3]=164; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,164,jvj+43)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-9980); pile[WZ4]=jvj+41; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9980),jvj+41)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; pile[WZ2]=103; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+40,jvj+41,103,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+43; pile[WZ4]=jvj+42; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+43,jvj+42,jvj+33)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+33; pile[WZ2]=E; 
(*f[196])( );     /*PLUF0(jvj+27,jvj+33,E)*/
goto l5;
}
