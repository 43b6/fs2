inherit ITEM;
inherit F_AUTOLOAD;
inherit F_SAVE;

void create()
{
	set_name("��������ִ��", ({ "badman license", "license" }) );
	set("unit", "��");
	set ("no_get", 1);
	set ("no_drop", 1);
	setup();
}

string long()
{
  return @TEXT
    ӵ�л���֤�����˲���˳���Ľ�����˹ȶ����ܵ�ɧ�š�
TEXT;
}

int query_autoload ()
{
  return 1;
}
