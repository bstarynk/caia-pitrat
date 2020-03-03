#include "dx.h"
void ATOME99T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V52=0,V3=0,V62=0,V31=0,V54=0,V6=0,V65=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=46;
x[jvj+1]=20099;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3607&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,R,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=25)) goto l22;
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=R; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(R,jvj+7)*/
l1:if((x[jvj+7]>0)) goto l2;
x[jvj+13]=d[20];z[jvj+13]=0;
l7:if((x[jvj+13]<=0)) goto l22;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=jvj+14; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+14,R,jvj+15)*/
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+15,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=486)) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+15; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+15,jvj+18)*/
for(i=x[jvj+18],V14=0;i>0;i=t[i],V14++)  ;
if((V14!=2)) goto l8;
pile[v[22]]=268; pile[WZ1]=jvj+14; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+14,jvj+19)*/
pile[v[22]]=R; pile[WZ1]=jvj+19; pile[WZ3]=jvj+20; 
(*f[45])( );if(v[102]) goto l8;     /*FNDZ0(R,jvj+19,V52,jvj+20)*/
V52=pile[WZ2]; 
x[jvj+21]=d[20];z[jvj+21]=0;
l9:if((x[jvj+21]<=0)) goto l8;
x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=268; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(268,jvj+22,jvj+23)*/
x[jvj+45]=x[jvj+18] ;z[jvj+45]=z[jvj+18];
l11:if((x[jvj+45]<=0)) goto l10;
x[jvj+42]=s[x[jvj+45]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+45];
x[jvj+32]=x[jvj+42] ;z[jvj+32]=z[jvj+42];
V62=x[jvj+18];
l12:if((V62>0)) goto l13;
x[jvj+45]=t[x[jvj+45]];
goto l11;
l2:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=509; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[1969])( );     /*FNDEND0(509,jvj+8,jvj+9)*/
x[jvj+41]=x[jvj+9] ;z[jvj+41]=z[jvj+9];
l3:if((x[jvj+41]>0)) goto l4;
x[jvj+7]=t[x[jvj+7]];
goto l1;
l4:x[jvj+3]=s[x[jvj+41]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+41];
if((x[jvj+3]==x[R])) goto l5;
pile[v[22]]=1417; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1417,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==298) goto l6;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1545,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==298) goto l6;
l5:x[jvj+41]=t[x[jvj+41]];
goto l3;
l6:pile[v[22]]=jvj+10; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+3)*/
goto l5;
l8:x[jvj+13]=t[x[jvj+13]];
goto l7;
l10:x[jvj+21]=t[x[jvj+21]];
goto l9;
l13:V3=s[V62];
if((x[jvj+42]==V3)) goto l14;
x[jvj+43]=x[jvj+10] ;z[jvj+43]=z[jvj+10];
l15:if((x[jvj+43]<=0)) goto l14;
x[jvj+24]=s[x[jvj+43]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+43];
if((x[R]==x[jvj+24])) goto l16;
pile[v[22]]=111; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+24,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+25,jvj+26)*/
if((x[jvj+26]!=25)) goto l16;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+24; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+22,jvj+24,jvj+27)*/
pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+27,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=486)) goto l16;
pile[v[22]]=107; pile[WZ1]=jvj+27; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(107,jvj+27,jvj+30)*/
for(i=x[jvj+30],V31=0;i>0;i=t[i],V31++)  ;
if((V31!=2)) goto l16;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+23; pile[WZ3]=jvj+31; 
(*f[45])( );if(v[102]) goto l16;     /*FNDZ0(jvj+24,jvj+23,V54,jvj+31)*/
V54=pile[WZ2]; 
x[jvj+46]=x[jvj+30] ;z[jvj+46]=z[jvj+30];
l17:if((x[jvj+46]<=0)) goto l16;
x[jvj+44]=s[x[jvj+46]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+46];
x[jvj+33]=x[jvj+44] ;z[jvj+33]=z[jvj+44];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[760])( );     /*MEMEX0(jvj+32,jvj+33,jvj+34)*/
if((x[jvj+34]==135)) goto l20;
l18:x[jvj+46]=t[x[jvj+46]];
goto l17;
l14:V62=t[V62];
goto l12;
l16:x[jvj+43]=t[x[jvj+43]];
goto l15;
l20:V65=x[jvj+30];
l19:if((V65<=0)) goto l18;
V6=s[V65];
if((x[jvj+44]==V6)) goto l21;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+39)*/
pile[WZ1]=jvj+24; pile[WZ3]=(-631); pile[WZ4]=jvj+40; 
(*f[270])( );     /*QUADRI7(101,jvj+24,110,(-631),jvj+40)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(206,715,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+37; 
(*f[189])( );     /*TRI4(jvj+36,v[13],642,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=3606; pile[WZ2]=246; pile[WZ3]=jvj+38; 
(*f[189])( );     /*TRI4(jvj+37,3606,246,jvj+38)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20099; pile[WZ4]=jvj+38; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(158,289,218,20099,jvj+38,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=159; pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+35,159,jvj+39)*/
pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+35,159,jvj+40)*/
(*f[481])( );     /*STOCKER0(jvj+35)*/
l21:V65=t[V65];
goto l19;
l22:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
