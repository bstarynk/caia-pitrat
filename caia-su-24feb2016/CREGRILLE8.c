#include "dx.h"
void CREGRILLE8(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int S=0,V2=0,SS=0,V3=0,T=0,V4=0,TT=0,V5=0,V6=0,K=0,V7=0,V8=0,KK=0,V9=0,V10=0,L=0,V11=0,V12=0,LL=0,V13=0,I=0,V15=0;
int NH,NV,A;
int NNNE;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=26127;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2520&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NH=pile[v[22]]; NV=pile[v[22]+1]; A=pile[v[22]+2]; NNNE=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V15=x[A];
l18:if((V15>0)) goto l19;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l2:S++;
l1:if((S>NH)) goto l20;
pile[v[22]]=S; pile[WZ1]=(-7730); 
(*f[3979])( );if(v[102]) goto l2;     /*LONGUEUR0(S,(-7730),V2)*/
V2=pile[WZ2]; 
SS=1;
l3:if((SS>V2)) goto l2;
pile[v[22]]=SS; pile[WZ1]=S; pile[WZ2]=(-7730); 
(*f[203])( );if(v[102]) goto l4;     /*FTAB0(SS,S,(-7730),V3)*/
V3=pile[WZ3]; 
if((V3!=I)) goto l4;
pile[v[22]]=S; pile[WZ1]=(-7730); 
(*f[3979])( );if(v[102]) goto l6;     /*LONGUEUR0(S,(-7730),V6)*/
V6=pile[WZ2]; 
K=1;
l10:if((K>V6)) goto l6;
pile[v[22]]=K; pile[WZ1]=S; pile[WZ2]=(-7730); 
(*f[203])( );if(v[102]) goto l11;     /*FTAB0(K,S,(-7730),V7)*/
V7=pile[WZ3]; 
if((V7<=I)) goto l11;
pile[v[22]]=S; pile[WZ1]=(-7730); 
(*f[3979])( );if(v[102]) goto l6;     /*LONGUEUR0(S,(-7730),V8)*/
V8=pile[WZ2]; 
KK=1;
l12:if((KK>V8)) goto l6;
pile[v[22]]=KK; pile[WZ1]=S; pile[WZ2]=(-7730); 
(*f[203])( );if(v[102]) goto l13;     /*FTAB0(KK,S,(-7730),V9)*/
V9=pile[WZ3]; 
if((V9<I)) goto l20;
l13:KK++;
goto l12;
l4:SS++;
goto l3;
l6:T=1;
l5:if((T>NV)) goto l20;
pile[v[22]]=T; pile[WZ1]=(-7732); 
(*f[3979])( );if(v[102]) goto l7;     /*LONGUEUR0(T,(-7732),V4)*/
V4=pile[WZ2]; 
TT=1;
l8:if((TT>V4)) goto l7;
pile[v[22]]=TT; pile[WZ1]=T; pile[WZ2]=(-7732); 
(*f[203])( );if(v[102]) goto l9;     /*FTAB0(TT,T,(-7732),V5)*/
V5=pile[WZ3]; 
if((V5!=I)) goto l9;
pile[v[22]]=T; pile[WZ1]=(-7732); 
(*f[3979])( );if(v[102]) goto l22;     /*LONGUEUR0(T,(-7732),V10)*/
V10=pile[WZ2]; 
L=1;
l14:if((L>V10)) goto l22;
pile[v[22]]=L; pile[WZ1]=T; pile[WZ2]=(-7732); 
(*f[203])( );if(v[102]) goto l15;     /*FTAB0(L,T,(-7732),V11)*/
V11=pile[WZ3]; 
if((V11<=I)) goto l15;
pile[v[22]]=T; pile[WZ1]=(-7732); 
(*f[3979])( );if(v[102]) goto l22;     /*LONGUEUR0(T,(-7732),V12)*/
V12=pile[WZ2]; 
LL=1;
l16:if((LL>V12)) goto l22;
pile[v[22]]=LL; pile[WZ1]=T; pile[WZ2]=(-7732); 
(*f[203])( );if(v[102]) goto l17;     /*FTAB0(LL,T,(-7732),V13)*/
V13=pile[WZ3]; 
if((V13<I)) goto l20;
l17:LL++;
goto l16;
l7:T++;
goto l5;
l9:TT++;
goto l8;
l11:K++;
goto l10;
l15:L++;
goto l14;
l19:I=s[V15];
S=1;
goto l1;
l22:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l20:V15=t[V15];
goto l18;
}
