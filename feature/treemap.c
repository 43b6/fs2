#pragma save_binary

// �������� TMI-2 ��һ����, �����Ҫʹ�ñ�����, �뱣����˵��
// ������ Buddha@TMI ��д, modularized and revised (92-05-01)
// �� Buddha (92-05-31) ���ӱ���ϵͳ PS: �� Annihilator �õ���
// ��ʱ�Եı����� Watcher (93-02-21) ��д
// �� Pallando @ Tabor (93-03-17) ��д��
// �� _set() �Ĵ���ֵ��Ϊ���趨��ֵ, �� Annihilator (95-03-15) ��д
// NB these functions don't have to be nomask if you prevent objects shadowing
// them in the same circumstances that shadowing query is not allowed.
// �� wade@Fantasy.Space ��д, ���ݻظĳɷǵݻ�, �����ٶ�. (1996-6-2)

static nomask /* private */ mixed _query (mapping map, string *parts)
{
  mixed value;
  int i;

  value = map;
  for (i=0 ; i < sizeof(parts); i++) {
    if (undefinedp (value = value[parts[i]]))
      break;
    if( !mapp (value))
      break;
  }
  return value;
}

// ���ݻظĳɷǵݻ�, by wade@Fantasy.Space 1996/6/2
static nomask /* private */ int _delete (mapping map, string *parts)
{
  mixed value;
  int i;

  value = map;
  for (i=0; i<sizeof(parts)-1; i++) {
    if (undefinedp (value=value[parts[i]]))
      return 0;
    if (!mapp(value))
      return 0;
  }
  if (!mapp(value))
    return 0;
  map_delete(value, parts[i]);
  return 1;
}

// �ѵݻظĳɷǵݻ�, �� wade@Fantasy.Space ����д (1996/6/2)
static nomask /* private */ mixed _set (mapping map, string *parts, mixed value)
{
  mixed sub;
  int i;

  sub = map;
  for (i=0; i<sizeof(parts)-1; i++) {
    if (!sub[parts[i]] || !mapp (sub[parts[i]]))
      sub[parts[i]] = ([ parts[i+1] : 0 ]);
    sub = sub[parts[i]];
  }
  return sub[parts[i]] = value;
}
