// token.c

inherit ITEM;
inherit F_AUTOLOAD;
inherit F_SAVE;

void create()
{
	set_name("�У�ִ��", ({ "pk license", "license" }) );
	set("unit", "��");
	set ("no_get", 1);
	set ("no_drop", 1);
	seteuid(getuid());
	setup();
}

void init()
{
  add_action ("do_give", "give");
}

string long()
{
  return @TEXT
    ӵ�УУ�ִ�յ��˲��ܺϷ������ܣУ˵���Ȥ�����ص�����
��ʡ��Ѳ����׷ɱ����Ȼ������Ϊ���ˣУ�ִ�վͿ���Ϊ����Ϊ
�ĸɻ��£���У˻���ȥ��ͬ���УУ�ִ�յ��˰ɣ�
    һ����ӵ�УУ�ִ�գ�quit ֮����Ȼ���ڣ��´� login ��
�������롣����������ݵ��ϰ��գ���������������Ѳ����ʱ��
��������˻�ִ�գ���ʧ��ͬ���գ��������벹����
TEXT;
}

int query_autoload ()
{
  return 1;
}

int do_give(string arg)
{
  object	me, who, env, obj;
  string	something, someone;

  if (!arg || sscanf (arg, "%s to %s", something, someone) != 2)
    return notify_fail ("�÷�: give <ĳ��> to <ĳ��>\n");

  me = this_player();
  env = environment(me);
  obj = this_object();
  if (!who=present(someone, env))
    return notify_fail ("��! �����˭��!!\n");
  if (something != "license" && something != "pk license") return 0;
  if (who->query("id") != "cop head")
    return notify_fail ("�У�ִ��ֻ�ܸ���ʡ��Ѳ������Ȼ�ͱ���ú��ղء�\n");
  message_vision("%N�ѣУ�ִ�ս����˾�ʡ��Ѳ����\n", me);
  return who->accept_object(me, obj);
}
