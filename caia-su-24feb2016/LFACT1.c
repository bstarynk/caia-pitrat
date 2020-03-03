#include "dx.h"
void LFACT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int DZ=0,DN=0,DM=0;
int DR,S;
int DY,EX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=11750;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1597&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
DR=pile[v[22]]; S=pile[v[22]+1]; EX=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
DN=x[jvj+10]=x[jvj+9]=DM=x[jvj+8]=incon;
pile[v[22]]=DR; pile[WZ1]=jvj+3; 
(*f[1372])( );if(v[102]) goto l17;     /*LFACTA0(DR,jvj+3,DZ)*/
DZ=pile[WZ2]; 
if((x[S]!=68)) goto l1;
pile[v[22]]=DZ; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+4; 
(*f[666])( );if(v[102]) goto l1;     /*SMA3(DZ,64,66,jvj+4)*/
pile[v[22]]=1671; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1671,jvj+4,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==1709) goto l2;
DN=DZ;
x[jvj+10]=x[jvj+3] ;z[jvj+10]=z[jvj+3];
l2:if((x[jvj+4]==339)) goto l3;
if((x[jvj+4]!=1419)) goto l6;
pile[v[22]]=1671; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1671,jvj+4,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==1709) goto l5;
l6:if(DN==incon) goto l7;
if(x[jvj+10]!=incon) goto l13;
l17:DY=x[EX]=incon;
l16:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l1:x[EX]=x[jvj+3] ;z[EX]=z[jvj+3];
DY=DZ;
l18:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+2]=DY; v[102]=0;return;
l3:pile[v[22]]=1671; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1671,jvj+4,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==1709) goto l4;
goto l6;
l4:x[jvj+9]=339 ;z[jvj+9]=339;
goto l6;
l5:pile[v[22]]=DR; pile[WZ1]=jvj+4; pile[WZ2]=68; pile[WZ4]=jvj+8; pile[WZ5]=jvj+9; 
(*f[1375])( );if(v[102]) goto l6;     /*LAND0(DR,jvj+4,68,DM,jvj+8,jvj+9)*/
DM=pile[WZ3]; 
goto l6;
l7:if(x[jvj+10]==incon) goto l8;
goto l17;
l8:if(x[jvj+9]!=incon) goto l9;
goto l17;
l9:if(DM!=incon) goto l10;
l12:if(x[jvj+9]==250||x[jvj+9]==125) goto l17;
pile[v[22]]=DR; pile[WZ1]=jvj+9; pile[WZ3]=jvj+10; 
(*f[1374])( );if(v[102]) goto l17;     /*LOR0(DR,jvj+9,DN,jvj+10)*/
DN=pile[WZ2]; 
l13:pile[v[22]]=DN; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+11; 
(*f[666])( );if(v[102]) goto l15;     /*SMA3(DN,64,66,jvj+11)*/
if((x[jvj+11]==145)) goto l14;
pile[v[22]]=1671; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1671,jvj+11,jvj+12)*/
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==145) goto l14;
l15:DY=DN;
x[EX]=x[jvj+10] ;z[EX]=z[jvj+10];
goto l18;
l10:if(x[jvj+8]!=incon) goto l11;
goto l12;
l11:if((x[jvj+9]!=250)) goto l12;
DN=DM;
x[jvj+10]=x[jvj+8] ;z[jvj+10]=z[jvj+8];
goto l13;
l14:pile[v[22]]=DN; pile[WZ1]=jvj+10; pile[WZ2]=EX; 
(*f[1373])( );if(v[102]) goto l15;     /*LFACTA1(DN,jvj+10,EX,DY)*/
DY=pile[WZ3]; 
goto l18;
}
