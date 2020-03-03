#include "dx.h"
void ATOME502T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V31=0,V27=0,V26=0,V35=0,V19=0,V21=0,V38=0,V=0,V20=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=41;
x[jvj+1]=20502;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3858&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,R,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=55)) goto l17;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,R,jvj+22)*/
for(i=x[jvj+22],V21=0;i>0;i=t[i],V21++)  ;
x[jvj+17]=vo[14];z[jvj+17]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(642,jvj+17,V38)*/
V38=pile[WZ2]; 
x[jvj+18]=0 ;z[jvj+18]=0;
pile[v[22]]=929; 
(*f[1975])( );if(v[102]) goto l12;     /*FNDCND0(929,jvj+17,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=jvj+18; pile[WZ1]=V35; 
(*f[207])( );     /*PLUE2(jvj+18,V35)*/
l12:pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1006,R,jvj+19)*/
l13:if((x[jvj+19]>0)) goto l14;
pile[v[22]]=R; pile[WZ1]=jvj+23; 
(*f[891])( );     /*VAREXP0(R,jvj+23)*/
l15:if((x[jvj+23]<=0)) goto l17;
V=s[x[jvj+23]];
x[jvj+12]=0 ;z[jvj+12]=0;
x[jvj+41]=x[jvj+22] ;z[jvj+41]=z[jvj+22];
l7:if((x[jvj+41]>0)) goto l8;
for(i=x[jvj+12],V20=0;i>0;i=t[i],V20++)  ;
if((V20!=V21)) goto l16;
x[jvj+16]=0 ;z[jvj+16]=0;
l10:if((x[jvj+12]>0)) goto l11;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+16; pile[WZ2]=107; pile[WZ3]=jvj+28; 
(*f[301])( );     /*TRI11(jvj+27,jvj+16,107,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+28,22,100,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=1006; pile[WZ2]=jvj+18; 
(*f[34])( );     /*CHGC0(jvj+24,1006,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+38)*/
pile[v[22]]=V38; pile[WZ1]=858; pile[WZ2]=jvj+34; 
(*f[46])( );     /*TRI0(V38,858,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,v[13],642,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=3858; pile[WZ2]=246; pile[WZ3]=jvj+36; 
(*f[189])( );     /*TRI4(jvj+35,3858,246,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=20502; pile[WZ2]=218; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+36,20502,218,jvj+37)*/
pile[v[22]]=jvj+38; pile[WZ1]=(-20); pile[WZ2]=jvj+37; pile[WZ3]=159; pile[WZ4]=jvj+39; 
(*f[298])( );     /*TRIENS1(jvj+38,(-20),jvj+37,159,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+39,1,158,jvj+25)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[1296])( );     /*NOUVCONTR0(jvj+24,jvj+25)*/
l16:x[jvj+23]=t[x[jvj+23]];
goto l15;
l2:x[jvj+2]=s[x[jvj+40]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+40];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[1361])( );     /*VAROBJ0(jvj+2,jvj+3)*/
for(i=x[jvj+3],V31=0;i>0;i=t[i],V31++)  ;
if((V31!=1)) goto l3;
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==V) goto l4;
l3:x[jvj+40]=t[x[jvj+40]];
l1:if((x[jvj+40]>0)) goto l2;
for(i=x[jvj+5],V26=0;i>0;i=t[i],V26++)  ;
if((V26!=V27)) goto l9;
x[jvj+9]=0 ;z[jvj+9]=0;
l5:if((x[jvj+5]>0)) goto l6;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=111; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,111,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+9; pile[WZ2]=107; pile[WZ3]=jvj+33; 
(*f[301])( );     /*TRI11(jvj+32,jvj+9,107,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+33,22,100,jvj+13)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[522])( );     /*PLUB2(jvj+12,jvj+13)*/
l9:x[jvj+41]=t[x[jvj+41]];
goto l7;
l4:pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=228; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,228,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+30; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+4,jvj+30,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[522])( );     /*PLUB2(jvj+5,jvj+6)*/
goto l3;
l6:x[jvj+7]=s[x[jvj+5]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+5];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+8)*/
x[jvj+5]=t[x[jvj+5]];
goto l5;
l8:x[jvj+10]=s[x[jvj+41]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+41];
pile[v[22]]=107; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,jvj+10,jvj+11)*/
for(i=x[jvj+11],V27=0;i>0;i=t[i],V27++)  ;
x[jvj+5]=0 ;z[jvj+5]=0;
x[jvj+40]=x[jvj+11] ;z[jvj+40]=z[jvj+11];
goto l1;
l11:x[jvj+14]=s[x[jvj+12]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+12];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+15)*/
x[jvj+12]=t[x[jvj+12]];
goto l10;
l14:V19=s[x[jvj+19]];
pile[v[22]]=jvj+18; pile[WZ1]=V19; 
(*f[207])( );     /*PLUE2(jvj+18,V19)*/
x[jvj+19]=t[x[jvj+19]];
goto l13;
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
