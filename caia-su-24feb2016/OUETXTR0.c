#include "dx.h"
void OUETXTR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V16=0;
int EA,V;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=41;
x[jvj+1]=11628;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3382&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
EA=pile[v[22]]; V=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
for(i=x[EA],V17=0;i>0;i=t[i],V17++)  ;
x[jvj+29]=0 ;z[jvj+29]=0;
x[jvj+41]=x[EA] ;z[jvj+41]=z[EA];
l13:if((x[jvj+41]>0)) goto l14;
for(i=x[jvj+29],V16=0;i>0;i=t[i],V16++)  ;
if((V16==V17)) goto l16;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l2:x[jvj+2]=d[20];z[jvj+2]=0;
l1:if((x[jvj+2]<=0)) goto l8;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+3,jvj+4,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=484)) goto l3;
pile[v[22]]=268; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(268,jvj+3,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+7,jvj+4,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+8,jvj+9)*/
if(x[jvj+9]==96||x[jvj+9]==89||x[jvj+9]==41||x[jvj+9]==20||x[jvj+9]==128||x[jvj+9]==570||x[jvj+9]==1317) goto l10;
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l7:x[jvj+4]=s[x[jvj+40]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+40];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+17; 
(*f[887])( );     /*VARND0(jvj+4,jvj+17)*/
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==x[V]) goto l9;
l8:x[jvj+40]=t[x[jvj+40]];
l6:if((x[jvj+40]>0)) goto l7;
if((x[jvj+21]==0)) goto l15;
x[jvj+24]=0 ;z[jvj+24]=0;
l11:if((x[jvj+21]>0)) goto l12;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+24; pile[WZ2]=107; pile[WZ3]=jvj+39; 
(*f[301])( );     /*TRI11(jvj+38,jvj+24,107,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+39,22,100,jvj+30)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[68])( );     /*PLUE0(jvj+29,jvj+30)*/
l15:x[jvj+41]=t[x[jvj+41]];
goto l13;
l9:pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+4,jvj+18)*/
pile[v[22]]=100; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+4,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+18,jvj+20)*/
if((x[jvj+19]!=22)) goto l8;
if((x[jvj+20]==25)) goto l2;
if((x[jvj+20]!=26)) goto l8;
x[jvj+10]=d[20];z[jvj+10]=0;
l4:if((x[jvj+10]<=0)) goto l8;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+4; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+11,jvj+4,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=484)) goto l5;
pile[v[22]]=268; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+11,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+4; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+14,jvj+4,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+15,jvj+16)*/
if(x[jvj+16]==96||x[jvj+16]==89||x[jvj+16]==41||x[jvj+16]==20||x[jvj+16]==128||x[jvj+16]==570||x[jvj+16]==1317) goto l10;
l5:x[jvj+10]=t[x[jvj+10]];
goto l4;
l10:pile[v[22]]=jvj+21; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+21,jvj+4)*/
goto l8;
l12:x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(jvj+22,jvj+23)*/
pile[v[22]]=jvj+24; 
(*f[68])( );     /*PLUE0(jvj+24,jvj+23)*/
x[jvj+21]=t[x[jvj+21]];
goto l11;
l14:x[jvj+25]=s[x[jvj+41]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+41];
pile[v[22]]=111; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+25,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]!=48)) goto l15;
pile[v[22]]=107; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(107,jvj+25,jvj+28)*/
x[jvj+21]=0 ;z[jvj+21]=0;
x[jvj+40]=x[jvj+28] ;z[jvj+40]=z[jvj+28];
goto l6;
l16:x[jvj+33]=0 ;z[jvj+33]=0;
l17:if((x[jvj+29]>0)) goto l18;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+33; pile[WZ2]=107; pile[WZ3]=jvj+36; 
(*f[301])( );     /*TRI11(jvj+35,jvj+33,107,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+36,22,100,R)*/
l20:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l18:x[jvj+31]=s[x[jvj+29]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+29];
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[255])( );     /*COPEXP0(jvj+31,jvj+32)*/
pile[v[22]]=jvj+33; 
(*f[68])( );     /*PLUE0(jvj+33,jvj+32)*/
x[jvj+29]=t[x[jvj+29]];
goto l17;
}
