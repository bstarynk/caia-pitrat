#include "dx.h"
void DESCEND0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V5=0,NM=0,K=0,V13=0,V11=0,V10=0,V23=0,V25=0,V59=0,V27=0,V26=0,V61=0,V63=0,V57=0,V30=0,V44=0,V46=0,V45=0,V62=0,V70=0,V71=0,V72=0,V73=0,V1=0,V6=0,V78=0;
int L,I;
int M;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=33;
x[jvj+1]=10825;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==367&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; I=pile[v[22]+1]; M=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V4=bh[v[1]][I];
if((V4==66)) goto l2;
if((V4<48)) goto l19;
if((V4>57)) goto l19;
V1=135;
l1:if((V1==135)) goto l20;
NM=1;
K=I;
l6:V13=bh[v[1]][K];
pile[v[22]]=187; pile[WZ1]=240; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(187,240,jvj+32)*/
l22:if((x[jvj+32]>0)) goto l23;
if((V13!=32)) goto l12;
V11=K+1;
V10=bh[v[1]][V11];
if((V10==32)) goto l5;
pile[v[22]]=K; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+3; 
(*f[78])( );if(v[102]) goto l12;     /*SMA0(K,64,67,jvj+3)*/
l9:if((x[jvj+28]=w[x[jvj+3]][1])==incon) goto l16;
if((x[jvj+28]!=20)) goto l10;
pile[v[22]]=274; pile[WZ1]=L; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(274,L,jvj+8)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+3,jvj+8,jvj+9)*/
x[jvj+4]=incon;
V23=x[jvj+9];
if((V23<=sepcte)) goto l8;
pile[v[22]]=109; pile[WZ1]=L; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(109,L,jvj+4)*/
l18:pile[v[22]]=L; pile[WZ1]=374; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(L,374,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+3; pile[WZ2]=358; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+24,jvj+3,358,jvj+25)*/
pile[v[22]]=109; pile[WZ1]=jvj+4; pile[WZ2]=274; pile[WZ3]=jvj+9; pile[WZ4]=jvj+25; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(109,jvj+4,274,jvj+9,jvj+25,jvj+5)*/
l13:V44=bh[v[1]][K];
if((V44==32)) goto l14;
V46=K+1;
V45=bh[v[1]][V46];
if((V45==32)) goto l14;
pile[v[22]]=jvj+5; pile[WZ1]=V46; pile[WZ2]=M; 
(*f[367])( );if(v[102]) goto l14;     /*DESCEND0(jvj+5,V46,M)*/
l15:pile[v[22]]=274; pile[WZ1]=L; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(274,L,jvj+22)*/
pile[WZ1]=M; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(274,M,jvj+23)*/
if((x[jvj+22]!=x[jvj+23])) goto l17;
pile[v[22]]=0; pile[WZ1]=(-5184); 
(*f[37])( );     /*SRA0(0,(-5184),V62)*/
V62=pile[WZ2]; 
pile[v[22]]=V62; 
(*f[40])( );     /*SLG0(V62)*/
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:V5=I+1;
NM=1000;
K=V5;
goto l6;
l4:pile[v[22]]=I; 
(*f[126])( );     /*LND2(I,NM,K)*/
NM=pile[WZ1]; K=pile[WZ2]; 
goto l6;
l5:pile[v[22]]=358; pile[WZ1]=L; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(358,L,jvj+2)*/
l12:pile[v[22]]=109; pile[WZ1]=L; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(109,L,jvj+18)*/
pile[v[22]]=358; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(358,L,jvj+19)*/
if((x[jvj+20]=w[x[jvj+19]][2])==incon) goto l16;
pile[v[22]]=210; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(210,jvj+20,jvj+21)*/
pile[v[22]]=NM; pile[WZ1]=L; pile[WZ3]=jvj+18; pile[WZ4]=jvj+5; 
(*f[730])( );     /*DEGRINGOLE0(NM,L,jvj+21,jvj+18,jvj+5)*/
goto l13;
l7:x[jvj+3]=184 ;z[jvj+3]=184;
goto l9;
l8:x[jvj+4]=x[jvj+9] ;z[jvj+4]=z[jvj+9];
goto l18;
l10:if(x[jvj+28]!=89&&x[jvj+28]!=41&&x[jvj+28]!=96&&x[jvj+28]!=1317) goto l11;
pile[v[22]]=274; pile[WZ1]=L; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(274,L,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+3; pile[WZ3]=jvj+11; 
(*f[45])( );if(v[102]) goto l11;     /*FNDZ0(jvj+10,jvj+3,V63,jvj+11)*/
V63=pile[WZ2]; 
pile[v[22]]=109; pile[WZ1]=L; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(109,L,jvj+12)*/
if((x[jvj+30]=w[x[jvj+28]][3])==incon) goto l11;
x[jvj+29]=V63 ;z[jvj+29]=(x[jvj+11]==20&&V63<=sepcte) ? V63 : (x[jvj+11]==41) ? (-1000) : 0;
pile[v[22]]=L; pile[WZ1]=374; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(L,374,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+3; pile[WZ2]=358; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+26,jvj+3,358,jvj+27)*/
pile[v[22]]=109; pile[WZ1]=jvj+12; pile[WZ2]=158; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(109,jvj+12,158,jvj+28,jvj+27,jvj+5)*/
V70=x[jvj+29];
V71=z[jvj+29];
pile[v[22]]=jvj+5; pile[WZ1]=V70; pile[WZ2]=jvj+30; pile[WZ3]=V71; 
(*f[49])( );     /*CHP0(jvj+5,V70,jvj+30,V71)*/
goto l13;
l11:if((x[jvj+28]!=23)) goto l16;
pile[v[22]]=274; pile[WZ1]=L; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(274,L,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+3; pile[WZ3]=jvj+14; 
(*f[45])( );if(v[102]) goto l16;     /*FNDZ0(jvj+13,jvj+3,V57,jvj+14)*/
V57=pile[WZ2]; 
pile[v[22]]=109; pile[WZ1]=L; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(109,L,jvj+15)*/
if((x[jvj+16]=w[x[jvj+3]][2])==incon) goto l16;
pile[v[22]]=210; pile[WZ1]=jvj+16; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(210,jvj+16,jvj+6)*/
V30=NM-1;
x[jvj+31]=V57 ;z[jvj+31]=(x[jvj+14]==20&&V57<=sepcte) ? V57 : (x[jvj+14]==41) ? (-1000) : 0;
pile[v[22]]=358; pile[WZ1]=jvj+3; pile[WZ2]=374; pile[WZ3]=L; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(358,jvj+3,374,L,jvj+17)*/
V72=x[jvj+31];
V73=z[jvj+31];
pile[v[22]]=jvj+17; pile[WZ1]=V72; pile[WZ2]=jvj+6; pile[WZ3]=V73; 
(*f[49])( );     /*CHP0(jvj+17,V72,jvj+6,V73)*/
pile[v[22]]=V30; pile[WZ1]=jvj+17; pile[WZ3]=jvj+15; pile[WZ4]=jvj+5; 
(*f[730])( );     /*DEGRINGOLE0(V30,jvj+17,jvj+6,jvj+15,jvj+5)*/
V25=bh[v[1]][I];
if((V25!=66)) goto l13;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ3]=jvj+7; 
(*f[45])( );if(v[102]) goto l13;     /*FNDZ0(jvj+5,jvj+6,V59,jvj+7)*/
V59=pile[WZ2]; 
V27=V59;
V26=t[V27];
if((V26<=0)) goto l13;
pile[v[22]]=0; pile[WZ1]=(-5027); 
(*f[37])( );     /*SRA0(0,(-5027),V61)*/
V61=pile[WZ2]; 
pile[v[22]]=V61; 
(*f[40])( );     /*SLG0(V61)*/
goto l13;
l14:x[M]=x[jvj+5] ;z[M]=z[jvj+5];
goto l15;
l19:V1=134;
goto l1;
l20:if((V4<48)) goto l21;
if((V4>57)) goto l21;
V6=135;
l3:if((V6==135)) goto l4;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l21:V6=134;
goto l3;
l23:x[jvj+33]=s[x[jvj+32]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+32];
pile[v[22]]=331; pile[WZ1]=jvj+33; 
(*f[219])( );if(v[102]) goto l24;     /*FNDC2(331,jvj+33,V78)*/
V78=pile[WZ2]; 
if((V78!=V13)) goto l24;
x[jvj+3]=x[jvj+33] ;z[jvj+3]=z[jvj+33];
goto l9;
l24:x[jvj+32]=t[x[jvj+32]];
goto l22;
}
