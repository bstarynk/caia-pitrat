#include "dx.h"
void DIVFACTEURA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V19=0,V33=0,V34=0,V35=0,V36=0,I=0,V45=0;
int X,Y,S,F;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=42;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; Y=pile[v[22]+1]; S=pile[v[22]+2]; F=pile[v[22]+3]; R=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=X; pile[WZ1]=Y; pile[WZ2]=jvj+7; 
(*f[760])( );     /*MEMEX0(X,Y,jvj+7)*/
if((x[jvj+7]==135)) goto l18;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,X,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]==52)) goto l6;
if((x[jvj+9]!=486)) goto l8;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(107,X,jvj+14)*/
x[jvj+41]=x[jvj+14] ;z[jvj+41]=z[jvj+14];
l21:if((x[jvj+41]>0)) goto l22;
l8:if((x[S]!=68)) goto l14;
if((x[jvj+9]!=485)) goto l14;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,X,jvj+19)*/
for(i=x[jvj+19],V18=0;i>0;i=t[i],V18++)  ;
x[jvj+3]=0 ;z[jvj+3]=0;
l1:if((x[jvj+19]>0)) goto l2;
for(i=x[jvj+3],V19=0;i>0;i=t[i],V19++)  ;
if((V18!=V19)) goto l14;
x[jvj+6]=0 ;z[jvj+6]=0;
l4:if((x[jvj+3]>0)) goto l5;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+6; pile[WZ2]=107; pile[WZ3]=jvj+36; 
(*f[301])( );     /*TRI11(jvj+35,jvj+6,107,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+36,22,100,R)*/
l17:v[0]=jvj; v[22]-=5; v[102]=0;return;
l2:x[jvj+1]=s[x[jvj+19]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+19];
pile[v[22]]=jvj+1; pile[WZ1]=Y; pile[WZ2]=67; pile[WZ3]=F; pile[WZ4]=jvj+2; 
(*f[4000])( );if(v[102]) goto l3;     /*DIVFACTEURA1(jvj+1,Y,67,F,jvj+2)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+2)*/
l3:x[jvj+19]=t[x[jvj+19]];
goto l1;
l5:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+5)*/
x[jvj+3]=t[x[jvj+3]];
goto l4;
l6:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,X,jvj+10)*/
pile[v[22]]=844; pile[WZ1]=F; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(844,F,jvj+11)*/
pile[v[22]]=jvj+10; pile[WZ1]=Y; pile[WZ3]=jvj+12; 
(*f[4001])( );if(v[102]) goto l8;     /*DIVFACTEURA2(jvj+10,Y,jvj+11,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+30; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+30,R)*/
goto l17;
l9:pile[v[22]]=280; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(280,jvj+20,V33)*/
V33=pile[WZ2]; 
if((V33>=0)) goto l19;
l15:if(x[F]!=29&&x[F]!=30) goto l16;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,X,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]!=486)) goto l16;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(107,X,jvj+28)*/
l13:if((x[jvj+28]<=0)) goto l19;
x[jvj+21]=s[x[jvj+28]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+28];
pile[v[22]]=130; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+21,I)*/
I=pile[WZ2]; 
if((I<0)) goto l12;
x[jvj+28]=t[x[jvj+28]];
goto l13;
l10:pile[v[22]]=164; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(164,jvj+20,V34)*/
V34=pile[WZ2]; 
if((V34<=0)) goto l19;
goto l15;
l11:pile[v[22]]=280; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(280,jvj+20,V35)*/
V35=pile[WZ2]; 
if((V35>0)) goto l19;
goto l15;
l12:pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+21,jvj+23)*/
if((x[jvj+23]!=484)) goto l16;
if((x[F]!=29)) goto l16;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[200])( );if(v[102]) goto l16;     /*NDD0(jvj+21,jvj+22)*/
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(280,jvj+22,V45)*/
V45=pile[WZ2]; 
l16:v[0]=jvj; v[22]-=5; v[102]=1;return;
l14:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,X,jvj+24)*/
if((x[jvj+24]!=484)) goto l15;
x[jvj+25]=x[X] ;z[jvj+25]=z[X];
pile[v[22]]=jvj+25; pile[WZ1]=jvj+20; 
(*f[200])( );if(v[102]) goto l15;     /*NDD0(jvj+25,jvj+20)*/
if((x[F]==29)) goto l9;
if((x[F]==27)) goto l10;
if((x[F]==30)) goto l11;
if((x[F]!=28)) goto l15;
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(164,jvj+20,V36)*/
V36=pile[WZ2]; 
if((V36<0)) goto l19;
goto l15;
l18:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,1,R)*/
goto l17;
l19:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,0,R)*/
goto l17;
l20:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=111; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,111,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+16; pile[WZ2]=107; pile[WZ3]=jvj+33; 
(*f[301])( );     /*TRI11(jvj+32,jvj+16,107,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+33,22,100,R)*/
goto l17;
l22:x[jvj+37]=s[x[jvj+41]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+41];
pile[v[22]]=jvj+37; pile[WZ1]=Y; pile[WZ2]=jvj+38; 
(*f[760])( );     /*MEMEX0(jvj+37,Y,jvj+38)*/
if((x[jvj+38]==135)) goto l23;
x[jvj+41]=t[x[jvj+41]];
goto l21;
l23:x[jvj+39]=0 ;z[jvj+39]=0;
x[jvj+42]=x[jvj+14] ;z[jvj+42]=z[jvj+14];
l24:if((x[jvj+42]>0)) goto l25;
x[jvj+15]=x[jvj+39] ;z[jvj+15]=z[jvj+39];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[299])( );     /*COPEL0(jvj+15,jvj+16)*/
l7:if((x[jvj+14]<=0)) goto l8;
x[jvj+17]=s[x[jvj+14]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+14];
pile[v[22]]=Y; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[760])( );     /*MEMEX0(Y,jvj+17,jvj+18)*/
if((x[jvj+18]==135)) goto l20;
x[jvj+14]=t[x[jvj+14]];
goto l7;
l25:x[jvj+40]=s[x[jvj+42]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+42];
if((x[jvj+40]==x[jvj+37])) goto l26;
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; 
(*f[68])( );     /*PLUE0(jvj+39,jvj+40)*/
l26:x[jvj+42]=t[x[jvj+42]];
goto l24;
}
