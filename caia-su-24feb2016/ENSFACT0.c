#include "dx.h"
void ENSFACT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V8=0,V1=0,P=0,V9=0,V7=0,V14=0,V19=0,V16=0,V12=0,V25=0,V45=0,V35=0,V38=0,V39=0,V42=0,V33=0,V30=0,V31=0;
int A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=11111;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==991&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=incon;
x[jvj+15]=0 ;z[jvj+15]=0;
x[jvj+8]=x[jvj+15] ;z[jvj+8]=z[jvj+15];
pile[v[22]]=A; pile[WZ1]=jvj+2; 
(*f[992])( );if(v[102]) goto l8;     /*FACTPREM0(A,jvj+2)*/
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(1,117,jvj+3)*/
V8=x[jvj+2];
l1:if((V8>0)) goto l2;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+3,V1)*/
V1=pile[WZ2]; 
if((V1!=A)) goto l5;
x[jvj+16]=0 ;z[jvj+16]=0;
x[R]=x[jvj+16] ;z[R]=z[jvj+16];
l5:V9=x[jvj+2];
l3:if((V9>0)) goto l4;
if(x[R]!=incon) goto l7;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l2:I=s[V8];
pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=I; 
(*f[818])( );     /*MTC0(jvj+3,117,I)*/
V8=t[V8];
goto l1;
l4:P=s[V9];
x[jvj+17]=x[jvj+8] ;z[jvj+17]=z[jvj+8];
l10:if((x[jvj+17]>0)) goto l15;
pile[v[22]]=1; pile[WZ1]=642; pile[WZ2]=jvj+4; 
(*f[46])( );     /*TRI0(1,642,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=1; pile[WZ2]=510; pile[WZ3]=jvj+5; 
(*f[189])( );     /*TRI4(jvj+4,1,510,jvj+5)*/
pile[v[22]]=1; pile[WZ1]=(-41); pile[WZ2]=jvj+5; pile[WZ3]=195; pile[WZ4]=jvj+6; 
(*f[1349])( );     /*TRIENS2(1,(-41),jvj+5,195,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=P; pile[WZ2]=117; pile[WZ3]=jvj+7; 
(*f[189])( );     /*TRI4(jvj+6,P,117,jvj+7)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+7; 
(*f[522])( );     /*PLUB2(jvj+8,jvj+7)*/
l11:V14=(-999999);
pile[v[22]]=195; pile[WZ1]=jvj+7; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(195,jvj+7,jvj+9)*/
l12:if((x[jvj+9]>0)) goto l13;
if((V14==(-999999))) goto l6;
V19=V14*P;
pile[v[22]]=jvj+7; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+7,510,1)*/
pile[v[22]]=V19; pile[WZ1]=195; pile[WZ2]=jvj+7; 
(*f[235])( );     /*PLUSC2(V19,195,jvj+7)*/
l6:V9=t[V9];
goto l3;
l7:for(i=x[jvj+8],V7=0;i>0;i=t[i],V7++)  ;
l16:pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+11; 
(*f[46])( );     /*TRI0(1,117,jvj+11)*/
x[jvj+19]=x[jvj+8] ;z[jvj+19]=z[jvj+8];
l17:if((x[jvj+19]>0)) goto l21;
pile[v[22]]=117; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(117,jvj+11,V25)*/
V25=pile[WZ2]; 
if((V25<=1)) goto l18;
if((V25>=A)) goto l18;
pile[v[22]]=R; pile[WZ1]=V25; 
(*f[978])( );     /*PLUB3(R,V25)*/
l18:V45=V7;
l19:pile[v[22]]=jvj+8; pile[WZ1]=V45; 
(*f[1017])( );if(v[102]) goto l9;     /*ELTN0(jvj+8,V45,V35)*/
V35=pile[WZ2]; 
x[jvj+18]=V35 ;z[jvj+18]=(V35<=sepcte) ? V35 : 0;
x[jvj+12]=x[jvj+18] ;z[jvj+12]=z[jvj+18];
pile[v[22]]=642; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(642,jvj+12,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(510,jvj+12,V39)*/
V39=pile[WZ2]; 
if((V38<V39)) goto l20;
if((V38!=V39)) goto l9;
V42=V45-1;
if((V42<=0)) goto l9;
pile[v[22]]=jvj+12; pile[WZ1]=642; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+12,642,1)*/
V45=V42;
goto l19;
l13:V16=s[x[jvj+9]];
if(V16>V14) V14=V16;
x[jvj+9]=t[x[jvj+9]];
goto l12;
l14:x[jvj+17]=t[x[jvj+17]];
goto l10;
l15:x[jvj+10]=s[x[jvj+17]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+17];
pile[v[22]]=117; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(117,jvj+10,V12)*/
V12=pile[WZ2]; 
if((V12!=P)) goto l14;
x[jvj+7]=x[jvj+10] ;z[jvj+7]=z[jvj+10];
goto l11;
l20:V33=68;
pile[v[22]]=jvj+12; pile[WZ1]=642; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+12,642,1)*/
if((V33==68)) goto l16;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l21:x[jvj+13]=s[x[jvj+19]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+19];
pile[v[22]]=642; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(642,jvj+13,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=195; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(195,jvj+13,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=V30; 
(*f[1017])( );if(v[102]) goto l22;     /*ELTN0(jvj+14,V30,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=jvj+11; pile[WZ1]=117; pile[WZ2]=V31; 
(*f[818])( );     /*MTC0(jvj+11,117,V31)*/
l22:x[jvj+19]=t[x[jvj+19]];
goto l17;
}
