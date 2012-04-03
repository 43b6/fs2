// /cmds/arch/transemote.c
// ���������� es2 mudlib
// ��ӭ����������, �뱣������ͷ
// wade 1998/7/10

inherit F_CLEAN_UP;

int in_use;

int main(object me, string arg)
{
  string        *emotes;
  mapping       emote;

  if ( !arg ) return notify_fail("��Ҫת��ʲô emote��\n");

  if ( arg == "-a" ) {
    int i, s, trans;

    emotes = EMOTE_D->query_all_emote();
    s = sizeof (emotes);
    for (i=0; i<s; i++) {
      write ("ת��["+i+"]: "+emotes[i]+"\n");
      emote = EMOTE_D->query_emote (emotes[i]);
      trans = 0;
      if (!undefinedp (emote["updated"])) {
        trans = 1;
        map_delete (emote, "updated");
      }
      if (undefinedp (emote["short"]) && !undefinedp (emote["myself"])) {
        emote["short"] = emote["myself"][0..7];
        trans = 1;
      }
      if (trans) EMOTE_D->set_emote (emotes[i], emote);
    }
    return 1;
  }

  emote = EMOTE_D->query_emote(arg);

  write ("ת�� emote��" + arg + "\n");
  write ("��������������������������������������������������������������\n");
  printf ("�Լ�:%s\n������:%s\n�����Լ�:%s\n���˿����Լ�:%s\n��������:%s\n",
          emote["myself"],
          emote["others"],
          emote["myself_self"],
          emote["others_self"],
          emote["myself_target"]);
  printf ("���˿�����:%s\n����:%s\n",
          emote["target"], emote["others_target"]);
  write ("��������������������������������������������������������������\n");
  write ("��ѶϢ��");
  input_to("get_msg", emote, arg);
  return 1;
}


int get_msg (string msg, mapping emote, string pattern)
{
  if (msg == "~q") {
    write ("ȡ����\n");
    return 1;
  }
  emote["short"] = msg;
  EMOTE_D->set_emote (pattern, emote);
  return 1;
}

int help(object me)
{
write(@HELP
ָ���ʽ : transemote [-a | emote]
 
���ָ�����ת�� emote ���¸�ʽ���������á�
HELP
    );
    return 1;
}
