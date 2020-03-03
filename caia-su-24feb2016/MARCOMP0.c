#include "dx.h"
void MARCOMP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,M=0,V7=0,V11=0,V15=0,V14=0,V13=0,V18=0,V19=0,V2=0,V60=0,V29=0,V66=0,V32=0,V46=0,V53=0,V21=0,V31=0,V30=0,V61=0,V36=0,V50=0,V57=0,V20=0,V27=0,V28=0,V6=0;
int N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=11168;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1337&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V20=1;
l14:if((V20<=N)) goto l16;
l20:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:V2=incon;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+6,V15)*/
V15=pile[WZ2]; 
V14=M+1;
l4:if((V14>V15)) goto l7;
V13=tt[V14];
if(V13!=926&&V13!=634) goto l5;
V18=ta1[V14];
x[jvj+7]=V18 ;z[jvj+7]=(V18<=sepcte) ? V18 : 0;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[760])( );     /*MEMEX0(jvj+3,jvj+7,jvj+8)*/
if((x[jvj+8]==135)) goto l6;
l5:V14++;
goto l4;
l6:V19=(-M);
V2=V19;
l19:ctw[V20]=V2;
l15:V20++;
goto l14;
l7:V2=M;
goto l19;
l8:if((V32<=sepcte)) goto l10;
x[jvj+12]=V32 ;z[jvj+12]=(V32<=sepcte) ? V32 : 0;
x[jvj+13]=V36 ;z[jvj+13]=(V36<=sepcte) ? V36 : 0;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[760])( );     /*MEMEX0(jvj+12,jvj+13,jvj+14)*/
if((x[jvj+14]==135)) goto l12;
l10:V21++;
l9:if((V21>V66)) goto l18;
V31=tm[V21];
V30=vbl[V31];
if((V29!=V30)) goto l10;
V61=tt[V21];
if((V61==V27)) goto l11;
if(V27!=289&&V27!=44) goto l10;
V60=V61;
if(V60==289||V60==44) goto l11;
goto l10;
l11:V36=ta1[V21];
if((V36==V32)) goto l12;
if((V32<=sepcte)) goto l10;
x[jvj+9]=V32 ;z[jvj+9]=(V32<=sepcte) ? V32 : 0;
x[jvj+10]=V36 ;z[jvj+10]=(V36<=sepcte) ? V36 : 0;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[760])( );     /*MEMEX0(jvj+9,jvj+10,jvj+11)*/
if((x[jvj+11]==135)) goto l8;
goto l10;
l12:V50=ta2[V21];
if((V50==V46)) goto l13;
if((V46<=sepcte)) goto l10;
x[jvj+15]=V46 ;z[jvj+15]=(V46<=sepcte) ? V46 : 0;
x[jvj+16]=V50 ;z[jvj+16]=(V50<=sepcte) ? V50 : 0;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[760])( );     /*MEMEX0(jvj+15,jvj+16,jvj+17)*/
if((x[jvj+17]==135)) goto l13;
goto l10;
l13:V57=ta3[V21];
if((V57==V53)) goto l17;
if((V53<=sepcte)) goto l10;
x[jvj+18]=V53 ;z[jvj+18]=(V53<=sepcte) ? V53 : 0;
x[jvj+19]=V57 ;z[jvj+19]=(V57<=sepcte) ? V57 : 0;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[760])( );     /*MEMEX0(jvj+18,jvj+19,jvj+20)*/
if((x[jvj+20]==135)) goto l17;
goto l10;
l16:V27=ctt[V20];
if(V27!=44&&V27!=289&&V27!=187) goto l18;
V28=ctm[V20];
if((V28<=0)) goto l18;
V29=vbl[V28];
x[jvj+21]=vo[14];z[jvj+21]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(642,jvj+21,V66)*/
V66=pile[WZ2]; 
V32=cta1[V20];
V46=cta2[V20];
V53=cta3[V20];
V21=1;
goto l9;
l17:ctw[V20]=V21;
l18:if((V27!=576)) goto l15;
V6=cta1[V20];
x[jvj+3]=V6 ;z[jvj+3]=(V6<=sepcte) ? V6 : 0;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(642,jvj+2,V8)*/
V8=pile[WZ2]; 
M=1;
l1:if((M>V8)) goto l15;
V7=tt[M];
if((V7!=576)) goto l2;
V11=ta1[M];
x[jvj+4]=V11 ;z[jvj+4]=(V11<=sepcte) ? V11 : 0;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[760])( );     /*MEMEX0(jvj+3,jvj+4,jvj+5)*/
if((x[jvj+5]==135)) goto l3;
l2:M++;
goto l1;
}
