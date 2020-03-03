#include "dx.h"
void SETVAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,S=0,V7=0,V41=0,V42=0,V47=0,V75=0,V74=0,V69=0,V70=0,V64=0,V62=0,V71=0,V43=0,V51=0,V48=0,V52=0,V57=0,V60=0,V61=0,V55=0,V56=0,V50=0,V46=0,V58=0,V65=0,V66=0,V72=0;
int H,N,M;
int EE;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=15;
if(v[0]>99700) (*f[6])( );

H=pile[v[22]]; N=pile[v[22]+1]; M=pile[v[22]+2]; EE=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+12]=0 ;z[jvj+12]=0;
x[jvj+6]=x[jvj+12] ;z[jvj+6]=z[jvj+12];
x[jvj+13]=x[H] ;z[jvj+13]=z[H];
l1:if((x[jvj+13]>0)) goto l2;
x[jvj+15]=x[H] ;z[jvj+15]=z[H];
l6:if((x[jvj+15]>0)) goto l7;
V7=x[jvj+6];
pile[v[22]]=N; pile[WZ1]=V7; pile[WZ2]=EE; 
(*f[4064])( );     /*PRENDRE0(N,V7,EE)*/
v[0]=jvj; v[22]-=4; v[102]=0;return;
l2:x[jvj+1]=s[x[jvj+13]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+13];
pile[v[22]]=365; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(365,jvj+1,jvj+2)*/
x[jvj+14]=x[jvj+2] ;z[jvj+14]=z[jvj+2];
l3:if((x[jvj+14]>0)) goto l4;
x[jvj+13]=t[x[jvj+13]];
goto l1;
l4:x[jvj+3]=s[x[jvj+14]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+14];
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+3,V2)*/
V2=pile[WZ2]; 
S=V2;
V41=26;
V42=0;
if((x[jvj+6]==V42)) goto l11;
if((x[M]==280)) goto l16;
if((x[M]!=164)) goto l5;
V47=x[jvj+6];
V75=N;
V74=V47;
l9:V69=V75-1;
V70=s[V74];
V64=V69;
V62=V70;
if((V41!=25)) goto l10;
if((V62==S)) goto l19;
l10:if((V62<S)) goto l19;
V71=t[V74];
if((V71==0)) goto l20;
if((V64<=0)) goto l5;
if((V71<=0)) goto l5;
if((V62<=S)) goto l5;
V74=V71;
V75=V64;
goto l9;
l7:x[jvj+4]=s[x[jvj+15]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+15];
pile[v[22]]=365; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(365,jvj+4,jvj+5)*/
if((x[jvj+5]==0)) goto l8;
x[jvj+15]=t[x[jvj+15]];
goto l6;
l8:v[0]=jvj; v[22]-=4; v[102]=1;return;
l11:V43=(-41);
pile[v[22]]=S; pile[WZ1]=V43; pile[WZ2]=jvj+7; 
(*f[213])( );     /*TRI7(S,V43,jvj+7)*/
x[jvj+6]=x[jvj+7];z[jvj+6]=0;
l5:x[jvj+14]=t[x[jvj+14]];
goto l3;
l13:if((V50<=0)) goto l12;
V51=(-41);
V52=t[V60];
pile[v[22]]=V48; pile[WZ1]=V51; pile[WZ2]=V52; pile[WZ3]=jvj+8; 
(*f[1128])( );     /*TRI21(V48,V51,V52,jvj+8)*/
t[V60]=x[jvj+8];
l12:s[V60]=S;
goto l5;
l16:V46=x[jvj+6];
V61=N;
V60=V46;
l15:V55=V61-1;
V56=s[V60];
V50=V55;
V48=V56;
if((V41!=25)) goto l14;
if((V48==S)) goto l13;
l14:if((V48>S)) goto l13;
V57=t[V60];
if((V57==0)) goto l17;
if((V50<=0)) goto l5;
if((V57<=0)) goto l5;
if((V48>=S)) goto l5;
V60=V57;
V61=V50;
goto l15;
l17:if((V50<=0)) goto l5;
if((V48>=S)) goto l5;
V58=(-41);
pile[v[22]]=S; pile[WZ1]=V58; pile[WZ2]=V57; pile[WZ3]=jvj+9; 
(*f[1128])( );     /*TRI21(S,V58,V57,jvj+9)*/
t[V60]=x[jvj+9];
goto l5;
l19:if((V64<=0)) goto l18;
V65=(-41);
V66=t[V74];
pile[v[22]]=V62; pile[WZ1]=V65; pile[WZ2]=V66; pile[WZ3]=jvj+10; 
(*f[1128])( );     /*TRI21(V62,V65,V66,jvj+10)*/
t[V74]=x[jvj+10];
l18:s[V74]=S;
goto l5;
l20:if((V64<=0)) goto l5;
if((V62<=S)) goto l5;
V72=(-41);
pile[v[22]]=S; pile[WZ1]=V72; pile[WZ2]=V71; pile[WZ3]=jvj+11; 
(*f[1128])( );     /*TRI21(S,V72,V71,jvj+11)*/
t[V74]=x[jvj+11];
goto l5;
}
