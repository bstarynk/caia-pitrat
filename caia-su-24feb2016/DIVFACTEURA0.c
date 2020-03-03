#include "dx.h"
void DIVFACTEURA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V19=0,V33=0,V34=0,V35=0,V36=0,I=0,V45=0;
int D,X,F;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=43;
if(v[0]>99700) (*f[6])( );

D=pile[v[22]]; X=pile[v[22]+1]; F=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=D; pile[WZ1]=jvj+1; 
(*f[1290])( );if(v[102]) goto l14;     /*DEPEXP0(D,jvj+1)*/
pile[v[22]]=X; pile[WZ2]=jvj+8; 
(*f[760])( );     /*MEMEX0(X,jvj+1,jvj+8)*/
if((x[jvj+8]==135)) goto l18;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,X,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]==52)) goto l6;
if((x[jvj+10]==486)) goto l7;
if((x[jvj+10]!=485)) goto l14;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(107,X,jvj+20)*/
for(i=x[jvj+20],V18=0;i>0;i=t[i],V18++)  ;
x[jvj+4]=0 ;z[jvj+4]=0;
l1:if((x[jvj+20]>0)) goto l2;
for(i=x[jvj+4],V19=0;i>0;i=t[i],V19++)  ;
if((V18!=V19)) goto l14;
x[jvj+7]=0 ;z[jvj+7]=0;
l4:if((x[jvj+4]>0)) goto l5;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=111; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,111,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+7; pile[WZ2]=107; pile[WZ3]=jvj+37; 
(*f[301])( );     /*TRI11(jvj+36,jvj+7,107,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+37,22,100,R)*/
l17:v[0]=jvj; v[22]-=4; v[102]=0;return;
l2:x[jvj+2]=s[x[jvj+20]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+20];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+1; pile[WZ2]=67; pile[WZ3]=F; pile[WZ4]=jvj+3; 
(*f[4000])( );if(v[102]) goto l3;     /*DIVFACTEURA1(jvj+2,jvj+1,67,F,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+3)*/
l3:x[jvj+20]=t[x[jvj+20]];
goto l1;
l5:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+6)*/
x[jvj+4]=t[x[jvj+4]];
goto l4;
l6:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,X,jvj+11)*/
pile[v[22]]=844; pile[WZ1]=F; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(844,F,jvj+12)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+1; pile[WZ3]=jvj+13; 
(*f[4001])( );if(v[102]) goto l14;     /*DIVFACTEURA2(jvj+11,jvj+1,jvj+12,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=111; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,111,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+31; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+14,jvj+31,R)*/
goto l17;
l7:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,X,jvj+15)*/
x[jvj+42]=x[jvj+15] ;z[jvj+42]=z[jvj+15];
l21:if((x[jvj+42]>0)) goto l22;
l14:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,X,jvj+25)*/
if((x[jvj+25]!=484)) goto l15;
x[jvj+26]=x[X] ;z[jvj+26]=z[X];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+21; 
(*f[200])( );if(v[102]) goto l15;     /*NDD0(jvj+26,jvj+21)*/
if((x[F]==29)) goto l9;
if((x[F]==27)) goto l10;
if((x[F]==30)) goto l11;
if((x[F]!=28)) goto l15;
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(164,jvj+21,V36)*/
V36=pile[WZ2]; 
if((V36<0)) goto l19;
l15:if(x[F]!=29&&x[F]!=30) goto l16;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,X,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=486)) goto l16;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(107,X,jvj+29)*/
l13:if((x[jvj+29]<=0)) goto l19;
x[jvj+22]=s[x[jvj+29]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+29];
pile[v[22]]=130; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+22,I)*/
I=pile[WZ2]; 
if((I<0)) goto l12;
x[jvj+29]=t[x[jvj+29]];
goto l13;
l9:pile[v[22]]=280; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(280,jvj+21,V33)*/
V33=pile[WZ2]; 
if((V33>=0)) goto l19;
goto l15;
l10:pile[v[22]]=164; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(164,jvj+21,V34)*/
V34=pile[WZ2]; 
if((V34<=0)) goto l19;
goto l15;
l11:pile[v[22]]=280; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(280,jvj+21,V35)*/
V35=pile[WZ2]; 
if((V35>0)) goto l19;
goto l15;
l12:pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+22,jvj+24)*/
if((x[jvj+24]!=484)) goto l16;
if((x[F]!=29)) goto l16;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[200])( );if(v[102]) goto l16;     /*NDD0(jvj+22,jvj+23)*/
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(280,jvj+23,V45)*/
V45=pile[WZ2]; 
l16:v[0]=jvj; v[22]-=4; v[102]=1;return;
l18:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,1,R)*/
goto l17;
l19:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,0,R)*/
goto l17;
l20:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+17; pile[WZ2]=107; pile[WZ3]=jvj+34; 
(*f[301])( );     /*TRI11(jvj+33,jvj+17,107,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+34,22,100,R)*/
goto l17;
l22:x[jvj+38]=s[x[jvj+42]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+42];
pile[v[22]]=jvj+38; pile[WZ1]=jvj+1; pile[WZ2]=jvj+39; 
(*f[760])( );     /*MEMEX0(jvj+38,jvj+1,jvj+39)*/
if((x[jvj+39]==135)) goto l23;
x[jvj+42]=t[x[jvj+42]];
goto l21;
l23:x[jvj+40]=0 ;z[jvj+40]=0;
x[jvj+43]=x[jvj+15] ;z[jvj+43]=z[jvj+15];
l24:if((x[jvj+43]>0)) goto l25;
x[jvj+16]=x[jvj+40] ;z[jvj+16]=z[jvj+40];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[299])( );     /*COPEL0(jvj+16,jvj+17)*/
l8:if((x[jvj+15]<=0)) goto l14;
x[jvj+18]=s[x[jvj+15]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+15];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[760])( );     /*MEMEX0(jvj+1,jvj+18,jvj+19)*/
if((x[jvj+19]==135)) goto l20;
x[jvj+15]=t[x[jvj+15]];
goto l8;
l25:x[jvj+41]=s[x[jvj+43]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+43];
if((x[jvj+41]==x[jvj+38])) goto l26;
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[68])( );     /*PLUE0(jvj+40,jvj+41)*/
l26:x[jvj+43]=t[x[jvj+43]];
goto l24;
}
