// sig.c
//
// �� wade ����, ������� post/followup �������ʹ��
// by wade in 6/30/1996

inherit F_CLEAN_UP;
inherit F_DBASE;

void create()
{
        seteuid (getuid());
        set ("����", "ǩ����ָ��");
        set ("id", "sig");
}

int main(object me, string arg)
{
  string 	id, fn, *buf;

  if (me != previous_object()) return 0;

  id = me->query("id");
  fn = sprintf ("%s/sig/%s/%s.sig", DATA_DIR, id[0..0], id);
  assure_file (fn);

  if (arg == "none")
  {
    rm (fn);
    write("���ǩ������\n");
  }
  else {
    me->edit( (: this_object(), ({ "do_plan", this_player()}) :) );
  }
  return 1;
}

void do_plan(object me, string text)
{
  string fn, id;
  object link_ob;

  id = me->query("id");
  fn = sprintf ("%s/sig/%s/%s.sig", DATA_DIR, id[0..0], id);

  if (write_file (fn, text, 1) == 1)
    write ("ǩ�����趨��ɡ�\n");
  else
    write ("ǩ�����޷�д��.\n");
}

int help(object me)
{
write(@HELP
ָ���ʽ : sig || sig none
ָ��˵�� :
	   ���ָ����Ա༭�Լ���ǩ������sig none ��������趨��
	   ע��: û�Ӳ����Ļ����������ǩ����֮��ǵ��ɵĵ���.

���ָ�� : plan��post��followup
HELP
    );
    return 1;
}

