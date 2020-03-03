#include "dx.h"
void ENSCOEFF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int J=0,V16=0,V7=0,V10=0,KK=0,V5=0,V41=0,V42=0,V43=0,V48=0,V76=0,V75=0,V70=0,V71=0,V65=0,V63=0,V72=0,V44=0,V52=0,V49=0,V53=0,V58=0,V61=0,V62=0,V56=0,V57=0,V51=0,V47=0,V59=0,V66=0,V67=0,V73=0;
int E,H,N;
int G;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=17;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; H=pile[v[22]+1]; N=pile[v[22]+2]; G=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+14]=0 ;z[jvj+14]=0;
x[G]=x[jvj+14] ;z[G]=z[jvj+14];
x[jvj+17]=x[E] ;z[jvj+17]=z[E];
l9:if((x[jvj+17]>0)) goto l10;
v[0]=jvj; v[22]-=4; return;
l2:J=s[V16];
for(a=x[H];a>0;a=t[a]) if(s[a]==J) goto l3;
l11:x[jvj+17]=t[x[jvj+17]];
goto l9;
l3:V16=t[V16];
l1:if((V16>0)) goto l2;
V5=incon;
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+1,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=486)) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+5)*/
for(i=x[jvj+5],V7=0;i>0;i=t[i],V7++)  ;
if((V7!=2)) goto l8;
x[jvj+15]=x[jvj+5] ;z[jvj+15]=z[jvj+5];
l4:if((x[jvj+15]<=0)) goto l8;
x[jvj+6]=s[x[jvj+15]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+15];
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+6,V10)*/
V10=pile[WZ2]; 
KK=V10;
x[jvj+16]=x[jvj+5] ;z[jvj+16]=z[jvj+5];
l6:if((x[jvj+16]<=0)) goto l5;
x[jvj+7]=s[x[jvj+16]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+16];
if((x[jvj+6]==x[jvj+7])) goto l7;
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=484)) goto l7;
V5=KK;
l12:V41=164;
V42=25;
V43=0;
if((x[G]==V43)) goto l15;
if((V41==280)) goto l20;
if((V41!=164)) goto l11;
V48=x[G];
V76=N;
V75=V48;
l13:V70=V76-1;
V71=s[V75];
V65=V70;
V63=V71;
if((V42!=25)) goto l14;
if((V63==V5)) goto l23;
l14:if((V63<V5)) goto l23;
V72=t[V75];
if((V72==0)) goto l24;
if((V65<=0)) goto l11;
if((V72<=0)) goto l11;
if((V63<=V5)) goto l11;
V75=V72;
V76=V65;
goto l13;
l5:x[jvj+15]=t[x[jvj+15]];
goto l4;
l7:x[jvj+16]=t[x[jvj+16]];
goto l6;
l8:V5=1;
goto l12;
l10:x[jvj+1]=s[x[jvj+17]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+17];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(jvj+1,jvj+2)*/
V16=x[jvj+2];
goto l1;
l15:V44=(-41);
pile[v[22]]=V5; pile[WZ1]=V44; pile[WZ2]=jvj+9; 
(*f[213])( );     /*TRI7(V5,V44,jvj+9)*/
x[G]=x[jvj+9];z[G]=0;
goto l11;
l17:if((V51<=0)) goto l16;
V52=(-41);
V53=t[V61];
pile[v[22]]=V49; pile[WZ1]=V52; pile[WZ2]=V53; pile[WZ3]=jvj+10; 
(*f[1128])( );     /*TRI21(V49,V52,V53,jvj+10)*/
t[V61]=x[jvj+10];
l16:s[V61]=V5;
goto l11;
l20:V47=x[G];
V62=N;
V61=V47;
l19:V56=V62-1;
V57=s[V61];
V51=V56;
V49=V57;
if((V42!=25)) goto l18;
if((V49==V5)) goto l17;
l18:if((V49>V5)) goto l17;
V58=t[V61];
if((V58==0)) goto l21;
if((V51<=0)) goto l11;
if((V58<=0)) goto l11;
if((V49>=V5)) goto l11;
V61=V58;
V62=V51;
goto l19;
l21:if((V51<=0)) goto l11;
if((V49>=V5)) goto l11;
V59=(-41);
pile[v[22]]=V5; pile[WZ1]=V59; pile[WZ2]=V58; pile[WZ3]=jvj+11; 
(*f[1128])( );     /*TRI21(V5,V59,V58,jvj+11)*/
t[V61]=x[jvj+11];
goto l11;
l23:if((V65<=0)) goto l22;
V66=(-41);
V67=t[V75];
pile[v[22]]=V63; pile[WZ1]=V66; pile[WZ2]=V67; pile[WZ3]=jvj+12; 
(*f[1128])( );     /*TRI21(V63,V66,V67,jvj+12)*/
t[V75]=x[jvj+12];
l22:s[V75]=V5;
goto l11;
l24:if((V65<=0)) goto l11;
if((V63<=V5)) goto l11;
V73=(-41);
pile[v[22]]=V5; pile[WZ1]=V73; pile[WZ2]=V72; pile[WZ3]=jvj+13; 
(*f[1128])( );     /*TRI21(V5,V73,V72,jvj+13)*/
t[V75]=x[jvj+13];
goto l11;
}
