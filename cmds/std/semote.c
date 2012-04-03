// /cmds/std/semote.c
// ���������� es2  mudlib
// ��ӭ����������, �뱣������ͷ
// wade 1998/7/10

inherit F_CLEAN_UP;

int main(object me, string arg)
{
  string        *e, buf;
  mapping       emotes;
  int           i;

  emotes = EMOTE_D->query_all_emotes();
  e = sort_array(EMOTE_D->query_all_emote(), "sort_keys", this_object());

  buf = "";
  for(i=0; i<sizeof(e); i++)
    buf += sprintf("%-26s%s", e[i]+"("+emotes[e[i]]["short"]+")", (i%3==2)?"\n": "");
  buf += "\n";
  me->start_more (buf);
  return 1;
}

int sort_keys (string key1, string key2)
{
  return strcmp (key1, key2);
}

int help(object me)
{
  write(@HELP
ָ���ʽ : semote
ָ��˵�� :
           ���ָ������г�Ŀǰ����ʹ�õĶ�����
           �������˿���ֱ���ã��е�����˵�����⣬
           ��������� chat* ���ã� ���� chat��
ʹ�÷��� :
           semote
           smile
           chat* smile
HELP
    );
    return 1;
}
