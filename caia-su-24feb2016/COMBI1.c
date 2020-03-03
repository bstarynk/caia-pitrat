#include "dx.h"
void COMBI1(void )
{int S,M;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=11287;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])();
if(v[90]==3034&&v[97]==0) {
(*f[4])();x[jvj+2]=incon;x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]];M=pile[v[22]+1];R=pile[v[22]+2];v[22]+=3;
WZ2=v[22]+2;WZ1=v[22]+1;
x[jvj+6]=x[jvj+8]=x[jvj+9]=x[R]=incon;
if((x[M]!=68)) goto l2;
pile[v[22]]=459;pile[WZ1]=S;pile[WZ2]=jvj+3;
(*f[33])();if(v[102]) goto l2;     /*FNDO0(459,S,jvj+3)*/
x[jvj+5]=x[S];z[jvj+5]=z[S];
l1:x[jvj+4]=x[jvj+5];z[jvj+4]=z[jvj+5];
pile[v[22]]=S;pile[WZ1]=447;pile[WZ2]=jvj+3;
(*f[35])();     /*CHGC1(S,447,jvj+3)*/
pile[v[22]]=120;pile[WZ1]=jvj+4;pile[WZ2]=jvj+5;
(*f[33])();if(v[102]) goto l2;     /*FNDO0(120,jvj+4,jvj+5)*/
goto l1;
l2:pile[v[22]]=120;pile[WZ1]=S;pile[WZ2]=jvj+6;
(*f[33])();     /*FNDO0(120,S,jvj+6)*/
if(x[jvj+6]==incon) goto l3;
l5:if(x[jvj+6]!=incon) goto l6;
l7:if(x[jvj+8]==incon) goto l8;
l10:if(x[R]==incon) goto l11;
l17:if(x[R]!=incon) goto l18;
l16:x[jvj+1]=incon;x[jvj+2]=incon;v[0]=jvj;v[22]-=3;v[102]=1;return;
l3:if(x[jvj+8]==incon) goto l4;
goto l5;
l4:pile[v[22]]=459;pile[WZ1]=S;pile[WZ2]=jvj+7;
(*f[33])();if(v[102]) goto l5;     /*FNDO0(459,S,jvj+7)*/
pile[v[22]]=120;pile[WZ1]=jvj+7;pile[WZ2]=jvj+8;
(*f[33])();     /*FNDO0(120,jvj+7,jvj+8)*/
goto l5;
l6:pile[v[22]]=jvj+6;pile[WZ1]=67;pile[WZ2]=jvj+9;
(*f[3034])();     /*COMBI1(jvj+6,67,jvj+9)*/
goto l7;
l8:if(x[jvj+9]!=incon) goto l9;
goto l10;
l9:if((x[jvj+9]!=67)) goto l10;
pile[v[22]]=459;pile[WZ1]=S;pile[WZ2]=jvj+10;
(*f[33])();if(v[102]) goto l10;     /*FNDO0(459,S,jvj+10)*/
pile[v[22]]=120;pile[WZ1]=jvj+10;pile[WZ2]=jvj+8;
(*f[33])();     /*FNDO0(120,jvj+10,jvj+8)*/
goto l10;
l11:if(x[jvj+8]!=incon) goto l12;
l13:if(x[jvj+8]==incon) goto l14;
goto l17;
l12:x[R]=68;z[R]=68;
pile[v[22]]=S;pile[WZ1]=459;pile[WZ2]=jvj+8;
(*f[35])();     /*CHGC1(S,459,jvj+8)*/
goto l13;
l14:if(x[R]==incon) goto l15;
goto l17;
l15:pile[v[22]]=447;pile[WZ1]=S;pile[WZ2]=jvj+11;
(*f[33])();if(v[102]) goto l17;     /*FNDO0(447,S,jvj+11)*/
x[R]=67;z[R]=67;
pile[v[22]]=S;pile[WZ1]=459;
(*f[35])();     /*CHGC1(S,459,jvj+11)*/
goto l17;
l18:x[jvj+1]=incon;x[jvj+2]=incon;v[0]=jvj;v[22]-=3;v[102]=0;return;
}
