vdata* sub_301DE‬(unsigned int a1, unsigned int a2)
{ // 參數1是jarray第一個值，參數2是程序傳遞下來的9 
  unsigned __int8 v2; // cf@1
  char v3; // zf@1
  vdata *v4; // r4@1
  int *v5; // r0@6
  int v6; // r5@9
  int v7; // r0@9
  void (__fastcall *v8)(vdata *, int, int); // r6@9
  int v9; // r0@9

  v2 = a1 >= 2;
  v3 = a1 == 2;
  v4 = 0;
  if ( a1 <= 2 )
  {
    v2 = a2 >= 9;
    v3 = a2 == 9;
  }
  if ( !(!v3 & v2) )
  {
    if ( a1 == 2 )
    {
      v5 = (int *)&off_8A9F8; // off_8A9F8
    }
    else if ( a1 == 1 )
    {
      v5 = &off_8A9D0; // off_8A9D0
    }
    else
    {
      v5 = &off_8AA20; // off_8AA20
    }
    v6 = v5[a2];                                // "d8b057995e905838"
    v7 = strlen(v5[a2]);
    v4 = (vdata *)goto_create_vdata(v7 + 1);
    v8 = (void (__fastcall *)(vdata *, int, int))v4->f1;
    v9 = strlen(v6);
    v8(v4, v6, v9);                             // make_vdata
  }
  return v4;
}