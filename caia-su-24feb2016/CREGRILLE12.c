#include "dx.h"
void CREGRILLE12(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int XX=0,V5=0,V33=0,V3=0,V32=0,X=0,V1=0,YY=0,V11=0,V37=0,V9=0,Y=0,V38=0,V7=0,V35=0,R=0,PP=0,V15=0,V39=0,V18=0,V40=0,V16=0,P=0,V12=0,Z=0,V19=0,QQ=0,V25=0,V45=0,V23=0,Q=0,V46=0,V21=0,V42=0,V43=0,RR=0,TT=0,V29=0,V47=0,V27=0,T=0,V26=0,ZZ=0,V30=0,V6=0;
int I,J,NT,NO,NH,NV,A;
int NNNX;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=26127;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2524&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; J=pile[v[22]+1]; NT=pile[v[22]+2]; NO=pile[v[22]+3]; NH=pile[v[22]+4]; NV=pile[v[22]+5]; A=pile[v[22]+6]; v[22]+=8; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(0,117,jvj+3)*/
V32=NH+NO;
X=1;
l4:if((X<=V32)) goto l45;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(117,jvj+3,V1)*/
V1=pile[WZ2]; 
V6=incon;
if((I>V1)) goto l31;
V35=NH+NO;
R=1;
l12:if((R>V35)) goto l43;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+5; 
(*f[46])( );     /*TRI0(0,117,jvj+5)*/
Y=1;
l9:if((Y<=V35)) goto l11;
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+5,V38)*/
V38=pile[WZ2]; 
V7=V38;
if((V7!=I)) goto l13;
P=1;
l20:if((P>NT)) goto l43;
pile[v[22]]=P; pile[WZ1]=(-630); 
(*f[1010])( );if(v[102]) goto l21;     /*FVECT0(P,(-630),V12)*/
V12=pile[WZ2]; 
if((V12!=R)) goto l21;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0(0,117,jvj+7)*/
PP=1;
l17:if((PP<=NT)) goto l19;
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(117,jvj+7,V40)*/
V40=pile[WZ2]; 
V16=V40;
if((V16!=J)) goto l21;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+6; 
(*f[46])( );     /*TRI0(0,117,jvj+6)*/
PP=1;
l14:if((PP<=NT)) goto l16;
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(117,jvj+6,V39)*/
V39=pile[WZ2]; 
V39;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+8; 
(*f[46])( );     /*TRI0(0,117,jvj+8)*/
Z=1;
l22:if((Z<=NT)) goto l24;
pile[v[22]]=117; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(117,jvj+8,V19)*/
V19=pile[WZ2]; 
V6=V19;
l42:if((V6==(-99999998))) goto l43;
NNNX=V6;
l44:x[jvj+1]=incon; v[0]=jvj; v[22]-=8; pile[v[22]+7]=NNNX; v[102]=0;return;
l3:pile[v[22]]=XX; pile[WZ1]=(-630); 
(*f[1010])( );if(v[102]) goto l2;     /*FVECT0(XX,(-630),V5)*/
V5=pile[WZ2]; 
if((V5!=X)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,117,1)*/
l2:XX++;
l1:if((XX<=NT)) goto l3;
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+2,V33)*/
V33=pile[WZ2]; 
V3=V33;
if((V3<=1)) goto l5;
pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+3,117,1)*/
l5:X++;
goto l4;
l8:pile[v[22]]=YY; pile[WZ1]=(-630); 
(*f[1010])( );if(v[102]) goto l7;     /*FVECT0(YY,(-630),V11)*/
V11=pile[WZ2]; 
if((V11!=Y)) goto l7;
pile[v[22]]=jvj+4; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+4,117,1)*/
l7:YY++;
l6:if((YY<=NT)) goto l8;
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+4,V37)*/
V37=pile[WZ2]; 
V9=V37;
if((V9<=1)) goto l10;
pile[v[22]]=jvj+5; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+5,117,1)*/
l10:Y++;
goto l9;
l11:if((Y>R)) goto l10;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+4; 
(*f[46])( );     /*TRI0(0,117,jvj+4)*/
YY=1;
goto l6;
l13:R++;
goto l12;
l16:if((PP>P)) goto l15;
pile[v[22]]=PP; pile[WZ1]=(-630); 
(*f[1010])( );if(v[102]) goto l15;     /*FVECT0(PP,(-630),V15)*/
V15=pile[WZ2]; 
if((V15!=R)) goto l15;
pile[v[22]]=jvj+6; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+6,117,1)*/
l15:PP++;
goto l14;
l19:if((PP>P)) goto l18;
pile[v[22]]=PP; pile[WZ1]=(-630); 
(*f[1010])( );if(v[102]) goto l18;     /*FVECT0(PP,(-630),V18)*/
V18=pile[WZ2]; 
if((V18!=R)) goto l18;
pile[v[22]]=jvj+7; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+7,117,1)*/
l18:PP++;
goto l17;
l21:P++;
goto l20;
l24:if((Z>P)) goto l23;
for(a=x[A];a>0;a=t[a]) if(s[a]==Z) goto l23;
pile[v[22]]=jvj+8; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+8,117,1)*/
l23:Z++;
goto l22;
l27:pile[v[22]]=QQ; pile[WZ1]=(-622); 
(*f[1010])( );if(v[102]) goto l26;     /*FVECT0(QQ,(-622),V25)*/
V25=pile[WZ2]; 
if((V25!=Q)) goto l26;
pile[v[22]]=jvj+9; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+9,117,1)*/
l26:QQ++;
l25:if((QQ<=NT)) goto l27;
pile[v[22]]=117; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(117,jvj+9,V45)*/
V45=pile[WZ2]; 
V23=V45;
if((V23<=1)) goto l29;
pile[v[22]]=jvj+10; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+10,117,1)*/
l29:Q++;
l28:if((Q<=V43)) goto l30;
pile[v[22]]=117; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(117,jvj+10,V46)*/
V46=pile[WZ2]; 
V21=V46;
if((V21!=V42)) goto l33;
T=1;
l37:if((T>NT)) goto l43;
pile[v[22]]=T; pile[WZ1]=(-622); 
(*f[1010])( );if(v[102]) goto l38;     /*FVECT0(T,(-622),V26)*/
V26=pile[WZ2]; 
if((V26!=RR)) goto l38;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+11; 
(*f[46])( );     /*TRI0(0,117,jvj+11)*/
TT=1;
l34:if((TT<=NT)) goto l36;
pile[v[22]]=117; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(117,jvj+11,V47)*/
V47=pile[WZ2]; 
V27=V47;
if((V27!=J)) goto l38;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0(0,117,jvj+12)*/
ZZ=1;
l39:if((ZZ<=NT)) goto l41;
pile[v[22]]=117; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(117,jvj+12,V30)*/
V30=pile[WZ2]; 
V6=V30;
goto l42;
l30:if((Q>RR)) goto l29;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+9; 
(*f[46])( );     /*TRI0(0,117,jvj+9)*/
QQ=1;
goto l25;
l31:V42=I-V1;
V43=NV+NO;
RR=1;
l32:if((RR>V43)) goto l43;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+10; 
(*f[46])( );     /*TRI0(0,117,jvj+10)*/
Q=1;
goto l28;
l33:RR++;
goto l32;
l36:if((TT>T)) goto l35;
pile[v[22]]=TT; pile[WZ1]=(-622); 
(*f[1010])( );if(v[102]) goto l35;     /*FVECT0(TT,(-622),V29)*/
V29=pile[WZ2]; 
if((V29!=RR)) goto l35;
pile[v[22]]=jvj+11; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+11,117,1)*/
l35:TT++;
goto l34;
l38:T++;
goto l37;
l41:if((ZZ>T)) goto l40;
for(a=x[A];a>0;a=t[a]) if(s[a]==ZZ) goto l40;
pile[v[22]]=jvj+12; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+12,117,1)*/
l40:ZZ++;
goto l39;
l43:x[jvj+1]=incon; v[0]=jvj; v[22]-=8; v[102]=1;return;
l45:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(0,117,jvj+2)*/
XX=1;
goto l1;
}
